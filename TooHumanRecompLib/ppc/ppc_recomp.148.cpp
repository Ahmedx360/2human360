#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8290B238"))) PPC_WEAK_FUNC(sub_8290B238);
PPC_FUNC_IMPL(__imp__sub_8290B238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8290B240;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x828d1f48
	ctx.lr = 0x8290B24C;
	sub_828D1F48(ctx, base);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// ble cr6,0x8290b308
	if (!ctx.cr6.gt) goto loc_8290B308;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_8290B270:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8290b2a4
	if (ctx.cr6.eq) goto loc_8290B2A4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290b2a4
	if (ctx.cr6.eq) goto loc_8290B2A4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// bl 0x8282d4b0
	ctx.lr = 0x8290B29C;
	sub_8282D4B0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// b 0x8290b2b4
	goto loc_8290B2B4;
loc_8290B2A4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8290B2B4:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8290b2fc
	if (!ctx.cr0.eq) goto loc_8290B2FC;
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8290b2fc
	if (ctx.cr6.eq) goto loc_8290B2FC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8282d4b0
	ctx.lr = 0x8290B2E0;
	sub_8282D4B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82412b58
	ctx.lr = 0x8290B2EC;
	sub_82412B58(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r26,r11,1
	ctx.r26.u64 = ctx.r11.u64 ^ 1;
loc_8290B2FC:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// bne 0x8290b270
	if (!ctx.cr0.eq) goto loc_8290B270;
loc_8290B308:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290B310"))) PPC_WEAK_FUNC(sub_8290B310);
PPC_FUNC_IMPL(__imp__sub_8290B310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x8290B318;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82a61740
	ctx.lr = 0x8290B320;
	__savefpr_26(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// lwz r11,224(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290b354
	if (!ctx.cr6.eq) goto loc_8290B354;
loc_8290B340:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// bl 0x828d1d10
	ctx.lr = 0x8290B350;
	sub_828D1D10(ctx, base);
	// b 0x8290b74c
	goto loc_8290B74C;
loc_8290B354:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f30,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// ble cr6,0x8290b388
	if (!ctx.cr6.gt) goto loc_8290B388;
	// lwz r9,220(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
loc_8290B374:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// bne 0x8290b374
	if (!ctx.cr0.eq) goto loc_8290B374;
loc_8290B388:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f13,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f26,16776(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16776);
	ctx.f26.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bgt cr6,0x8290b340
	if (ctx.cr6.gt) goto loc_8290B340;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,-1
	ctx.r22.s64 = -1;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290b3f4
	if (!ctx.cr6.gt) goto loc_8290B3F4;
	// lis r8,-31961
	ctx.r8.s64 = -2094596096;
	// lwz r9,220(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lfs f13,-24624(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24624);
	ctx.f13.f64 = double(temp.f32);
loc_8290B3CC:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x8290b3e4
	if (!ctx.cr6.gt) goto loc_8290B3E4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8290b74c
	if (!ctx.cr6.lt) goto loc_8290B74C;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
loc_8290B3E4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290b3cc
	if (ctx.cr6.lt) goto loc_8290B3CC;
loc_8290B3F4:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r21,1
	ctx.r21.s64 = 1;
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// blt cr6,0x8290b744
	if (ctx.cr6.lt) goto loc_8290B744;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lfs f27,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f31.f64 = double(temp.f32);
loc_8290B43C:
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x8290b734
	if (!ctx.cr6.gt) goto loc_8290B734;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290b474
	if (!ctx.cr6.eq) goto loc_8290B474;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r4,4(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82332d50
	ctx.lr = 0x8290B470;
	sub_82332D50(ctx, base);
	// lwz r24,140(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_8290B474:
	// fcmpu cr6,f27,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f30.f64);
	// bne cr6,0x8290b48c
	if (!ctx.cr6.eq) goto loc_8290B48C;
	// fcmpu cr6,f28,f30
	ctx.cr6.compare(ctx.f28.f64, ctx.f30.f64);
	// bne cr6,0x8290b48c
	if (!ctx.cr6.eq) goto loc_8290B48C;
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// beq cr6,0x8290b4c8
	if (ctx.cr6.eq) goto loc_8290B4C8;
loc_8290B48C:
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// lfs f0,0(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f12,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f27
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// fmuls f9,f28,f11
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f11.f64));
	// fmuls f11,f29,f11
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,0(r20)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + 0, temp.u32);
	// fadds f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f0,4(r20)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + 4, temp.u32);
	// fadds f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,8(r20)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + 8, temp.u32);
loc_8290B4C8:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290b730
	if (!ctx.cr6.gt) goto loc_8290B730;
	// addi r31,r24,24
	ctx.r31.s64 = ctx.r24.s64 + 24;
	// subfic r29,r24,-24
	ctx.xer.ca = ctx.r24.u32 <= 4294967272;
	ctx.r29.s64 = -24 - ctx.r24.s64;
loc_8290B4E0:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// beq cr6,0x8290b5c8
	if (ctx.cr6.eq) goto loc_8290B5C8;
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// lfs f0,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f12,-24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lfs f10,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lfs f9,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lfs f8,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f13,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f0,f12,f7
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f11,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f9,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f12,f10,f7
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// fmuls f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r18,8(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stw r9,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r9.u32);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r18,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r18.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// ld r9,24(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 24);
	// ld r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// ld r6,16(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 16);
	// std r9,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.r9.u64);
	// stdx r8,r11,r10
	PPC_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u64);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// std r6,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r6.u64);
	// b 0x8290b708
	goto loc_8290B708;
loc_8290B5C8:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lfs f0,-16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r31,-24
	ctx.r9.s64 = ctx.r31.s64 + -24;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f12,-20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f9,f13,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f10,f8,f12,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f11,f7,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f30
	ctx.cr6.compare(ctx.f10.f64, ctx.f30.f64);
	// bge cr6,0x8290b650
	if (!ctx.cr6.lt) goto loc_8290B650;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
loc_8290B650:
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,12(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lfs f13,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f12,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lfs f8,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f6,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f7,f3,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fadds f0,f5,f13
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fadds f0,f4,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// lfsx f7,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fadds f13,f11,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfsx f13,r8,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_8290B708:
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x8290b71c
	if (!ctx.cr6.eq) goto loc_8290B71C;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x825c0090
	ctx.lr = 0x8290B71C;
	sub_825C0090(ctx, base);
loc_8290B71C:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290b4e0
	if (ctx.cr6.lt) goto loc_8290B4E0;
loc_8290B730:
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
loc_8290B734:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x8290b43c
	if (!ctx.cr6.gt) goto loc_8290B43C;
loc_8290B744:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82855110
	ctx.lr = 0x8290B74C;
	sub_82855110(ctx, base);
loc_8290B74C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82a6178c
	ctx.lr = 0x8290B758;
	__restfpr_26(ctx, base);
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290B760"))) PPC_WEAK_FUNC(sub_8290B760);
PPC_FUNC_IMPL(__imp__sub_8290B760) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r31,r30,140
	ctx.r31.s64 = ctx.r30.s64 + 140;
	// addi r11,r11,-19240
	ctx.r11.s64 = ctx.r11.s64 + -19240;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,156(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8290B7A0;
	sub_82332CA8(ctx, base);
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290b7b0
	if (ctx.cr6.eq) goto loc_8290B7B0;
	// bl 0x82332db8
	ctx.lr = 0x8290B7B0;
	sub_82332DB8(ctx, base);
loc_8290B7B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82339860
	ctx.lr = 0x8290B7C8;
	sub_82339860(ctx, base);
	// addi r3,r30,92
	ctx.r3.s64 = ctx.r30.s64 + 92;
	// bl 0x82339860
	ctx.lr = 0x8290B7D0;
	sub_82339860(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824d51a8
	ctx.lr = 0x8290B7D8;
	sub_824D51A8(ctx, base);
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

__attribute__((alias("__imp__sub_8290B7F0"))) PPC_WEAK_FUNC(sub_8290B7F0);
PPC_FUNC_IMPL(__imp__sub_8290B7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8290B7F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82816528
	ctx.lr = 0x8290B818;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82846e98
	ctx.lr = 0x8290B82C;
	sub_82846E98(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x8290b8f0
	if (!ctx.cr6.gt) goto loc_8290B8F0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// subf r25,r11,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_8290B854:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8290b8dc
	if (ctx.cr6.eq) goto loc_8290B8DC;
	// lwzx r11,r25,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82846fb0
	ctx.lr = 0x8290B870;
	sub_82846FB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290B880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82403b50
	ctx.lr = 0x8290B888;
	sub_82403B50(ctx, base);
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
	ctx.lr = 0x8290B8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8290b8ac
	if (!ctx.cr0.eq) goto loc_8290B8AC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8290B8AC:
	// addi r3,r28,140
	ctx.r3.s64 = ctx.r28.s64 + 140;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8290B8C4;
	sub_82332D50(ctx, base);
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290b8dc
	if (ctx.cr0.eq) goto loc_8290B8DC;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_8290B8DC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8290b854
	if (ctx.cr6.lt) goto loc_8290B854;
loc_8290B8F0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82904920
	ctx.lr = 0x8290B904;
	sub_82904920(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290B910"))) PPC_WEAK_FUNC(sub_8290B910);
PPC_FUNC_IMPL(__imp__sub_8290B910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8290B918;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x829049f0
	ctx.lr = 0x8290B924;
	sub_829049F0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8290b9c0
	if (ctx.cr0.eq) goto loc_8290B9C0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290B940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290b9c0
	if (!ctx.cr6.gt) goto loc_8290B9C0;
	// addi r30,r3,140
	ctx.r30.s64 = ctx.r3.s64 + 140;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8290B958:
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290B97C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x8290B994;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290b9ac
	if (ctx.cr0.eq) goto loc_8290B9AC;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_8290B9AC:
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290b958
	if (ctx.cr6.lt) goto loc_8290B958;
loc_8290B9C0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290B9D0"))) PPC_WEAK_FUNC(sub_8290B9D0);
PPC_FUNC_IMPL(__imp__sub_8290B9D0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8290ba70
	if (ctx.cr6.eq) goto loc_8290BA70;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8290bac0
	ctx.lr = 0x8290BA18;
	sub_8290BAC0(ctx, base);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8290ba4c
	if (!ctx.cr6.gt) goto loc_8290BA4C;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8290BA2C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8290ba8c
	if (ctx.cr6.eq) goto loc_8290BA8C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8290ba2c
	if (ctx.cr6.lt) goto loc_8290BA2C;
loc_8290BA4C:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332ca8
	ctx.lr = 0x8290BA60;
	sub_82332CA8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290ba70
	if (ctx.cr6.eq) goto loc_8290BA70;
	// bl 0x82332db8
	ctx.lr = 0x8290BA70;
	sub_82332DB8(ctx, base);
loc_8290BA70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290BA74:
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
loc_8290BA8C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82332ca8
	ctx.lr = 0x8290BAA8;
	sub_82332CA8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290bab8
	if (ctx.cr6.eq) goto loc_8290BAB8;
	// bl 0x82332db8
	ctx.lr = 0x8290BAB8;
	sub_82332DB8(ctx, base);
loc_8290BAB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8290ba74
	goto loc_8290BA74;
}

__attribute__((alias("__imp__sub_8290BAC0"))) PPC_WEAK_FUNC(sub_8290BAC0);
PPC_FUNC_IMPL(__imp__sub_8290BAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8290BAC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8290bafc
	if (ctx.cr6.eq) goto loc_8290BAFC;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8290BAFC;
	sub_82332C38(ctx, base);
loc_8290BAFC:
	// lwz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290bb9c
	if (!ctx.cr6.gt) goto loc_8290BB9C;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8290BB10:
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8290bb80
	goto loc_8290BB80;
loc_8290BB20:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290bb54
	if (!ctx.cr6.gt) goto loc_8290BB54;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8290BB34:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8290bb7c
	if (ctx.cr6.eq) goto loc_8290BB7C;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8290bb34
	if (ctx.cr6.lt) goto loc_8290BB34;
loc_8290BB54:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x8290BB68;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290bb7c
	if (ctx.cr0.eq) goto loc_8290BB7C;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_8290BB7C:
	// lwz r30,68(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
loc_8290BB80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8290bb20
	if (!ctx.cr6.eq) goto loc_8290BB20;
	// lwz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290bb10
	if (ctx.cr6.lt) goto loc_8290BB10;
loc_8290BB9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290BBA8"))) PPC_WEAK_FUNC(sub_8290BBA8);
PPC_FUNC_IMPL(__imp__sub_8290BBA8) {
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
	// bl 0x824d4a38
	ctx.lr = 0x8290BBC4;
	sub_824D4A38(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,872
	ctx.r10.s64 = ctx.r10.s64 + 872;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82333858
	ctx.lr = 0x8290BC14;
	sub_82333858(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828e0f90
	ctx.lr = 0x8290BC20;
	sub_828E0F90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x8290BC28;
	sub_8239D768(ctx, base);
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

__attribute__((alias("__imp__sub_8290BC48"))) PPC_WEAK_FUNC(sub_8290BC48);
PPC_FUNC_IMPL(__imp__sub_8290BC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8290BC50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82816528
	ctx.lr = 0x8290BC70;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82846e98
	ctx.lr = 0x8290BC84;
	sub_82846E98(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8290bcc8
	if (!ctx.cr6.gt) goto loc_8290BCC8;
loc_8290BC9C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290BCB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8290bc9c
	if (ctx.cr6.lt) goto loc_8290BC9C;
loc_8290BCC8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82904920
	ctx.lr = 0x8290BCDC;
	sub_82904920(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290BCE8"))) PPC_WEAK_FUNC(sub_8290BCE8);
PPC_FUNC_IMPL(__imp__sub_8290BCE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8290BCF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829049f0
	ctx.lr = 0x8290BCFC;
	sub_829049F0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8290bd68
	if (ctx.cr0.eq) goto loc_8290BD68;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290BD18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290bd68
	if (!ctx.cr6.gt) goto loc_8290BD68;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8290BD38:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290BD54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290bd38
	if (ctx.cr6.lt) goto loc_8290BD38;
loc_8290BD68:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290BD78"))) PPC_WEAK_FUNC(sub_8290BD78);
PPC_FUNC_IMPL(__imp__sub_8290BD78) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,92
	ctx.r3.s64 = ctx.r3.s64 + 92;
	// bl 0x82410060
	ctx.lr = 0x8290BD94;
	sub_82410060(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290BDA8"))) PPC_WEAK_FUNC(sub_8290BDA8);
PPC_FUNC_IMPL(__imp__sub_8290BDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8290BDB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8290bebc
	if (ctx.cr6.lt) goto loc_8290BEBC;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8290bebc
	if (!ctx.cr6.lt) goto loc_8290BEBC;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82740840
	ctx.lr = 0x8290BDE0;
	sub_82740840(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8290bebc
	if (ctx.cr0.eq) goto loc_8290BEBC;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8290bebc
	if (ctx.cr6.eq) goto loc_8290BEBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290BE08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290BE20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290bebc
	if (ctx.cr0.eq) goto loc_8290BEBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290BE68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8290beb4
	if (ctx.cr0.eq) goto loc_8290BEB4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290BE88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r5,244(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290BEA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
loc_8290BEB4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8269b988
	ctx.lr = 0x8290BEBC;
	sub_8269B988(ctx, base);
loc_8290BEBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290BEC8"))) PPC_WEAK_FUNC(sub_8290BEC8);
PPC_FUNC_IMPL(__imp__sub_8290BEC8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290BEEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290BF10"))) PPC_WEAK_FUNC(sub_8290BF10);
PPC_FUNC_IMPL(__imp__sub_8290BF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8290BF18;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8290c07c
	if (ctx.cr6.eq) goto loc_8290C07C;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290BF64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290c074
	if (!ctx.cr6.gt) goto loc_8290C074;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_8290BF78:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290BF90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8290c03c
	if (ctx.cr0.eq) goto loc_8290C03C;
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290c018
	if (!ctx.cr6.gt) goto loc_8290C018;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8290BFAC:
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290bfec
	if (ctx.cr6.eq) goto loc_8290BFEC;
	// bl 0x8288c1e0
	ctx.lr = 0x8290BFC8;
	sub_8288C1E0(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290bfe8
	if (ctx.cr6.eq) goto loc_8290BFE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290BFE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290BFE8:
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
loc_8290BFEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290C004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290bfac
	if (ctx.cr6.lt) goto loc_8290BFAC;
loc_8290C018:
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// addi r3,r30,140
	ctx.r3.s64 = ctx.r30.s64 + 140;
	// stw r27,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8290c03c
	if (ctx.cr6.eq) goto loc_8290C03C;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82332c38
	ctx.lr = 0x8290C03C;
	sub_82332C38(ctx, base);
loc_8290C03C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290c060
	if (ctx.cr6.eq) goto loc_8290C060;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290C060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290C060:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290bf78
	if (ctx.cr6.lt) goto loc_8290BF78;
loc_8290C074:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x8290C07C;
	sub_8239D768(ctx, base);
loc_8290C07C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290C088"))) PPC_WEAK_FUNC(sub_8290C088);
PPC_FUNC_IMPL(__imp__sub_8290C088) {
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
	// bl 0x829087b0
	ctx.lr = 0x8290C0A0;
	sub_829087B0(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-14768
	ctx.r10.s64 = ctx.r10.s64 + -14768;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r9,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r9.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r9,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r9.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r9,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r9.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290C1A0"))) PPC_WEAK_FUNC(sub_8290C1A0);
PPC_FUNC_IMPL(__imp__sub_8290C1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8290C1A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82816528
	ctx.lr = 0x8290C1C8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82846e98
	ctx.lr = 0x8290C1DC;
	sub_82846E98(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ble cr6,0x8290c244
	if (!ctx.cr6.gt) goto loc_8290C244;
	// addi r26,r30,112
	ctx.r26.s64 = ctx.r30.s64 + 112;
loc_8290C21C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8290C230;
	sub_82410060(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8290c21c
	if (ctx.cr6.lt) goto loc_8290C21C;
loc_8290C244:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82908800
	ctx.lr = 0x8290C258;
	sub_82908800(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290C260"))) PPC_WEAK_FUNC(sub_8290C260);
PPC_FUNC_IMPL(__imp__sub_8290C260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8290C268;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82908850
	ctx.lr = 0x8290C274;
	sub_82908850(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8290c2ec
	if (ctx.cr0.eq) goto loc_8290C2EC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290C290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290c2ec
	if (!ctx.cr6.gt) goto loc_8290C2EC;
	// addi r28,r3,112
	ctx.r28.s64 = ctx.r3.s64 + 112;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8290C2C0:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8290C2D8;
	sub_82410060(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290c2c0
	if (ctx.cr6.lt) goto loc_8290C2C0;
loc_8290C2EC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290C2F8"))) PPC_WEAK_FUNC(sub_8290C2F8);
PPC_FUNC_IMPL(__imp__sub_8290C2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8290c344
	if (ctx.cr6.eq) goto loc_8290C344;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290c344
	if (!ctx.cr6.eq) goto loc_8290C344;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// blr 
	return;
loc_8290C344:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f1,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C370"))) PPC_WEAK_FUNC(sub_8290C370);
PPC_FUNC_IMPL(__imp__sub_8290C370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8290C378;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290c6a4
	if (ctx.cr6.eq) goto loc_8290C6A4;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8290c6a4
	if (ctx.cr6.eq) goto loc_8290C6A4;
	// ld r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 240);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// addi r29,r30,136
	ctx.r29.s64 = ctx.r30.s64 + 136;
	// stw r24,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r24.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8290c3dc
	if (ctx.cr6.eq) goto loc_8290C3DC;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8290C3DC;
	sub_82332C38(ctx, base);
loc_8290C3DC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x8290C3F0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x8290C408;
	sub_82A455D0(ctx, base);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8290c4a4
	if (!ctx.cr6.gt) goto loc_8290C4A4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r28,r11,36
	ctx.r28.s64 = ctx.r11.s64 + 36;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
loc_8290C428:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290c474
	if (!ctx.cr6.gt) goto loc_8290C474;
	// lwz r7,124(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
loc_8290C43C:
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8290c460
	if (ctx.cr6.eq) goto loc_8290C460;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x828b0c68
	ctx.lr = 0x8290C450;
	sub_828B0C68(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8290c460
	if (ctx.cr6.eq) goto loc_8290C460;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8290c6b8
	if (ctx.cr6.eq) goto loc_8290C6B8;
loc_8290C460:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290c43c
	if (ctx.cr6.lt) goto loc_8290C43C;
loc_8290C474:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8290c490
	if (!ctx.cr6.gt) goto loc_8290C490;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r5,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
loc_8290C490:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x8290c428
	if (ctx.cr6.lt) goto loc_8290C428;
loc_8290C4A4:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r25,r30,164
	ctx.r25.s64 = ctx.r30.s64 + 164;
	// stw r24,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r24.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8290c4cc
	if (ctx.cr6.eq) goto loc_8290C4CC;
	// stw r31,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332c38
	ctx.lr = 0x8290C4CC;
	sub_82332C38(ctx, base);
loc_8290C4CC:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// addi r26,r30,188
	ctx.r26.s64 = ctx.r30.s64 + 188;
	// stw r24,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r24.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8290c4f4
	if (ctx.cr6.eq) goto loc_8290C4F4;
	// stw r31,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332c38
	ctx.lr = 0x8290C4F4;
	sub_82332C38(ctx, base);
loc_8290C4F4:
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// addi r27,r30,212
	ctx.r27.s64 = ctx.r30.s64 + 212;
	// stw r24,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r24.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8290c51c
	if (ctx.cr6.eq) goto loc_8290C51C;
	// stw r31,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332c38
	ctx.lr = 0x8290C51C;
	sub_82332C38(ctx, base);
loc_8290C51C:
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// ble cr6,0x8290c5b8
	if (!ctx.cr6.gt) goto loc_8290C5B8;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lfs f30,-24624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24624);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,16776(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16776);
	ctx.f31.f64 = double(temp.f32);
loc_8290C544:
	// lfsx f0,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8290c560
	if (!ctx.cr6.gt) goto loc_8290C560;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82643410
	ctx.lr = 0x8290C560;
	sub_82643410(ctx, base);
loc_8290C560:
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// lfsx f0,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x8290c580
	if (!ctx.cr6.lt) goto loc_8290C580;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82643410
	ctx.lr = 0x8290C580;
	sub_82643410(ctx, base);
loc_8290C580:
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// lfsx f0,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x8290c5a8
	if (ctx.cr6.eq) goto loc_8290C5A8;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82643410
	ctx.lr = 0x8290C5A0;
	sub_82643410(ctx, base);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// lfsx f29,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f29.f64 = double(temp.f32);
loc_8290C5A8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r31
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x8290c544
	if (ctx.cr6.lt) goto loc_8290C544;
loc_8290C5B8:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d1dc8
	ctx.lr = 0x8290C5C8;
	sub_828D1DC8(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d1dc8
	ctx.lr = 0x8290C5D8;
	sub_828D1DC8(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d1dc8
	ctx.lr = 0x8290C5E8;
	sub_828D1DC8(ctx, base);
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// addi r28,r30,236
	ctx.r28.s64 = ctx.r30.s64 + 236;
	// stw r24,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r24.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8290c610
	if (ctx.cr6.eq) goto loc_8290C610;
	// stw r31,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x8290C610;
	sub_82332C38(ctx, base);
loc_8290C610:
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// addi r27,r30,260
	ctx.r27.s64 = ctx.r30.s64 + 260;
	// stw r24,276(r30)
	PPC_STORE_U32(ctx.r30.u32 + 276, ctx.r24.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8290c638
	if (ctx.cr6.eq) goto loc_8290C638;
	// stw r31,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332c38
	ctx.lr = 0x8290C638;
	sub_82332C38(ctx, base);
loc_8290C638:
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r29,r30,284
	ctx.r29.s64 = ctx.r30.s64 + 284;
	// stw r24,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r24.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8290c660
	if (ctx.cr6.eq) goto loc_8290C660;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8290C660;
	sub_82332C38(ctx, base);
loc_8290C660:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x8290C674;
	sub_82332D50(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332d50
	ctx.lr = 0x8290C688;
	sub_82332D50(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x8290C69C;
	sub_82332D50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r11.u32);
loc_8290C6A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
loc_8290C6B8:
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stfsx f0,r11,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// b 0x8290c490
	goto loc_8290C490;
}

__attribute__((alias("__imp__sub_8290C6C8"))) PPC_WEAK_FUNC(sub_8290C6C8);
PPC_FUNC_IMPL(__imp__sub_8290C6C8) {
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
	// bl 0x82905850
	ctx.lr = 0x8290C6E0;
	sub_82905850(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290c6f4
	if (!ctx.cr6.eq) goto loc_8290C6F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290c370
	ctx.lr = 0x8290C6F4;
	sub_8290C370(ctx, base);
loc_8290C6F4:
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

__attribute__((alias("__imp__sub_8290C708"))) PPC_WEAK_FUNC(sub_8290C708);
PPC_FUNC_IMPL(__imp__sub_8290C708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x8290C710;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82a61740
	ctx.lr = 0x8290C718;
	__savefpr_26(ctx, base);
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ld r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 240);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// beq cr6,0x8290d3c8
	if (ctx.cr6.eq) goto loc_8290D3C8;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f26,-24624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24624);
	ctx.f26.f64 = double(temp.f32);
	// bne cr6,0x8290c76c
	if (!ctx.cr6.eq) goto loc_8290C76C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x8290d3c8
	if (!ctx.cr6.lt) goto loc_8290D3C8;
loc_8290C76C:
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r29,4(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// li r24,32
	ctx.r24.s64 = 32;
	// stw r20,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r20,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r20,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r20.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r20,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r20.u32);
	// stw r20,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r20.u32);
	// stw r20,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r20.u32);
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// stw r20,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r20.u32);
	// stw r20,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r20.u32);
	// stw r20,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r20.u32);
	// stw r20,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// bl 0x82332d50
	ctx.lr = 0x8290C7BC;
	sub_82332D50(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f29,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// beq cr6,0x8290c878
	if (ctx.cr6.eq) goto loc_8290C878;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290c910
	if (ctx.cr6.eq) goto loc_8290C910;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290C80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290c860
	if (!ctx.cr6.eq) goto loc_8290C860;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
loc_8290C830:
	// fmuls f13,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f11,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f10,4(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,0(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// lfs f8,8(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,4(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 4, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,8(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 8, temp.u32);
	// b 0x8290c91c
	goto loc_8290C91C;
loc_8290C860:
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// b 0x8290c8f0
	goto loc_8290C8F0;
loc_8290C878:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8290c910
	if (ctx.cr6.eq) goto loc_8290C910;
	// stfs f29,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// stfs f29,116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f29,120(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290C8B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290c8dc
	if (!ctx.cr6.eq) goto loc_8290C8DC;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// b 0x8290c830
	goto loc_8290C830;
loc_8290C8DC:
	// lfs f11,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
loc_8290C8F0:
	// lfs f12,8(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f12,8(r21)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r21.u32 + 8, temp.u32);
	// stfs f13,4(r21)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r21.u32 + 4, temp.u32);
	// stfs f0,0(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// b 0x8290c91c
	goto loc_8290C91C;
loc_8290C910:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828d1d10
	ctx.lr = 0x8290C91C;
	sub_828D1D10(ctx, base);
loc_8290C91C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82332d50
	ctx.lr = 0x8290C930;
	sub_82332D50(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f29,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290c9c0
	if (ctx.cr6.eq) goto loc_8290C9C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290C96C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290c9cc
	if (!ctx.cr6.eq) goto loc_8290C9CC;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f8,8(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,0(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,4(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 4, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,8(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 8, temp.u32);
	// b 0x8290c9cc
	goto loc_8290C9CC;
loc_8290C9C0:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x828d1d10
	ctx.lr = 0x8290C9CC;
	sub_828D1D10(ctx, base);
loc_8290C9CC:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290d3b4
	if (!ctx.cr6.gt) goto loc_8290D3B4;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r26,48
	ctx.r26.s64 = 48;
	// lfs f28,24000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f28.f64 = double(temp.f32);
	// li r27,16
	ctx.r27.s64 = 16;
	// lfs f30,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// addi r19,r11,-15728
	ctx.r19.s64 = ctx.r11.s64 + -15728;
	// lfs f27,16776(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16776);
	ctx.f27.f64 = double(temp.f32);
loc_8290CA08:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// beq cr6,0x8290ca24
	if (ctx.cr6.eq) goto loc_8290CA24;
	// lfsx f31,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8290ca34
	goto loc_8290CA34;
loc_8290CA24:
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_8290CA34:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8290ca54
	if (!ctx.cr6.lt) goto loc_8290CA54;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lbzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8290ca58
	if (ctx.cr6.eq) goto loc_8290CA58;
loc_8290CA54:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8290CA58:
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8290d124
	if (!ctx.cr6.eq) goto loc_8290D124;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8290d124
	if (ctx.cr6.eq) goto loc_8290D124;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mulli r11,r25,48
	ctx.r11.s64 = ctx.r25.s64 * 48;
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r29,r25,6,0,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r30,r25,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwz r28,36(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// bl 0x828b2208
	ctx.lr = 0x8290CA9C;
	sub_828B2208(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r29,r10
	ctx.r4.u64 = ctx.r29.u64 + ctx.r10.u64;
	// bl 0x828b2208
	ctx.lr = 0x8290CAB0;
	sub_828B2208(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8290ccb4
	if (!ctx.cr6.gt) goto loc_8290CCB4;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r9,r28,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r1,528
	ctx.r7.s64 = ctx.r1.s64 + 528;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,528
	ctx.r8.s64 = ctx.r1.s64 + 528;
	// lvx128 v0,r10,r24
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v11,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// lvx128 v10,r10,r27
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r26
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v13,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v10,r11,r27
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r11,r24
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,8
	ctx.r10.s64 = 8;
	// lvx128 v7,r11,r26
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v6,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrglw v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrglw v0,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmsum4fp128 v12,v9,v6
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v11,v9,v5
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v4,v9,v13
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v9,v9,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v3,v10,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v2,v10,v13
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v31,v8,v0
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v30,v8,v13
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v1,v10,v5
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v29,v8,v5
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v0,v7,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v13,v7,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v5,v7,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v10,v10,v6
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v8,v8,v6
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v7,v7,v6
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmrghw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v11,v4,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v9,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v11,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v10,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v8,v8,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// stvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v13,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v12,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v10,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8290CBA4:
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8290cba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290CBA4;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r8,r1,400
	ctx.r8.s64 = ctx.r1.s64 + 400;
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r6,r1,432
	ctx.r6.s64 = ctx.r1.s64 + 432;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r10,r24
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v11,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// lvx128 v10,r10,r27
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r26
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v13,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v10,r11,r27
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r11,r24
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,8
	ctx.r10.s64 = 8;
	// lvx128 v7,r11,r26
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v6,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrglw v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrglw v0,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmsum4fp128 v12,v9,v6
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v11,v9,v5
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v4,v9,v13
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v9,v9,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v3,v10,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v2,v10,v13
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v31,v8,v0
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v30,v8,v13
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v1,v10,v5
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v29,v8,v5
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v0,v7,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v13,v7,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v5,v7,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v10,v10,v6
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v8,v8,v6
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v7,v7,v6
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmrghw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v11,v4,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v9,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v11,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v10,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v8,v8,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// stvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v13,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v12,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v10,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8290CCA0:
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8290cca0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290CCA0;
loc_8290CCB4:
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bgt cr6,0x8290ccec
	if (ctx.cr6.gt) goto loc_8290CCEC;
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// li r11,8
	ctx.r11.s64 = 8;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8290CCD4:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8290ccd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290CCD4;
	// b 0x8290ceb0
	goto loc_8290CEB0;
loc_8290CCEC:
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// blt cr6,0x8290cd24
	if (ctx.cr6.lt) goto loc_8290CD24;
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r11,8
	ctx.r11.s64 = 8;
	// add r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8290CD0C:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8290cd0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290CD0C;
	// b 0x8290ceb0
	goto loc_8290CEB0;
loc_8290CD24:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82817f30
	ctx.lr = 0x8290CD34;
	sub_82817F30(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lfs f0,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfs f13,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f30,236(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bl 0x82817f30
	ctx.lr = 0x8290CD64;
	sub_82817F30(ctx, base);
	// fsubs f11,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f0,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// lfs f13,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfs f7,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,380(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,316(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,304(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,312(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f11,308(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f7.f64 = double(temp.f32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// fmadds f6,f13,f9,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f6,f8,f12,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f6,f7,f11,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f6,f29
	ctx.cr6.compare(ctx.f6.f64, ctx.f29.f64);
	// bge cr6,0x8290ce30
	if (!ctx.cr6.lt) goto loc_8290CE30;
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// stfs f13,288(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fmuls f13,f12,f28
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// stfs f13,296(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfs f0,300(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// fmuls f0,f11,f28
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_8290CE30:
	// fmuls f0,f7,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f8,f31
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// lfs f11,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// lfs f8,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f7,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,324(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// fadds f0,f10,f8
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f0,332(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// fadds f0,f9,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x825c0090
	ctx.lr = 0x8290CEA0;
	sub_825C0090(ctx, base);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x828b2208
	ctx.lr = 0x8290CEB0;
	sub_828B2208(ctx, base);
loc_8290CEB0:
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bgt cr6,0x8290cec0
	if (ctx.cr6.gt) goto loc_8290CEC0;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// b 0x8290cecc
	goto loc_8290CECC;
loc_8290CEC0:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// blt cr6,0x8290cefc
	if (ctx.cr6.lt) goto loc_8290CEFC;
loc_8290CECC:
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ldx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stdx r11,r30,r10
	PPC_STORE_U64(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u64);
	// ld r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// std r11,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r11.u64);
	// ld r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// std r11,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r11.u64);
	// b 0x8290cfa8
	goto loc_8290CFA8;
loc_8290CEFC:
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,12(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r8,r30,r9
	ctx.r8.u64 = ctx.r30.u64 + ctx.r9.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fadds f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fadds f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
	// lwz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
	// stw r10,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
loc_8290CFA8:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// addi r10,r1,624
	ctx.r10.s64 = ctx.r1.s64 + 624;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8290CFB8:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8290cfb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290CFB8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8290d000
	if (!ctx.cr6.gt) goto loc_8290D000;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm r10,r28,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r1,624
	ctx.r9.s64 = ctx.r1.s64 + 624;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8290CFEC:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x8290cfec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290CFEC;
loc_8290D000:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x826c8a28
	ctx.lr = 0x8290D014;
	sub_826C8A28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// lvx128 v13,r29,r27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// lvx128 v12,r29,r24
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32 + ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,496
	ctx.r8.s64 = ctx.r1.s64 + 496;
	// lvx128 v11,r29,r26
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32 + ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,512
	ctx.r7.s64 = ctx.r1.s64 + 512;
	// lvx128 v9,r11,r24
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// vmrghw v7,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v6,r11,r27
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r11,r26
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v9,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrglw v8,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v6,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v5,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrglw v9,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrglw v10,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmsum4fp128 v8,v0,v6
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v7,v0,v5
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v4,v0,v9
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v0,v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v3,v13,v10
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v31,v12,v10
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v2,v13,v9
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v30,v12,v9
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v1,v13,v5
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v29,v12,v5
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v10,v11,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v9,v11,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v12,v12,v6
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v5,v11,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v13,v13,v6
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v11,v11,v6
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmrghw v8,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v0,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v7,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v0,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v8,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghw v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v13,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v11,v11,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v13,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v12,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82817f30
	ctx.lr = 0x8290D0F4;
	sub_82817F30(ctx, base);
	// addi r10,r1,592
	ctx.r10.s64 = ctx.r1.s64 + 592;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r8,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// b 0x8290d330
	goto loc_8290D330;
loc_8290D124:
	// lwz r8,12(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// rlwinm r10,r25,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bgt cr6,0x8290d168
	if (ctx.cr6.gt) goto loc_8290D168;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// b 0x8290d18c
	goto loc_8290D18C;
loc_8290D168:
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// blt cr6,0x8290d194
	if (ctx.cr6.lt) goto loc_8290D194;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
loc_8290D18C:
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// b 0x8290d330
	goto loc_8290D330;
loc_8290D194:
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f30,f31
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// lfs f12,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fadds f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fadds f0,f8,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// lwz r8,256(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r7,260(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r6,264(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f0,f12,f31,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f10,352(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f11,364(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,356(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f13,360(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f13,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmadds f6,f0,f10,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmadds f6,f12,f9,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmadds f6,f7,f8,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fcmpu cr6,f6,f29
	ctx.cr6.compare(ctx.f6.f64, ctx.f29.f64);
	// bge cr6,0x8290d2e8
	if (!ctx.cr6.lt) goto loc_8290D2E8;
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fsubs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fsubs f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f0,284(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// fsubs f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8290d324
	goto loc_8290D324;
loc_8290D2E8:
	// fadds f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// fadds f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f0,340(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// fadds f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,344(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// fadds f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f0,348(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8290D324:
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// bl 0x825c0090
	ctx.lr = 0x8290D330;
	sub_825C0090(ctx, base);
loc_8290D330:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8290d3a4
	if (!ctx.cr6.eq) goto loc_8290D3A4;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290d3a4
	if (!ctx.cr6.eq) goto loc_8290D3A4;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f8,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f0,0(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// fadds f0,f13,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f0,4(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 4, temp.u32);
	// fadds f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f0,8(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 8, temp.u32);
loc_8290D3A4:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290ca08
	if (ctx.cr6.lt) goto loc_8290CA08;
loc_8290D3B4:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82855110
	ctx.lr = 0x8290D3BC;
	sub_82855110(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82855110
	ctx.lr = 0x8290D3C4;
	sub_82855110(ctx, base);
	// b 0x8290d408
	goto loc_8290D408;
loc_8290D3C8:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290d3fc
	if (ctx.cr6.eq) goto loc_8290D3FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290D3F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8290d408
	goto loc_8290D408;
loc_8290D3FC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x828d1d10
	ctx.lr = 0x8290D408;
	sub_828D1D10(ctx, base);
loc_8290D408:
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82a6178c
	ctx.lr = 0x8290D414;
	__restfpr_26(ctx, base);
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290D418"))) PPC_WEAK_FUNC(sub_8290D418);
PPC_FUNC_IMPL(__imp__sub_8290D418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r11,40(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lfs f0,44(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// b 0x82908800
	sub_82908800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290D438"))) PPC_WEAK_FUNC(sub_8290D438);
PPC_FUNC_IMPL(__imp__sub_8290D438) {
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
	// bl 0x82908850
	ctx.lr = 0x8290D454;
	sub_82908850(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8290d490
	if (ctx.cr0.eq) goto loc_8290D490;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290D470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290d490
	if (ctx.cr0.eq) goto loc_8290D490;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
loc_8290D490:
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

__attribute__((alias("__imp__sub_8290D4B0"))) PPC_WEAK_FUNC(sub_8290D4B0);
PPC_FUNC_IMPL(__imp__sub_8290D4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8290d4f8
	if (!ctx.cr6.eq) goto loc_8290D4F8;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8290d4f8
	if (ctx.cr6.eq) goto loc_8290D4F8;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290d4f8
	if (ctx.cr6.eq) goto loc_8290D4F8;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lfs f13,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lfs f0,30996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8290d4f4
	if (ctx.cr6.lt) goto loc_8290D4F4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8290D4F4:
	// b 0x824114f8
	sub_824114F8(ctx, base);
	return;
loc_8290D4F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290D500"))) PPC_WEAK_FUNC(sub_8290D500);
PPC_FUNC_IMPL(__imp__sub_8290D500) {
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
	// bl 0x82905850
	ctx.lr = 0x8290D51C;
	sub_82905850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290d4b0
	ctx.lr = 0x8290D524;
	sub_8290D4B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8290d558
	if (ctx.cr0.eq) goto loc_8290D558;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290d558
	if (!ctx.cr6.eq) goto loc_8290D558;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282d4b0
	ctx.lr = 0x8290D54C;
	sub_8282D4B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82412b58
	ctx.lr = 0x8290D558;
	sub_82412B58(ctx, base);
loc_8290D558:
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

__attribute__((alias("__imp__sub_8290D570"))) PPC_WEAK_FUNC(sub_8290D570);
PPC_FUNC_IMPL(__imp__sub_8290D570) {
	PPC_FUNC_PROLOGUE();
	// b 0x829088c8
	sub_829088C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290D578"))) PPC_WEAK_FUNC(sub_8290D578);
PPC_FUNC_IMPL(__imp__sub_8290D578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lfs f0,40(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// b 0x82908800
	sub_82908800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290D590"))) PPC_WEAK_FUNC(sub_8290D590);
PPC_FUNC_IMPL(__imp__sub_8290D590) {
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
	// bl 0x82908850
	ctx.lr = 0x8290D5AC;
	sub_82908850(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290d5e0
	if (ctx.cr0.eq) goto loc_8290D5E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290D5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290d5e0
	if (ctx.cr0.eq) goto loc_8290D5E0;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lfs f0,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
loc_8290D5E0:
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

__attribute__((alias("__imp__sub_8290D600"))) PPC_WEAK_FUNC(sub_8290D600);
PPC_FUNC_IMPL(__imp__sub_8290D600) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8290d688
	if (ctx.cr6.eq) goto loc_8290D688;
	// lfs f0,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8290d688
	if (ctx.cr6.lt) goto loc_8290D688;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x824114f8
	ctx.lr = 0x8290D654;
	sub_824114F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290d688
	if (ctx.cr0.eq) goto loc_8290D688;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8290d688
	if (ctx.cr6.eq) goto loc_8290D688;
	// lfs f13,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8290d688
	if (ctx.cr6.gt) goto loc_8290D688;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_8290D688:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8290d6a4
	if (ctx.cr6.eq) goto loc_8290D6A4;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// b 0x8290d6a8
	goto loc_8290D6A8;
loc_8290D6A4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8290D6A8:
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8290d6e4
	if (ctx.cr6.eq) goto loc_8290D6E4;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8290d6dc
	if (!ctx.cr6.eq) goto loc_8290D6DC;
	// lfs f0,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8290d6dc
	if (ctx.cr6.lt) goto loc_8290D6DC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// lfs f0,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
loc_8290D6DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908960
	ctx.lr = 0x8290D6E4;
	sub_82908960(ctx, base);
loc_8290D6E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x829088c8
	ctx.lr = 0x8290D6F4;
	sub_829088C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8290D718"))) PPC_WEAK_FUNC(sub_8290D718);
PPC_FUNC_IMPL(__imp__sub_8290D718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f6,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f4,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fsubs f3,f3,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fmuls f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f7,f7,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f4,f4,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f3,f3,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f10,f6,f4
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fadds f9,f5,f3
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fadds f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290D7E0"))) PPC_WEAK_FUNC(sub_8290D7E0);
PPC_FUNC_IMPL(__imp__sub_8290D7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// subf r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r11.s64;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290D890"))) PPC_WEAK_FUNC(sub_8290D890);
PPC_FUNC_IMPL(__imp__sub_8290D890) {
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
	// bl 0x82889958
	ctx.lr = 0x8290D8B0;
	sub_82889958(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8290d8c4
	if (ctx.cr6.eq) goto loc_8290D8C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825bc838
	ctx.lr = 0x8290D8C4;
	sub_825BC838(ctx, base);
loc_8290D8C4:
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

__attribute__((alias("__imp__sub_8290D8E0"))) PPC_WEAK_FUNC(sub_8290D8E0);
PPC_FUNC_IMPL(__imp__sub_8290D8E0) {
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
	// beq cr6,0x8290d918
	if (ctx.cr6.eq) goto loc_8290D918;
	// bl 0x82889958
	ctx.lr = 0x8290D908;
	sub_82889958(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290d918
	if (!ctx.cr6.eq) goto loc_8290D918;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290d924
	goto loc_8290D924;
loc_8290D918:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bca00
	ctx.lr = 0x8290D924;
	sub_825BCA00(ctx, base);
loc_8290D924:
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

__attribute__((alias("__imp__sub_8290D940"))) PPC_WEAK_FUNC(sub_8290D940);
PPC_FUNC_IMPL(__imp__sub_8290D940) {
	PPC_FUNC_PROLOGUE();
	// b 0x82889958
	sub_82889958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290D948"))) PPC_WEAK_FUNC(sub_8290D948);
PPC_FUNC_IMPL(__imp__sub_8290D948) {
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
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82833108
	ctx.lr = 0x8290D968;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290d9a0
	if (ctx.cr0.eq) goto loc_8290D9A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bcad0
	ctx.lr = 0x8290D97C;
	sub_825BCAD0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 + 3000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lfs f0,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// b 0x8290d9a4
	goto loc_8290D9A4;
loc_8290D9A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290D9A4:
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

__attribute__((alias("__imp__sub_8290D9C0"))) PPC_WEAK_FUNC(sub_8290D9C0);
PPC_FUNC_IMPL(__imp__sub_8290D9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,22612
	ctx.r3.s64 = ctx.r11.s64 + 22612;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290D9D0"))) PPC_WEAK_FUNC(sub_8290D9D0);
PPC_FUNC_IMPL(__imp__sub_8290D9D0) {
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
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82833108
	ctx.lr = 0x8290D9E8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290da0c
	if (ctx.cr0.eq) goto loc_8290DA0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829087b0
	ctx.lr = 0x8290D9F8;
	sub_829087B0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 + 3000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8290da10
	goto loc_8290DA10;
loc_8290DA0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290DA10:
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

__attribute__((alias("__imp__sub_8290DA28"))) PPC_WEAK_FUNC(sub_8290DA28);
PPC_FUNC_IMPL(__imp__sub_8290DA28) {
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
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8239d768
	ctx.lr = 0x8290DA4C;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824d51a8
	ctx.lr = 0x8290DA54;
	sub_824D51A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290da64
	if (ctx.cr0.eq) goto loc_8290DA64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8290DA64;
	sub_82332DB8(ctx, base);
loc_8290DA64:
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

__attribute__((alias("__imp__sub_8290DA80"))) PPC_WEAK_FUNC(sub_8290DA80);
PPC_FUNC_IMPL(__imp__sub_8290DA80) {
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
	// bl 0x82615f88
	ctx.lr = 0x8290DAA0;
	sub_82615F88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290dab0
	if (!ctx.cr6.eq) goto loc_8290DAB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8290dac8
	goto loc_8290DAC8;
loc_8290DAB0:
	// bl 0x824d4ae8
	ctx.lr = 0x8290DAB4;
	sub_824D4AE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8290dac8
	if (ctx.cr6.eq) goto loc_8290DAC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824d4c28
	ctx.lr = 0x8290DAC8;
	sub_824D4C28(ctx, base);
loc_8290DAC8:
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

__attribute__((alias("__imp__sub_8290DAE0"))) PPC_WEAK_FUNC(sub_8290DAE0);
PPC_FUNC_IMPL(__imp__sub_8290DAE0) {
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
	// beq cr6,0x8290db18
	if (ctx.cr6.eq) goto loc_8290DB18;
	// bl 0x82615f88
	ctx.lr = 0x8290DB08;
	sub_82615F88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290db18
	if (!ctx.cr6.eq) goto loc_8290DB18;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290db24
	goto loc_8290DB24;
loc_8290DB18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824d4dc8
	ctx.lr = 0x8290DB24;
	sub_824D4DC8(ctx, base);
loc_8290DB24:
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

__attribute__((alias("__imp__sub_8290DB40"))) PPC_WEAK_FUNC(sub_8290DB40);
PPC_FUNC_IMPL(__imp__sub_8290DB40) {
	PPC_FUNC_PROLOGUE();
	// b 0x82615f88
	sub_82615F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290DB48"))) PPC_WEAK_FUNC(sub_8290DB48);
PPC_FUNC_IMPL(__imp__sub_8290DB48) {
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82833108
	ctx.lr = 0x8290DB68;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290dba4
	if (ctx.cr0.eq) goto loc_8290DBA4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824d4ec8
	ctx.lr = 0x8290DB7C;
	sub_824D4EC8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// addi r11,r11,872
	ctx.r11.s64 = ctx.r11.s64 + 872;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8290DB9C;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8290dba8
	goto loc_8290DBA8;
loc_8290DBA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290DBA8:
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

__attribute__((alias("__imp__sub_8290DBC0"))) PPC_WEAK_FUNC(sub_8290DBC0);
PPC_FUNC_IMPL(__imp__sub_8290DBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,-22916
	ctx.r3.s64 = ctx.r11.s64 + -22916;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290DBD0"))) PPC_WEAK_FUNC(sub_8290DBD0);
PPC_FUNC_IMPL(__imp__sub_8290DBD0) {
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82833108
	ctx.lr = 0x8290DBE4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290dbf4
	if (ctx.cr0.eq) goto loc_8290DBF4;
	// bl 0x8290bba8
	ctx.lr = 0x8290DBF0;
	sub_8290BBA8(ctx, base);
	// b 0x8290dbf8
	goto loc_8290DBF8;
loc_8290DBF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290DBF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290DC08"))) PPC_WEAK_FUNC(sub_8290DC08);
PPC_FUNC_IMPL(__imp__sub_8290DC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8290DC10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,208
	ctx.r31.s64 = ctx.r30.s64 + 208;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,224(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8290DC38;
	sub_82332CA8(ctx, base);
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290dc48
	if (ctx.cr6.eq) goto loc_8290DC48;
	// bl 0x82332db8
	ctx.lr = 0x8290DC48;
	sub_82332DB8(ctx, base);
loc_8290DC48:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x825ca550
	ctx.lr = 0x8290DC60;
	sub_825CA550(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290dc70
	if (ctx.cr0.eq) goto loc_8290DC70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x8290DC70;
	sub_82332DB8(ctx, base);
loc_8290DC70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290DC80"))) PPC_WEAK_FUNC(sub_8290DC80);
PPC_FUNC_IMPL(__imp__sub_8290DC80) {
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
	// bl 0x828890e0
	ctx.lr = 0x8290DCA0;
	sub_828890E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290dcb0
	if (!ctx.cr6.eq) goto loc_8290DCB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8290dcc8
	goto loc_8290DCC8;
loc_8290DCB0:
	// bl 0x82412588
	ctx.lr = 0x8290DCB4;
	sub_82412588(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8290dcc8
	if (ctx.cr6.eq) goto loc_8290DCC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824d4c28
	ctx.lr = 0x8290DCC8;
	sub_824D4C28(ctx, base);
loc_8290DCC8:
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

__attribute__((alias("__imp__sub_8290DCE0"))) PPC_WEAK_FUNC(sub_8290DCE0);
PPC_FUNC_IMPL(__imp__sub_8290DCE0) {
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
	// beq cr6,0x8290dd18
	if (ctx.cr6.eq) goto loc_8290DD18;
	// bl 0x828890e0
	ctx.lr = 0x8290DD08;
	sub_828890E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290dd18
	if (!ctx.cr6.eq) goto loc_8290DD18;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290dd24
	goto loc_8290DD24;
loc_8290DD18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca1e0
	ctx.lr = 0x8290DD24;
	sub_825CA1E0(ctx, base);
loc_8290DD24:
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

__attribute__((alias("__imp__sub_8290DD40"))) PPC_WEAK_FUNC(sub_8290DD40);
PPC_FUNC_IMPL(__imp__sub_8290DD40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828890e0
	sub_828890E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290DD48"))) PPC_WEAK_FUNC(sub_8290DD48);
PPC_FUNC_IMPL(__imp__sub_8290DD48) {
	PPC_FUNC_PROLOGUE();
	// b 0x82412588
	sub_82412588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290DD50"))) PPC_WEAK_FUNC(sub_8290DD50);
PPC_FUNC_IMPL(__imp__sub_8290DD50) {
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
	// li r3,232
	ctx.r3.s64 = 232;
	// bl 0x82833108
	ctx.lr = 0x8290DD6C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290dd80
	if (ctx.cr0.eq) goto loc_8290DD80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8290dd98
	ctx.lr = 0x8290DD7C;
	sub_8290DD98(ctx, base);
	// b 0x8290dd84
	goto loc_8290DD84;
loc_8290DD80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290DD84:
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

__attribute__((alias("__imp__sub_8290DD98"))) PPC_WEAK_FUNC(sub_8290DD98);
PPC_FUNC_IMPL(__imp__sub_8290DD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8290DDA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x825ca2e0
	ctx.lr = 0x8290DDB0;
	sub_825CA2E0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,3904
	ctx.r11.s64 = ctx.r11.s64 + 3904;
	// addi r31,r27,208
	ctx.r31.s64 = ctx.r27.s64 + 208;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r29,r29,208
	ctx.r29.s64 = ctx.r29.s64 + 208;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r30,216(r27)
	PPC_STORE_U32(ctx.r27.u32 + 216, ctx.r30.u32);
	// stw r30,220(r27)
	PPC_STORE_U32(ctx.r27.u32 + 220, ctx.r30.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r11,212(r27)
	PPC_STORE_U32(ctx.r27.u32 + 212, ctx.r11.u32);
	// stw r30,224(r27)
	PPC_STORE_U32(ctx.r27.u32 + 224, ctx.r30.u32);
	// stw r30,228(r27)
	PPC_STORE_U32(ctx.r27.u32 + 228, ctx.r30.u32);
	// stw r30,208(r27)
	PPC_STORE_U32(ctx.r27.u32 + 208, ctx.r30.u32);
	// beq cr6,0x8290de84
	if (ctx.cr6.eq) goto loc_8290DE84;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290de84
	if (!ctx.cr6.gt) goto loc_8290DE84;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290de18
	if (ctx.cr0.eq) goto loc_8290DE18;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8290DE18;
	sub_82332C38(ctx, base);
loc_8290DE18:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290de84
	if (!ctx.cr6.gt) goto loc_8290DE84;
loc_8290DE28:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x8290DE3C;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 * 20;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290de70
	if (ctx.cr0.eq) goto loc_8290DE70;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r10,5
	ctx.r10.s64 = 5;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8290DE5C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8290de5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290DE5C;
loc_8290DE70:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290de28
	if (ctx.cr6.lt) goto loc_8290DE28;
loc_8290DE84:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290DE90"))) PPC_WEAK_FUNC(sub_8290DE90);
PPC_FUNC_IMPL(__imp__sub_8290DE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,22584
	ctx.r3.s64 = ctx.r11.s64 + 22584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290DEA0"))) PPC_WEAK_FUNC(sub_8290DEA0);
PPC_FUNC_IMPL(__imp__sub_8290DEA0) {
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
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82855110
	ctx.lr = 0x8290DEC4;
	sub_82855110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ca550
	ctx.lr = 0x8290DECC;
	sub_825CA550(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290dedc
	if (ctx.cr0.eq) goto loc_8290DEDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8290DEDC;
	sub_82332DB8(ctx, base);
loc_8290DEDC:
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

__attribute__((alias("__imp__sub_8290DEF8"))) PPC_WEAK_FUNC(sub_8290DEF8);
PPC_FUNC_IMPL(__imp__sub_8290DEF8) {
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
	// bl 0x826516b0
	ctx.lr = 0x8290DF18;
	sub_826516B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290df28
	if (!ctx.cr6.eq) goto loc_8290DF28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8290df40
	goto loc_8290DF40;
loc_8290DF28:
	// bl 0x82412588
	ctx.lr = 0x8290DF2C;
	sub_82412588(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8290df40
	if (ctx.cr6.eq) goto loc_8290DF40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824d4c28
	ctx.lr = 0x8290DF40;
	sub_824D4C28(ctx, base);
loc_8290DF40:
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

__attribute__((alias("__imp__sub_8290DF58"))) PPC_WEAK_FUNC(sub_8290DF58);
PPC_FUNC_IMPL(__imp__sub_8290DF58) {
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
	// beq cr6,0x8290df90
	if (ctx.cr6.eq) goto loc_8290DF90;
	// bl 0x826516b0
	ctx.lr = 0x8290DF80;
	sub_826516B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290df90
	if (!ctx.cr6.eq) goto loc_8290DF90;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290df9c
	goto loc_8290DF9C;
loc_8290DF90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca1e0
	ctx.lr = 0x8290DF9C;
	sub_825CA1E0(ctx, base);
loc_8290DF9C:
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

__attribute__((alias("__imp__sub_8290DFB8"))) PPC_WEAK_FUNC(sub_8290DFB8);
PPC_FUNC_IMPL(__imp__sub_8290DFB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826516b0
	sub_826516B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290DFC0"))) PPC_WEAK_FUNC(sub_8290DFC0);
PPC_FUNC_IMPL(__imp__sub_8290DFC0) {
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
	// li r3,232
	ctx.r3.s64 = 232;
	// bl 0x82833108
	ctx.lr = 0x8290DFE0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290e014
	if (ctx.cr0.eq) goto loc_8290E014;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ca2e0
	ctx.lr = 0x8290DFF4;
	sub_825CA2E0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r30,208
	ctx.r4.s64 = ctx.r30.s64 + 208;
	// addi r11,r11,2424
	ctx.r11.s64 = ctx.r11.s64 + 2424;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825c7d68
	ctx.lr = 0x8290E00C;
	sub_825C7D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8290e018
	goto loc_8290E018;
loc_8290E014:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290E018:
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

__attribute__((alias("__imp__sub_8290E030"))) PPC_WEAK_FUNC(sub_8290E030);
PPC_FUNC_IMPL(__imp__sub_8290E030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,22100
	ctx.r3.s64 = ctx.r11.s64 + 22100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E040"))) PPC_WEAK_FUNC(sub_8290E040);
PPC_FUNC_IMPL(__imp__sub_8290E040) {
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
	// li r3,232
	ctx.r3.s64 = 232;
	// bl 0x82833108
	ctx.lr = 0x8290E058;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290e0c0
	if (ctx.cr0.eq) goto loc_8290E0C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d1400
	ctx.lr = 0x8290E068;
	sub_828D1400(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,2424
	ctx.r10.s64 = ctx.r10.s64 + 2424;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8290e0b8
	if (ctx.cr6.eq) goto loc_8290E0B8;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82332c38
	ctx.lr = 0x8290E0B8;
	sub_82332C38(ctx, base);
loc_8290E0B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8290e0c4
	goto loc_8290E0C4;
loc_8290E0C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290E0C4:
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

__attribute__((alias("__imp__sub_8290E0D8"))) PPC_WEAK_FUNC(sub_8290E0D8);
PPC_FUNC_IMPL(__imp__sub_8290E0D8) {
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
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x8239d768
	ctx.lr = 0x8290E0FC;
	sub_8239D768(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8239d768
	ctx.lr = 0x8290E104;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824d51a8
	ctx.lr = 0x8290E10C;
	sub_824D51A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e11c
	if (ctx.cr0.eq) goto loc_8290E11C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8290E11C;
	sub_82332DB8(ctx, base);
loc_8290E11C:
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

__attribute__((alias("__imp__sub_8290E138"))) PPC_WEAK_FUNC(sub_8290E138);
PPC_FUNC_IMPL(__imp__sub_8290E138) {
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
	// bl 0x824f7370
	ctx.lr = 0x8290E158;
	sub_824F7370(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8290e16c
	if (ctx.cr6.eq) goto loc_8290E16C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825bc130
	ctx.lr = 0x8290E16C;
	sub_825BC130(ctx, base);
loc_8290E16C:
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

__attribute__((alias("__imp__sub_8290E188"))) PPC_WEAK_FUNC(sub_8290E188);
PPC_FUNC_IMPL(__imp__sub_8290E188) {
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
	// beq cr6,0x8290e1c0
	if (ctx.cr6.eq) goto loc_8290E1C0;
	// bl 0x824f7370
	ctx.lr = 0x8290E1B0;
	sub_824F7370(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290e1c0
	if (!ctx.cr6.eq) goto loc_8290E1C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290e1cc
	goto loc_8290E1CC;
loc_8290E1C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bc250
	ctx.lr = 0x8290E1CC;
	sub_825BC250(ctx, base);
loc_8290E1CC:
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

__attribute__((alias("__imp__sub_8290E1E8"))) PPC_WEAK_FUNC(sub_8290E1E8);
PPC_FUNC_IMPL(__imp__sub_8290E1E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x824f7370
	sub_824F7370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E1F0"))) PPC_WEAK_FUNC(sub_8290E1F0);
PPC_FUNC_IMPL(__imp__sub_8290E1F0) {
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
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x82833108
	ctx.lr = 0x8290E210;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290e274
	if (ctx.cr0.eq) goto loc_8290E274;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bc370
	ctx.lr = 0x8290E224;
	sub_825BC370(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r30,124
	ctx.r4.s64 = ctx.r30.s64 + 124;
	// addi r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 + 552;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8290E23C;
	sub_82873B58(ctx, base);
	// lfs f0,148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lfs f0,156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lfs f0,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// b 0x8290e278
	goto loc_8290E278;
loc_8290E274:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290E278:
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

__attribute__((alias("__imp__sub_8290E290"))) PPC_WEAK_FUNC(sub_8290E290);
PPC_FUNC_IMPL(__imp__sub_8290E290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-10228
	ctx.r3.s64 = ctx.r11.s64 + -10228;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E2A0"))) PPC_WEAK_FUNC(sub_8290E2A0);
PPC_FUNC_IMPL(__imp__sub_8290E2A0) {
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
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x82833108
	ctx.lr = 0x8290E2B8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290e32c
	if (ctx.cr0.eq) goto loc_8290E32C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82906cb8
	ctx.lr = 0x8290E2C8;
	sub_82906CB8(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r8,r10,24724
	ctx.r8.s64 = ctx.r10.s64 + 24724;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r7,r11,552
	ctx.r7.s64 = ctx.r11.s64 + 552;
	// lfs f12,24724(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24724);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lfs f0,-4308(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4308);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// lfs f13,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stfs f12,160(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// b 0x8290e330
	goto loc_8290E330;
loc_8290E32C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290E330:
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

__attribute__((alias("__imp__sub_8290E348"))) PPC_WEAK_FUNC(sub_8290E348);
PPC_FUNC_IMPL(__imp__sub_8290E348) {
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
	// bl 0x82889d00
	ctx.lr = 0x8290E368;
	sub_82889D00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8290e37c
	if (ctx.cr6.eq) goto loc_8290E37C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825bc130
	ctx.lr = 0x8290E37C;
	sub_825BC130(ctx, base);
loc_8290E37C:
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

__attribute__((alias("__imp__sub_8290E398"))) PPC_WEAK_FUNC(sub_8290E398);
PPC_FUNC_IMPL(__imp__sub_8290E398) {
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
	// beq cr6,0x8290e3d0
	if (ctx.cr6.eq) goto loc_8290E3D0;
	// bl 0x82889d00
	ctx.lr = 0x8290E3C0;
	sub_82889D00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290e3d0
	if (!ctx.cr6.eq) goto loc_8290E3D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290e3dc
	goto loc_8290E3DC;
loc_8290E3D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bc250
	ctx.lr = 0x8290E3DC;
	sub_825BC250(ctx, base);
loc_8290E3DC:
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

__attribute__((alias("__imp__sub_8290E3F8"))) PPC_WEAK_FUNC(sub_8290E3F8);
PPC_FUNC_IMPL(__imp__sub_8290E3F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82889d00
	sub_82889D00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E400"))) PPC_WEAK_FUNC(sub_8290E400);
PPC_FUNC_IMPL(__imp__sub_8290E400) {
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
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82833108
	ctx.lr = 0x8290E420;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290e448
	if (ctx.cr0.eq) goto loc_8290E448;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bc370
	ctx.lr = 0x8290E434;
	sub_825BC370(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1800
	ctx.r11.s64 = ctx.r11.s64 + 1800;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8290e44c
	goto loc_8290E44C;
loc_8290E448:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290E44C:
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

__attribute__((alias("__imp__sub_8290E468"))) PPC_WEAK_FUNC(sub_8290E468);
PPC_FUNC_IMPL(__imp__sub_8290E468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,22544
	ctx.r3.s64 = ctx.r11.s64 + 22544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E478"))) PPC_WEAK_FUNC(sub_8290E478);
PPC_FUNC_IMPL(__imp__sub_8290E478) {
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
	// bl 0x82889e60
	ctx.lr = 0x8290E498;
	sub_82889E60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8290e4ac
	if (ctx.cr6.eq) goto loc_8290E4AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825bc130
	ctx.lr = 0x8290E4AC;
	sub_825BC130(ctx, base);
loc_8290E4AC:
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

__attribute__((alias("__imp__sub_8290E4C8"))) PPC_WEAK_FUNC(sub_8290E4C8);
PPC_FUNC_IMPL(__imp__sub_8290E4C8) {
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
	// beq cr6,0x8290e500
	if (ctx.cr6.eq) goto loc_8290E500;
	// bl 0x82889e60
	ctx.lr = 0x8290E4F0;
	sub_82889E60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290e500
	if (!ctx.cr6.eq) goto loc_8290E500;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290e50c
	goto loc_8290E50C;
loc_8290E500:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bc250
	ctx.lr = 0x8290E50C;
	sub_825BC250(ctx, base);
loc_8290E50C:
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

__attribute__((alias("__imp__sub_8290E528"))) PPC_WEAK_FUNC(sub_8290E528);
PPC_FUNC_IMPL(__imp__sub_8290E528) {
	PPC_FUNC_PROLOGUE();
	// b 0x82889e60
	sub_82889E60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E530"))) PPC_WEAK_FUNC(sub_8290E530);
PPC_FUNC_IMPL(__imp__sub_8290E530) {
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
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82833108
	ctx.lr = 0x8290E550;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290e578
	if (ctx.cr0.eq) goto loc_8290E578;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bc370
	ctx.lr = 0x8290E564;
	sub_825BC370(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1480
	ctx.r11.s64 = ctx.r11.s64 + 1480;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8290e57c
	goto loc_8290E57C;
loc_8290E578:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290E57C:
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

__attribute__((alias("__imp__sub_8290E598"))) PPC_WEAK_FUNC(sub_8290E598);
PPC_FUNC_IMPL(__imp__sub_8290E598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,22520
	ctx.r3.s64 = ctx.r11.s64 + 22520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E5A8"))) PPC_WEAK_FUNC(sub_8290E5A8);
PPC_FUNC_IMPL(__imp__sub_8290E5A8) {
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
	// bl 0x82889260
	ctx.lr = 0x8290E5C8;
	sub_82889260(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8290e5dc
	if (ctx.cr6.eq) goto loc_8290E5DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8290e5f8
	ctx.lr = 0x8290E5DC;
	sub_8290E5F8(ctx, base);
loc_8290E5DC:
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

__attribute__((alias("__imp__sub_8290E5F8"))) PPC_WEAK_FUNC(sub_8290E5F8);
PPC_FUNC_IMPL(__imp__sub_8290E5F8) {
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
	// bl 0x828893d8
	ctx.lr = 0x8290E618;
	sub_828893D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290e628
	if (!ctx.cr6.eq) goto loc_8290E628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8290e640
	goto loc_8290E640;
loc_8290E628:
	// bl 0x824d4ae8
	ctx.lr = 0x8290E62C;
	sub_824D4AE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8290e640
	if (ctx.cr6.eq) goto loc_8290E640;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824d4c28
	ctx.lr = 0x8290E640;
	sub_824D4C28(ctx, base);
loc_8290E640:
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

__attribute__((alias("__imp__sub_8290E658"))) PPC_WEAK_FUNC(sub_8290E658);
PPC_FUNC_IMPL(__imp__sub_8290E658) {
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
	// beq cr6,0x8290e690
	if (ctx.cr6.eq) goto loc_8290E690;
	// bl 0x82889260
	ctx.lr = 0x8290E680;
	sub_82889260(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290e690
	if (!ctx.cr6.eq) goto loc_8290E690;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290e69c
	goto loc_8290E69C;
loc_8290E690:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8290e6b8
	ctx.lr = 0x8290E69C;
	sub_8290E6B8(ctx, base);
loc_8290E69C:
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

__attribute__((alias("__imp__sub_8290E6B8"))) PPC_WEAK_FUNC(sub_8290E6B8);
PPC_FUNC_IMPL(__imp__sub_8290E6B8) {
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
	// beq cr6,0x8290e6f0
	if (ctx.cr6.eq) goto loc_8290E6F0;
	// bl 0x828893d8
	ctx.lr = 0x8290E6E0;
	sub_828893D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290e6f0
	if (!ctx.cr6.eq) goto loc_8290E6F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290e6fc
	goto loc_8290E6FC;
loc_8290E6F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824d4dc8
	ctx.lr = 0x8290E6FC;
	sub_824D4DC8(ctx, base);
loc_8290E6FC:
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

__attribute__((alias("__imp__sub_8290E718"))) PPC_WEAK_FUNC(sub_8290E718);
PPC_FUNC_IMPL(__imp__sub_8290E718) {
	PPC_FUNC_PROLOGUE();
	// b 0x82889260
	sub_82889260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E720"))) PPC_WEAK_FUNC(sub_8290E720);
PPC_FUNC_IMPL(__imp__sub_8290E720) {
	PPC_FUNC_PROLOGUE();
	// b 0x828893d8
	sub_828893D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E728"))) PPC_WEAK_FUNC(sub_8290E728);
PPC_FUNC_IMPL(__imp__sub_8290E728) {
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
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82833108
	ctx.lr = 0x8290E748;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290e78c
	if (ctx.cr0.eq) goto loc_8290E78C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824d4ec8
	ctx.lr = 0x8290E75C;
	sub_824D4EC8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,3296
	ctx.r11.s64 = ctx.r11.s64 + 3296;
	// addi r10,r10,3600
	ctx.r10.s64 = ctx.r10.s64 + 3600;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f0,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// b 0x8290e790
	goto loc_8290E790;
loc_8290E78C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290E790:
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

__attribute__((alias("__imp__sub_8290E7A8"))) PPC_WEAK_FUNC(sub_8290E7A8);
PPC_FUNC_IMPL(__imp__sub_8290E7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,22492
	ctx.r3.s64 = ctx.r11.s64 + 22492;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E7B8"))) PPC_WEAK_FUNC(sub_8290E7B8);
PPC_FUNC_IMPL(__imp__sub_8290E7B8) {
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
	// bl 0x82888f80
	ctx.lr = 0x8290E7D8;
	sub_82888F80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290e7e8
	if (!ctx.cr6.eq) goto loc_8290E7E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8290e800
	goto loc_8290E800;
loc_8290E7E8:
	// bl 0x824d4ae8
	ctx.lr = 0x8290E7EC;
	sub_824D4AE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8290e800
	if (ctx.cr6.eq) goto loc_8290E800;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824d4c28
	ctx.lr = 0x8290E800;
	sub_824D4C28(ctx, base);
loc_8290E800:
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

__attribute__((alias("__imp__sub_8290E818"))) PPC_WEAK_FUNC(sub_8290E818);
PPC_FUNC_IMPL(__imp__sub_8290E818) {
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
	// beq cr6,0x8290e850
	if (ctx.cr6.eq) goto loc_8290E850;
	// bl 0x82888f80
	ctx.lr = 0x8290E840;
	sub_82888F80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290e850
	if (!ctx.cr6.eq) goto loc_8290E850;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290e85c
	goto loc_8290E85C;
loc_8290E850:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824d4dc8
	ctx.lr = 0x8290E85C;
	sub_824D4DC8(ctx, base);
loc_8290E85C:
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

__attribute__((alias("__imp__sub_8290E878"))) PPC_WEAK_FUNC(sub_8290E878);
PPC_FUNC_IMPL(__imp__sub_8290E878) {
	PPC_FUNC_PROLOGUE();
	// b 0x82888f80
	sub_82888F80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E880"))) PPC_WEAK_FUNC(sub_8290E880);
PPC_FUNC_IMPL(__imp__sub_8290E880) {
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82833108
	ctx.lr = 0x8290E8A0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290e8c8
	if (ctx.cr0.eq) goto loc_8290E8C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824d4ec8
	ctx.lr = 0x8290E8B4;
	sub_824D4EC8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,4488
	ctx.r11.s64 = ctx.r11.s64 + 4488;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8290e8cc
	goto loc_8290E8CC;
loc_8290E8C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290E8CC:
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

__attribute__((alias("__imp__sub_8290E8E8"))) PPC_WEAK_FUNC(sub_8290E8E8);
PPC_FUNC_IMPL(__imp__sub_8290E8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,22468
	ctx.r3.s64 = ctx.r11.s64 + 22468;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E8F8"))) PPC_WEAK_FUNC(sub_8290E8F8);
PPC_FUNC_IMPL(__imp__sub_8290E8F8) {
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
	// bl 0x82615908
	ctx.lr = 0x8290E918;
	sub_82615908(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290e928
	if (!ctx.cr6.eq) goto loc_8290E928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8290e940
	goto loc_8290E940;
loc_8290E928:
	// bl 0x824d4ae8
	ctx.lr = 0x8290E92C;
	sub_824D4AE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8290e940
	if (ctx.cr6.eq) goto loc_8290E940;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824d4c28
	ctx.lr = 0x8290E940;
	sub_824D4C28(ctx, base);
loc_8290E940:
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

__attribute__((alias("__imp__sub_8290E958"))) PPC_WEAK_FUNC(sub_8290E958);
PPC_FUNC_IMPL(__imp__sub_8290E958) {
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
	// beq cr6,0x8290e990
	if (ctx.cr6.eq) goto loc_8290E990;
	// bl 0x82615908
	ctx.lr = 0x8290E980;
	sub_82615908(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290e990
	if (!ctx.cr6.eq) goto loc_8290E990;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290e99c
	goto loc_8290E99C;
loc_8290E990:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824d4dc8
	ctx.lr = 0x8290E99C;
	sub_824D4DC8(ctx, base);
loc_8290E99C:
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

__attribute__((alias("__imp__sub_8290E9B8"))) PPC_WEAK_FUNC(sub_8290E9B8);
PPC_FUNC_IMPL(__imp__sub_8290E9B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82615908
	sub_82615908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E9C0"))) PPC_WEAK_FUNC(sub_8290E9C0);
PPC_FUNC_IMPL(__imp__sub_8290E9C0) {
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82833108
	ctx.lr = 0x8290E9E0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290ea08
	if (ctx.cr0.eq) goto loc_8290EA08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824d4ec8
	ctx.lr = 0x8290E9F4;
	sub_824D4EC8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,4184
	ctx.r11.s64 = ctx.r11.s64 + 4184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8290ea0c
	goto loc_8290EA0C;
loc_8290EA08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290EA0C:
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

__attribute__((alias("__imp__sub_8290EA28"))) PPC_WEAK_FUNC(sub_8290EA28);
PPC_FUNC_IMPL(__imp__sub_8290EA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,-22948
	ctx.r3.s64 = ctx.r11.s64 + -22948;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290EA38"))) PPC_WEAK_FUNC(sub_8290EA38);
PPC_FUNC_IMPL(__imp__sub_8290EA38) {
	PPC_FUNC_PROLOGUE();
	// b 0x824d4ae8
	sub_824D4AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290EA40"))) PPC_WEAK_FUNC(sub_8290EA40);
PPC_FUNC_IMPL(__imp__sub_8290EA40) {
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
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82833108
	ctx.lr = 0x8290EA60;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290ea90
	if (ctx.cr0.eq) goto loc_8290EA90;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824d4ec8
	ctx.lr = 0x8290EA74;
	sub_824D4EC8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3296
	ctx.r11.s64 = ctx.r11.s64 + 3296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x8290ea94
	goto loc_8290EA94;
loc_8290EA90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290EA94:
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

__attribute__((alias("__imp__sub_8290EAB0"))) PPC_WEAK_FUNC(sub_8290EAB0);
PPC_FUNC_IMPL(__imp__sub_8290EAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290EAC0"))) PPC_WEAK_FUNC(sub_8290EAC0);
PPC_FUNC_IMPL(__imp__sub_8290EAC0) {
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
	// bl 0x82889a60
	ctx.lr = 0x8290EAE0;
	sub_82889A60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290eaf0
	if (!ctx.cr6.eq) goto loc_8290EAF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8290eb08
	goto loc_8290EB08;
loc_8290EAF0:
	// bl 0x824d4ae8
	ctx.lr = 0x8290EAF4;
	sub_824D4AE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8290eb08
	if (ctx.cr6.eq) goto loc_8290EB08;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824d4c28
	ctx.lr = 0x8290EB08;
	sub_824D4C28(ctx, base);
loc_8290EB08:
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

__attribute__((alias("__imp__sub_8290EB20"))) PPC_WEAK_FUNC(sub_8290EB20);
PPC_FUNC_IMPL(__imp__sub_8290EB20) {
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
	// beq cr6,0x8290eb58
	if (ctx.cr6.eq) goto loc_8290EB58;
	// bl 0x82889a60
	ctx.lr = 0x8290EB48;
	sub_82889A60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290eb58
	if (!ctx.cr6.eq) goto loc_8290EB58;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290eb64
	goto loc_8290EB64;
loc_8290EB58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824d4dc8
	ctx.lr = 0x8290EB64;
	sub_824D4DC8(ctx, base);
loc_8290EB64:
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

__attribute__((alias("__imp__sub_8290EB80"))) PPC_WEAK_FUNC(sub_8290EB80);
PPC_FUNC_IMPL(__imp__sub_8290EB80) {
	PPC_FUNC_PROLOGUE();
	// b 0x82889a60
	sub_82889A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290EB88"))) PPC_WEAK_FUNC(sub_8290EB88);
PPC_FUNC_IMPL(__imp__sub_8290EB88) {
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
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82833108
	ctx.lr = 0x8290EBA8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290ebd8
	if (ctx.cr0.eq) goto loc_8290EBD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824d4ec8
	ctx.lr = 0x8290EBBC;
	sub_824D4EC8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2704
	ctx.r11.s64 = ctx.r11.s64 + 2704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x8290ebdc
	goto loc_8290EBDC;
loc_8290EBD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290EBDC:
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

__attribute__((alias("__imp__sub_8290EBF8"))) PPC_WEAK_FUNC(sub_8290EBF8);
PPC_FUNC_IMPL(__imp__sub_8290EBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,22428
	ctx.r3.s64 = ctx.r11.s64 + 22428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290EC08"))) PPC_WEAK_FUNC(sub_8290EC08);
PPC_FUNC_IMPL(__imp__sub_8290EC08) {
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
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82833108
	ctx.lr = 0x8290EC20;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290ec4c
	if (ctx.cr0.eq) goto loc_8290EC4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824d4a38
	ctx.lr = 0x8290EC30;
	sub_824D4A38(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,2704
	ctx.r11.s64 = ctx.r11.s64 + 2704;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8290ec50
	goto loc_8290EC50;
loc_8290EC4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290EC50:
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

__attribute__((alias("__imp__sub_8290EC68"))) PPC_WEAK_FUNC(sub_8290EC68);
PPC_FUNC_IMPL(__imp__sub_8290EC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8290EC70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r27,16(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8290ecb4
	if (!ctx.cr6.gt) goto loc_8290ECB4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8290EC90:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 + 40;
	// bl 0x82339860
	ctx.lr = 0x8290ECA0;
	sub_82339860(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8239d768
	ctx.lr = 0x8290ECA8;
	sub_8239D768(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// bne 0x8290ec90
	if (!ctx.cr0.eq) goto loc_8290EC90;
loc_8290ECB4:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8290ECCC;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290ecdc
	if (ctx.cr6.eq) goto loc_8290ECDC;
	// bl 0x82332db8
	ctx.lr = 0x8290ECDC;
	sub_82332DB8(ctx, base);
loc_8290ECDC:
	// stw r26,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r26.u32);
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
	// stw r26,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290ECF0"))) PPC_WEAK_FUNC(sub_8290ECF0);
PPC_FUNC_IMPL(__imp__sub_8290ECF0) {
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
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82339860
	ctx.lr = 0x8290ED14;
	sub_82339860(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8290ec68
	ctx.lr = 0x8290ED1C;
	sub_8290EC68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824d51a8
	ctx.lr = 0x8290ED24;
	sub_824D51A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290ed34
	if (ctx.cr0.eq) goto loc_8290ED34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8290ED34;
	sub_82332DB8(ctx, base);
loc_8290ED34:
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

__attribute__((alias("__imp__sub_8290ED50"))) PPC_WEAK_FUNC(sub_8290ED50);
PPC_FUNC_IMPL(__imp__sub_8290ED50) {
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
	// bl 0x82889b68
	ctx.lr = 0x8290ED70;
	sub_82889B68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290ed80
	if (!ctx.cr6.eq) goto loc_8290ED80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8290ed98
	goto loc_8290ED98;
loc_8290ED80:
	// bl 0x824d4ae8
	ctx.lr = 0x8290ED84;
	sub_824D4AE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8290ed98
	if (ctx.cr6.eq) goto loc_8290ED98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824d4c28
	ctx.lr = 0x8290ED98;
	sub_824D4C28(ctx, base);
loc_8290ED98:
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

__attribute__((alias("__imp__sub_8290EDB0"))) PPC_WEAK_FUNC(sub_8290EDB0);
PPC_FUNC_IMPL(__imp__sub_8290EDB0) {
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
	// beq cr6,0x8290ede8
	if (ctx.cr6.eq) goto loc_8290EDE8;
	// bl 0x82889b68
	ctx.lr = 0x8290EDD8;
	sub_82889B68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290ede8
	if (!ctx.cr6.eq) goto loc_8290EDE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290edf4
	goto loc_8290EDF4;
loc_8290EDE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824d4dc8
	ctx.lr = 0x8290EDF4;
	sub_824D4DC8(ctx, base);
loc_8290EDF4:
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

__attribute__((alias("__imp__sub_8290EE10"))) PPC_WEAK_FUNC(sub_8290EE10);
PPC_FUNC_IMPL(__imp__sub_8290EE10) {
	PPC_FUNC_PROLOGUE();
	// b 0x82889b68
	sub_82889B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290EE18"))) PPC_WEAK_FUNC(sub_8290EE18);
PPC_FUNC_IMPL(__imp__sub_8290EE18) {
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
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82833108
	ctx.lr = 0x8290EE34;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290ee48
	if (ctx.cr0.eq) goto loc_8290EE48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8290ee60
	ctx.lr = 0x8290EE44;
	sub_8290EE60(ctx, base);
	// b 0x8290ee4c
	goto loc_8290EE4C;
loc_8290EE48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290EE4C:
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

__attribute__((alias("__imp__sub_8290EE60"))) PPC_WEAK_FUNC(sub_8290EE60);
PPC_FUNC_IMPL(__imp__sub_8290EE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8290EE68;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x824d4ec8
	ctx.lr = 0x8290EE78;
	sub_824D4EC8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,2120
	ctx.r11.s64 = ctx.r11.s64 + 2120;
	// addi r31,r25,88
	ctx.r31.s64 = ctx.r25.s64 + 88;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r28,r24,88
	ctx.r28.s64 = ctx.r24.s64 + 88;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r30,96(r25)
	PPC_STORE_U32(ctx.r25.u32 + 96, ctx.r30.u32);
	// stw r30,100(r25)
	PPC_STORE_U32(ctx.r25.u32 + 100, ctx.r30.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stw r11,92(r25)
	PPC_STORE_U32(ctx.r25.u32 + 92, ctx.r11.u32);
	// stw r30,104(r25)
	PPC_STORE_U32(ctx.r25.u32 + 104, ctx.r30.u32);
	// stw r30,108(r25)
	PPC_STORE_U32(ctx.r25.u32 + 108, ctx.r30.u32);
	// stw r30,88(r25)
	PPC_STORE_U32(ctx.r25.u32 + 88, ctx.r30.u32);
	// beq cr6,0x8290ef6c
	if (ctx.cr6.eq) goto loc_8290EF6C;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290ef6c
	if (!ctx.cr6.gt) goto loc_8290EF6C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290eee0
	if (ctx.cr0.eq) goto loc_8290EEE0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8290EEE0;
	sub_82332C38(ctx, base);
loc_8290EEE0:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290ef6c
	if (!ctx.cr6.gt) goto loc_8290EF6C;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8290EEF4:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x8290EF08;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8290ef58
	if (ctx.cr0.eq) goto loc_8290EF58;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82873b58
	ctx.lr = 0x8290EF2C;
	sub_82873B58(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// lfs f0,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// bl 0x823397c0
	ctx.lr = 0x8290EF58;
	sub_823397C0(ctx, base);
loc_8290EF58:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290eef4
	if (ctx.cr6.lt) goto loc_8290EEF4;
loc_8290EF6C:
	// addi r4,r24,112
	ctx.r4.s64 = ctx.r24.s64 + 112;
	// addi r3,r25,112
	ctx.r3.s64 = ctx.r25.s64 + 112;
	// bl 0x823397c0
	ctx.lr = 0x8290EF78;
	sub_823397C0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290EF88"))) PPC_WEAK_FUNC(sub_8290EF88);
PPC_FUNC_IMPL(__imp__sub_8290EF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,22404
	ctx.r3.s64 = ctx.r11.s64 + 22404;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290EF98"))) PPC_WEAK_FUNC(sub_8290EF98);
PPC_FUNC_IMPL(__imp__sub_8290EF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8290EFA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r30,176
	ctx.r3.s64 = ctx.r30.s64 + 176;
	// bl 0x825c3bc0
	ctx.lr = 0x8290EFB4;
	sub_825C3BC0(ctx, base);
	// addi r3,r30,152
	ctx.r3.s64 = ctx.r30.s64 + 152;
	// bl 0x82339860
	ctx.lr = 0x8290EFBC;
	sub_82339860(ctx, base);
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,112(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// li r6,224
	ctx.r6.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8290EFD8;
	sub_82332CA8(ctx, base);
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290efe8
	if (ctx.cr6.eq) goto loc_8290EFE8;
	// bl 0x82332db8
	ctx.lr = 0x8290EFE8;
	sub_82332DB8(ctx, base);
loc_8290EFE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x824d51a8
	ctx.lr = 0x8290F000;
	sub_824D51A8(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290f010
	if (ctx.cr0.eq) goto loc_8290F010;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x8290F010;
	sub_82332DB8(ctx, base);
loc_8290F010:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290F020"))) PPC_WEAK_FUNC(sub_8290F020);
PPC_FUNC_IMPL(__imp__sub_8290F020) {
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
	// bl 0x82889fc0
	ctx.lr = 0x8290F040;
	sub_82889FC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290f050
	if (!ctx.cr6.eq) goto loc_8290F050;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8290f068
	goto loc_8290F068;
loc_8290F050:
	// bl 0x824d4ae8
	ctx.lr = 0x8290F054;
	sub_824D4AE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8290f068
	if (ctx.cr6.eq) goto loc_8290F068;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824d4c28
	ctx.lr = 0x8290F068;
	sub_824D4C28(ctx, base);
loc_8290F068:
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

__attribute__((alias("__imp__sub_8290F080"))) PPC_WEAK_FUNC(sub_8290F080);
PPC_FUNC_IMPL(__imp__sub_8290F080) {
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
	// beq cr6,0x8290f0b8
	if (ctx.cr6.eq) goto loc_8290F0B8;
	// bl 0x82889fc0
	ctx.lr = 0x8290F0A8;
	sub_82889FC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8290f0b8
	if (!ctx.cr6.eq) goto loc_8290F0B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290f0c4
	goto loc_8290F0C4;
loc_8290F0B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824d4dc8
	ctx.lr = 0x8290F0C4;
	sub_824D4DC8(ctx, base);
loc_8290F0C4:
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

__attribute__((alias("__imp__sub_8290F0E0"))) PPC_WEAK_FUNC(sub_8290F0E0);
PPC_FUNC_IMPL(__imp__sub_8290F0E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82889fc0
	sub_82889FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290F0E8"))) PPC_WEAK_FUNC(sub_8290F0E8);
PPC_FUNC_IMPL(__imp__sub_8290F0E8) {
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
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x82833108
	ctx.lr = 0x8290F104;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290f118
	if (ctx.cr0.eq) goto loc_8290F118;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8290f130
	ctx.lr = 0x8290F114;
	sub_8290F130(ctx, base);
	// b 0x8290f11c
	goto loc_8290F11C;
loc_8290F118:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290F11C:
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

__attribute__((alias("__imp__sub_8290F130"))) PPC_WEAK_FUNC(sub_8290F130);
PPC_FUNC_IMPL(__imp__sub_8290F130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8290F138;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x824d4ec8
	ctx.lr = 0x8290F148;
	sub_824D4EC8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,1184
	ctx.r11.s64 = ctx.r11.s64 + 1184;
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r27,r28,96
	ctx.r27.s64 = ctx.r28.s64 + 96;
	// lwz r10,88(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// li r11,224
	ctx.r11.s64 = 224;
	// stw r10,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r10.u32);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// lwz r10,92(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// stw r10,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r10.u32);
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// stw r29,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r29.u32);
	// stw r29,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r29.u32);
	// stw r29,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r29.u32);
	// stw r29,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r29.u32);
	// stw r29,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r29.u32);
	// beq cr6,0x8290f218
	if (ctx.cr6.eq) goto loc_8290F218;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290f218
	if (!ctx.cr6.gt) goto loc_8290F218;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290f1c0
	if (ctx.cr0.eq) goto loc_8290F1C0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8290F1C0;
	sub_82332C38(ctx, base);
loc_8290F1C0:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290f218
	if (!ctx.cr6.gt) goto loc_8290F218;
loc_8290F1D0:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x8290F1E4;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,224
	ctx.r10.s64 = ctx.r3.s64 * 224;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8290f204
	if (ctx.cr0.eq) goto loc_8290F204;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r5,224
	ctx.r5.s64 = 224;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8290F204;
	sub_82A4EA80(ctx, base);
loc_8290F204:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,224
	ctx.r29.s64 = ctx.r29.s64 + 224;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290f1d0
	if (ctx.cr6.lt) goto loc_8290F1D0;
loc_8290F218:
	// lwz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// addi r4,r28,152
	ctx.r4.s64 = ctx.r28.s64 + 152;
	// addi r3,r30,152
	ctx.r3.s64 = ctx.r30.s64 + 152;
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
	// lwz r11,124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// lwz r11,140(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// stw r11,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r11.u32);
	// lwz r11,144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// stw r11,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r11.u32);
	// lwz r11,148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// stw r11,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r11.u32);
	// bl 0x823397c0
	ctx.lr = 0x8290F264;
	sub_823397C0(ctx, base);
	// addi r4,r28,176
	ctx.r4.s64 = ctx.r28.s64 + 176;
	// addi r3,r30,176
	ctx.r3.s64 = ctx.r30.s64 + 176;
	// bl 0x825c3ae0
	ctx.lr = 0x8290F270;
	sub_825C3AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290F280"))) PPC_WEAK_FUNC(sub_8290F280);
PPC_FUNC_IMPL(__imp__sub_8290F280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,22384
	ctx.r3.s64 = ctx.r11.s64 + 22384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290F290"))) PPC_WEAK_FUNC(sub_8290F290);
PPC_FUNC_IMPL(__imp__sub_8290F290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,120(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// lwz r10,124(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290F2A8"))) PPC_WEAK_FUNC(sub_8290F2A8);
PPC_FUNC_IMPL(__imp__sub_8290F2A8) {
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
	// bl 0x829045a0
	ctx.lr = 0x8290F2C8;
	sub_829045A0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290f2d8
	if (ctx.cr0.eq) goto loc_8290F2D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8290F2D8;
	sub_82332DB8(ctx, base);
loc_8290F2D8:
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

__attribute__((alias("__imp__sub_8290F2F8"))) PPC_WEAK_FUNC(sub_8290F2F8);
PPC_FUNC_IMPL(__imp__sub_8290F2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8290F300;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,13024(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
loc_8290F324:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// bl 0x825aab30
	ctx.lr = 0x8290F338;
	sub_825AAB30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290f3d4
	if (ctx.cr0.eq) goto loc_8290F3D4;
	// lwz r11,1692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8290f38c
	if (ctx.cr6.eq) goto loc_8290F38C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8290f38c
	if (ctx.cr6.eq) goto loc_8290F38C;
	// lwz r9,232(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8290f3d4
	if (!ctx.cr6.gt) goto loc_8290F3D4;
	// lwz r8,1412(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
loc_8290F36C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8290f3c0
	if (ctx.cr6.eq) goto loc_8290F3C0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8290f36c
	if (ctx.cr6.lt) goto loc_8290F36C;
	// b 0x8290f3d4
	goto loc_8290F3D4;
loc_8290F38C:
	// lwz r9,208(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8290f3d4
	if (!ctx.cr6.gt) goto loc_8290F3D4;
loc_8290F3A0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8290f3c0
	if (ctx.cr6.eq) goto loc_8290F3C0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8290f3a0
	if (ctx.cr6.lt) goto loc_8290F3A0;
	// b 0x8290f3d4
	goto loc_8290F3D4;
loc_8290F3C0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8290f3d0
	if (!ctx.cr6.eq) goto loc_8290F3D0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x8290f3d4
	goto loc_8290F3D4;
loc_8290F3D0:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_8290F3D4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x8290f324
	if (ctx.cr6.lt) goto loc_8290F324;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8290f464
	if (ctx.cr6.eq) goto loc_8290F464;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8290f464
	if (ctx.cr6.lt) goto loc_8290F464;
	// srawi r11,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 5;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// beq cr6,0x8290f438
	if (ctx.cr6.eq) goto loc_8290F438;
	// lwz r9,20(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8290f464
	if (!ctx.cr6.lt) goto loc_8290F464;
	// lwz r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290f464
	if (ctx.cr0.eq) goto loc_8290F464;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290f468
	goto loc_8290F468;
loc_8290F438:
	// lwz r9,44(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8290f464
	if (!ctx.cr6.lt) goto loc_8290F464;
	// lwz r9,40(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8290f468
	if (!ctx.cr0.eq) goto loc_8290F468;
loc_8290F464:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290F468:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290F470"))) PPC_WEAK_FUNC(sub_8290F470);
PPC_FUNC_IMPL(__imp__sub_8290F470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8290F478;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,208(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 208);
	// lwz r11,204(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 204);
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8290f4ec
	if (ctx.cr0.lt) goto loc_8290F4EC;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
loc_8290F498:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r26,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8290f4bc
	if (ctx.cr6.eq) goto loc_8290F4BC;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,-20
	ctx.r3.s64 = ctx.r31.s64 + -20;
	// bl 0x82332c38
	ctx.lr = 0x8290F4BC;
	sub_82332C38(ctx, base);
loc_8290F4BC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8290f4e0
	if (ctx.cr6.eq) goto loc_8290F4E0;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82332c38
	ctx.lr = 0x8290F4E0;
	sub_82332C38(ctx, base);
loc_8290F4E0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// bge 0x8290f498
	if (!ctx.cr0.lt) goto loc_8290F498;
loc_8290F4EC:
	// lwz r10,232(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 232);
	// lwz r11,228(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 228);
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8290f554
	if (ctx.cr0.lt) goto loc_8290F554;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
loc_8290F500:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r26,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8290f524
	if (ctx.cr6.eq) goto loc_8290F524;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,-20
	ctx.r3.s64 = ctx.r31.s64 + -20;
	// bl 0x82332c38
	ctx.lr = 0x8290F524;
	sub_82332C38(ctx, base);
loc_8290F524:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8290f548
	if (ctx.cr6.eq) goto loc_8290F548;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82332c38
	ctx.lr = 0x8290F548;
	sub_82332C38(ctx, base);
loc_8290F548:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// bge 0x8290f500
	if (!ctx.cr0.lt) goto loc_8290F500;
loc_8290F554:
	// lwz r11,208(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 208);
	// addi r25,r24,192
	ctx.r25.s64 = ctx.r24.s64 + 192;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290f59c
	if (!ctx.cr6.gt) goto loc_8290F59C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8290F570:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x8239d768
	ctx.lr = 0x8290F580;
	sub_8239D768(ctx, base);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8239d768
	ctx.lr = 0x8290F588;
	sub_8239D768(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290f570
	if (ctx.cr6.lt) goto loc_8290F570;
loc_8290F59C:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// stw r26,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r26.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x8290f5c0
	if (ctx.cr6.eq) goto loc_8290F5C0;
	// stw r28,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332c38
	ctx.lr = 0x8290F5C0;
	sub_82332C38(ctx, base);
loc_8290F5C0:
	// lwz r11,232(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 232);
	// addi r28,r24,216
	ctx.r28.s64 = ctx.r24.s64 + 216;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290f608
	if (!ctx.cr6.gt) goto loc_8290F608;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8290F5DC:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x8239d768
	ctx.lr = 0x8290F5EC;
	sub_8239D768(ctx, base);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8239d768
	ctx.lr = 0x8290F5F4;
	sub_8239D768(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290f5dc
	if (ctx.cr6.lt) goto loc_8290F5DC;
loc_8290F608:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r26,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r26.u32);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8290f62c
	if (ctx.cr6.eq) goto loc_8290F62C;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x8290F62C;
	sub_82332C38(ctx, base);
loc_8290F62C:
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8290f700
	if (!ctx.cr6.gt) goto loc_8290F700;
loc_8290F648:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290f6e4
	if (ctx.cr6.eq) goto loc_8290F6E4;
	// bl 0x824381f0
	ctx.lr = 0x8290F65C;
	sub_824381F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290f6e4
	if (ctx.cr0.eq) goto loc_8290F6E4;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8290f6e4
	if (!ctx.cr0.eq) goto loc_8290F6E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290F684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8290f6e4
	if (ctx.cr0.eq) goto loc_8290F6E4;
	// lwz r11,1692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8290f6e4
	if (ctx.cr6.eq) goto loc_8290F6E4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x8290f6bc
	if (!ctx.cr6.eq) goto loc_8290F6BC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332d50
	ctx.lr = 0x8290F6B4;
	sub_82332D50(ctx, base);
	// lwz r10,204(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 204);
	// b 0x8290f6c8
	goto loc_8290F6C8;
loc_8290F6BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x8290F6C4;
	sub_82332D50(ctx, base);
	// lwz r10,228(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 228);
loc_8290F6C8:
	// mulli r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 * 56;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a455d0
	ctx.lr = 0x8290F6E0;
	sub_82A455D0(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_8290F6E4:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8290f648
	if (ctx.cr6.lt) goto loc_8290F648;
loc_8290F700:
	// lwz r4,208(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 208);
	// lwz r3,204(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 204);
	// bl 0x8290fb90
	ctx.lr = 0x8290F70C;
	sub_8290FB90(ctx, base);
	// lwz r4,232(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 232);
	// lwz r3,228(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 228);
	// bl 0x8290fb90
	ctx.lr = 0x8290F718;
	sub_8290FB90(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290F720"))) PPC_WEAK_FUNC(sub_8290F720);
PPC_FUNC_IMPL(__imp__sub_8290F720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x8290F728;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r31,13024(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290f470
	ctx.lr = 0x8290F744;
	sub_8290F470(ctx, base);
	// lwz r9,232(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290f8f0
	if (ctx.cr0.eq) goto loc_8290F8F0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// li r21,0
	ctx.r21.s64 = 0;
loc_8290F770:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8290f7cc
	if (!ctx.cr6.lt) goto loc_8290F7CC;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwzx r10,r11,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8290f7cc
	if (ctx.cr6.eq) goto loc_8290F7CC;
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8290f7b4
	if (!ctx.cr6.lt) goto loc_8290F7B4;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290f7b4
	if (ctx.cr6.eq) goto loc_8290F7B4;
	// lfs f0,1540(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1540);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1540);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8290f7cc
	if (!ctx.cr6.gt) goto loc_8290F7CC;
loc_8290F7B4:
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// addi r30,r31,192
	ctx.r30.s64 = ctx.r31.s64 + 192;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r21,r21,56
	ctx.r21.s64 = ctx.r21.s64 + 56;
	// b 0x8290f7e0
	goto loc_8290F7E0;
loc_8290F7CC:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r30,r31,216
	ctx.r30.s64 = ctx.r31.s64 + 216;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r22,r22,56
	ctx.r22.s64 = ctx.r22.s64 + 56;
loc_8290F7E0:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8290f8a8
	if (ctx.cr6.eq) goto loc_8290F8A8;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r28,r31,192
	ctx.r28.s64 = ctx.r31.s64 + 192;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stfs f31,1540(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1540, temp.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,1544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1544, ctx.r9.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8290f858
	if (!ctx.cr6.lt) goto loc_8290F858;
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8290F828:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290f900
	ctx.lr = 0x8290F844;
	sub_8290F900(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r23,r3,r23
	ctx.r23.u64 = ctx.r3.u64 + ctx.r23.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290f828
	if (ctx.cr6.lt) goto loc_8290F828;
loc_8290F858:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r28,r31,216
	ctx.r28.s64 = ctx.r31.s64 + 216;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8290f8a8
	if (!ctx.cr6.lt) goto loc_8290F8A8;
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8290F878:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290f900
	ctx.lr = 0x8290F894;
	sub_8290F900(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r23,r3,r23
	ctx.r23.u64 = ctx.r3.u64 + ctx.r23.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290f878
	if (ctx.cr6.lt) goto loc_8290F878;
loc_8290F8A8:
	// cmpwi cr6,r23,20
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 20, ctx.xer);
	// ble cr6,0x8290f8b4
	if (!ctx.cr6.gt) goto loc_8290F8B4;
	// li r20,1
	ctx.r20.s64 = 1;
loc_8290F8B4:
	// lwz r9,232(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8290f8d0
	if (!ctx.cr6.eq) goto loc_8290F8D0;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8290f8d0
	if (!ctx.cr6.eq) goto loc_8290F8D0;
	// li r20,1
	ctx.r20.s64 = 1;
loc_8290F8D0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x8290f770
	if (ctx.cr6.eq) goto loc_8290F770;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290F8F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290F8F0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290F900"))) PPC_WEAK_FUNC(sub_8290F900);
PPC_FUNC_IMPL(__imp__sub_8290F900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x8290F908;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mulli r27,r29,56
	ctx.r27.s64 = ctx.r29.s64 * 56;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwzx r11,r10,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// mulli r26,r28,56
	ctx.r26.s64 = ctx.r28.s64 * 56;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lwzx r8,r26,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290fa60
	if (ctx.cr6.eq) goto loc_8290FA60;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8290fa60
	if (ctx.cr6.eq) goto loc_8290FA60;
	// lwz r11,1608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8290fa60
	if (ctx.cr6.eq) goto loc_8290FA60;
	// lwz r11,1608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8290fa60
	if (ctx.cr6.eq) goto loc_8290FA60;
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// li r22,2
	ctx.r22.s64 = 2;
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8290f990
	if (ctx.cr6.eq) goto loc_8290F990;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8290f990
	if (ctx.cr6.eq) goto loc_8290F990;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8290f9e4
	if (!ctx.cr6.eq) goto loc_8290F9E4;
loc_8290F990:
	// lwzx r11,r10,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r21,r26,r9
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// lwz r20,1608(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// bl 0x82a46740
	ctx.lr = 0x8290F9A4;
	sub_82A46740(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x828a95f0
	ctx.lr = 0x8290F9B4;
	sub_828A95F0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a46740
	ctx.lr = 0x8290F9C0;
	sub_82A46740(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8290f9e4
	if (ctx.cr6.eq) goto loc_8290F9E4;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8290fa70
	ctx.lr = 0x8290F9E4;
	sub_8290FA70(ctx, base);
loc_8290F9E4:
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8290fa04
	if (ctx.cr6.eq) goto loc_8290FA04;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8290fa04
	if (ctx.cr6.eq) goto loc_8290FA04;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8290fa60
	if (!ctx.cr6.eq) goto loc_8290FA60;
loc_8290FA04:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwzx r27,r10,r27
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwz r26,1608(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// bl 0x82a46740
	ctx.lr = 0x8290FA20;
	sub_82A46740(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828a95f0
	ctx.lr = 0x8290FA30;
	sub_828A95F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a46740
	ctx.lr = 0x8290FA3C;
	sub_82A46740(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8290fa60
	if (ctx.cr6.eq) goto loc_8290FA60;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8290fa70
	ctx.lr = 0x8290FA60;
	sub_8290FA70(ctx, base);
loc_8290FA60:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290FA70"))) PPC_WEAK_FUNC(sub_8290FA70);
PPC_FUNC_IMPL(__imp__sub_8290FA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8290FA78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mulli r27,r5,56
	ctx.r27.s64 = ctx.r5.s64 * 56;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// beq cr6,0x8290fb04
	if (ctx.cr6.eq) goto loc_8290FB04;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290fae4
	if (ctx.cr6.lt) goto loc_8290FAE4;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// li r6,8
	ctx.r6.s64 = 8;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x8290FACC;
	sub_82332D50(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x8290FAE4;
	sub_82A455D0(ctx, base);
loc_8290FAE4:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// b 0x8290fb6c
	goto loc_8290FB6C;
loc_8290FB04:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290fb50
	if (ctx.cr6.lt) goto loc_8290FB50;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// li r6,8
	ctx.r6.s64 = 8;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x8290FB38;
	sub_82332D50(ctx, base);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a455d0
	ctx.lr = 0x8290FB50;
	sub_82A455D0(ctx, base);
loc_8290FB50:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
loc_8290FB6C:
	// subf r8,r7,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r7.s64;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290FB90"))) PPC_WEAK_FUNC(sub_8290FB90);
PPC_FUNC_IMPL(__imp__sub_8290FB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8290FB98;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x8290fd84
	if (ctx.cr6.lt) goto loc_8290FD84;
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,248
	ctx.r5.s64 = 248;
	// addi r11,r11,-56
	ctx.r11.s64 = ctx.r11.s64 + -56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x8290FBC8;
	sub_82A4EFB0(ctx, base);
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// li r26,56
	ctx.r26.s64 = 56;
loc_8290FBD0:
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8290fcf8
	goto loc_8290FCF8;
loc_8290FBE4:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mulli r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 * 56;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8290fd90
	ctx.lr = 0x8290FBFC;
	sub_8290FD90(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r29,r30,56
	ctx.r29.s64 = ctx.r30.s64 + 56;
loc_8290FC04:
	// addi r28,r28,56
	ctx.r28.s64 = ctx.r28.s64 + 56;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x8290fc38
	if (ctx.cr6.gt) goto loc_8290FC38;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,1540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1540);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1540);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290fc04
	if (!ctx.cr6.gt) goto loc_8290FC04;
loc_8290FC38:
	// addi r29,r29,-56
	ctx.r29.s64 = ctx.r29.s64 + -56;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8290fc6c
	if (!ctx.cr6.gt) goto loc_8290FC6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f0,1540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1540);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1540);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8290fc38
	if (!ctx.cr6.lt) goto loc_8290FC38;
loc_8290FC6C:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bgt cr6,0x8290fc84
	if (ctx.cr6.gt) goto loc_8290FC84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8290fd90
	ctx.lr = 0x8290FC80;
	sub_8290FD90(ctx, base);
	// b 0x8290fc04
	goto loc_8290FC04;
loc_8290FC84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290fd90
	ctx.lr = 0x8290FC8C;
	sub_8290FD90(ctx, base);
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// subf r10,r28,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r28.s64;
	// addi r11,r11,-56
	ctx.r11.s64 = ctx.r11.s64 + -56;
	// divw r10,r10,r26
	ctx.r10.s32 = ctx.r10.s32 / ctx.r26.s32;
	// divw r11,r11,r26
	ctx.r11.s32 = ctx.r11.s32 / ctx.r26.s32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8290fcd4
	if (ctx.cr6.lt) goto loc_8290FCD4;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8290fcc4
	if (!ctx.cr6.lt) goto loc_8290FCC4;
	// addi r11,r29,-56
	ctx.r11.s64 = ctx.r29.s64 + -56;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
loc_8290FCC4:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x8290fd74
	if (!ctx.cr6.gt) goto loc_8290FD74;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x8290fcf8
	goto loc_8290FCF8;
loc_8290FCD4:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x8290fce8
	if (!ctx.cr6.gt) goto loc_8290FCE8;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// stw r30,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r30.u32);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
loc_8290FCE8:
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8290fd74
	if (!ctx.cr6.lt) goto loc_8290FD74;
	// addi r30,r29,-56
	ctx.r30.s64 = ctx.r29.s64 + -56;
loc_8290FCF8:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// divw r11,r11,r26
	ctx.r11.s32 = ctx.r11.s32 / ctx.r26.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8290fbe4
	if (ctx.cr6.gt) goto loc_8290FBE4;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8290fd74
	if (!ctx.cr6.gt) goto loc_8290FD74;
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
loc_8290FD18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x8290fd60
	if (ctx.cr6.gt) goto loc_8290FD60;
loc_8290FD28:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,1540(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1540);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1540);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8290fd54
	if (!ctx.cr6.gt) goto loc_8290FD54;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8290FD54:
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8290fd28
	if (!ctx.cr6.gt) goto loc_8290FD28;
loc_8290FD60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8290fd90
	ctx.lr = 0x8290FD68;
	sub_8290FD90(ctx, base);
	// addi r30,r30,-56
	ctx.r30.s64 = ctx.r30.s64 + -56;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8290fd18
	if (ctx.cr6.gt) goto loc_8290FD18;
loc_8290FD74:
	// addi r27,r27,-8
	ctx.r27.s64 = ctx.r27.s64 + -8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8290fbd0
	if (!ctx.cr6.lt) goto loc_8290FBD0;
loc_8290FD84:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290FD90"))) PPC_WEAK_FUNC(sub_8290FD90);
PPC_FUNC_IMPL(__imp__sub_8290FD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8290FD98;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8290FDBC;
	sub_82873B58(ctx, base);
	// addi r28,r31,28
	ctx.r28.s64 = ctx.r31.s64 + 28;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82873b58
	ctx.lr = 0x8290FDCC;
	sub_82873B58(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r26,52(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// bl 0x828e0f90
	ctx.lr = 0x8290FDEC;
	sub_828E0F90(ctx, base);
	// addi r29,r30,28
	ctx.r29.s64 = ctx.r30.s64 + 28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828e0f90
	ctx.lr = 0x8290FDFC;
	sub_828E0F90(ctx, base);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x828e0f90
	ctx.lr = 0x8290FE18;
	sub_828E0F90(ctx, base);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e0f90
	ctx.lr = 0x8290FE24;
	sub_828E0F90(ctx, base);
	// stw r26,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r26.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8239d768
	ctx.lr = 0x8290FE30;
	sub_8239D768(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8239d768
	ctx.lr = 0x8290FE38;
	sub_8239D768(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290FE40"))) PPC_WEAK_FUNC(sub_8290FE40);
PPC_FUNC_IMPL(__imp__sub_8290FE40) {
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
	// addi r11,r11,-14256
	ctx.r11.s64 = ctx.r11.s64 + -14256;
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
	// ble cr6,0x8290feac
	if (!ctx.cr6.gt) goto loc_8290FEAC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8290FE7C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8290fe9c
	if (ctx.cr6.eq) goto loc_8290FE9C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8290fe7c
	if (ctx.cr6.lt) goto loc_8290FE7C;
	// b 0x8290feac
	goto loc_8290FEAC;
loc_8290FE9C:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_8290FEAC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8290fed4
	if (ctx.cr6.eq) goto loc_8290FED4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290FECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290fed8
	goto loc_8290FED8;
loc_8290FED4:
	// bl 0x829bc030
	ctx.lr = 0x8290FED8;
	sub_829BC030(ctx, base);
loc_8290FED8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290FEE8"))) PPC_WEAK_FUNC(sub_8290FEE8);
PPC_FUNC_IMPL(__imp__sub_8290FEE8) {
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
	// addi r11,r11,-14256
	ctx.r11.s64 = ctx.r11.s64 + -14256;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8290ff48
	if (!ctx.cr6.gt) goto loc_8290FF48;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8290FF14:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8290ff34
	if (ctx.cr6.eq) goto loc_8290FF34;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8290ff14
	if (ctx.cr6.lt) goto loc_8290FF14;
	// b 0x8290ff48
	goto loc_8290FF48;
loc_8290FF34:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290ff50
	if (!ctx.cr6.eq) goto loc_8290FF50;
loc_8290FF48:
	// bl 0x829bc0e0
	ctx.lr = 0x8290FF4C;
	sub_829BC0E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8290FF50:
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

__attribute__((alias("__imp__sub_8290FF68"))) PPC_WEAK_FUNC(sub_8290FF68);
PPC_FUNC_IMPL(__imp__sub_8290FF68) {
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
	// addi r11,r11,-14256
	ctx.r11.s64 = ctx.r11.s64 + -14256;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8290ffe8
	if (!ctx.cr6.gt) goto loc_8290FFE8;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8290FFA4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8290ffc4
	if (ctx.cr6.eq) goto loc_8290FFC4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8290ffa4
	if (ctx.cr6.lt) goto loc_8290FFA4;
	// b 0x8290ffe8
	goto loc_8290FFE8;
loc_8290FFC4:
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
	ctx.lr = 0x8290FFE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8290fff4
	if (!ctx.cr0.eq) goto loc_8290FFF4;
loc_8290FFE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bc140
	ctx.lr = 0x8290FFF4;
	sub_829BC140(ctx, base);
loc_8290FFF4:
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

__attribute__((alias("__imp__sub_82910010"))) PPC_WEAK_FUNC(sub_82910010);
PPC_FUNC_IMPL(__imp__sub_82910010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82910018;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829bc540
	ctx.lr = 0x82910024;
	sub_829BC540(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,25968
	ctx.r11.s64 = ctx.r11.s64 + 25968;
	// addi r10,r10,27048
	ctx.r10.s64 = ctx.r10.s64 + 27048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,27100
	ctx.r11.s64 = ctx.r11.s64 + 27100;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,4
	ctx.r27.s64 = 4;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// stw r27,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r27.u32);
	// lfs f0,18304(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18304);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r30.u32);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// stw r30,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r30.u32);
	// addi r29,r31,1432
	ctx.r29.s64 = ctx.r31.s64 + 1432;
	// stw r30,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r30.u32);
	// stw r30,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r30.u32);
	// stw r27,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r27.u32);
	// stw r30,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// stw r30,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r30.u32);
	// stw r30,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r30.u32);
	// stw r30,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r30.u32);
	// stw r30,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r30.u32);
	// stfs f0,972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// stw r28,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r28.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// stw r30,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r30.u32);
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
	// stw r30,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r30.u32);
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r30.u32);
	// beq cr6,0x829100cc
	if (ctx.cr6.eq) goto loc_829100CC;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x829100CC;
	sub_82332C38(ctx, base);
loc_829100CC:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829100f0
	if (ctx.cr6.eq) goto loc_829100F0;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x829100F0;
	sub_82332C38(ctx, base);
loc_829100F0:
	// stw r30,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r30.u32);
	// stw r30,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r30.u32);
	// stw r30,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r30.u32);
	// stw r28,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r28.u32);
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910118"))) PPC_WEAK_FUNC(sub_82910118);
PPC_FUNC_IMPL(__imp__sub_82910118) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,25968
	ctx.r11.s64 = ctx.r11.s64 + 25968;
	// addi r10,r10,27048
	ctx.r10.s64 = ctx.r10.s64 + 27048;
	// addi r9,r9,27100
	ctx.r9.s64 = ctx.r9.s64 + 27100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r30,r31,1432
	ctx.r30.s64 = ctx.r31.s64 + 1432;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1448(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82910170;
	sub_82332CA8(ctx, base);
	// lwz r3,1444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82910180
	if (ctx.cr6.eq) goto loc_82910180;
	// bl 0x82332db8
	ctx.lr = 0x82910180;
	sub_82332DB8(ctx, base);
loc_82910180:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x82910198;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x829101A0;
	sub_829BC9E8(ctx, base);
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

__attribute__((alias("__imp__sub_829101B8"))) PPC_WEAK_FUNC(sub_829101B8);
PPC_FUNC_IMPL(__imp__sub_829101B8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829101DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd978
	ctx.lr = 0x829101E4;
	sub_829BD978(ctx, base);
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

__attribute__((alias("__imp__sub_829101F8"))) PPC_WEAK_FUNC(sub_829101F8);
PPC_FUNC_IMPL(__imp__sub_829101F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829c1470
	sub_829C1470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910200"))) PPC_WEAK_FUNC(sub_82910200);
PPC_FUNC_IMPL(__imp__sub_82910200) {
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
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82910244
	if (ctx.cr6.lt) goto loc_82910244;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c24c0
	ctx.lr = 0x82910244;
	sub_829C24C0(ctx, base);
loc_82910244:
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

__attribute__((alias("__imp__sub_82910260"))) PPC_WEAK_FUNC(sub_82910260);
PPC_FUNC_IMPL(__imp__sub_82910260) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82910270"))) PPC_WEAK_FUNC(sub_82910270);
PPC_FUNC_IMPL(__imp__sub_82910270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82910278;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// beq cr6,0x8291035c
	if (ctx.cr6.eq) goto loc_8291035C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829102A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,800(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291033C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8291035c
	if (!ctx.cr0.eq) goto loc_8291035C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8291035C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910368"))) PPC_WEAK_FUNC(sub_82910368);
PPC_FUNC_IMPL(__imp__sub_82910368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82910370;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-15060
	ctx.r3.s64 = ctx.r11.s64 + -15060;
	// bl 0x823928a0
	ctx.lr = 0x8291038C;
	sub_823928A0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291039C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823fe7b8
	ctx.lr = 0x829103A4;
	sub_823FE7B8(ctx, base);
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
	ctx.lr = 0x829103BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829103cc
	if (!ctx.cr0.eq) goto loc_829103CC;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_829103CC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,800(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82910484
	if (!ctx.cr0.eq) goto loc_82910484;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82910484:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910490"))) PPC_WEAK_FUNC(sub_82910490);
PPC_FUNC_IMPL(__imp__sub_82910490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82910498;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829105f8
	if (ctx.cr6.eq) goto loc_829105F8;
	// lwz r9,1448(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x829104e0
	if (!ctx.cr6.gt) goto loc_829104E0;
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
loc_829104C4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x829105f8
	if (ctx.cr6.eq) goto loc_829105F8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829104c4
	if (ctx.cr6.lt) goto loc_829104C4;
loc_829104E0:
	// addi r3,r31,1432
	ctx.r3.s64 = ctx.r31.s64 + 1432;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x829104F4;
	sub_82332D50(ctx, base);
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82910508
	if (ctx.cr0.eq) goto loc_82910508;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82910508:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,800(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,800(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x829c24c0
	ctx.lr = 0x8291052C;
	sub_829C24C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,1492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1492, ctx.r31.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,800(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291054C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x829bd3a8
	ctx.lr = 0x82910558;
	sub_829BD3A8(ctx, base);
	// lwz r29,800(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r11,1392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1392);
	// addic. r28,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r28.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x829105f0
	if (ctx.cr0.lt) goto loc_829105F0;
	// rlwinm r27,r28,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
loc_82910570:
	// lwz r10,13024(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r11,1388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1388);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,560(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x8282b6b8
	ctx.lr = 0x82910588;
	sub_8282B6B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829105b8
	if (ctx.cr0.eq) goto loc_829105B8;
	// bl 0x82878e80
	ctx.lr = 0x82910594;
	sub_82878E80(ctx, base);
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
	ctx.lr = 0x829105AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x829105bc
	if (!ctx.cr0.eq) goto loc_829105BC;
loc_829105B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829105BC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829105e4
	if (ctx.cr6.eq) goto loc_829105E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829105E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829105E4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
	// bge 0x82910570
	if (!ctx.cr0.lt) goto loc_82910570;
loc_829105F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829105fc
	goto loc_829105FC;
loc_829105F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829105FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910608"))) PPC_WEAK_FUNC(sub_82910608);
PPC_FUNC_IMPL(__imp__sub_82910608) {
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
	// beq cr6,0x82910654
	if (ctx.cr6.eq) goto loc_82910654;
	// bl 0x823fe7b8
	ctx.lr = 0x82910630;
	sub_823FE7B8(ctx, base);
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
	ctx.lr = 0x82910648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne 0x82910658
	if (!ctx.cr0.eq) goto loc_82910658;
loc_82910654:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82910658:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82910674
	if (ctx.cr6.eq) goto loc_82910674;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82910674:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c6fb8
	ctx.lr = 0x82910680;
	sub_829C6FB8(ctx, base);
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

__attribute__((alias("__imp__sub_82910698"))) PPC_WEAK_FUNC(sub_82910698);
PPC_FUNC_IMPL(__imp__sub_82910698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829106A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82910810
	if (ctx.cr6.eq) goto loc_82910810;
	// lwz r11,800(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 800);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,1780(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829106cc
	if (!ctx.cr6.eq) goto loc_829106CC;
	// stw r26,1780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1780, ctx.r26.u32);
loc_829106CC:
	// lwz r9,1448(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1448);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x829107d8
	if (!ctx.cr6.gt) goto loc_829107D8;
	// lwz r11,1444(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1444);
loc_829106E0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82910700
	if (ctx.cr6.eq) goto loc_82910700;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829106e0
	if (ctx.cr6.lt) goto loc_829106E0;
	// b 0x829107d8
	goto loc_829107D8;
loc_82910700:
	// lwz r11,1448(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1448);
	// addi r29,r27,1432
	ctx.r29.s64 = ctx.r27.s64 + 1432;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8291075c
	if (!ctx.cr6.gt) goto loc_8291075C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82910718:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82910748
	if (!ctx.cr6.eq) goto loc_82910748;
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
	ctx.lr = 0x82910740;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82910748:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82910718
	if (ctx.cr6.lt) goto loc_82910718;
loc_8291075C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f13,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829107D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,1488(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1488, ctx.r26.u32);
loc_829107D8:
	// lwz r11,800(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 800);
	// lwz r10,1780(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82910810
	if (!ctx.cr6.eq) goto loc_82910810;
	// lwz r3,1608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82910810
	if (ctx.cr6.eq) goto loc_82910810;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82910810
	if (!ctx.cr0.eq) goto loc_82910810;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82910810:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910818"))) PPC_WEAK_FUNC(sub_82910818);
PPC_FUNC_IMPL(__imp__sub_82910818) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291083C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd4c0
	ctx.lr = 0x82910844;
	sub_829BD4C0(ctx, base);
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

__attribute__((alias("__imp__sub_82910858"))) PPC_WEAK_FUNC(sub_82910858);
PPC_FUNC_IMPL(__imp__sub_82910858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x82910860;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82a6173c
	ctx.lr = 0x82910868;
	__savefpr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r11,1448(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1448);
	// addic. r22,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r22.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// blt 0x82910afc
	if (ctx.cr0.lt) goto loc_82910AFC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// rlwinm r21,r22,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// lfs f26,32748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32748);
	ctx.f26.f64 = double(temp.f32);
	// lfs f31,23752(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23752);
	ctx.f31.f64 = double(temp.f32);
	// lfs f27,16388(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16388);
	ctx.f27.f64 = double(temp.f32);
loc_829108A0:
	// lwz r11,1444(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1444);
	// lwzx r31,r21,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829108BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829109a4
	if (ctx.cr0.eq) goto loc_829109A4;
	// lwz r30,800(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 800);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x829109a4
	if (ctx.cr6.eq) goto loc_829109A4;
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r10,660(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r9,664(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x829108F4;
	sub_82817BB8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,580(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f13,576(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,572(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	ctx.f12.f64 = double(temp.f32);
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
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmadds f0,f13,f29,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f25,f12,f28,f0
	ctx.f25.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f0.f64));
	// bl 0x82a4cd78
	ctx.lr = 0x82910934;
	sub_82A4CD78(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// fadds f0,f25,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f25.f64 + ctx.f26.f64));
	// lwz r11,800(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 800);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r9,628(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// ld r4,620(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 620);
	// lwz r11,1120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1120);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fadds f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829109A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82910af0
	goto loc_82910AF0;
loc_829109A4:
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829109B4;
	sub_829B9720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829109C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
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
	ctx.lr = 0x829109EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82910a08
	if (!ctx.cr6.gt) goto loc_82910A08;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82910adc
	goto loc_82910ADC;
loc_82910A08:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82910aa8
	if (!ctx.cr6.eq) goto loc_82910AA8;
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
	ctx.lr = 0x82910A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82910a88
	if (!ctx.cr6.gt) goto loc_82910A88;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_82910A44:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82910a74
	if (!ctx.cr6.eq) goto loc_82910A74;
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
	ctx.lr = 0x82910A6C;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82910A74:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82910a44
	if (ctx.cr6.lt) goto loc_82910A44;
loc_82910A88:
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
	ctx.lr = 0x82910AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82910AA8:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82910adc
	if (!ctx.cr0.eq) goto loc_82910ADC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82910adc
	if (ctx.cr0.eq) goto loc_82910ADC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82910ADC;
	sub_82410060(ctx, base);
loc_82910ADC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82910AF0:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r21,r21,-4
	ctx.r21.s64 = ctx.r21.s64 + -4;
	// bge 0x829108a0
	if (!ctx.cr0.lt) goto loc_829108A0;
loc_82910AFC:
	// lwz r11,1452(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1452);
	// addi r3,r24,1432
	ctx.r3.s64 = ctx.r24.s64 + 1432;
	// stw r20,1448(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1448, ctx.r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82910b20
	if (ctx.cr6.eq) goto loc_82910B20;
	// stw r20,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r20.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x82910B20;
	sub_82332C38(ctx, base);
loc_82910B20:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82a61788
	ctx.lr = 0x82910B2C;
	__restfpr_25(ctx, base);
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910B30"))) PPC_WEAK_FUNC(sub_82910B30);
PPC_FUNC_IMPL(__imp__sub_82910B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82910B38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,1448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82910ba8
	if (!ctx.cr6.gt) goto loc_82910BA8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82910B58:
	// lwz r11,1444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82910b94
	if (ctx.cr0.eq) goto loc_82910B94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82910B94:
	// lwz r11,1448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82910b58
	if (ctx.cr6.lt) goto loc_82910B58;
loc_82910BA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910BB0"))) PPC_WEAK_FUNC(sub_82910BB0);
PPC_FUNC_IMPL(__imp__sub_82910BB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// lwz r3,1780(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x828a2a88
	sub_828A2A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910BC4"))) PPC_WEAK_FUNC(sub_82910BC4);
PPC_FUNC_IMPL(__imp__sub_82910BC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910BC8"))) PPC_WEAK_FUNC(sub_82910BC8);
PPC_FUNC_IMPL(__imp__sub_82910BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// lwz r3,1780(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x828a2dd0
	sub_828A2DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910BDC"))) PPC_WEAK_FUNC(sub_82910BDC);
PPC_FUNC_IMPL(__imp__sub_82910BDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910BE0"))) PPC_WEAK_FUNC(sub_82910BE0);
PPC_FUNC_IMPL(__imp__sub_82910BE0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82910c28
	if (!ctx.cr0.eq) goto loc_82910C28;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f1,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82910c88
	goto loc_82910C88;
loc_82910C28:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,1608(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// lfs f31,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82910c5c
	if (ctx.cr6.eq) goto loc_82910C5C;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82910c84
	if (!ctx.cr0.eq) goto loc_82910C84;
loc_82910C5C:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r10,1780(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82910c84
	if (!ctx.cr6.eq) goto loc_82910C84;
	// lwz r11,1608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// lwz r11,1416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82910c84
	if (ctx.cr6.eq) goto loc_82910C84;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,17532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17532);
	ctx.f31.f64 = double(temp.f32);
loc_82910C84:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82910C88:
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

__attribute__((alias("__imp__sub_82910CA8"))) PPC_WEAK_FUNC(sub_82910CA8);
PPC_FUNC_IMPL(__imp__sub_82910CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82910CB0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,1448(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82910d48
	if (!ctx.cr6.gt) goto loc_82910D48;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82910CDC:
	// lwz r11,1444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8265b998
	ctx.lr = 0x82910CE8;
	sub_8265B998(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82910d34
	if (ctx.cr0.eq) goto loc_82910D34;
	// lwz r11,1444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82910d34
	if (ctx.cr0.eq) goto loc_82910D34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a2380
	ctx.lr = 0x82910D1C;
	sub_828A2380(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82910d2c
	if (ctx.cr6.eq) goto loc_82910D2C;
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82910d34
	if (!ctx.cr6.gt) goto loc_82910D34;
loc_82910D2C:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_82910D34:
	// lwz r11,1448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82910cdc
	if (ctx.cr6.lt) goto loc_82910CDC;
loc_82910D48:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910D58"))) PPC_WEAK_FUNC(sub_82910D58);
PPC_FUNC_IMPL(__imp__sub_82910D58) {
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
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82910d90
	if (ctx.cr6.eq) goto loc_82910D90;
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r11,1608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82910dd4
	if (ctx.cr6.eq) goto loc_82910DD4;
loc_82910D90:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82910ca8
	ctx.lr = 0x82910D9C;
	sub_82910CA8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82910e08
	if (ctx.cr0.eq) goto loc_82910E08;
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r10,1780(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82910dd4
	if (!ctx.cr6.eq) goto loc_82910DD4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
	// lwz r3,1780(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82910DD4:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r10,1780(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82910df0
	if (ctx.cr6.eq) goto loc_82910DF0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r4,1632(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1632);
	// bl 0x828a2dd0
	ctx.lr = 0x82910DF0;
	sub_828A2DD0(ctx, base);
loc_82910DF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910E08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82910E08:
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

__attribute__((alias("__imp__sub_82910E20"))) PPC_WEAK_FUNC(sub_82910E20);
PPC_FUNC_IMPL(__imp__sub_82910E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82910E28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,800(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,1780(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1780);
	// beq cr6,0x82910e4c
	if (ctx.cr6.eq) goto loc_82910E4C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82910E4C:
	// lwz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82910e9c
	if (!ctx.cr6.gt) goto loc_82910E9C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82910E60:
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8265b998
	ctx.lr = 0x82910E6C;
	sub_8265B998(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82910e80
	if (ctx.cr0.eq) goto loc_82910E80;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82910e94
	if (ctx.cr6.eq) goto loc_82910E94;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82910E80:
	// lwz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82910e60
	if (ctx.cr6.lt) goto loc_82910E60;
loc_82910E94:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82910edc
	if (!ctx.cr6.eq) goto loc_82910EDC;
loc_82910E9C:
	// lwz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82910edc
	if (!ctx.cr6.gt) goto loc_82910EDC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82910EB0:
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8265b998
	ctx.lr = 0x82910EBC;
	sub_8265B998(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82910ec8
	if (ctx.cr0.eq) goto loc_82910EC8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82910EC8:
	// lwz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82910eb0
	if (ctx.cr6.lt) goto loc_82910EB0;
loc_82910EDC:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r11,1780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82910f04
	if (ctx.cr6.eq) goto loc_82910F04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82910F04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910F10"))) PPC_WEAK_FUNC(sub_82910F10);
PPC_FUNC_IMPL(__imp__sub_82910F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82910F18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,800(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,1780(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1780);
	// beq cr6,0x82910f40
	if (ctx.cr6.eq) goto loc_82910F40;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82910F40:
	// lwz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82910f98
	if (!ctx.cr6.gt) goto loc_82910F98;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82910F54:
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8265b998
	ctx.lr = 0x82910F60;
	sub_8265B998(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82910f84
	if (ctx.cr0.eq) goto loc_82910F84;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82910fd8
	if (!ctx.cr0.eq) goto loc_82910FD8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82910fd8
	if (ctx.cr6.eq) goto loc_82910FD8;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82910f84
	if (!ctx.cr6.eq) goto loc_82910F84;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82910F84:
	// lwz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82910f54
	if (ctx.cr6.lt) goto loc_82910F54;
loc_82910F98:
	// lwz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82910fdc
	if (!ctx.cr6.gt) goto loc_82910FDC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82910FAC:
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8265b998
	ctx.lr = 0x82910FB8;
	sub_8265B998(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82910fd8
	if (!ctx.cr0.eq) goto loc_82910FD8;
	// lwz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82910fac
	if (ctx.cr6.lt) goto loc_82910FAC;
	// b 0x82910fdc
	goto loc_82910FDC;
loc_82910FD8:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82910FDC:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r11,1780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82911004
	if (ctx.cr6.eq) goto loc_82911004;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82911004:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911010"))) PPC_WEAK_FUNC(sub_82911010);
PPC_FUNC_IMPL(__imp__sub_82911010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82911018;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,800(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 800);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,1780(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// lwz r11,1072(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1072);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82911194
	if (ctx.cr0.eq) goto loc_82911194;
	// stw r28,1456(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1456, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82911140
	if (ctx.cr6.eq) goto loc_82911140;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26696
	ctx.r3.s64 = ctx.r11.s64 + -26696;
	// bl 0x82816528
	ctx.lr = 0x82911060;
	sub_82816528(ctx, base);
	// addic. r11,r30,300
	ctx.xer.ca = ctx.r30.u32 > 4294966995;
	ctx.r11.s64 = ctx.r30.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// beq 0x82911084
	if (ctx.cr0.eq) goto loc_82911084;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82911084
	if (ctx.cr6.eq) goto loc_82911084;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82911088
	goto loc_82911088;
loc_82911084:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82911088:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e3f50
	ctx.lr = 0x82911090;
	sub_829E3F50(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-15060
	ctx.r3.s64 = ctx.r11.s64 + -15060;
	// bl 0x823928a0
	ctx.lr = 0x829110A4;
	sub_823928A0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82911108
	if (ctx.cr6.eq) goto loc_82911108;
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829110DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829110fc
	if (ctx.cr0.eq) goto loc_829110FC;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x82911100
	goto loc_82911100;
loc_829110FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82911100:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82911140
	if (!ctx.cr6.eq) goto loc_82911140;
loc_82911108:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c1f08
	ctx.lr = 0x82911110;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x82911114;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82911128
	if (ctx.cr0.eq) goto loc_82911128;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82911134
	goto loc_82911134;
loc_82911128:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
loc_82911134:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291113C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82911148
	goto loc_82911148;
loc_82911140:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82911390
	ctx.lr = 0x82911148;
	sub_82911390(ctx, base);
loc_82911148:
	// lwz r11,960(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82911194
	if (!ctx.cr6.lt) goto loc_82911194;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,27124
	ctx.r11.s64 = ctx.r11.s64 + 27124;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r31,r1,88
	ctx.r31.s64 = ctx.r1.s64 + 88;
	// addi r3,r10,25908
	ctx.r3.s64 = ctx.r10.s64 + 25908;
	// bl 0x82816528
	ctx.lr = 0x8291117C;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282c950
	ctx.lr = 0x82911194;
	sub_8282C950(ctx, base);
loc_82911194:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829111A0"))) PPC_WEAK_FUNC(sub_829111A0);
PPC_FUNC_IMPL(__imp__sub_829111A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829111c4
	if (ctx.cr6.eq) goto loc_829111C4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829111c4
	if (ctx.cr6.eq) goto loc_829111C4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_829111C4:
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x829111d0
	sub_829111D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829111CC"))) PPC_WEAK_FUNC(sub_829111CC);
PPC_FUNC_IMPL(__imp__sub_829111CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829111D0"))) PPC_WEAK_FUNC(sub_829111D0);
PPC_FUNC_IMPL(__imp__sub_829111D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829111D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,800(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 800);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,1780(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// lwz r11,1076(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1076);
	// stw r28,1456(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1456, ctx.r28.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8291131c
	if (ctx.cr0.eq) goto loc_8291131C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82911314
	if (ctx.cr6.eq) goto loc_82911314;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82911314
	if (ctx.cr6.eq) goto loc_82911314;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26696
	ctx.r3.s64 = ctx.r11.s64 + -26696;
	// bl 0x82816528
	ctx.lr = 0x8291122C;
	sub_82816528(ctx, base);
	// addic. r11,r30,300
	ctx.xer.ca = ctx.r30.u32 > 4294966995;
	ctx.r11.s64 = ctx.r30.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// beq 0x82911250
	if (ctx.cr0.eq) goto loc_82911250;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82911250
	if (ctx.cr6.eq) goto loc_82911250;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82911254
	goto loc_82911254;
loc_82911250:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82911254:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e3f50
	ctx.lr = 0x8291125C;
	sub_829E3F50(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-15060
	ctx.r3.s64 = ctx.r11.s64 + -15060;
	// bl 0x823928a0
	ctx.lr = 0x82911270;
	sub_823928A0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829112d4
	if (ctx.cr6.eq) goto loc_829112D4;
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829112A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829112c8
	if (ctx.cr0.eq) goto loc_829112C8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x829112cc
	goto loc_829112CC;
loc_829112C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829112CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82911314
	if (!ctx.cr6.eq) goto loc_82911314;
loc_829112D4:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82911314
	if (ctx.cr6.eq) goto loc_82911314;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c1f08
	ctx.lr = 0x829112E4;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x829112E8;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829112fc
	if (ctx.cr0.eq) goto loc_829112FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82911308
	goto loc_82911308;
loc_829112FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
loc_82911308:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8291131c
	goto loc_8291131C;
loc_82911314:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82911390
	ctx.lr = 0x8291131C;
	sub_82911390(ctx, base);
loc_8291131C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911328"))) PPC_WEAK_FUNC(sub_82911328);
PPC_FUNC_IMPL(__imp__sub_82911328) {
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
	// lwz r10,800(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lwz r3,1780(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1780);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82911360
	if (ctx.cr6.eq) goto loc_82911360;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82911360
	if (ctx.cr6.eq) goto loc_82911360;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8291137c
	goto loc_8291137C;
loc_82911360:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
loc_8291137C:
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

__attribute__((alias("__imp__sub_82911390"))) PPC_WEAK_FUNC(sub_82911390);
PPC_FUNC_IMPL(__imp__sub_82911390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82911398;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r10,1456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r28,1780(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// bne cr6,0x829113e0
	if (!ctx.cr6.eq) goto loc_829113E0;
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829113e0
	if (ctx.cr6.eq) goto loc_829113E0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x829113e0
	if (ctx.cr6.eq) goto loc_829113E0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829113DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r28.u32);
loc_829113E0:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lwz r9,1456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// addi r3,r10,4804
	ctx.r3.s64 = ctx.r10.s64 + 4804;
	// stw r9,1780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1780, ctx.r9.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x829113FC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,800(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r29,1456(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c1f08
	ctx.lr = 0x82911420;
	sub_829C1F08(ctx, base);
	// bl 0x8289f550
	ctx.lr = 0x82911424;
	sub_8289F550(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq 0x82911440
	if (ctx.cr0.eq) goto loc_82911440;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x8291144c
	goto loc_8291144C;
loc_82911440:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1264);
loc_8291144C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82911484
	if (ctx.cr6.eq) goto loc_82911484;
	// lwz r4,800(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x829c24c0
	ctx.lr = 0x82911468;
	sub_829C24C0(ctx, base);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291147C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
loc_82911484:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r31,1608(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// lwz r30,1780(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x82911498;
	sub_829C1F08(ctx, base);
	// bl 0x828aab40
	ctx.lr = 0x8291149C;
	sub_828AAB40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq 0x829114b8
	if (ctx.cr0.eq) goto loc_829114B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x829114c4
	goto loc_829114C4;
loc_829114B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
loc_829114C4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829114CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829114D8"))) PPC_WEAK_FUNC(sub_829114D8);
PPC_FUNC_IMPL(__imp__sub_829114D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829114E0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// lwz r29,1780(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82911704
	if (ctx.cr6.eq) goto loc_82911704;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26696
	ctx.r3.s64 = ctx.r11.s64 + -26696;
	// bl 0x82816528
	ctx.lr = 0x8291150C;
	sub_82816528(ctx, base);
	// addic. r11,r29,300
	ctx.xer.ca = ctx.r29.u32 > 4294966995;
	ctx.r11.s64 = ctx.r29.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// beq 0x82911530
	if (ctx.cr0.eq) goto loc_82911530;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82911530
	if (ctx.cr6.eq) goto loc_82911530;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82911534
	goto loc_82911534;
loc_82911530:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82911534:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e3f50
	ctx.lr = 0x8291153C;
	sub_829E3F50(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-15060
	ctx.r3.s64 = ctx.r11.s64 + -15060;
	// bl 0x823928a0
	ctx.lr = 0x82911550;
	sub_823928A0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82911704
	if (ctx.cr6.eq) goto loc_82911704;
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82911588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829115a8
	if (ctx.cr0.eq) goto loc_829115A8;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x829115ac
	goto loc_829115AC;
loc_829115A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829115AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82911704
	if (ctx.cr6.eq) goto loc_82911704;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8291171c
	if (ctx.cr6.eq) goto loc_8291171C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829115D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8291161c
	if (!ctx.cr0.eq) goto loc_8291161C;
	// lwz r11,800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// lwz r10,1608(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82911624
	if (ctx.cr6.eq) goto loc_82911624;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829115FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82911624
	if (ctx.cr0.eq) goto loc_82911624;
	// lwz r11,800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// lwz r3,1608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// bl 0x82411b98
	ctx.lr = 0x82911610;
	sub_82411B98(ctx, base);
	// lwz r11,1540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82911624
	if (ctx.cr6.eq) goto loc_82911624;
loc_8291161C:
	// stw r28,1460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1460, ctx.r28.u32);
	// b 0x8291171c
	goto loc_8291171C;
loc_82911624:
	// lwz r3,1456(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82911664
	if (ctx.cr6.eq) goto loc_82911664;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82911664
	if (ctx.cr0.eq) goto loc_82911664;
	// lwz r3,1456(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// bl 0x828a2380
	ctx.lr = 0x82911650;
	sub_828A2380(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x828a2380
	ctx.lr = 0x8291165C;
	sub_828A2380(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x829116a4
	if (!ctx.cr6.lt) goto loc_829116A4;
loc_82911664:
	// lwz r11,800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// lwz r3,1780(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291167C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82911704
	if (ctx.cr0.eq) goto loc_82911704;
	// lwz r11,800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// lwz r3,1780(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// bl 0x828a2380
	ctx.lr = 0x82911690;
	sub_828A2380(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x828a2380
	ctx.lr = 0x8291169C;
	sub_828A2380(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// blt cr6,0x82911704
	if (ctx.cr6.lt) goto loc_82911704;
loc_829116A4:
	// addic. r11,r28,300
	ctx.xer.ca = ctx.r28.u32 > 4294966995;
	ctx.r11.s64 = ctx.r28.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829116c4
	if (ctx.cr0.eq) goto loc_829116C4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x829116c4
	if (ctx.cr6.eq) goto loc_829116C4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x829116c8
	goto loc_829116C8;
loc_829116C4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829116C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8291171c
	if (ctx.cr6.eq) goto loc_8291171C;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r10,32348
	ctx.r3.s64 = ctx.r10.s64 + 32348;
	// lwz r30,-6056(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82816528
	ctx.lr = 0x829116E4;
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
	ctx.lr = 0x82911700;
	sub_829E3FD0(ctx, base);
	// b 0x8291171c
	goto loc_8291171C;
loc_82911704:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291171C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8291171C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911728"))) PPC_WEAK_FUNC(sub_82911728);
PPC_FUNC_IMPL(__imp__sub_82911728) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82911744
	if (ctx.cr6.eq) goto loc_82911744;
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82911744:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82911750"))) PPC_WEAK_FUNC(sub_82911750);
PPC_FUNC_IMPL(__imp__sub_82911750) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82911768"))) PPC_WEAK_FUNC(sub_82911768);
PPC_FUNC_IMPL(__imp__sub_82911768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82911770;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82833180
	ctx.lr = 0x82911788;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-8544
	ctx.r11.s64 = ctx.r11.s64 + -8544;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r10,r10,5136
	ctx.r10.s64 = ctx.r10.s64 + 5136;
	// addi r9,r9,-4012
	ctx.r9.s64 = ctx.r9.s64 + -4012;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r29,4
	ctx.r29.s64 = 4;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r28,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// stw r27,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r27.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// bl 0x82911ad8
	ctx.lr = 0x82911838;
	sub_82911AD8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r28.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// lfd f31,16376(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16376);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lfd f0,456(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// stfd f0,376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 376, ctx.f0.u64);
	// lfd f0,456(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// stfd f0,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.f0.u64);
	// lfd f0,456(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stfd f0,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.f0.u64);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// stfd f31,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.f31.u64);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// bl 0x828ffe98
	ctx.lr = 0x829118F4;
	sub_828FFE98(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-11248
	ctx.r11.s64 = ctx.r11.s64 + -11248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,724
	ctx.r3.s64 = ctx.r31.s64 + 724;
	// lfs f13,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,18196(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18196);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lfd f12,456(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// stfd f12,608(r31)
	PPC_STORE_U64(ctx.r31.u32 + 608, ctx.f12.u64);
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// stfs f13,616(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stw r30,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
	// stfs f0,620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// stfs f0,624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// stfs f0,632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// stw r30,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
	// stfd f31,688(r31)
	PPC_STORE_U64(ctx.r31.u32 + 688, ctx.f31.u64);
	// stw r30,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r30.u32);
	// stfd f31,696(r31)
	PPC_STORE_U64(ctx.r31.u32 + 696, ctx.f31.u64);
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// stfd f31,704(r31)
	PPC_STORE_U64(ctx.r31.u32 + 704, ctx.f31.u64);
	// stw r30,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
	// stfd f31,712(r31)
	PPC_STORE_U64(ctx.r31.u32 + 712, ctx.f31.u64);
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// stw r30,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r30.u32);
	// bl 0x828ffe98
	ctx.lr = 0x82911980;
	sub_828FFE98(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,3920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3920, ctx.r11.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// stw r11,3924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3924, ctx.r11.u32);
	// stw r11,3928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3928, ctx.r11.u32);
	// stw r29,20304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20304, ctx.r29.u32);
	// stw r30,20308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20308, ctx.r30.u32);
	// stw r30,20312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20312, ctx.r30.u32);
	// stw r30,20316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20316, ctx.r30.u32);
	// stw r30,20320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20320, ctx.r30.u32);
	// stw r30,20300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20300, ctx.r30.u32);
	// stw r29,20328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20328, ctx.r29.u32);
	// stw r30,20332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20332, ctx.r30.u32);
	// stw r30,20336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20336, ctx.r30.u32);
	// stw r30,20340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20340, ctx.r30.u32);
	// stw r30,20344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20344, ctx.r30.u32);
	// stw r30,20324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20324, ctx.r30.u32);
	// stw r29,20352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20352, ctx.r29.u32);
	// stw r30,20356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20356, ctx.r30.u32);
	// stw r30,20360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20360, ctx.r30.u32);
	// stw r30,20364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20364, ctx.r30.u32);
	// stw r30,20368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20368, ctx.r30.u32);
	// stw r30,20348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20348, ctx.r30.u32);
	// stw r29,20376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20376, ctx.r29.u32);
	// stw r30,20380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20380, ctx.r30.u32);
	// stw r30,20384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20384, ctx.r30.u32);
	// stw r30,20388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20388, ctx.r30.u32);
	// stw r30,20392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20392, ctx.r30.u32);
	// stw r30,20372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20372, ctx.r30.u32);
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// stw r29,20400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20400, ctx.r29.u32);
	// stw r30,20404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20404, ctx.r30.u32);
	// stw r30,20408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20408, ctx.r30.u32);
	// stw r30,20412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20412, ctx.r30.u32);
	// stw r30,20416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20416, ctx.r30.u32);
	// stw r30,20396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20396, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82911a48
	if (ctx.cr6.eq) goto loc_82911A48;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r5,r11,4820
	ctx.r5.s64 = ctx.r11.s64 + 4820;
	// addi r4,r10,4868
	ctx.r4.s64 = ctx.r10.s64 + 4868;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828c5680
	ctx.lr = 0x82911A48;
	sub_828C5680(ctx, base);
loc_82911A48:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82911a60
	if (!ctx.cr6.eq) goto loc_82911A60;
	// li r11,2600
	ctx.r11.s64 = 2600;
	// b 0x82911a6c
	goto loc_82911A6C;
loc_82911A60:
	// cmpwi cr6,r11,1800
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1800, ctx.xer);
	// bge cr6,0x82911a6c
	if (!ctx.cr6.lt) goto loc_82911A6C;
	// li r11,1800
	ctx.r11.s64 = 1800;
loc_82911A6C:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x82911A78;
	sub_82333900(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r11,15852
	ctx.r28.s64 = ctx.r11.s64 + 15852;
	// beq 0x82911a98
	if (ctx.cr0.eq) goto loc_82911A98;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x82911A94;
	sub_8312E7DC(ctx, base);
	// b 0x82911a9c
	goto loc_82911A9C;
loc_82911A98:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82911A9C:
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x82911AA8;
	sub_82333900(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82911ac0
	if (ctx.cr0.eq) goto loc_82911AC0;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x82911ABC;
	sub_8312E7DC(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82911AC0:
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911AD8"))) PPC_WEAK_FUNC(sub_82911AD8);
PPC_FUNC_IMPL(__imp__sub_82911AD8) {
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
	// bl 0x823339b8
	ctx.lr = 0x82911AF8;
	sub_823339B8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// bl 0x823339b8
	ctx.lr = 0x82911B04;
	sub_823339B8(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x82911B18;
	sub_823339B8(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// bl 0x82400a48
	ctx.lr = 0x82911B24;
	sub_82400A48(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// bl 0x823339b8
	ctx.lr = 0x82911B30;
	sub_823339B8(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82911B58"))) PPC_WEAK_FUNC(sub_82911B58);
PPC_FUNC_IMPL(__imp__sub_82911B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82911B60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,5136
	ctx.r11.s64 = ctx.r11.s64 + 5136;
	// addi r10,r10,-4012
	ctx.r10.s64 = ctx.r10.s64 + -4012;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82913888
	ctx.lr = 0x82911B88;
	sub_82913888(ctx, base);
	// li r29,1022
	ctx.r29.s64 = 1022;
	// addi r30,r31,8020
	ctx.r30.s64 = ctx.r31.s64 + 8020;
loc_82911B90:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82911bb8
	if (ctx.cr6.eq) goto loc_82911BB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82911BB8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bge 0x82911b90
	if (!ctx.cr0.lt) goto loc_82911B90;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82911be4
	if (ctx.cr6.eq) goto loc_82911BE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911BE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82911BE4:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82911c04
	if (ctx.cr6.eq) goto loc_82911C04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82911C04:
	// addi r3,r31,20396
	ctx.r3.s64 = ctx.r31.s64 + 20396;
	// bl 0x8239d768
	ctx.lr = 0x82911C0C;
	sub_8239D768(ctx, base);
	// addi r3,r31,20372
	ctx.r3.s64 = ctx.r31.s64 + 20372;
	// bl 0x8239d768
	ctx.lr = 0x82911C14;
	sub_8239D768(ctx, base);
	// addi r3,r31,20348
	ctx.r3.s64 = ctx.r31.s64 + 20348;
	// bl 0x8239d768
	ctx.lr = 0x82911C1C;
	sub_8239D768(ctx, base);
	// addi r3,r31,20324
	ctx.r3.s64 = ctx.r31.s64 + 20324;
	// bl 0x8239d768
	ctx.lr = 0x82911C24;
	sub_8239D768(ctx, base);
	// addi r3,r31,20300
	ctx.r3.s64 = ctx.r31.s64 + 20300;
	// bl 0x8239d768
	ctx.lr = 0x82911C2C;
	sub_8239D768(ctx, base);
	// addi r11,r31,724
	ctx.r11.s64 = ctx.r31.s64 + 724;
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// bl 0x82339860
	ctx.lr = 0x82911C38;
	sub_82339860(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r11,r31,448
	ctx.r11.s64 = ctx.r31.s64 + 448;
	// addi r30,r10,-23568
	ctx.r30.s64 = ctx.r10.s64 + -23568;
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// stw r30,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r30.u32);
	// bl 0x82339860
	ctx.lr = 0x82911C50;
	sub_82339860(ctx, base);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// bl 0x82333960
	ctx.lr = 0x82911C5C;
	sub_82333960(ctx, base);
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// bl 0x82333960
	ctx.lr = 0x82911C64;
	sub_82333960(ctx, base);
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// bl 0x82333960
	ctx.lr = 0x82911C6C;
	sub_82333960(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8281fa90
	ctx.lr = 0x82911C74;
	sub_8281FA90(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8269b988
	ctx.lr = 0x82911C7C;
	sub_8269B988(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8239d768
	ctx.lr = 0x82911C84;
	sub_8239D768(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82400988
	ctx.lr = 0x82911C8C;
	sub_82400988(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8544
	ctx.r11.s64 = ctx.r11.s64 + -8544;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x82833238
	ctx.lr = 0x82911CA0;
	sub_82833238(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911CA8"))) PPC_WEAK_FUNC(sub_82911CA8);
PPC_FUNC_IMPL(__imp__sub_82911CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82911CB0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r11,20364(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20364);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82911cf4
	if (ctx.cr0.lt) goto loc_82911CF4;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82911CC8:
	// lwz r11,20360(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20360);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82911ce8
	if (ctx.cr6.eq) goto loc_82911CE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82911CE8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bge 0x82911cc8
	if (!ctx.cr0.lt) goto loc_82911CC8;
loc_82911CF4:
	// lwz r11,136(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 136);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82911d6c
	if (ctx.cr6.eq) goto loc_82911D6C;
	// lwz r3,3932(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3932);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82911d20
	if (ctx.cr6.eq) goto loc_82911D20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82911D20:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 136);
	// lwz r10,444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82911d4c
	if (ctx.cr6.eq) goto loc_82911D4C;
	// stw r23,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r23.u32);
	// b 0x82911d6c
	goto loc_82911D6C;
loc_82911D4C:
	// lwz r10,132(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 132);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r11,420
	ctx.r3.s64 = ctx.r11.s64 + 420;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82911d68
	if (!ctx.cr6.eq) goto loc_82911D68;
	// addi r3,r11,396
	ctx.r3.s64 = ctx.r11.s64 + 396;
loc_82911D68:
	// bl 0x824b99b0
	ctx.lr = 0x82911D6C;
	sub_824B99B0(ctx, base);
loc_82911D6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,20(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// stw r11,140(r24)
	PPC_STORE_U32(ctx.r24.u32 + 140, ctx.r11.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82911D88;
	sub_829B9720(ctx, base);
	// bl 0x82411b98
	ctx.lr = 0x82911D8C;
	sub_82411B98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82911ee0
	if (ctx.cr0.eq) goto loc_82911EE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911DA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82911ee0
	if (!ctx.cr0.eq) goto loc_82911EE0;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// stw r23,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r23.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
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
	ctx.lr = 0x82911DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82911df4
	if (!ctx.cr6.gt) goto loc_82911DF4;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82911ec8
	goto loc_82911EC8;
loc_82911DF4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82911e94
	if (!ctx.cr6.eq) goto loc_82911E94;
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
	ctx.lr = 0x82911E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82911e74
	if (!ctx.cr6.gt) goto loc_82911E74;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82911E30:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82911e60
	if (!ctx.cr6.eq) goto loc_82911E60;
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
	ctx.lr = 0x82911E58;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82911E60:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82911e30
	if (ctx.cr6.lt) goto loc_82911E30;
loc_82911E74:
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
	ctx.lr = 0x82911E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82911E94:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82911ec8
	if (!ctx.cr0.eq) goto loc_82911EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82911ec8
	if (ctx.cr0.eq) goto loc_82911EC8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82911EC8;
	sub_82410060(ctx, base);
loc_82911EC8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911EDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r23.u32);
loc_82911EE0:
	// lwz r11,80(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// addi r3,r24,60
	ctx.r3.s64 = ctx.r24.s64 + 60;
	// stw r23,76(r24)
	PPC_STORE_U32(ctx.r24.u32 + 76, ctx.r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82911f04
	if (ctx.cr6.eq) goto loc_82911F04;
	// stw r23,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r23.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x82911F04;
	sub_82332C38(ctx, base);
loc_82911F04:
	// stw r23,136(r24)
	PPC_STORE_U32(ctx.r24.u32 + 136, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911F10"))) PPC_WEAK_FUNC(sub_82911F10);
PPC_FUNC_IMPL(__imp__sub_82911F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x82911F18;
	__savegprlr_20(ctx, base);
	// stwu r1,-1440(r1)
	ea = -1440 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r24,r29,28
	ctx.r24.s64 = ctx.r29.s64 + 28;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82911f5c
	if (!ctx.cr6.gt) goto loc_82911F5C;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82911F3C:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82333960
	ctx.lr = 0x82911F48;
	sub_82333960(ctx, base);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82911f3c
	if (ctx.cr6.lt) goto loc_82911F3C;
loc_82911F5C:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// stw r20,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82911f80
	if (ctx.cr6.eq) goto loc_82911F80;
	// stw r20,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r20.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82332c38
	ctx.lr = 0x82911F80;
	sub_82332C38(ctx, base);
loc_82911F80:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r20,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r20.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,136(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// stw r10,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r10.u32);
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// lwz r11,528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829120ec
	if (!ctx.cr6.gt) goto loc_829120EC;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r22,r29,24
	ctx.r22.s64 = ctx.r29.s64 + 24;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// addi r21,r10,7896
	ctx.r21.s64 = ctx.r10.s64 + 7896;
	// addi r23,r11,4896
	ctx.r23.s64 = ctx.r11.s64 + 4896;
loc_82911FD4:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r11,524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x823339b8
	ctx.lr = 0x82911FEC;
	sub_823339B8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824152a0
	ctx.lr = 0x82911FF8;
	sub_824152A0(ctx, base);
	// lwz r26,144(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r25,140(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bne cr6,0x82912010
	if (!ctx.cr6.eq) goto loc_82912010;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_82912010:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82409058
	ctx.lr = 0x82912018;
	sub_82409058(ctx, base);
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8291203c
	if (ctx.cr6.eq) goto loc_8291203C;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x828166e0
	ctx.lr = 0x82912030;
	sub_828166E0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82816528
	ctx.lr = 0x82912038;
	sub_82816528(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8291203C:
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82912058
	if (ctx.cr6.eq) goto loc_82912058;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82912058
	if (ctx.cr6.eq) goto loc_82912058;
	// bl 0x82332db8
	ctx.lr = 0x82912058;
	sub_82332DB8(ctx, base);
loc_82912058:
	// lwz r10,136(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lwz r9,552(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 552);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x829120a8
	if (!ctx.cr6.gt) goto loc_829120A8;
	// lwz r9,548(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 548);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82912074:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8291209c
	if (ctx.cr6.eq) goto loc_8291209C;
	// lwz r8,136(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r8,552(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 552);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82912074
	if (ctx.cr6.lt) goto loc_82912074;
	// b 0x829120a8
	goto loc_829120A8;
loc_8291209C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_829120A8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bne cr6,0x829120b8
	if (!ctx.cr6.eq) goto loc_829120B8;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_829120B8:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82913b00
	ctx.lr = 0x829120CC;
	sub_82913B00(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x829120D4;
	sub_82333960(ctx, base);
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// lwz r11,528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82911fd4
	if (ctx.cr6.lt) goto loc_82911FD4;
loc_829120EC:
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829120F8"))) PPC_WEAK_FUNC(sub_829120F8);
PPC_FUNC_IMPL(__imp__sub_829120F8) {
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
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823339b8
	ctx.lr = 0x8291211C;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82846db8
	ctx.lr = 0x82912128;
	sub_82846DB8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x824189b0
	ctx.lr = 0x82912134;
	sub_824189B0(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82912148
	if (!ctx.cr6.eq) goto loc_82912148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82912288
	ctx.lr = 0x82912148;
	sub_82912288(ctx, base);
loc_82912148:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8291215c
	if (ctx.cr6.eq) goto loc_8291215C;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82912164
	goto loc_82912164;
loc_8291215C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82912164:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82409058
	ctx.lr = 0x8291216C;
	sub_82409058(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x828166e0
	ctx.lr = 0x82912178;
	sub_828166E0(ctx, base);
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82912194
	if (ctx.cr6.eq) goto loc_82912194;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82912194
	if (ctx.cr6.eq) goto loc_82912194;
	// bl 0x82332db8
	ctx.lr = 0x82912194;
	sub_82332DB8(ctx, base);
loc_82912194:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82816528
	ctx.lr = 0x8291219C;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x82410060
	ctx.lr = 0x829121AC;
	sub_82410060(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x829121B4;
	sub_82333960(ctx, base);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
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

__attribute__((alias("__imp__sub_829121D0"))) PPC_WEAK_FUNC(sub_829121D0);
PPC_FUNC_IMPL(__imp__sub_829121D0) {
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
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823339b8
	ctx.lr = 0x829121F4;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82846db8
	ctx.lr = 0x82912200;
	sub_82846DB8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82912214
	if (ctx.cr6.eq) goto loc_82912214;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x8291221c
	goto loc_8291221C;
loc_82912214:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_8291221C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82409058
	ctx.lr = 0x82912224;
	sub_82409058(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x828166e0
	ctx.lr = 0x82912230;
	sub_828166E0(ctx, base);
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8291224c
	if (ctx.cr6.eq) goto loc_8291224C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8291224c
	if (ctx.cr6.eq) goto loc_8291224C;
	// bl 0x82332db8
	ctx.lr = 0x8291224C;
	sub_82332DB8(ctx, base);
loc_8291224C:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82816528
	ctx.lr = 0x82912254;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x824b99b0
	ctx.lr = 0x82912264;
	sub_824B99B0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x8291226C;
	sub_82333960(ctx, base);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
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

__attribute__((alias("__imp__sub_82912288"))) PPC_WEAK_FUNC(sub_82912288);
PPC_FUNC_IMPL(__imp__sub_82912288) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8291236c
	if (!ctx.cr6.eq) goto loc_8291236C;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8291236c
	if (!ctx.cr6.eq) goto loc_8291236C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,16440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8291236c
	if (ctx.cr6.eq) goto loc_8291236C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r9,13024(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829122e4
	if (ctx.cr6.eq) goto loc_829122E4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x829122f8
	if (!ctx.cr6.eq) goto loc_829122F8;
loc_829122E4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10836);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82912310
	if (ctx.cr6.eq) goto loc_82912310;
	// b 0x8291236c
	goto loc_8291236C;
loc_829122F8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8291236c
	if (!ctx.cr6.eq) goto loc_8291236C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8291236c
	if (ctx.cr6.eq) goto loc_8291236C;
loc_82912310:
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r8,-24768
	ctx.r30.s64 = ctx.r8.s64 + -24768;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r3,84(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// bl 0x829baea0
	ctx.lr = 0x82912354;
	sub_829BAEA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829141f0
	ctx.lr = 0x82912360;
	sub_829141F0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8239d768
	ctx.lr = 0x8291236C;
	sub_8239D768(ctx, base);
loc_8291236C:
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

__attribute__((alias("__imp__sub_82912388"))) PPC_WEAK_FUNC(sub_82912388);
PPC_FUNC_IMPL(__imp__sub_82912388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82912390;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,7896
	ctx.r29.s64 = ctx.r11.s64 + 7896;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x829123b8
	if (ctx.cr6.eq) goto loc_829123B8;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x829123bc
	goto loc_829123BC;
loc_829123B8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_829123BC:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// addi r4,r11,5004
	ctx.r4.s64 = ctx.r11.s64 + 5004;
	// bl 0x82913b00
	ctx.lr = 0x829123CC;
	sub_82913B00(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82912424
	if (!ctx.cr6.eq) goto loc_82912424;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82912424
	if (!ctx.cr6.gt) goto loc_82912424;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x829123F0;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82846db8
	ctx.lr = 0x829123FC;
	sub_82846DB8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x824189b0
	ctx.lr = 0x82912408;
	sub_824189B0(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8291241c
	if (!ctx.cr6.eq) goto loc_8291241C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82912288
	ctx.lr = 0x8291241C;
	sub_82912288(ctx, base);
loc_8291241C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82912424;
	sub_82333960(ctx, base);
loc_82912424:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82912438
	if (ctx.cr6.eq) goto loc_82912438;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x8291243c
	goto loc_8291243C;
loc_82912438:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8291243C:
	// bl 0x828165a8
	ctx.lr = 0x82912440;
	sub_828165A8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x824b99b0
	ctx.lr = 0x82912450;
	sub_824B99B0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82912458"))) PPC_WEAK_FUNC(sub_82912458);
PPC_FUNC_IMPL(__imp__sub_82912458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r10,840(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8291248c
	if (!ctx.cr6.eq) goto loc_8291248C;
	// addi r3,r31,724
	ctx.r3.s64 = ctx.r31.s64 + 724;
	// bl 0x828fff68
	ctx.lr = 0x82912488;
	sub_828FFF68(ctx, base);
	// b 0x829124c0
	goto loc_829124C0;
loc_8291248C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828ffe98
	ctx.lr = 0x82912494;
	sub_828FFE98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r31,724
	ctx.r10.s64 = ctx.r31.s64 + 724;
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// addi r3,r10,88
	ctx.r3.s64 = ctx.r10.s64 + 88;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// stw r10,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r10.u32);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// bl 0x828e3f38
	ctx.lr = 0x829124B8;
	sub_828E3F38(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82339860
	ctx.lr = 0x829124C0;
	sub_82339860(ctx, base);
loc_829124C0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829124D8"))) PPC_WEAK_FUNC(sub_829124D8);
PPC_FUNC_IMPL(__imp__sub_829124D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829124E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r27.u32);
	// std r10,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r10.u64);
	// bne cr6,0x82912538
	if (!ctx.cr6.eq) goto loc_82912538;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lfd f0,384(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 384);
	// lfd f13,456(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 456);
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfs f13,472(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82912618
	if (!ctx.cr6.gt) goto loc_82912618;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82912538
	if (!ctx.cr6.eq) goto loc_82912538;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82912e50
	ctx.lr = 0x82912538;
	sub_82912E50(ctx, base);
loc_82912538:
	// addi r3,r31,724
	ctx.r3.s64 = ctx.r31.s64 + 724;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82912548
	goto loc_82912548;
loc_82912544:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82912548:
	// bl 0x829002e0
	ctx.lr = 0x8291254C;
	sub_829002E0(ctx, base);
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82912544
	if (!ctx.cr0.eq) goto loc_82912544;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// lwz r4,824(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// lwz r10,92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// srawi r5,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8291257C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,3924(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3924);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,724
	ctx.r9.s64 = ctx.r11.s64 + 724;
	// addi r11,r11,106
	ctx.r11.s64 = ctx.r11.s64 + 106;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lfd f0,456(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 456);
	// stfdx f0,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.f0.u64);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r10,836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// lwz r8,664(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lwz r9,408(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r6,3924(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3924);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// lwz r9,676(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,648(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r5,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r5.u32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r6,3924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3924, ctx.r6.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfd f0,456(r4)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 456);
	// lwz r6,96(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stfd f0,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.f0.u64);
	// stw r7,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r7.u32);
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82912618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82912618:
	// lwz r11,20316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20316);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82912654
	if (!ctx.cr6.gt) goto loc_82912654;
	// addi r28,r31,20324
	ctx.r28.s64 = ctx.r31.s64 + 20324;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82912630:
	// lwz r11,20312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20312);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x82912640;
	sub_82410060(ctx, base);
	// lwz r11,20316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20316);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82912630
	if (ctx.cr6.lt) goto loc_82912630;
loc_82912654:
	// lwz r11,20320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20320);
	// addi r3,r31,20300
	ctx.r3.s64 = ctx.r31.s64 + 20300;
	// stw r27,20316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20316, ctx.r27.u32);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8291267c
	if (ctx.cr6.eq) goto loc_8291267C;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x8291267C;
	sub_82332C38(ctx, base);
loc_8291267C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82912688"))) PPC_WEAK_FUNC(sub_82912688);
PPC_FUNC_IMPL(__imp__sub_82912688) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3908(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,3908(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3908);
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_829126B8"))) PPC_WEAK_FUNC(sub_829126B8);
PPC_FUNC_IMPL(__imp__sub_829126B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829126C0"))) PPC_WEAK_FUNC(sub_829126C0);
PPC_FUNC_IMPL(__imp__sub_829126C0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829126dc
	if (ctx.cr6.eq) goto loc_829126DC;
	// lwz r11,836(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 836);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
loc_829126DC:
	// lwz r11,836(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 836);
	// lwz r10,408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82912700"))) PPC_WEAK_FUNC(sub_82912700);
PPC_FUNC_IMPL(__imp__sub_82912700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x82912708;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82912e18
	if (!ctx.cr6.eq) goto loc_82912E18;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfd f0,456(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// stfd f0,376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 376, ctx.f0.u64);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3920);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-8192
	ctx.r10.s64 = ctx.r10.s64 + -8192;
	// clrlwi r10,r10,18
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r23,r10,-8192
	ctx.r23.s64 = ctx.r10.s64 + -8192;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x829127a4
	if (!ctx.cr6.gt) goto loc_829127A4;
	// lwz r10,636(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// stw r23,3920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3920, ctx.r23.u32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// b 0x829127b0
	goto loc_829127B0;
loc_829127A4:
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
loc_829127B0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829127C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82912dfc
	if (!ctx.cr0.eq) goto loc_82912DFC;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r22,1
	ctx.r22.s64 = 1;
	// lfd f31,16672(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16672);
	// addi r19,r9,-27968
	ctx.r19.s64 = ctx.r9.s64 + -27968;
	// addi r20,r10,-23568
	ctx.r20.s64 = ctx.r10.s64 + -23568;
	// addi r21,r11,-8616
	ctx.r21.s64 = ctx.r11.s64 + -8616;
loc_829127F0:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82912dfc
	if (ctx.cr6.eq) goto loc_82912DFC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291281C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82912dfc
	if (!ctx.cr6.eq) goto loc_82912DFC;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829129bc
	if (ctx.cr0.eq) goto loc_829129BC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3928);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,44(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,-8192
	ctx.r10.s64 = ctx.r10.s64 + -8192;
	// clrlwi r10,r10,18
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r25,r10,-8192
	ctx.r25.s64 = ctx.r10.s64 + -8192;
	// bne cr6,0x82912dfc
	if (!ctx.cr6.eq) goto loc_82912DFC;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x829128f8
	if (!ctx.cr6.gt) goto loc_829128F8;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// b 0x829128ec
	goto loc_829128EC;
loc_8291288C:
	// lwz r11,20364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20364);
	// addic. r26,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r26.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x829128dc
	if (ctx.cr0.lt) goto loc_829128DC;
	// rlwinm r28,r26,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_8291289C:
	// lwz r11,20360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20360);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r29,r11,r28
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829128BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x829128d0
	if (!ctx.cr6.eq) goto loc_829128D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e1620
	ctx.lr = 0x829128D0;
	sub_828E1620(ctx, base);
loc_829128D0:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// bge 0x8291289c
	if (!ctx.cr0.lt) goto loc_8291289C;
loc_829128DC:
	// lwz r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
loc_829128EC:
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x8291288c
	if (ctx.cr6.lt) goto loc_8291288C;
	// stw r25,3928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3928, ctx.r25.u32);
loc_829128F8:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// addi r10,r11,724
	ctx.r10.s64 = ctx.r11.s64 + 724;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x8291294c
	if (!ctx.cr6.eq) goto loc_8291294C;
	// addi r10,r11,106
	ctx.r10.s64 = ctx.r11.s64 + 106;
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lfd f0,696(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 696);
	// lwz r11,680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfd f12,456(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 456);
	// lfdx f11,r10,r31
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r31.u32);
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// fsub f12,f12,f11
	ctx.f12.f64 = ctx.f12.f64 - ctx.f11.f64;
	// fnmsub f0,f0,f31,f12
	ctx.f0.f64 = -(ctx.f0.f64 * ctx.f31.f64 - ctx.f12.f64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
loc_8291294C:
	// lwz r11,20364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20364);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82912de0
	if (ctx.cr0.lt) goto loc_82912DE0;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8291295C:
	// lwz r11,20360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20360);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// b 0x82912990
	goto loc_82912990;
loc_8291296C:
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x8291298c
	if (!ctx.cr6.eq) goto loc_8291298C;
	// lbz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 156);
	// stw r22,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r22.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8291298c
	if (ctx.cr0.eq) goto loc_8291298C;
	// stw r22,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r22.u32);
loc_8291298C:
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
loc_82912990:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8291296c
	if (!ctx.cr6.eq) goto loc_8291296C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x829129a8
	if (!ctx.cr6.eq) goto loc_829129A8;
	// stw r22,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r22.u32);
loc_829129A8:
	// bl 0x828e1620
	ctx.lr = 0x829129AC;
	sub_828E1620(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bge 0x8291295c
	if (!ctx.cr0.lt) goto loc_8291295C;
	// b 0x82912de0
	goto loc_82912DE0;
loc_829129BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829003f0
	ctx.lr = 0x829129CC;
	sub_829003F0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r24,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829129F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r23.u32);
	// lbz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82912a30
	if (ctx.cr0.eq) goto loc_82912A30;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912A28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x82912a34
	goto loc_82912A34;
loc_82912A30:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82912A34:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r11,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r11.u8);
	// beq cr6,0x82912a68
	if (ctx.cr6.eq) goto loc_82912A68;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x82912a6c
	goto loc_82912A6C;
loc_82912A68:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82912A6C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,241(r1)
	PPC_STORE_U8(ctx.r1.u32 + 241, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r5,1023
	ctx.r5.s64 = 1023;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stb r10,242(r1)
	PPC_STORE_U8(ctx.r1.u32 + 242, ctx.r10.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,242(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 242);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// beq 0x82912b1c
	if (ctx.cr0.eq) goto loc_82912B1C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,3029
	ctx.r11.s64 = ctx.r11.s64 + 3029;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-512
	ctx.r10.s64 = ctx.r10.s64 + -512;
	// clrlwi r10,r10,22
	ctx.r10.u64 = ctx.r10.u32 & 0x3FF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-512
	ctx.r11.s64 = ctx.r11.s64 + -512;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// b 0x82912b20
	goto loc_82912B20;
loc_82912B1C:
	// stw r24,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r24.u32);
loc_82912B20:
	// lbz r11,242(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 242);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82912b40
	if (!ctx.cr0.eq) goto loc_82912B40;
	// lbz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82912b40
	if (!ctx.cr0.eq) goto loc_82912B40;
	// stw r24,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r24.u32);
	// b 0x82912b68
	goto loc_82912B68;
loc_82912B40:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
loc_82912B68:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82912e24
	if (!ctx.cr6.eq) goto loc_82912E24;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r24,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r24.u32);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r24.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// beq cr6,0x82912bcc
	if (ctx.cr6.eq) goto loc_82912BCC;
	// stw r24,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r24.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82332c38
	ctx.lr = 0x82912BCC;
	sub_82332C38(ctx, base);
loc_82912BCC:
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// srawi r4,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 3;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82332d50
	ctx.lr = 0x82912BE4;
	sub_82332D50(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82912e24
	if (!ctx.cr6.eq) goto loc_82912E24;
	// lwz r6,228(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// addi r11,r6,983
	ctx.r11.s64 = ctx.r6.s64 + 983;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82912c44
	if (!ctx.cr6.eq) goto loc_82912C44;
	// lwz r10,3932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3932);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82912c44
	if (!ctx.cr6.eq) goto loc_82912C44;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82912e24
	if (!ctx.cr6.eq) goto loc_82912E24;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82912e24
	if (!ctx.cr6.eq) goto loc_82912E24;
loc_82912C44:
	// lbz r10,242(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 242);
	// lwzx r30,r11,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82912c6c
	if (ctx.cr0.eq) goto loc_82912C6C;
	// addi r10,r6,3029
	ctx.r10.s64 = ctx.r6.s64 + 3029;
	// lwz r9,236(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82912dd4
	if (!ctx.cr6.gt) goto loc_82912DD4;
loc_82912C6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82912ca0
	if (!ctx.cr6.eq) goto loc_82912CA0;
	// lbz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82912c8c
	if (ctx.cr0.eq) goto loc_82912C8C;
	// lbz r11,241(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 241);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82912ca0
	if (!ctx.cr0.eq) goto loc_82912CA0;
loc_82912C8C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82912dd4
	if (ctx.cr6.eq) goto loc_82912DD4;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82912dd4
	if (ctx.cr6.eq) goto loc_82912DD4;
loc_82912CA0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82912d68
	if (!ctx.cr6.eq) goto loc_82912D68;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82912e24
	if (ctx.cr6.lt) goto loc_82912E24;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bge cr6,0x82912e24
	if (!ctx.cr6.lt) goto loc_82912E24;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82912e24
	if (ctx.cr6.eq) goto loc_82912E24;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82913250
	ctx.lr = 0x82912CD4;
	sub_82913250(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82912d68
	if (!ctx.cr0.eq) goto loc_82912D68;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x828db248
	ctx.lr = 0x82912D0C;
	sub_828DB248(ctx, base);
	// stb r22,446(r1)
	PPC_STORE_U8(ctx.r1.u32 + 446, ctx.r22.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828e1b30
	ctx.lr = 0x82912D20;
	sub_828E1B30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82912d58
	if (!ctx.cr6.eq) goto loc_82912D58;
	// stw r22,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r22.u32);
loc_82912D58:
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x82339860
	ctx.lr = 0x82912D60;
	sub_82339860(ctx, base);
	// stw r20,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r20.u32);
	// b 0x82912dd4
	goto loc_82912DD4;
loc_82912D68:
	// lbz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82912d7c
	if (ctx.cr0.eq) goto loc_82912D7C;
	// stw r23,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r23.u32);
	// stw r22,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r22.u32);
loc_82912D7C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828e1870
	ctx.lr = 0x82912D88;
	sub_828E1870(ctx, base);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r11,444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82912dd4
	if (!ctx.cr6.eq) goto loc_82912DD4;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82912dd4
	if (ctx.cr6.eq) goto loc_82912DD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82333960
	ctx.lr = 0x82912DD0;
	sub_82333960(ctx, base);
	// stw r22,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r22.u32);
loc_82912DD4:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82339860
	ctx.lr = 0x82912DDC;
	sub_82339860(ctx, base);
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
loc_82912DE0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829127f0
	if (ctx.cr0.eq) goto loc_829127F0;
loc_82912DFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82912E18:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
loc_82912E24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82339860
	ctx.lr = 0x82912E48;
	sub_82339860(ctx, base);
	// b 0x82912e18
	goto loc_82912E18;
}

__attribute__((alias("__imp__sub_82912E50"))) PPC_WEAK_FUNC(sub_82912E50);
PPC_FUNC_IMPL(__imp__sub_82912E50) {
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
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82912e90
	if (!ctx.cr6.gt) goto loc_82912E90;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82912E90:
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82912eac
	if (!ctx.cr6.eq) goto loc_82912EAC;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r4,3924(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3924);
	// addi r3,r31,724
	ctx.r3.s64 = ctx.r31.s64 + 724;
	// bl 0x82900228
	ctx.lr = 0x82912EAC;
	sub_82900228(ctx, base);
loc_82912EAC:
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

__attribute__((alias("__imp__sub_82912EC0"))) PPC_WEAK_FUNC(sub_82912EC0);
PPC_FUNC_IMPL(__imp__sub_82912EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82912EC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82912fe8
	if (!ctx.cr6.eq) goto loc_82912FE8;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82912f6c
	if (ctx.cr6.eq) goto loc_82912F6C;
	// lwz r11,20340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20340);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82912f38
	if (!ctx.cr6.gt) goto loc_82912F38;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82912F04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,20336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20336);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20340);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82912f04
	if (ctx.cr6.lt) goto loc_82912F04;
loc_82912F38:
	// lwz r11,20344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20344);
	// addi r3,r31,20324
	ctx.r3.s64 = ctx.r31.s64 + 20324;
	// stw r28,20340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20340, ctx.r28.u32);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82912f60
	if (ctx.cr6.eq) goto loc_82912F60;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x82912F60;
	sub_82332C38(ctx, base);
loc_82912F60:
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r31,20300
	ctx.r3.s64 = ctx.r31.s64 + 20300;
	// bl 0x82410060
	ctx.lr = 0x82912F6C;
	sub_82410060(ctx, base);
loc_82912F6C:
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r10,16383
	ctx.r10.s64 = 16383;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,26,0,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC000000;
	// subfic r10,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r10.s64;
	// srawi r11,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 31;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82912e50
	ctx.lr = 0x82912FA4;
	sub_82912E50(ctx, base);
	// addi r3,r31,724
	ctx.r3.s64 = ctx.r31.s64 + 724;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829002e0
	ctx.lr = 0x82912FB0;
	sub_829002E0(ctx, base);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82900228
	ctx.lr = 0x82912FBC;
	sub_82900228(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r10,836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r28,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r28.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82912fe8
	if (!ctx.cr6.eq) goto loc_82912FE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82912FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82912FE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82912FF0"))) PPC_WEAK_FUNC(sub_82912FF0);
PPC_FUNC_IMPL(__imp__sub_82912FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82912FF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// bl 0x828ffe98
	ctx.lr = 0x82913028;
	sub_828FFE98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829002e0
	ctx.lr = 0x82913034;
	sub_829002E0(ctx, base);
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8291304c
	if (!ctx.cr0.eq) goto loc_8291304C;
	// lbz r11,157(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 157);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82913050
	if (ctx.cr0.eq) goto loc_82913050;
loc_8291304C:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82913050:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829002e0
	ctx.lr = 0x82913058;
	sub_829002E0(ctx, base);
	// lbz r4,156(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x82913070
	if (!ctx.cr0.eq) goto loc_82913070;
	// lbz r11,157(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 157);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82913084
	if (ctx.cr0.eq) goto loc_82913084;
loc_82913070:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829002e0
	ctx.lr = 0x82913078;
	sub_829002E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r4,157(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 157);
	// bl 0x829002e0
	ctx.lr = 0x82913084;
	sub_829002E0(ctx, base);
loc_82913084:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r4,158(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 158);
	// bl 0x829002e0
	ctx.lr = 0x82913090;
	sub_829002E0(ctx, base);
	// li r5,1023
	ctx.r5.s64 = 1023;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,140(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// bl 0x82900228
	ctx.lr = 0x829130A0;
	sub_82900228(ctx, base);
	// lbz r11,158(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 158);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829130bc
	if (ctx.cr0.eq) goto loc_829130BC;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// lwz r4,148(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82900228
	ctx.lr = 0x829130BC;
	sub_82900228(ctx, base);
loc_829130BC:
	// lbz r11,158(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 158);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x829130d4
	if (!ctx.cr0.eq) goto loc_829130D4;
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829130e4
	if (ctx.cr0.eq) goto loc_829130E4;
loc_829130D4:
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82900228
	ctx.lr = 0x829130E4;
	sub_82900228(ctx, base);
loc_829130E4:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82900228
	ctx.lr = 0x829130F8;
	sub_82900228(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,208(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82912e50
	ctx.lr = 0x8291310C;
	sub_82912E50(ctx, base);
	// lwz r11,3924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3924);
	// stw r29,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r29.u32);
	// addi r29,r31,724
	ctx.r29.s64 = ctx.r31.s64 + 724;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r11.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lfd f0,456(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// stfd f0,128(r30)
	PPC_STORE_U64(ctx.r30.u32 + 128, ctx.f0.u64);
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// lwz r10,724(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r9,768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// std r11,416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 416, ctx.r11.u64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8291315C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r5,112(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r10,836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x829131a0
	if (!ctx.cr6.eq) goto loc_829131A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829131A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829131A0:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r31,152(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82339860
	ctx.lr = 0x829131AC;
	sub_82339860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829131B8"))) PPC_WEAK_FUNC(sub_829131B8);
PPC_FUNC_IMPL(__imp__sub_829131B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829131C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x829131e4
	if (ctx.cr6.eq) goto loc_829131E4;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// b 0x829131e8
	goto loc_829131E8;
loc_829131E4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_829131E8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,92
	ctx.r3.s64 = ctx.r30.s64 + 92;
	// bl 0x829964f0
	ctx.lr = 0x829131F8;
	sub_829964F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82913248
	if (ctx.cr0.eq) goto loc_82913248;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r11,444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8291321c
	if (ctx.cr6.eq) goto loc_8291321C;
	// stw r28,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r28.u32);
	// stw r28,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r28.u32);
	// b 0x82913248
	goto loc_82913248;
loc_8291321C:
	// lwz r11,1012(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1012);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82913234
	if (ctx.cr6.eq) goto loc_82913234;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r30,20396
	ctx.r3.s64 = ctx.r30.s64 + 20396;
	// bl 0x824b99b0
	ctx.lr = 0x82913234;
	sub_824B99B0(ctx, base);
loc_82913234:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82913248:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82913250"))) PPC_WEAK_FUNC(sub_82913250);
PPC_FUNC_IMPL(__imp__sub_82913250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82913258;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291327C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x829132d4
	if (!ctx.cr6.eq) goto loc_829132D4;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82913294
	if (!ctx.cr6.eq) goto loc_82913294;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82913294:
	// cmpwi cr6,r29,1023
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1023, ctx.xer);
	// bge cr6,0x829132c8
	if (!ctx.cr6.lt) goto loc_829132C8;
	// addi r11,r29,983
	ctx.r11.s64 = ctx.r29.s64 + 983;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_829132A8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829132c4
	if (ctx.cr6.eq) goto loc_829132C4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r29,1023
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1023, ctx.xer);
	// blt cr6,0x829132a8
	if (ctx.cr6.lt) goto loc_829132A8;
loc_829132C4:
	// cmpwi cr6,r29,1023
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1023, ctx.xer);
loc_829132C8:
	// bne cr6,0x829132d4
	if (!ctx.cr6.eq) goto loc_829132D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8291334c
	goto loc_8291334C;
loc_829132D4:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-27968
	ctx.r11.s64 = ctx.r11.s64 + -27968;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829132F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r29,983
	ctx.r11.s64 = ctx.r29.s64 + 983;
	// addi r3,r31,20348
	ctx.r3.s64 = ctx.r31.s64 + 20348;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// bl 0x82332d50
	ctx.lr = 0x82913334;
	sub_82332D50(ctx, base);
	// lwz r11,20360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20360);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82913348
	if (ctx.cr0.eq) goto loc_82913348;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82913348:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8291334C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82913358"))) PPC_WEAK_FUNC(sub_82913358);
PPC_FUNC_IMPL(__imp__sub_82913358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82913360;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lfd f13,688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 688);
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,13024(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lfs f0,984(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// fsub f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 - ctx.f13.f64;
	// stfd f13,696(r31)
	PPC_STORE_U64(ctx.r31.u32 + 696, ctx.f13.u64);
	// stfd f0,688(r31)
	PPC_STORE_U64(ctx.r31.u32 + 688, ctx.f0.u64);
	// bge cr6,0x829133a8
	if (!ctx.cr6.lt) goto loc_829133A8;
	// stw r30,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r30.u32);
loc_829133A8:
	// lfd f0,704(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 704);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfd f13,696(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 696);
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// stfd f0,704(r31)
	PPC_STORE_U64(ctx.r31.u32 + 704, ctx.f0.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfd f13,16368(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16368);
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x829133fc
	if (!ctx.cr6.gt) goto loc_829133FC;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stw r30,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r30.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f13,16376(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16376);
	// fdiv f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 / ctx.f12.f64;
	// stfd f13,704(r31)
	PPC_STORE_U64(ctx.r31.u32 + 704, ctx.f13.u64);
	// stfd f0,712(r31)
	PPC_STORE_U64(ctx.r31.u32 + 712, ctx.f0.u64);
loc_829133FC:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82913460
	if (ctx.cr6.eq) goto loc_82913460;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r9,20364(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20364);
	// addic. r29,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r29.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lfd f0,456(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// stfd f0,376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 376, ctx.f0.u64);
	// blt 0x82913460
	if (ctx.cr0.lt) goto loc_82913460;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82913428:
	// lwz r11,20360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20360);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// b 0x82913440
	goto loc_82913440;
loc_82913438:
	// stw r26,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r26.u32);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
loc_82913440:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82913438
	if (!ctx.cr6.eq) goto loc_82913438;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// bl 0x828e1620
	ctx.lr = 0x82913450;
	sub_828E1620(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// bge 0x82913428
	if (!ctx.cr0.lt) goto loc_82913428;
	// lwz r10,13024(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
loc_82913460:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,84(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8291346C;
	sub_829B9720(ctx, base);
	// bl 0x82411b98
	ctx.lr = 0x82913470;
	sub_82411B98(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lfd f0,608(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 608);
	// lfd f13,456(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfs f13,616(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x829136b4
	if (!ctx.cr6.gt) goto loc_829136B4;
	// lwz r11,680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829134bc
	if (ctx.cr6.eq) goto loc_829134BC;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
loc_829134BC:
	// lwa r11,660(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 660));
	// lfs f0,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// addi r8,r9,-27372
	ctx.r8.s64 = ctx.r9.s64 + -27372;
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,-27372(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27372, ctx.r11.u32);
	// lwa r11,664(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 664));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwa r11,644(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 644));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// lwa r10,648(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 648));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// lwa r10,652(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 652));
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
	// lwa r10,656(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 656));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r10.u32);
	// lwa r10,640(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 640));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// lfs f13,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// fsel f10,f10,f11,f0
	ctx.f10.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,18196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18196);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fdivs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fctiwz f10,f10
	ctx.f10.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fcfid f10,f8
	ctx.f10.f64 = double(ctx.f8.s64);
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// lwa r11,636(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 636));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fadds f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsel f0,f9,f10,f0
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// stfs f12,628(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stfs f11,632(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// stw r30,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
	// stw r30,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
	// stw r30,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r30.u32);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// stw r30,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// lfd f0,456(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// stfd f0,608(r31)
	PPC_STORE_U64(ctx.r31.u32 + 608, ctx.f0.u64);
loc_829136B4:
	// lwa r10,8(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 8));
	// lfd f0,456(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,392(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 392);
	// fsub f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 - ctx.f13.f64;
	// stfd f0,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.f0.u64);
	// lwz r9,408(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lfs f13,-27300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27300);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stw r10,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r10.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82913730
	if (!ctx.cr6.lt) goto loc_82913730;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,408
	ctx.r12.s64 = 408;
	// stfiwx f0,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
loc_82913730:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f0,468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8291375c
	if (ctx.cr6.eq) goto loc_8291375C;
	// lwz r10,3932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3932);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8291375c
	if (ctx.cr6.eq) goto loc_8291375C;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8291375c
	if (ctx.cr6.eq) goto loc_8291375C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8291375C:
	// lfd f13,456(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// lfd f12,376(r31)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r31.u32 + 376);
	// fsub f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 - ctx.f12.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x829137c8
	if (ctx.cr6.gt) goto loc_829137C8;
	// lwz r11,20364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20364);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x829137a4
	if (ctx.cr0.lt) goto loc_829137A4;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82913780:
	// lwz r11,20360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20360);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// bge 0x82913780
	if (!ctx.cr0.lt) goto loc_82913780;
loc_829137A4:
	// lwz r11,3932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3932);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829137cc
	if (!ctx.cr6.eq) goto loc_829137CC;
	// lwz r11,8024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829137c8
	if (!ctx.cr6.eq) goto loc_829137C8;
	// lwz r11,12116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829137cc
	if (ctx.cr6.eq) goto loc_829137CC;
loc_829137C8:
	// stw r26,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r26.u32);
loc_829137CC:
	// lwz r11,20340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20340);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82913814
	if (!ctx.cr6.gt) goto loc_82913814;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_829137E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,20336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20336);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20340);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829137e0
	if (ctx.cr6.lt) goto loc_829137E0;
loc_82913814:
	// lwz r11,20344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20344);
	// addi r3,r31,20324
	ctx.r3.s64 = ctx.r31.s64 + 20324;
	// stw r30,20340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20340, ctx.r30.u32);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8291383c
	if (ctx.cr6.eq) goto loc_8291383C;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x8291383C;
	sub_82332C38(ctx, base);
loc_8291383C:
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82913864
	if (!ctx.cr6.eq) goto loc_82913864;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lfd f0,384(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 384);
	// lfd f13,456(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfs f13,472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82913878
	if (!ctx.cr6.gt) goto loc_82913878;
loc_82913864:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82913878:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82913888
	ctx.lr = 0x82913880;
	sub_82913888(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82913888"))) PPC_WEAK_FUNC(sub_82913888);
PPC_FUNC_IMPL(__imp__sub_82913888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82913890;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,20388(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20388);
	// addic. r25,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r25.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt 0x82913938
	if (ctx.cr0.lt) goto loc_82913938;
	// addi r29,r26,20372
	ctx.r29.s64 = ctx.r26.s64 + 20372;
	// rlwinm r27,r25,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_829138AC:
	// lwz r11,20384(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20384);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r28,r11,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// ble cr6,0x8291390c
	if (!ctx.cr6.gt) goto loc_8291390C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_829138C8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x829138f8
	if (!ctx.cr6.eq) goto loc_829138F8;
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
	ctx.lr = 0x829138F0;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_829138F8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829138c8
	if (ctx.cr6.lt) goto loc_829138C8;
loc_8291390C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8291392c
	if (ctx.cr6.eq) goto loc_8291392C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291392C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8291392C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
	// bge 0x829138ac
	if (!ctx.cr0.lt) goto loc_829138AC;
loc_82913938:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82913940"))) PPC_WEAK_FUNC(sub_82913940);
PPC_FUNC_IMPL(__imp__sub_82913940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82913948;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82913af8
	if (!ctx.cr6.gt) goto loc_82913AF8;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827d9bf0
	ctx.lr = 0x82913974;
	sub_827D9BF0(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x82913af8
	if (ctx.cr0.eq) goto loc_82913AF8;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,20(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8291398C;
	sub_829B9720(ctx, base);
	// bl 0x82411b98
	ctx.lr = 0x82913990;
	sub_82411B98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82913ac8
	if (ctx.cr0.eq) goto loc_82913AC8;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r30,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r30.u32);
	// stw r30,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r30.u32);
	// lwz r27,84(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r25,1164(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1164);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829139C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829139e4
	if (!ctx.cr6.gt) goto loc_829139E4;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82913ab4
	goto loc_82913AB4;
loc_829139E4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82913a80
	if (!ctx.cr6.eq) goto loc_82913A80;
	// lwz r26,1160(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1160);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 964);
	// addi r28,r27,948
	ctx.r28.s64 = ctx.r27.s64 + 948;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82913a60
	if (!ctx.cr6.gt) goto loc_82913A60;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82913A1C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82913a4c
	if (!ctx.cr6.eq) goto loc_82913A4C;
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
	ctx.lr = 0x82913A44;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82913A4C:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82913a1c
	if (ctx.cr6.lt) goto loc_82913A1C;
loc_82913A60:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82913A80:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82913ab4
	if (!ctx.cr0.eq) goto loc_82913AB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82913ab4
	if (ctx.cr0.eq) goto loc_82913AB4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,924
	ctx.r3.s64 = ctx.r27.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82913AB4;
	sub_82410060(ctx, base);
loc_82913AB4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82913AC8:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// stw r10,960(r22)
	PPC_STORE_U32(ctx.r22.u32 + 960, ctx.r10.u32);
	// bl 0x828c2358
	ctx.lr = 0x82913AE4;
	sub_828C2358(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,140(r23)
	PPC_STORE_U32(ctx.r23.u32 + 140, ctx.r11.u32);
	// lwz r11,80(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 80);
	// stw r11,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r11.u32);
	// stw r11,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
loc_82913AF8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82913B00"))) PPC_WEAK_FUNC(sub_82913B00);
PPC_FUNC_IMPL(__imp__sub_82913B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82913B08;
	__savegprlr_26(ctx, base);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,1024
	ctx.r29.s64 = 1024;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
loc_82913B38:
	// lwz r3,13016(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82913b4c
	if (!ctx.cr6.eq) goto loc_82913B4C;
	// bl 0x828223f0
	ctx.lr = 0x82913B48;
	sub_828223F0(ctx, base);
	// lwz r3,13016(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13016);
loc_82913B4C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r30,r29,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r29,-1
	ctx.r4.s64 = ctx.r29.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a56fd0
	ctx.lr = 0x82913B8C;
	sub_82A56FD0(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82913b38
	if (ctx.cr6.eq) goto loc_82913B38;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82913BC4;
	sub_82332DB8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82913BD0"))) PPC_WEAK_FUNC(sub_82913BD0);
PPC_FUNC_IMPL(__imp__sub_82913BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82913BD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82913ddc
	if (ctx.cr6.eq) goto loc_82913DDC;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bne 0x82913ca4
	if (!ctx.cr0.eq) goto loc_82913CA4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r5,1023
	ctx.r5.s64 = 1023;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82913dd4
	if (ctx.cr6.eq) goto loc_82913DD4;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82913eb0
	if (!ctx.cr6.eq) goto loc_82913EB0;
	// cmplwi cr6,r11,1023
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1023, ctx.xer);
	// bge cr6,0x82913eb0
	if (!ctx.cr6.lt) goto loc_82913EB0;
	// addi r11,r11,983
	ctx.r11.s64 = ctx.r11.s64 + 983;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82913eb0
	if (ctx.cr6.eq) goto loc_82913EB0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82913eb0
	if (!ctx.cr6.eq) goto loc_82913EB0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82913eb0
	if (!ctx.cr6.eq) goto loc_82913EB0;
	// bl 0x828e28b0
	ctx.lr = 0x82913C9C;
	sub_828E28B0(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// b 0x82913eb0
	goto loc_82913EB0;
loc_82913CA4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne 0x82913d1c
	if (!ctx.cr0.eq) goto loc_82913D1C;
	// bctrl 
	ctx.lr = 0x82913CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82913eb0
	if (!ctx.cr6.eq) goto loc_82913EB0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82913D04;
	sub_829B98F8(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82913D08;
	sub_82416348(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82913eb0
	if (ctx.cr0.eq) goto loc_82913EB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82913da0
	goto loc_82913DA0;
loc_82913D1C:
	// bctrl 
	ctx.lr = 0x82913D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82913eb0
	if (!ctx.cr6.eq) goto loc_82913EB0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r10,-15060
	ctx.r3.s64 = ctx.r10.s64 + -15060;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x823928a0
	ctx.lr = 0x82913D44;
	sub_823928A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82913eb4
	if (ctx.cr0.eq) goto loc_82913EB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913D5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// bl 0x82416348
	ctx.lr = 0x82913D64;
	sub_82416348(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82913eb0
	if (ctx.cr0.eq) goto loc_82913EB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824381f0
	ctx.lr = 0x82913D74;
	sub_824381F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82913d98
	if (ctx.cr0.eq) goto loc_82913D98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82913db4
	if (ctx.cr0.eq) goto loc_82913DB4;
loc_82913D98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82913DA0:
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82913eb0
	goto loc_82913EB0;
loc_82913DB4:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82913dd4
	if (ctx.cr6.eq) goto loc_82913DD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82913DD4:
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// b 0x82913eb0
	goto loc_82913EB0;
loc_82913DDC:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82416348
	ctx.lr = 0x82913DE4;
	sub_82416348(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82913e68
	if (ctx.cr0.eq) goto loc_82913E68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913E0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r28,92
	ctx.r3.s64 = ctx.r28.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x829964f0
	ctx.lr = 0x82913E20;
	sub_829964F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82913e30
	if (ctx.cr0.eq) goto loc_82913E30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828e28b0
	ctx.lr = 0x82913E30;
	sub_828E28B0(ctx, base);
loc_82913E30:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82913e44
	if (ctx.cr6.eq) goto loc_82913E44;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_82913E44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1023
	ctx.r5.s64 = 1023;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82913eb4
	goto loc_82913EB4;
loc_82913E68:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82913eb0
	if (!ctx.cr6.eq) goto loc_82913EB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1023
	ctx.r5.s64 = 1023;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82913EB0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82913EB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82913EC0"))) PPC_WEAK_FUNC(sub_82913EC0);
PPC_FUNC_IMPL(__imp__sub_82913EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82913EC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r27,84(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,92
	ctx.r3.s64 = ctx.r30.s64 + 92;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x829964f0
	ctx.lr = 0x82913F24;
	sub_829964F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82914040
	if (ctx.cr0.eq) goto loc_82914040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828e28b0
	ctx.lr = 0x82913F34;
	sub_828E28B0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829140c4
	if (ctx.cr6.eq) goto loc_829140C4;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82913f54
	if (ctx.cr6.eq) goto loc_82913F54;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x829140c4
	if (ctx.cr6.eq) goto loc_829140C4;
loc_82913F54:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828db248
	ctx.lr = 0x82913F64;
	sub_828DB248(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829002e0
	ctx.lr = 0x82913F70;
	sub_829002E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829002e0
	ctx.lr = 0x82913F78;
	sub_829002E0(ctx, base);
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82900228
	ctx.lr = 0x82913F8C;
	sub_82900228(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82900228
	ctx.lr = 0x82913FA0;
	sub_82900228(ctx, base);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82913fe0
	if (!ctx.cr6.eq) goto loc_82913FE0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82900228
	ctx.lr = 0x82913FE0;
	sub_82900228(ctx, base);
loc_82913FE0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82913FF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291400C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stb r3,286(r1)
	PPC_STORE_U8(ctx.r1.u32 + 286, ctx.r3.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82914074
	if (ctx.cr6.eq) goto loc_82914074;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,511
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 511, ctx.xer);
	// bge cr6,0x82914080
	if (!ctx.cr6.lt) goto loc_82914080;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291403C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82914080
	goto loc_82914080;
loc_82914040:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829c62f0
	ctx.lr = 0x8291404C;
	sub_829C62F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82914054;
	sub_82333960(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82914058:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291406C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x829140f0
	goto loc_829140F0;
loc_82914074:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82914098
	if (ctx.cr6.eq) goto loc_82914098;
loc_82914080:
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82339860
	ctx.lr = 0x82914088;
	sub_82339860(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r11,r11,-23568
	ctx.r11.s64 = ctx.r11.s64 + -23568;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x829140d8
	goto loc_829140D8;
loc_82914098:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828e1b30
	ctx.lr = 0x829140A8;
	sub_828E1B30(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82339860
	ctx.lr = 0x829140B0;
	sub_82339860(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r11,-23568
	ctx.r11.s64 = ctx.r11.s64 + -23568;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x82914058
	goto loc_82914058;
loc_829140C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829c62f0
	ctx.lr = 0x829140D0;
	sub_829C62F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x829140D8;
	sub_82333960(ctx, base);
loc_829140D8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829140EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_829140F0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829140F8"))) PPC_WEAK_FUNC(sub_829140F8);
PPC_FUNC_IMPL(__imp__sub_829140F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82914100;
	__savegprlr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82914120
	if (ctx.cr6.eq) goto loc_82914120;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// b 0x82914124
	goto loc_82914124;
loc_82914120:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82914124:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,92
	ctx.r3.s64 = ctx.r3.s64 + 92;
	// bl 0x829964f0
	ctx.lr = 0x82914134;
	sub_829964F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829141e4
	if (ctx.cr0.eq) goto loc_829141E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828e28b0
	ctx.lr = 0x82914144;
	sub_828E28B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828db248
	ctx.lr = 0x82914154;
	sub_828DB248(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829002e0
	ctx.lr = 0x82914160;
	sub_829002E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829002e0
	ctx.lr = 0x8291416C;
	sub_829002E0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82900228
	ctx.lr = 0x8291417C;
	sub_82900228(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,254(r1)
	PPC_STORE_U8(ctx.r1.u32 + 254, ctx.r11.u8);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829141bc
	if (ctx.cr6.eq) goto loc_829141BC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,511
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 511, ctx.xer);
	// bge cr6,0x829141dc
	if (!ctx.cr6.lt) goto loc_829141DC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829141dc
	if (ctx.cr6.eq) goto loc_829141DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829141B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x829141dc
	goto loc_829141DC;
loc_829141BC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829141dc
	if (!ctx.cr6.eq) goto loc_829141DC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828e1b30
	ctx.lr = 0x829141D8;
	sub_828E1B30(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_829141DC:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82339860
	ctx.lr = 0x829141E4;
	sub_82339860(ctx, base);
loc_829141E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829141F0"))) PPC_WEAK_FUNC(sub_829141F0);
PPC_FUNC_IMPL(__imp__sub_829141F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829141F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291421C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,3932(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3932);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8291424c
	if (ctx.cr6.eq) goto loc_8291424C;
	// bl 0x828c3208
	ctx.lr = 0x8291422C;
	sub_828C3208(ctx, base);
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
	ctx.lr = 0x82914244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82914250
	if (!ctx.cr0.eq) goto loc_82914250;
loc_8291424C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82914250:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82914338
	if (ctx.cr6.eq) goto loc_82914338;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82914338
	if (ctx.cr6.eq) goto loc_82914338;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828db248
	ctx.lr = 0x82914274;
	sub_828DB248(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829002e0
	ctx.lr = 0x82914280;
	sub_829002E0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82914294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829142A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x82900228
	ctx.lr = 0x829142B8;
	sub_82900228(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829142D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829142E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r3,238(r1)
	PPC_STORE_U8(ctx.r1.u32 + 238, ctx.r3.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82914318
	if (ctx.cr6.eq) goto loc_82914318;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,511
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 511, ctx.xer);
	// bge cr6,0x82914324
	if (!ctx.cr6.lt) goto loc_82914324;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82914314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82914324
	goto loc_82914324;
loc_82914318:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82914358
	if (ctx.cr6.eq) goto loc_82914358;
loc_82914324:
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82339860
	ctx.lr = 0x8291432C;
	sub_82339860(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r11,r11,-23568
	ctx.r11.s64 = ctx.r11.s64 + -23568;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82914338:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291434C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82914350:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_82914358:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828e1b30
	ctx.lr = 0x82914368;
	sub_828E1B30(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82339860
	ctx.lr = 0x82914370;
	sub_82339860(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-23568
	ctx.r11.s64 = ctx.r11.s64 + -23568;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82914390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82914350
	goto loc_82914350;
}

__attribute__((alias("__imp__sub_82914398"))) PPC_WEAK_FUNC(sub_82914398);
PPC_FUNC_IMPL(__imp__sub_82914398) {
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
	ctx.lr = 0x829143B4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82914400
	if (ctx.cr0.eq) goto loc_82914400;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,5272
	ctx.r10.s64 = ctx.r10.s64 + 5272;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
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
	// b 0x82914404
	goto loc_82914404;
loc_82914400:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82914404:
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

__attribute__((alias("__imp__sub_82914418"))) PPC_WEAK_FUNC(sub_82914418);
PPC_FUNC_IMPL(__imp__sub_82914418) {
	PPC_FUNC_PROLOGUE();
	// b 0x828c30f8
	sub_828C30F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82914420"))) PPC_WEAK_FUNC(sub_82914420);
PPC_FUNC_IMPL(__imp__sub_82914420) {
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
	// beq cr6,0x82914458
	if (ctx.cr6.eq) goto loc_82914458;
	// bl 0x828c30f8
	ctx.lr = 0x82914448;
	sub_828C30F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82914458
	if (!ctx.cr6.eq) goto loc_82914458;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82914464
	goto loc_82914464;
loc_82914458:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82914658
	ctx.lr = 0x82914464;
	sub_82914658(ctx, base);
loc_82914464:
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

__attribute__((alias("__imp__sub_82914480"))) PPC_WEAK_FUNC(sub_82914480);
PPC_FUNC_IMPL(__imp__sub_82914480) {
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
	// bl 0x828c30f8
	ctx.lr = 0x829144A0;
	sub_828C30F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829144b4
	if (ctx.cr6.eq) goto loc_829144B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829144f0
	ctx.lr = 0x829144B4;
	sub_829144F0(ctx, base);
loc_829144B4:
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

__attribute__((alias("__imp__sub_829144D0"))) PPC_WEAK_FUNC(sub_829144D0);
PPC_FUNC_IMPL(__imp__sub_829144D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-15316
	ctx.r3.s64 = ctx.r11.s64 + -15316;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829144E0"))) PPC_WEAK_FUNC(sub_829144E0);
PPC_FUNC_IMPL(__imp__sub_829144E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,5260
	ctx.r3.s64 = ctx.r11.s64 + 5260;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829144F0"))) PPC_WEAK_FUNC(sub_829144F0);
PPC_FUNC_IMPL(__imp__sub_829144F0) {
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
	// bl 0x82914550
	ctx.lr = 0x82914510;
	sub_82914550(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82914520
	if (!ctx.cr6.eq) goto loc_82914520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82914534
	goto loc_82914534;
loc_82914520:
	// bl 0x82333d20
	ctx.lr = 0x82914524;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82914534
	if (ctx.cr6.eq) goto loc_82914534;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82914534:
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

__attribute__((alias("__imp__sub_82914550"))) PPC_WEAK_FUNC(sub_82914550);
PPC_FUNC_IMPL(__imp__sub_82914550) {
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
	// addi r31,r11,18176
	ctx.r31.s64 = ctx.r11.s64 + 18176;
	// lwz r11,18180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18180);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82914598
	if (!ctx.cr0.eq) goto loc_82914598;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,5356
	ctx.r9.s64 = ctx.r9.s64 + 5356;
	// stw r11,18180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18180, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-13056
	ctx.r3.s64 = ctx.r11.s64 + -13056;
	// bl 0x82a4c758
	ctx.lr = 0x82914598;
	sub_82A4C758(ctx, base);
loc_82914598:
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

__attribute__((alias("__imp__sub_829145B0"))) PPC_WEAK_FUNC(sub_829145B0);
PPC_FUNC_IMPL(__imp__sub_829145B0) {
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
	// lwz r11,-26728(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26728);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829145f0
	if (!ctx.cr0.eq) goto loc_829145F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26728(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26728, ctx.r11.u32);
	// addi r3,r9,5260
	ctx.r3.s64 = ctx.r9.s64 + 5260;
	// bl 0x82816528
	ctx.lr = 0x829145E8;
	sub_82816528(ctx, base);
	// stw r3,-26732(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26732, ctx.r3.u32);
	// b 0x829145f4
	goto loc_829145F4;
loc_829145F0:
	// lwz r3,-26732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26732);
loc_829145F4:
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

__attribute__((alias("__imp__sub_82914608"))) PPC_WEAK_FUNC(sub_82914608);
PPC_FUNC_IMPL(__imp__sub_82914608) {
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
	// bl 0x82914550
	ctx.lr = 0x82914628;
	sub_82914550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291463C;
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

__attribute__((alias("__imp__sub_82914658"))) PPC_WEAK_FUNC(sub_82914658);
PPC_FUNC_IMPL(__imp__sub_82914658) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82914698
	if (ctx.cr6.eq) goto loc_82914698;
	// bl 0x82914550
	ctx.lr = 0x82914678;
	sub_82914550(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82914688
	if (!ctx.cr6.eq) goto loc_82914688;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8291469c
	goto loc_8291469C;
loc_82914688:
	// bl 0x82333d20
	ctx.lr = 0x8291468C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8291469c
	if (ctx.cr6.eq) goto loc_8291469C;
loc_82914698:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8291469C:
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

__attribute__((alias("__imp__sub_829146B0"))) PPC_WEAK_FUNC(sub_829146B0);
PPC_FUNC_IMPL(__imp__sub_829146B0) {
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
	// bl 0x82977530
	ctx.lr = 0x829146C8;
	sub_82977530(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// addi r11,r11,-28528
	ctx.r11.s64 = ctx.r11.s64 + -28528;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8297b320
	ctx.lr = 0x829146DC;
	sub_8297B320(ctx, base);
	// addi r3,r31,1392
	ctx.r3.s64 = ctx.r31.s64 + 1392;
	// bl 0x8248e0c0
	ctx.lr = 0x829146E4;
	sub_8248E0C0(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,5
	ctx.r9.s64 = 5;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lfs f0,912(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// lfs f13,17328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17328);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lfs f12,30996(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 30996);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f11,20416(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20416);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,904(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 904);
	ctx.f10.f64 = double(temp.f32);
	// stw r3,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r3.u32);
	// stfs f0,1536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1536, temp.u32);
	// stw r9,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r9.u32);
	// stfs f13,1540(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1540, temp.u32);
	// stb r10,1572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1572, ctx.r10.u8);
	// stfs f12,1544(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1544, temp.u32);
	// stw r9,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r9.u32);
	// stfs f11,1560(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1560, temp.u32);
	// stw r10,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r10.u32);
	// stfs f10,272(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stw r11,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82914788"))) PPC_WEAK_FUNC(sub_82914788);
PPC_FUNC_IMPL(__imp__sub_82914788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82914790;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82978bc0
	ctx.lr = 0x829147C8;
	sub_82978BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978ed0
	ctx.lr = 0x829147D0;
	sub_82978ED0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// rldicr r8,r29,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bne cr6,0x8291481c
	if (!ctx.cr6.eq) goto loc_8291481C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
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
	// bl 0x829c7118
	ctx.lr = 0x82914818;
	sub_829C7118(ctx, base);
	// b 0x82914838
	goto loc_82914838;
loc_8291481C:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x829c71d0
	ctx.lr = 0x82914838;
	sub_829C71D0(ctx, base);
loc_82914838:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82914850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r28,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82914864
	if (!ctx.cr6.eq) goto loc_82914864;
	// lwz r11,1428(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1428);
loc_82914864:
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// addi r30,r31,584
	ctx.r30.s64 = ctx.r31.s64 + 584;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8297b368
	ctx.lr = 0x82914878;
	sub_8297B368(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829148a4
	if (ctx.cr6.eq) goto loc_829148A4;
	// stw r29,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r29.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r4,r31,1524
	ctx.r4.s64 = ctx.r31.s64 + 1524;
	// lwz r6,592(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r5,596(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x825b7c80
	ctx.lr = 0x829148A4;
	sub_825B7C80(ctx, base);
loc_829148A4:
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r11,128
	ctx.r11.s64 = 128;
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stfs f31,1544(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1544, temp.u32);
	// lwz r8,316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// stw r26,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r26.u32);
	// stw r25,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r25.u32);
	// stw r10,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r10.u32);
	// stb r11,1552(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1552, ctx.r11.u8);
	// stb r11,1556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1556, ctx.r11.u8);
	// stw r9,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r9.u32);
	// stw r8,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829148E0"))) PPC_WEAK_FUNC(sub_829148E0);
PPC_FUNC_IMPL(__imp__sub_829148E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829148E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lwz r27,480(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// bl 0x82978d98
	ctx.lr = 0x829148FC;
	sub_82978D98(ctx, base);
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82914a24
	if (!ctx.cr6.gt) goto loc_82914A24;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82914910:
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82914944
	if (ctx.cr6.eq) goto loc_82914944;
	// bl 0x8243c678
	ctx.lr = 0x82914924;
	sub_8243C678(ctx, base);
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
	ctx.lr = 0x8291493C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82914948
	if (!ctx.cr0.eq) goto loc_82914948;
loc_82914944:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82914948:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82914a10
	if (ctx.cr6.eq) goto loc_82914A10;
	// stw r31,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r31.u32);
	// addic. r4,r31,584
	ctx.xer.ca = ctx.r31.u32 > 4294966711;
	ctx.r4.s64 = ctx.r31.s64 + 584;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// stw r11,1136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1136, ctx.r11.u32);
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// stw r11,1132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1132, ctx.r11.u32);
	// beq 0x82914974
	if (ctx.cr0.eq) goto loc_82914974;
	// addi r3,r30,1140
	ctx.r3.s64 = ctx.r30.s64 + 1140;
	// bl 0x8297b368
	ctx.lr = 0x82914974;
	sub_8297B368(ctx, base);
loc_82914974:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82914988
	if (!ctx.cr6.eq) goto loc_82914988;
	// addi r4,r31,1392
	ctx.r4.s64 = ctx.r31.s64 + 1392;
	// addi r3,r30,1140
	ctx.r3.s64 = ctx.r30.s64 + 1140;
	// bl 0x8297b5e8
	ctx.lr = 0x82914988;
	sub_8297B5E8(ctx, base);
loc_82914988:
	// lwz r11,1524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// stw r11,1948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1948, ctx.r11.u32);
	// lwz r11,1528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// stw r11,1124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1124, ctx.r11.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// stw r11,1128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1128, ctx.r11.u32);
	// lfs f0,1536(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1952(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1952, temp.u32);
	// lfs f0,1540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1956(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1956, temp.u32);
	// lfs f0,1544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1960(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1960, temp.u32);
	// lwz r11,1548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1548);
	// stw r11,1964(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1964, ctx.r11.u32);
	// lwz r11,1552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// stw r11,1968(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1968, ctx.r11.u32);
	// lwz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// stw r11,1972(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1972, ctx.r11.u32);
	// lfs f0,1560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1976(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1976, temp.u32);
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829149e8
	if (!ctx.cr6.eq) goto loc_829149E8;
	// lwz r11,1528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
loc_829149E8:
	// stw r11,1980(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1980, ctx.r11.u32);
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829149fc
	if (!ctx.cr6.eq) goto loc_829149FC;
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
loc_829149FC:
	// stw r11,1984(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1984, ctx.r11.u32);
	// lbz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1572);
	// stb r11,1988(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1988, ctx.r11.u8);
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// stw r11,1992(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1992, ctx.r11.u32);
loc_82914A10:
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82914910
	if (ctx.cr6.lt) goto loc_82914910;
loc_82914A24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82914A30"))) PPC_WEAK_FUNC(sub_82914A30);
PPC_FUNC_IMPL(__imp__sub_82914A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82914A38;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82914af8
	if (!ctx.cr6.gt) goto loc_82914AF8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82914a68
	if (ctx.cr6.eq) goto loc_82914A68;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82914af8
	if (!ctx.cr6.eq) goto loc_82914AF8;
loc_82914A68:
	// addi r27,r31,1408
	ctx.r27.s64 = ctx.r31.s64 + 1408;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8282f630
	ctx.lr = 0x82914A7C;
	sub_8282F630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1012(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1012);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82914A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// ble cr6,0x82914ad4
	if (!ctx.cr6.gt) goto loc_82914AD4;
	// addi r28,r31,1432
	ctx.r28.s64 = ctx.r31.s64 + 1432;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82914AB0:
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x829163b8
	ctx.lr = 0x82914AC0;
	sub_829163B8(ctx, base);
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82914ab0
	if (ctx.cr6.lt) goto loc_82914AB0;
loc_82914AD4:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r26,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82914af8
	if (ctx.cr6.eq) goto loc_82914AF8;
	// stw r26,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332c38
	ctx.lr = 0x82914AF8;
	sub_82332C38(ctx, base);
loc_82914AF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82914B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82914B18"))) PPC_WEAK_FUNC(sub_82914B18);
PPC_FUNC_IMPL(__imp__sub_82914B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82914B20;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82914ba8
	if (ctx.cr6.eq) goto loc_82914BA8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,13024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82914b60
	if (ctx.cr6.eq) goto loc_82914B60;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82914b60
	if (ctx.cr6.eq) goto loc_82914B60;
	// lwz r11,432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82914ba8
	if (!ctx.cr6.eq) goto loc_82914BA8;
loc_82914B60:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82914B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82914ba8
	if (ctx.cr0.eq) goto loc_82914BA8;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r30,1408
	ctx.r3.s64 = ctx.r30.s64 + 1408;
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x829163b8
	ctx.lr = 0x82914BA4;
	sub_829163B8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_82914BA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82914BB8"))) PPC_WEAK_FUNC(sub_82914BB8);
PPC_FUNC_IMPL(__imp__sub_82914BB8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82914c24
	if (ctx.cr6.eq) goto loc_82914C24;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82914BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82914c24
	if (ctx.cr0.eq) goto loc_82914C24;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r30,1432
	ctx.r3.s64 = ctx.r30.s64 + 1432;
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82916488
	ctx.lr = 0x82914C18;
	sub_82916488(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,1408
	ctx.r3.s64 = ctx.r30.s64 + 1408;
	// bl 0x82916488
	ctx.lr = 0x82914C24;
	sub_82916488(ctx, base);
loc_82914C24:
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

__attribute__((alias("__imp__sub_82914C40"))) PPC_WEAK_FUNC(sub_82914C40);
PPC_FUNC_IMPL(__imp__sub_82914C40) {
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
	// bl 0x823bd878
	ctx.lr = 0x82914C58;
	sub_823BD878(ctx, base);
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
	ctx.lr = 0x82914C70;
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

__attribute__((alias("__imp__sub_82914C88"))) PPC_WEAK_FUNC(sub_82914C88);
PPC_FUNC_IMPL(__imp__sub_82914C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82914C90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,1472(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1472);
	// addic. r28,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r28.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82914d14
	if (ctx.cr0.lt) goto loc_82914D14;
	// rlwinm r30,r28,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
loc_82914CAC:
	// lwz r10,1468(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1468);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82914CC4;
	sub_829B98F8(ctx, base);
	// bl 0x827dff28
	ctx.lr = 0x82914CC8;
	sub_827DFF28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82914d08
	if (ctx.cr0.eq) goto loc_82914D08;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,1648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1648);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82914cf0
	if (ctx.cr6.eq) goto loc_82914CF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82914CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82914CF0:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,1456
	ctx.r3.s64 = ctx.r29.s64 + 1456;
	// bl 0x82332ca8
	ctx.lr = 0x82914D08;
	sub_82332CA8(ctx, base);
loc_82914D08:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// bge 0x82914cac
	if (!ctx.cr0.lt) goto loc_82914CAC;
loc_82914D14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82914D20"))) PPC_WEAK_FUNC(sub_82914D20);
PPC_FUNC_IMPL(__imp__sub_82914D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82914D28;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82914e74
	if (!ctx.cr6.gt) goto loc_82914E74;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r10,25332
	ctx.r10.s64 = ctx.r10.s64 + 25332;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// ble cr6,0x82914e60
	if (!ctx.cr6.gt) goto loc_82914E60;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
loc_82914D88:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82914D9C;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82914DA0;
	sub_82416348(ctx, base);
	// bl 0x827dff28
	ctx.lr = 0x82914DA4;
	sub_827DFF28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82914dbc
	if (ctx.cr0.eq) goto loc_82914DBC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,1648(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1648);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82914DBC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332d50
	ctx.lr = 0x82914DD0;
	sub_82332D50(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82914de8
	if (ctx.cr0.eq) goto loc_82914DE8;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82914DE8:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bge cr6,0x82914e04
	if (!ctx.cr6.lt) goto loc_82914E04;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82914e4c
	if (!ctx.cr6.eq) goto loc_82914E4C;
loc_82914E04:
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82914e20
	if (ctx.cr6.eq) goto loc_82914E20;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// bl 0x8282c600
	ctx.lr = 0x82914E1C;
	sub_8282C600(ctx, base);
	// b 0x82914e28
	goto loc_82914E28;
loc_82914E20:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8282c688
	ctx.lr = 0x82914E28;
	sub_8282C688(ctx, base);
loc_82914E28:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82914e4c
	if (ctx.cr6.eq) goto loc_82914E4C;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332c38
	ctx.lr = 0x82914E4C;
	sub_82332C38(ctx, base);
loc_82914E4C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82914d88
	if (ctx.cr6.lt) goto loc_82914D88;
loc_82914E60:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8284aff8
	ctx.lr = 0x82914E68;
	sub_8284AFF8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82914E74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400f38
	ctx.lr = 0x82914E7C;
	sub_82400F38(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82914E88"))) PPC_WEAK_FUNC(sub_82914E88);
PPC_FUNC_IMPL(__imp__sub_82914E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82914E90;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82914f94
	if (!ctx.cr6.gt) goto loc_82914F94;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
loc_82914EB4:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lwzx r4,r28,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82914ECC;
	sub_829B98F8(ctx, base);
	// bl 0x827dff28
	ctx.lr = 0x82914ED0;
	sub_827DFF28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82914efc
	if (ctx.cr0.eq) goto loc_82914EFC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,1648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1648);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82914f80
	if (ctx.cr6.eq) goto loc_82914F80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82914EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82914f80
	goto loc_82914F80;
loc_82914EFC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r31,r27,1456
	ctx.r31.s64 = ctx.r27.s64 + 1456;
	// lwz r10,1472(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1472);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82914f4c
	if (!ctx.cr6.gt) goto loc_82914F4C;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82914F20:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82914f3c
	if (!ctx.cr6.eq) goto loc_82914F3C;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82914f80
	if (ctx.cr6.eq) goto loc_82914F80;
loc_82914F3C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82914f20
	if (ctx.cr6.lt) goto loc_82914F20;
loc_82914F4C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82914F60;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82914f80
	if (ctx.cr0.eq) goto loc_82914F80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82914F80:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82914eb4
	if (ctx.cr6.lt) goto loc_82914EB4;
loc_82914F94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8284aff8
	ctx.lr = 0x82914F9C;
	sub_8284AFF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82914FA8"))) PPC_WEAK_FUNC(sub_82914FA8);
PPC_FUNC_IMPL(__imp__sub_82914FA8) {
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
	// bl 0x824101a8
	ctx.lr = 0x82914FC0;
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
	ctx.lr = 0x82914FD8;
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

__attribute__((alias("__imp__sub_82914FF0"))) PPC_WEAK_FUNC(sub_82914FF0);
PPC_FUNC_IMPL(__imp__sub_82914FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82914FF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,1472(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1472);
	// addic. r27,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r27.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82915098
	if (ctx.cr0.lt) goto loc_82915098;
	// rlwinm r29,r27,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
loc_82915014:
	// lwz r10,1468(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1468);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// add r31,r10,r29
	ctx.r31.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwzx r4,r10,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8291502C;
	sub_829B98F8(ctx, base);
	// bl 0x82411910
	ctx.lr = 0x82915030;
	sub_82411910(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8291508c
	if (ctx.cr0.eq) goto loc_8291508C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,1472(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1472);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82915074
	if (ctx.cr6.eq) goto loc_82915074;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// stw r10,1472(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1472, ctx.r10.u32);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82915064
	if (ctx.cr6.eq) goto loc_82915064;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82915074
	if (!ctx.cr6.eq) goto loc_82915074;
loc_82915064:
	// lwz r3,836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82915074
	if (ctx.cr6.eq) goto loc_82915074;
	// bl 0x82914b18
	ctx.lr = 0x82915074;
	sub_82914B18(ctx, base);
loc_82915074:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r28,1456
	ctx.r3.s64 = ctx.r28.s64 + 1456;
	// bl 0x82332ca8
	ctx.lr = 0x8291508C;
	sub_82332CA8(ctx, base);
loc_8291508C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// bge 0x82915014
	if (!ctx.cr0.lt) goto loc_82915014;
loc_82915098:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829150A0"))) PPC_WEAK_FUNC(sub_829150A0);
PPC_FUNC_IMPL(__imp__sub_829150A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829150A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829151f4
	if (!ctx.cr6.gt) goto loc_829151F4;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r10,25412
	ctx.r10.s64 = ctx.r10.s64 + 25412;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// ble cr6,0x829151e0
	if (!ctx.cr6.gt) goto loc_829151E0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
loc_82915108:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8291511C;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82915120;
	sub_82416348(ctx, base);
	// bl 0x82411910
	ctx.lr = 0x82915124;
	sub_82411910(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8291513c
	if (ctx.cr0.eq) goto loc_8291513C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,1472(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8291513C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332d50
	ctx.lr = 0x82915150;
	sub_82332D50(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82915168
	if (ctx.cr0.eq) goto loc_82915168;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82915168:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bge cr6,0x82915184
	if (!ctx.cr6.lt) goto loc_82915184;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x829151cc
	if (!ctx.cr6.eq) goto loc_829151CC;
loc_82915184:
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x829151a0
	if (ctx.cr6.eq) goto loc_829151A0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// bl 0x8282c600
	ctx.lr = 0x8291519C;
	sub_8282C600(ctx, base);
	// b 0x829151a8
	goto loc_829151A8;
loc_829151A0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8282c688
	ctx.lr = 0x829151A8;
	sub_8282C688(ctx, base);
loc_829151A8:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829151cc
	if (ctx.cr6.eq) goto loc_829151CC;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332c38
	ctx.lr = 0x829151CC;
	sub_82332C38(ctx, base);
loc_829151CC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82915108
	if (ctx.cr6.lt) goto loc_82915108;
loc_829151E0:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8284aff8
	ctx.lr = 0x829151E8;
	sub_8284AFF8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_829151F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400f38
	ctx.lr = 0x829151FC;
	sub_82400F38(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82915208"))) PPC_WEAK_FUNC(sub_82915208);
PPC_FUNC_IMPL(__imp__sub_82915208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82915210;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82915334
	if (!ctx.cr6.gt) goto loc_82915334;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
loc_82915234:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,13024(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r3,84(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8291524C;
	sub_829B98F8(ctx, base);
	// bl 0x82411910
	ctx.lr = 0x82915250;
	sub_82411910(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8291529c
	if (ctx.cr0.eq) goto loc_8291529C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1472(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1472);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82915320
	if (ctx.cr6.eq) goto loc_82915320;
	// lwz r10,13024(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// stw r11,1472(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1472, ctx.r11.u32);
	// lwz r11,788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82915284
	if (ctx.cr6.eq) goto loc_82915284;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82915320
	if (!ctx.cr6.eq) goto loc_82915320;
loc_82915284:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82915320
	if (ctx.cr6.eq) goto loc_82915320;
	// bl 0x82914b18
	ctx.lr = 0x82915298;
	sub_82914B18(ctx, base);
	// b 0x82915320
	goto loc_82915320;
loc_8291529C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r31,r26,1456
	ctx.r31.s64 = ctx.r26.s64 + 1456;
	// lwz r10,1472(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1472);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x829152ec
	if (!ctx.cr6.gt) goto loc_829152EC;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_829152C0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x829152dc
	if (!ctx.cr6.eq) goto loc_829152DC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82915320
	if (ctx.cr6.eq) goto loc_82915320;
loc_829152DC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x829152c0
	if (ctx.cr6.lt) goto loc_829152C0;
loc_829152EC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82915300;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82915320
	if (ctx.cr0.eq) goto loc_82915320;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82915320:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82915234
	if (ctx.cr6.lt) goto loc_82915234;
loc_82915334:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8284aff8
	ctx.lr = 0x8291533C;
	sub_8284AFF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82915348"))) PPC_WEAK_FUNC(sub_82915348);
PPC_FUNC_IMPL(__imp__sub_82915348) {
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
	// bl 0x824a3890
	ctx.lr = 0x82915360;
	sub_824A3890(ctx, base);
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
	ctx.lr = 0x82915378;
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

__attribute__((alias("__imp__sub_82915390"))) PPC_WEAK_FUNC(sub_82915390);
PPC_FUNC_IMPL(__imp__sub_82915390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82915398;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,1472(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1472);
	// addic. r28,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r28.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x8291541c
	if (ctx.cr0.lt) goto loc_8291541C;
	// rlwinm r30,r28,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
loc_829153B4:
	// lwz r10,1468(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1468);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x829153CC;
	sub_829B98F8(ctx, base);
	// bl 0x82916530
	ctx.lr = 0x829153D0;
	sub_82916530(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82915410
	if (ctx.cr0.eq) goto loc_82915410;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x829153f8
	if (ctx.cr6.eq) goto loc_829153F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829153F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829153F8:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,1456
	ctx.r3.s64 = ctx.r29.s64 + 1456;
	// bl 0x82332ca8
	ctx.lr = 0x82915410;
	sub_82332CA8(ctx, base);
loc_82915410:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// bge 0x829153b4
	if (!ctx.cr0.lt) goto loc_829153B4;
loc_8291541C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82915428"))) PPC_WEAK_FUNC(sub_82915428);
PPC_FUNC_IMPL(__imp__sub_82915428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82915430;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8291557c
	if (!ctx.cr6.gt) goto loc_8291557C;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r10,25492
	ctx.r10.s64 = ctx.r10.s64 + 25492;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// ble cr6,0x82915568
	if (!ctx.cr6.gt) goto loc_82915568;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
loc_82915490:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829154A4;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x829154A8;
	sub_82416348(ctx, base);
	// bl 0x82916530
	ctx.lr = 0x829154AC;
	sub_82916530(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829154c4
	if (ctx.cr0.eq) goto loc_829154C4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_829154C4:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332d50
	ctx.lr = 0x829154D8;
	sub_82332D50(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829154f0
	if (ctx.cr0.eq) goto loc_829154F0;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_829154F0:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bge cr6,0x8291550c
	if (!ctx.cr6.lt) goto loc_8291550C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82915554
	if (!ctx.cr6.eq) goto loc_82915554;
loc_8291550C:
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82915528
	if (ctx.cr6.eq) goto loc_82915528;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// bl 0x8282c600
	ctx.lr = 0x82915524;
	sub_8282C600(ctx, base);
	// b 0x82915530
	goto loc_82915530;
loc_82915528:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8282c688
	ctx.lr = 0x82915530;
	sub_8282C688(ctx, base);
loc_82915530:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82915554
	if (ctx.cr6.eq) goto loc_82915554;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332c38
	ctx.lr = 0x82915554;
	sub_82332C38(ctx, base);
loc_82915554:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82915490
	if (ctx.cr6.lt) goto loc_82915490;
loc_82915568:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8284aff8
	ctx.lr = 0x82915570;
	sub_8284AFF8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_8291557C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400f38
	ctx.lr = 0x82915584;
	sub_82400F38(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82915590"))) PPC_WEAK_FUNC(sub_82915590);
PPC_FUNC_IMPL(__imp__sub_82915590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82915598;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8291569c
	if (!ctx.cr6.gt) goto loc_8291569C;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
loc_829155BC:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lwzx r4,r28,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x829155D4;
	sub_829B98F8(ctx, base);
	// bl 0x82916530
	ctx.lr = 0x829155D8;
	sub_82916530(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82915604
	if (ctx.cr0.eq) goto loc_82915604;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82915688
	if (ctx.cr6.eq) goto loc_82915688;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82915600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82915688
	goto loc_82915688;
loc_82915604:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r31,r27,1456
	ctx.r31.s64 = ctx.r27.s64 + 1456;
	// lwz r10,1472(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1472);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82915654
	if (!ctx.cr6.gt) goto loc_82915654;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82915628:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82915644
	if (!ctx.cr6.eq) goto loc_82915644;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82915688
	if (ctx.cr6.eq) goto loc_82915688;
loc_82915644:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82915628
	if (ctx.cr6.lt) goto loc_82915628;
loc_82915654:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82915668;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82915688
	if (ctx.cr0.eq) goto loc_82915688;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82915688:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829155bc
	if (ctx.cr6.lt) goto loc_829155BC;
loc_8291569C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8284aff8
	ctx.lr = 0x829156A4;
	sub_8284AFF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829156B0"))) PPC_WEAK_FUNC(sub_829156B0);
PPC_FUNC_IMPL(__imp__sub_829156B0) {
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
	// bl 0x82412e78
	ctx.lr = 0x829156C8;
	sub_82412E78(ctx, base);
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
	ctx.lr = 0x829156E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82915710
	if (!ctx.cr0.eq) goto loc_82915710;
	// bl 0x823bd5c8
	ctx.lr = 0x829156EC;
	sub_823BD5C8(ctx, base);
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
	ctx.lr = 0x82915704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82915714
	if (ctx.cr0.eq) goto loc_82915714;
loc_82915710:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82915714:
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

__attribute__((alias("__imp__sub_82915728"))) PPC_WEAK_FUNC(sub_82915728);
PPC_FUNC_IMPL(__imp__sub_82915728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82915730;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,1472(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1472);
	// addic. r28,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r28.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x829157b4
	if (ctx.cr0.lt) goto loc_829157B4;
	// rlwinm r30,r28,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
loc_8291574C:
	// lwz r10,1468(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1468);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82915764;
	sub_829B98F8(ctx, base);
	// bl 0x82336ae8
	ctx.lr = 0x82915768;
	sub_82336AE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829157a8
	if (ctx.cr0.eq) goto loc_829157A8;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82915790
	if (ctx.cr6.eq) goto loc_82915790;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82915790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82915790:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,1456
	ctx.r3.s64 = ctx.r29.s64 + 1456;
	// bl 0x82332ca8
	ctx.lr = 0x829157A8;
	sub_82332CA8(ctx, base);
loc_829157A8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// bge 0x8291574c
	if (!ctx.cr0.lt) goto loc_8291574C;
loc_829157B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829157C0"))) PPC_WEAK_FUNC(sub_829157C0);
PPC_FUNC_IMPL(__imp__sub_829157C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829157C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82915914
	if (!ctx.cr6.gt) goto loc_82915914;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r10,25572
	ctx.r10.s64 = ctx.r10.s64 + 25572;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// ble cr6,0x82915900
	if (!ctx.cr6.gt) goto loc_82915900;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
loc_82915828:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8291583C;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82915840;
	sub_82416348(ctx, base);
	// bl 0x82336ae8
	ctx.lr = 0x82915844;
	sub_82336AE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8291585c
	if (ctx.cr0.eq) goto loc_8291585C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8291585C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332d50
	ctx.lr = 0x82915870;
	sub_82332D50(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82915888
	if (ctx.cr0.eq) goto loc_82915888;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82915888:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bge cr6,0x829158a4
	if (!ctx.cr6.lt) goto loc_829158A4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x829158ec
	if (!ctx.cr6.eq) goto loc_829158EC;
loc_829158A4:
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x829158c0
	if (ctx.cr6.eq) goto loc_829158C0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// bl 0x8282c600
	ctx.lr = 0x829158BC;
	sub_8282C600(ctx, base);
	// b 0x829158c8
	goto loc_829158C8;
loc_829158C0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8282c688
	ctx.lr = 0x829158C8;
	sub_8282C688(ctx, base);
loc_829158C8:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829158ec
	if (ctx.cr6.eq) goto loc_829158EC;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332c38
	ctx.lr = 0x829158EC;
	sub_82332C38(ctx, base);
loc_829158EC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82915828
	if (ctx.cr6.lt) goto loc_82915828;
loc_82915900:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8284aff8
	ctx.lr = 0x82915908;
	sub_8284AFF8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82915914:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400f38
	ctx.lr = 0x8291591C;
	sub_82400F38(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82915928"))) PPC_WEAK_FUNC(sub_82915928);
PPC_FUNC_IMPL(__imp__sub_82915928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82915930;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82915a34
	if (!ctx.cr6.gt) goto loc_82915A34;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
loc_82915954:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lwzx r4,r28,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8291596C;
	sub_829B98F8(ctx, base);
	// bl 0x82336ae8
	ctx.lr = 0x82915970;
	sub_82336AE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8291599c
	if (ctx.cr0.eq) goto loc_8291599C;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82915a20
	if (ctx.cr6.eq) goto loc_82915A20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82915998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82915a20
	goto loc_82915A20;
loc_8291599C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r31,r27,1456
	ctx.r31.s64 = ctx.r27.s64 + 1456;
	// lwz r10,1472(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1472);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x829159ec
	if (!ctx.cr6.gt) goto loc_829159EC;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_829159C0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x829159dc
	if (!ctx.cr6.eq) goto loc_829159DC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82915a20
	if (ctx.cr6.eq) goto loc_82915A20;
loc_829159DC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x829159c0
	if (ctx.cr6.lt) goto loc_829159C0;
loc_829159EC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82915A00;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82915a20
	if (ctx.cr0.eq) goto loc_82915A20;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82915A20:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82915954
	if (ctx.cr6.lt) goto loc_82915954;
loc_82915A34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8284aff8
	ctx.lr = 0x82915A3C;
	sub_8284AFF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82915A48"))) PPC_WEAK_FUNC(sub_82915A48);
PPC_FUNC_IMPL(__imp__sub_82915A48) {
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
	// bl 0x823fc348
	ctx.lr = 0x82915A60;
	sub_823FC348(ctx, base);
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
	ctx.lr = 0x82915A78;
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

__attribute__((alias("__imp__sub_82915A90"))) PPC_WEAK_FUNC(sub_82915A90);
PPC_FUNC_IMPL(__imp__sub_82915A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82915A98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82915aec
	if (ctx.cr0.lt) goto loc_82915AEC;
	// rlwinm r29,r31,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
loc_82915AB0:
	// lwz r11,1468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82915af8
	ctx.lr = 0x82915AC0;
	sub_82915AF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82915ae0
	if (ctx.cr0.eq) goto loc_82915AE0;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,1456
	ctx.r3.s64 = ctx.r30.s64 + 1456;
	// bl 0x82332ca8
	ctx.lr = 0x82915AE0;
	sub_82332CA8(ctx, base);
loc_82915AE0:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// bge 0x82915ab0
	if (!ctx.cr0.lt) goto loc_82915AB0;
loc_82915AEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82915AF8"))) PPC_WEAK_FUNC(sub_82915AF8);
PPC_FUNC_IMPL(__imp__sub_82915AF8) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82915B28;
	sub_829B98F8(ctx, base);
	// bl 0x82916590
	ctx.lr = 0x82915B2C;
	sub_82916590(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82915b74
	if (ctx.cr0.eq) goto loc_82915B74;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82915b60
	if (ctx.cr6.eq) goto loc_82915B60;
	// lwz r9,488(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// rlwinm. r9,r9,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82915b5c
	if (!ctx.cr0.eq) goto loc_82915B5C;
	// lwz r11,480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82915b60
	if (!ctx.cr6.eq) goto loc_82915B60;
loc_82915B5C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82915B60:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82915b70
	if (ctx.cr6.eq) goto loc_82915B70;
	// bl 0x828ae518
	ctx.lr = 0x82915B70;
	sub_828AE518(ctx, base);
loc_82915B70:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82915B74:
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

__attribute__((alias("__imp__sub_82915B90"))) PPC_WEAK_FUNC(sub_82915B90);
PPC_FUNC_IMPL(__imp__sub_82915B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82915B98;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82915d0c
	if (!ctx.cr6.gt) goto loc_82915D0C;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,25652
	ctx.r10.s64 = ctx.r10.s64 + 25652;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// ble cr6,0x82915cf8
	if (!ctx.cr6.gt) goto loc_82915CF8;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
loc_82915BF8:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwzx r4,r28,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82915C0C;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82915C10;
	sub_82416348(ctx, base);
	// bl 0x82916590
	ctx.lr = 0x82915C14;
	sub_82916590(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82915c54
	if (ctx.cr0.eq) goto loc_82915C54;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82915c50
	if (ctx.cr6.eq) goto loc_82915C50;
	// lwz r9,488(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// rlwinm. r9,r9,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82915c4c
	if (!ctx.cr0.eq) goto loc_82915C4C;
	// lwz r11,480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82915c50
	if (!ctx.cr6.eq) goto loc_82915C50;
loc_82915C4C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82915C50:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82915C54:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332d50
	ctx.lr = 0x82915C68;
	sub_82332D50(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82915c80
	if (ctx.cr0.eq) goto loc_82915C80;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82915C80:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bge cr6,0x82915c9c
	if (!ctx.cr6.lt) goto loc_82915C9C;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82915ce4
	if (!ctx.cr6.eq) goto loc_82915CE4;
loc_82915C9C:
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82915cb8
	if (ctx.cr6.eq) goto loc_82915CB8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// bl 0x8282c600
	ctx.lr = 0x82915CB4;
	sub_8282C600(ctx, base);
	// b 0x82915cc0
	goto loc_82915CC0;
loc_82915CB8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8282c688
	ctx.lr = 0x82915CC0;
	sub_8282C688(ctx, base);
loc_82915CC0:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82915ce4
	if (ctx.cr6.eq) goto loc_82915CE4;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332c38
	ctx.lr = 0x82915CE4;
	sub_82332C38(ctx, base);
loc_82915CE4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82915bf8
	if (ctx.cr6.lt) goto loc_82915BF8;
loc_82915CF8:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8284aff8
	ctx.lr = 0x82915D00;
	sub_8284AFF8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82915D0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82400f38
	ctx.lr = 0x82915D14;
	sub_82400F38(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82915D20"))) PPC_WEAK_FUNC(sub_82915D20);
PPC_FUNC_IMPL(__imp__sub_82915D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82915D28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82915df8
	if (!ctx.cr6.gt) goto loc_82915DF8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82915D48:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82915af8
	ctx.lr = 0x82915D58;
	sub_82915AF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82915de4
	if (!ctx.cr0.eq) goto loc_82915DE4;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r31,r27,1456
	ctx.r31.s64 = ctx.r27.s64 + 1456;
	// lwz r10,1472(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1472);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82915db0
	if (!ctx.cr6.gt) goto loc_82915DB0;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82915D84:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82915da0
	if (!ctx.cr6.eq) goto loc_82915DA0;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82915de4
	if (ctx.cr6.eq) goto loc_82915DE4;
loc_82915DA0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82915d84
	if (ctx.cr6.lt) goto loc_82915D84;
loc_82915DB0:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82915DC4;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82915de4
	if (ctx.cr0.eq) goto loc_82915DE4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82915DE4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82915d48
	if (ctx.cr6.lt) goto loc_82915D48;
loc_82915DF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8284aff8
	ctx.lr = 0x82915E00;
	sub_8284AFF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82915E08"))) PPC_WEAK_FUNC(sub_82915E08);
PPC_FUNC_IMPL(__imp__sub_82915E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82915E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82915e64
	if (ctx.cr0.lt) goto loc_82915E64;
	// rlwinm r29,r31,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
loc_82915E28:
	// lwz r11,1468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82916000
	ctx.lr = 0x82915E38;
	sub_82916000(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82915e58
	if (ctx.cr0.eq) goto loc_82915E58;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,1456
	ctx.r3.s64 = ctx.r30.s64 + 1456;
	// bl 0x82332ca8
	ctx.lr = 0x82915E58;
	sub_82332CA8(ctx, base);
loc_82915E58:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// bge 0x82915e28
	if (!ctx.cr0.lt) goto loc_82915E28;
loc_82915E64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82915E70"))) PPC_WEAK_FUNC(sub_82915E70);
PPC_FUNC_IMPL(__imp__sub_82915E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82915E78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x829c6178
	ctx.lr = 0x82915E88;
	sub_829C6178(ctx, base);
	// lwz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82915ed4
	if (ctx.cr0.lt) goto loc_82915ED4;
	// mulli r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 * 12;
loc_82915E98:
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82915ec8
	if (!ctx.cr6.eq) goto loc_82915EC8;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1432
	ctx.r3.s64 = ctx.r31.s64 + 1432;
	// bl 0x82332ca8
	ctx.lr = 0x82915EC8;
	sub_82332CA8(ctx, base);
loc_82915EC8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-12
	ctx.r29.s64 = ctx.r29.s64 + -12;
	// bge 0x82915e98
	if (!ctx.cr0.lt) goto loc_82915E98;
loc_82915ED4:
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82915f20
	if (ctx.cr0.lt) goto loc_82915F20;
	// mulli r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 * 12;
loc_82915EE4:
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82915f14
	if (!ctx.cr6.eq) goto loc_82915F14;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// bl 0x82332ca8
	ctx.lr = 0x82915F14;
	sub_82332CA8(ctx, base);
loc_82915F14:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-12
	ctx.r29.s64 = ctx.r29.s64 + -12;
	// bge 0x82915ee4
	if (!ctx.cr0.lt) goto loc_82915EE4;
loc_82915F20:
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82915f6c
	if (ctx.cr0.lt) goto loc_82915F6C;
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
loc_82915F30:
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82915f60
	if (!ctx.cr6.eq) goto loc_82915F60;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1456
	ctx.r3.s64 = ctx.r31.s64 + 1456;
	// bl 0x82332ca8
	ctx.lr = 0x82915F60;
	sub_82332CA8(ctx, base);
loc_82915F60:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// bge 0x82915f30
	if (!ctx.cr0.lt) goto loc_82915F30;
loc_82915F6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82915F78"))) PPC_WEAK_FUNC(sub_82915F78);
PPC_FUNC_IMPL(__imp__sub_82915F78) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82412e78
	ctx.lr = 0x82915F98;
	sub_82412E78(ctx, base);
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
	ctx.lr = 0x82915FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82915fdc
	if (!ctx.cr0.eq) goto loc_82915FDC;
	// bl 0x82437b78
	ctx.lr = 0x82915FBC;
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
	ctx.lr = 0x82915FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82915fe0
	if (ctx.cr0.eq) goto loc_82915FE0;
loc_82915FDC:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82915FE0:
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

__attribute__((alias("__imp__sub_82916000"))) PPC_WEAK_FUNC(sub_82916000);
PPC_FUNC_IMPL(__imp__sub_82916000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82916008;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82916028;
	sub_829B98F8(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x8291602C;
	sub_82416348(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8291617c
	if (ctx.cr0.eq) goto loc_8291617C;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8291617c
	if (!ctx.cr6.eq) goto loc_8291617C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82916178
	if (!ctx.cr0.eq) goto loc_82916178;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
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
	ctx.lr = 0x82916074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82916090
	if (!ctx.cr6.gt) goto loc_82916090;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82916164
	goto loc_82916164;
loc_82916090:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82916130
	if (!ctx.cr6.eq) goto loc_82916130;
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
	ctx.lr = 0x829160B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82916110
	if (!ctx.cr6.gt) goto loc_82916110;
	// li r29,0
	ctx.r29.s64 = 0;
loc_829160CC:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829160fc
	if (!ctx.cr6.eq) goto loc_829160FC;
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
	ctx.lr = 0x829160F4;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_829160FC:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829160cc
	if (ctx.cr6.lt) goto loc_829160CC;
loc_82916110:
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
	ctx.lr = 0x82916130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82916130:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82916164
	if (!ctx.cr0.eq) goto loc_82916164;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82916150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82916164
	if (ctx.cr0.eq) goto loc_82916164;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82916164;
	sub_82410060(ctx, base);
loc_82916164:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82916178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82916178:
	// li r28,1
	ctx.r28.s64 = 1;
loc_8291617C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82916188"))) PPC_WEAK_FUNC(sub_82916188);
PPC_FUNC_IMPL(__imp__sub_82916188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82916190;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829162c0
	if (!ctx.cr6.gt) goto loc_829162C0;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r10,25732
	ctx.r10.s64 = ctx.r10.s64 + 25732;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// ble cr6,0x829162ac
	if (!ctx.cr6.gt) goto loc_829162AC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
loc_829161F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82332d50
	ctx.lr = 0x8291621C;
	sub_82332D50(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82916234
	if (ctx.cr0.eq) goto loc_82916234;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82916234:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bge cr6,0x82916250
	if (!ctx.cr6.lt) goto loc_82916250;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82916298
	if (!ctx.cr6.eq) goto loc_82916298;
loc_82916250:
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8291626c
	if (ctx.cr6.eq) goto loc_8291626C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// bl 0x8282c600
	ctx.lr = 0x82916268;
	sub_8282C600(ctx, base);
	// b 0x82916274
	goto loc_82916274;
loc_8291626C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8282c688
	ctx.lr = 0x82916274;
	sub_8282C688(ctx, base);
loc_82916274:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82916298
	if (ctx.cr6.eq) goto loc_82916298;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332c38
	ctx.lr = 0x82916298;
	sub_82332C38(ctx, base);
loc_82916298:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829161f0
	if (ctx.cr6.lt) goto loc_829161F0;
loc_829162AC:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8284aff8
	ctx.lr = 0x829162B4;
	sub_8284AFF8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_829162C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400f38
	ctx.lr = 0x829162C8;
	sub_82400F38(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829162D0"))) PPC_WEAK_FUNC(sub_829162D0);
PPC_FUNC_IMPL(__imp__sub_829162D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829162D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829163a8
	if (!ctx.cr6.gt) goto loc_829163A8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_829162F8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82916000
	ctx.lr = 0x82916308;
	sub_82916000(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82916394
	if (!ctx.cr0.eq) goto loc_82916394;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r31,r27,1456
	ctx.r31.s64 = ctx.r27.s64 + 1456;
	// lwz r10,1472(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1472);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82916360
	if (!ctx.cr6.gt) goto loc_82916360;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82916334:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82916350
	if (!ctx.cr6.eq) goto loc_82916350;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82916394
	if (ctx.cr6.eq) goto loc_82916394;
loc_82916350:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82916334
	if (ctx.cr6.lt) goto loc_82916334;
loc_82916360:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82916374;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82916394
	if (ctx.cr0.eq) goto loc_82916394;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82916394:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829162f8
	if (ctx.cr6.lt) goto loc_829162F8;
loc_829163A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8284aff8
	ctx.lr = 0x829163B0;
	sub_8284AFF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829163B8"))) PPC_WEAK_FUNC(sub_829163B8);
PPC_FUNC_IMPL(__imp__sub_829163B8) {
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
	// ble cr6,0x82916428
	if (!ctx.cr6.gt) goto loc_82916428;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_829163EC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82916418
	if (!ctx.cr6.eq) goto loc_82916418;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82916418
	if (!ctx.cr6.eq) goto loc_82916418;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8291646c
	if (ctx.cr6.eq) goto loc_8291646C;
loc_82916418:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x829163ec
	if (ctx.cr6.lt) goto loc_829163EC;
loc_82916428:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x8291643C;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82916464
	if (ctx.cr0.eq) goto loc_82916464;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82916464:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_8291646C:
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

__attribute__((alias("__imp__sub_82916488"))) PPC_WEAK_FUNC(sub_82916488);
PPC_FUNC_IMPL(__imp__sub_82916488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82916490;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8291651c
	if (!ctx.cr6.gt) goto loc_8291651C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_829164B0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82916508
	if (!ctx.cr6.eq) goto loc_82916508;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82916508
	if (!ctx.cr6.eq) goto loc_82916508;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82916508
	if (!ctx.cr6.eq) goto loc_82916508;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82916500;
	sub_82332CA8(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
loc_82916508:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829164b0
	if (ctx.cr6.lt) goto loc_829164B0;
loc_8291651C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82916530"))) PPC_WEAK_FUNC(sub_82916530);
PPC_FUNC_IMPL(__imp__sub_82916530) {
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
	// beq cr6,0x82916574
	if (ctx.cr6.eq) goto loc_82916574;
	// bl 0x824a3890
	ctx.lr = 0x82916550;
	sub_824A3890(ctx, base);
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
	ctx.lr = 0x82916568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82916578
	if (!ctx.cr0.eq) goto loc_82916578;
loc_82916574:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82916578:
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

__attribute__((alias("__imp__sub_82916590"))) PPC_WEAK_FUNC(sub_82916590);
PPC_FUNC_IMPL(__imp__sub_82916590) {
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
	// beq cr6,0x829165d4
	if (ctx.cr6.eq) goto loc_829165D4;
	// bl 0x823fc348
	ctx.lr = 0x829165B0;
	sub_823FC348(ctx, base);
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
	ctx.lr = 0x829165C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x829165d8
	if (!ctx.cr0.eq) goto loc_829165D8;
loc_829165D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829165D8:
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

__attribute__((alias("__imp__sub_829165F0"))) PPC_WEAK_FUNC(sub_829165F0);
PPC_FUNC_IMPL(__imp__sub_829165F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829165F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r28,r11,15852
	ctx.r28.s64 = ctx.r11.s64 + 15852;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x82916614;
	sub_8312E7DC(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,4
	ctx.r29.s64 = 4;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r27,r31,136
	ctx.r27.s64 = ctx.r31.s64 + 136;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// li r10,149
	ctx.r10.s64 = 149;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
loc_82916688:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bge 0x82916688
	if (!ctx.cr0.lt) goto loc_82916688;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r31,7356
	ctx.r11.s64 = ctx.r31.s64 + 7356;
	// stw r10,7340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7340, ctx.r10.u32);
	// stw r28,7356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7356, ctx.r28.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x829166C4;
	sub_8312E7DC(ctx, base);
	// stw r28,7388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7388, ctx.r28.u32);
	// addi r11,r31,7388
	ctx.r11.s64 = ctx.r31.s64 + 7388;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x829166D4;
	sub_8312E7DC(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82333900
	ctx.lr = 0x829166DC;
	sub_82333900(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8291672c
	if (ctx.cr0.eq) goto loc_8291672C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82333900
	ctx.lr = 0x829166EC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82916718
	if (ctx.cr0.eq) goto loc_82916718;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// b 0x8291671c
	goto loc_8291671C;
loc_82916718:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8291671C:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// b 0x82916730
	goto loc_82916730;
loc_8291672C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82916730:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82333900
	ctx.lr = 0x8291673C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82916754
	if (ctx.cr0.eq) goto loc_82916754;
	// li r4,200
	ctx.r4.s64 = 200;
	// bl 0x8281ab48
	ctx.lr = 0x8291674C;
	sub_8281AB48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82916758
	goto loc_82916758;
loc_82916754:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82916758:
	// stw r11,7344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7344, ctx.r11.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82333900
	ctx.lr = 0x82916764;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82916778
	if (ctx.cr0.eq) goto loc_82916778;
	// li r4,200
	ctx.r4.s64 = 200;
	// bl 0x8281ab48
	ctx.lr = 0x82916774;
	sub_8281AB48(ctx, base);
	// b 0x8291677c
	goto loc_8291677C;
loc_82916778:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8291677C:
	// stw r3,7348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7348, ctx.r3.u32);
	// li r5,7200
	ctx.r5.s64 = 7200;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,7336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7336, ctx.r30.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82916798;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,7344(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7344);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,29992
	ctx.r5.s64 = ctx.r11.s64 + 29992;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6ed50
	ctx.lr = 0x829167B8;
	sub_82A6ED50(ctx, base);
	// stw r3,7352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7352, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82a48718
	ctx.lr = 0x829167C4;
	sub_82A48718(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829167D0"))) PPC_WEAK_FUNC(sub_829167D0);
PPC_FUNC_IMPL(__imp__sub_829167D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1512(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829167e8
	if (ctx.cr6.eq) goto loc_829167E8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f1,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_829167E8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829167F8"))) PPC_WEAK_FUNC(sub_829167F8);
PPC_FUNC_IMPL(__imp__sub_829167F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82916800;
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
	// std r6,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r6.u64);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82916824
	if (!ctx.cr6.eq) goto loc_82916824;
loc_8291681C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x829168c0
	goto loc_829168C0;
loc_82916824:
	// lwz r27,1608(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1608);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8291681c
	if (ctx.cr6.eq) goto loc_8291681C;
	// lwz r30,1408(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1408);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8291681c
	if (ctx.cr6.eq) goto loc_8291681C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f31,904(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f0,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
	// stfs f0,180(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 180, temp.u32);
	// bl 0x829169a0
	ctx.lr = 0x82916888;
	sub_829169A0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x829168bc
	if (!ctx.cr6.gt) goto loc_829168BC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82916d18
	ctx.lr = 0x829168A0;
	sub_82916D18(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x829168bc
	if (!ctx.cr0.eq) goto loc_829168BC;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x829168bc
	if (ctx.cr6.eq) goto loc_829168BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_829168BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_829168C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829168D0"))) PPC_WEAK_FUNC(sub_829168D0);
PPC_FUNC_IMPL(__imp__sub_829168D0) {
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
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x829168f8
	if (!ctx.cr6.eq) goto loc_829168F8;
loc_829168F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82916988
	goto loc_82916988;
loc_829168F8:
	// lwz r11,1608(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829168f0
	if (ctx.cr6.eq) goto loc_829168F0;
	// lwz r31,1408(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829168f0
	if (ctx.cr6.eq) goto loc_829168F0;
	// li r11,3
	ctx.r11.s64 = 3;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x829168f0
	if (ctx.cr6.eq) goto loc_829168F0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829167f8
	ctx.lr = 0x8291694C;
	sub_829167F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82916984
	if (!ctx.cr6.eq) goto loc_82916984;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82916984
	if (ctx.cr6.eq) goto loc_82916984;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x82916984;
	sub_82332C38(ctx, base);
loc_82916984:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82916988:
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

__attribute__((alias("__imp__sub_829169A0"))) PPC_WEAK_FUNC(sub_829169A0);
PPC_FUNC_IMPL(__imp__sub_829169A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x829169A8;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stfs f1,348(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// std r6,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r6.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// std r7,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r7.u64);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lwz r24,1608(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1608);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,348(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x829169fc
	if (!ctx.cr6.eq) goto loc_829169FC;
loc_829169E8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_829169EC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
loc_829169FC:
	// lwz r30,1492(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1492);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829169e8
	if (ctx.cr6.eq) goto loc_829169E8;
	// lwz r23,1408(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1408);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x829169e8
	if (ctx.cr6.eq) goto loc_829169E8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x824d4028
	ctx.lr = 0x82916A1C;
	sub_824D4028(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82916a3c
	if (ctx.cr6.eq) goto loc_82916A3C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82916A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82916A3C:
	// stfs f31,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82916a80
	if (ctx.cr6.eq) goto loc_82916A80;
	// lwz r11,104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82916a80
	if (!ctx.cr6.eq) goto loc_82916A80;
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82916a80
	if (!ctx.cr6.eq) goto loc_82916A80;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82916a88
	if (ctx.cr6.eq) goto loc_82916A88;
	// b 0x82916a94
	goto loc_82916A94;
loc_82916A80:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82919328
	ctx.lr = 0x82916A88;
	sub_82919328(ctx, base);
loc_82916A88:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829169e8
	if (ctx.cr6.eq) goto loc_829169E8;
loc_82916A94:
	// lwz r11,924(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 924);
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// beq cr6,0x82916b18
	if (ctx.cr6.eq) goto loc_82916B18;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82916AD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
	// stw r9,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// beq cr6,0x82916b18
	if (ctx.cr6.eq) goto loc_82916B18;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82916b18
	if (!ctx.cr6.eq) goto loc_82916B18;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82917018
	ctx.lr = 0x82916B14;
	sub_82917018(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82916B18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828fd038
	ctx.lr = 0x82916B20;
	sub_828FD038(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82916b58
	if (!ctx.cr0.eq) goto loc_82916B58;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82916B3C;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82916b4c
	if (ctx.cr0.eq) goto loc_82916B4C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82916b50
	goto loc_82916B50;
loc_82916B4C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82916B50:
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
loc_82916B58:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82916B68;
	sub_829B9720(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82916bec
	if (ctx.cr0.eq) goto loc_82916BEC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82916c0c
	if (ctx.cr6.eq) goto loc_82916C0C;
loc_82916B78:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// addi r8,r1,348
	ctx.r8.s64 = ctx.r1.s64 + 348;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829186f8
	ctx.lr = 0x82916BB8;
	sub_829186F8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82916c9c
	if (!ctx.cr6.eq) goto loc_82916C9C;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f1,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82917e70
	ctx.lr = 0x82916BDC;
	sub_82917E70(ctx, base);
	// lfs f31,348(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	ctx.f31.f64 = double(temp.f32);
loc_82916BE0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8239d768
	ctx.lr = 0x82916BE8;
	sub_8239D768(ctx, base);
	// b 0x829169e8
	goto loc_829169E8;
loc_82916BEC:
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82916f50
	ctx.lr = 0x82916BFC;
	sub_82916F50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829169e8
	if (ctx.cr0.eq) goto loc_829169E8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82916c6c
	if (!ctx.cr6.eq) goto loc_82916C6C;
loc_82916C0C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x824381f0
	ctx.lr = 0x82916C14;
	sub_824381F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82917398
	ctx.lr = 0x82916C38;
	sub_82917398(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829169e8
	if (ctx.cr0.eq) goto loc_829169E8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82916c68
	if (ctx.cr6.eq) goto loc_82916C68;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82916c68
	if (ctx.cr6.eq) goto loc_82916C68;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lfs f0,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
loc_82916C68:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82916C6C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82916b78
	if (!ctx.cr6.eq) goto loc_82916B78;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// ld r6,320(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829189c8
	ctx.lr = 0x82916C98;
	sub_829189C8(ctx, base);
	// b 0x829169ec
	goto loc_829169EC;
loc_82916C9C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82916cac
	if (ctx.cr6.eq) goto loc_82916CAC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82916be0
	if (!ctx.cr6.eq) goto loc_82916BE0;
loc_82916CAC:
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lfs f1,348(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	ctx.f1.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r28,r11,26576
	ctx.r28.s64 = ctx.r11.s64 + 26576;
	// bl 0x829184d8
	ctx.lr = 0x82916CD4;
	sub_829184D8(ctx, base);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f3,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lfs f2,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x829275c8
	ctx.lr = 0x82916D10;
	sub_829275C8(ctx, base);
	// b 0x82916be0
	goto loc_82916BE0;
}

__attribute__((alias("__imp__sub_82916D18"))) PPC_WEAK_FUNC(sub_82916D18);
PPC_FUNC_IMPL(__imp__sub_82916D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82916D20;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,1408(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1408);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82916f40
	if (ctx.cr6.eq) goto loc_82916F40;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82916f40
	if (ctx.cr6.eq) goto loc_82916F40;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r26,1412(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1412);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82916D60;
	sub_829B9720(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,1492(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1492);
	// bl 0x828fd038
	ctx.lr = 0x82916D6C;
	sub_828FD038(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82916d7c
	if (!ctx.cr0.eq) goto loc_82916D7C;
loc_82916D74:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x82916f44
	goto loc_82916F44;
loc_82916D7C:
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r25,r10,-17168
	ctx.r25.s64 = ctx.r10.s64 + -17168;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// stw r29,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r29.u32);
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82916DAC;
	sub_829B9720(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82916DC0;
	sub_829B9720(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bne cr6,0x82916ed4
	if (!ctx.cr6.eq) goto loc_82916ED4;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r27,r31,144
	ctx.r27.s64 = ctx.r31.s64 + 144;
	// bl 0x829b9720
	ctx.lr = 0x82916DDC;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82916f04
	if (ctx.cr0.eq) goto loc_82916F04;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82916DE8:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82916DF8;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82916e10
	if (ctx.cr0.eq) goto loc_82916E10;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x82916de8
	if (ctx.cr6.lt) goto loc_82916DE8;
loc_82916E10:
	// addi r10,r28,34
	ctx.r10.s64 = ctx.r28.s64 + 34;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwzx r4,r28,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// bl 0x829b9720
	ctx.lr = 0x82916E28;
	sub_829B9720(ctx, base);
	// lwz r11,1492(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1492);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82916E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82916e68
	if (ctx.cr0.eq) goto loc_82916E68;
	// stwx r29,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// b 0x82916f44
	goto loc_82916F44;
loc_82916E68:
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// ld r6,620(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 620);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,628(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f31,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f2,19136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19136);
	ctx.f2.f64 = double(temp.f32);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829169a0
	ctx.lr = 0x82916EAC;
	sub_829169A0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82916ecc
	if (!ctx.cr6.gt) goto loc_82916ECC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82916d18
	ctx.lr = 0x82916EC4;
	sub_82916D18(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x82916f04
	goto loc_82916F04;
loc_82916ECC:
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// b 0x82916f04
	goto loc_82916F04;
loc_82916ED4:
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x829b9720
	ctx.lr = 0x82916EDC;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82916eec
	if (ctx.cr0.eq) goto loc_82916EEC;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82916ef0
	goto loc_82916EF0;
loc_82916EEC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82916EF0:
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
loc_82916F04:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82916F08:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82916f34
	if (ctx.cr6.eq) goto loc_82916F34;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82916d74
	if (ctx.cr6.eq) goto loc_82916D74;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r25,16
	ctx.r10.s64 = ctx.r25.s64 + 16;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82916f08
	if (ctx.cr6.lt) goto loc_82916F08;
	// b 0x82916d74
	goto loc_82916D74;
loc_82916F34:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r23.u32);
	// b 0x82916d74
	goto loc_82916D74;
loc_82916F40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82916F44:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82916F50"))) PPC_WEAK_FUNC(sub_82916F50);
PPC_FUNC_IMPL(__imp__sub_82916F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82916F58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,1492(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82917010
	if (ctx.cr6.eq) goto loc_82917010;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82916F8C;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82916fbc
	if (ctx.cr0.eq) goto loc_82916FBC;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82916FA4;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82916fb4
	if (ctx.cr0.eq) goto loc_82916FB4;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82916fb8
	goto loc_82916FB8;
loc_82916FB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82916FB8:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82916FBC:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r30,620
	ctx.r6.s64 = ctx.r30.s64 + 620;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82917398
	ctx.lr = 0x82916FDC;
	sub_82917398(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82916fec
	if (ctx.cr0.eq) goto loc_82916FEC;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82916ff0
	goto loc_82916FF0;
loc_82916FEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82916FF0:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lfs f0,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x8291700c
	if (!ctx.cr6.eq) goto loc_8291700C;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// b 0x82917010
	goto loc_82917010;
loc_8291700C:
	// stfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_82917010:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82917018"))) PPC_WEAK_FUNC(sub_82917018);
PPC_FUNC_IMPL(__imp__sub_82917018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82917020;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82a61748
	ctx.lr = 0x82917028;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82917054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82917370
	if (ctx.cr0.eq) goto loc_82917370;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r29,1492(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r8,628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8291708C;
	sub_829B9720(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1492(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1492);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r4,24(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x829b9720
	ctx.lr = 0x829170A4;
	sub_829B9720(ctx, base);
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// beq 0x829170e8
	if (ctx.cr0.eq) goto loc_829170E8;
	// lfs f0,624(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f13,628(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// lfs f12,620(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// b 0x82917114
	goto loc_82917114;
loc_829170E8:
	// lwz r3,1608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1608);
	// bl 0x82648380
	ctx.lr = 0x829170F0;
	sub_82648380(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82917114
	if (ctx.cr0.eq) goto loc_82917114;
	// lwz r10,1408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,76(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8291710C;
	sub_829B9720(ctx, base);
	// bl 0x824d4028
	ctx.lr = 0x82917110;
	sub_824D4028(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82917114:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82917384
	if (!ctx.cr6.eq) goto loc_82917384;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8291712C;
	sub_829B9720(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f28,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f28.f64 = double(temp.f32);
	// beq 0x82917204
	if (ctx.cr0.eq) goto loc_82917204;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8291714C;
	sub_829B9720(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82917204
	if (ctx.cr6.eq) goto loc_82917204;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f13,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,20396(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20396);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82917208
	if (!ctx.cr6.lt) goto loc_82917208;
	// lwz r10,1608(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1608);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82917208
	if (ctx.cr6.eq) goto loc_82917208;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8291718C;
	sub_829B9720(ctx, base);
	// lwz r11,1608(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1608);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828a97e0
	ctx.lr = 0x829171A4;
	sub_828A97E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82917204
	if (ctx.cr0.eq) goto loc_82917204;
	// lwz r10,1492(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1492);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829171C0;
	sub_829B9720(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x829171f8
	if (ctx.cr0.eq) goto loc_829171F8;
	// lfs f0,624(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f13,628(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// lfs f12,620(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// b 0x829171fc
	goto loc_829171FC;
loc_829171F8:
	// stfs f28,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
loc_829171FC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82917384
	if (!ctx.cr6.eq) goto loc_82917384;
loc_82917204:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_82917208:
	// lwz r10,924(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 924);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x829172fc
	if (!ctx.cr6.eq) goto loc_829172FC;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82917224;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829172f0
	if (ctx.cr0.eq) goto loc_829172F0;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8291723C;
	sub_829B9720(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x829172f0
	if (ctx.cr6.eq) goto loc_829172F0;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x829172f0
	if (!ctx.cr6.lt) goto loc_829172F0;
	// lwz r10,1608(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1608);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x829172f0
	if (ctx.cr6.eq) goto loc_829172F0;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8291727C;
	sub_829B9720(ctx, base);
	// lwz r11,1608(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1608);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828a97e0
	ctx.lr = 0x82917294;
	sub_828A97E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829172f0
	if (ctx.cr0.eq) goto loc_829172F0;
	// lwz r10,1492(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1492);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829172B0;
	sub_829B9720(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x829172e8
	if (ctx.cr0.eq) goto loc_829172E8;
	// lfs f0,624(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f13,628(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// lfs f12,620(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// b 0x829172f4
	goto loc_829172F4;
loc_829172E8:
	// stfs f28,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// b 0x829172f4
	goto loc_829172F4;
loc_829172F0:
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
loc_829172F4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82917384
	if (!ctx.cr6.eq) goto loc_82917384;
loc_829172FC:
	// lwz r3,1608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1608);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82917384
	if (ctx.cr6.eq) goto loc_82917384;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82917318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82917384
	if (ctx.cr0.eq) goto loc_82917384;
	// lwz r11,1528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1528);
	// lfs f0,620(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1532(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1532);
	// lwz r9,1536(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bne cr6,0x82917384
	if (!ctx.cr6.eq) goto loc_82917384;
	// lfs f0,624(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82917384
	if (!ctx.cr6.eq) goto loc_82917384;
	// lfs f0,628(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82917384
	if (!ctx.cr6.eq) goto loc_82917384;
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// b 0x82917384
	goto loc_82917384;
loc_82917370:
	// lwz r11,924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82917384
	if (!ctx.cr6.eq) goto loc_82917384;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_82917384:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82a61794
	ctx.lr = 0x82917394;
	__restfpr_28(ctx, base);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82917398"))) PPC_WEAK_FUNC(sub_82917398);
PPC_FUNC_IMPL(__imp__sub_82917398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x829173A0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61724
	ctx.lr = 0x829173A8;
	__savefpr_19(ctx, base);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// lwz r23,1492(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// mr r14,r9
	ctx.r14.u64 = ctx.r9.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r21,1
	ctx.r21.s64 = 1;
	// bl 0x829bed50
	ctx.lr = 0x829173D8;
	sub_829BED50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82917400
	if (ctx.cr0.eq) goto loc_82917400;
	// lfs f0,400(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,404(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r22,100(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r21,84(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82917400:
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r9,88(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 88);
	// lwz r8,116(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 116);
	// lfs f0,80(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,120(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 120);
	// lis r18,-31949
	ctx.r18.s64 = -2093809664;
	// lwz r10,124(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 124);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r7,112(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 112);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,13024(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13024);
	// lwz r28,628(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,620(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,624(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// lwz r9,600(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 600);
	// add r25,r10,r7
	ctx.r25.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stw r6,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r6.u32);
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r28,32(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829174C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x828f8cc0
	ctx.lr = 0x829174D4;
	sub_828F8CC0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lfs f31,16680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16680);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829177bc
	if (!ctx.cr6.gt) goto loc_829177BC;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
loc_829174F4:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwzx r11,r24,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x824d4028
	ctx.lr = 0x82917504;
	sub_824D4028(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// beq 0x82917580
	if (ctx.cr0.eq) goto loc_82917580;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8289cb48
	ctx.lr = 0x8291751C;
	sub_8289CB48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82917580
	if (ctx.cr0.eq) goto loc_82917580;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82917540
	if (ctx.cr6.eq) goto loc_82917540;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// b 0x82917560
	goto loc_82917560;
loc_82917540:
	// lwz r11,1716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8291769c
	if (ctx.cr6.eq) goto loc_8291769C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257c780
	ctx.lr = 0x82917554;
	sub_8257C780(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
loc_82917560:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82917568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8291769c
	if (ctx.cr0.eq) goto loc_8291769C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82410060
	ctx.lr = 0x8291757C;
	sub_82410060(ctx, base);
	// b 0x8291769c
	goto loc_8291769C;
loc_82917580:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwzx r11,r24,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x828eecd0
	ctx.lr = 0x82917590;
	sub_828EECD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8291769c
	if (ctx.cr0.eq) goto loc_8291769C;
	// lwz r29,396(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// lwz r28,400(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8291769c
	if (ctx.cr6.eq) goto loc_8291769C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8291769c
	if (ctx.cr6.eq) goto loc_8291769C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829175D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8291769c
	if (ctx.cr0.eq) goto loc_8291769C;
	// lwz r10,620(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	// lfs f0,8(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,620(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	// lfs f13,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	// lfs f12,4(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,624(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	// lwz r7,624(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lfs f9,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// lfs f7,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,628(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lfs f6,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f10,f6,f6
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fsubs f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f13,f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f9,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8291768c
	if (!ctx.cr6.lt) goto loc_8291768C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828ed5c8
	ctx.lr = 0x82917670;
	sub_828ED5C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8291768c
	if (ctx.cr0.eq) goto loc_8291768C;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8291769c
	if (!ctx.cr6.lt) goto loc_8291769C;
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// b 0x8291769c
	goto loc_8291769C;
loc_8291768C:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x8291769c
	if (!ctx.cr6.lt) goto loc_8291769C;
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
loc_8291769C:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829174f4
	if (ctx.cr6.lt) goto loc_829174F4;
	// lwz r24,272(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x829177a8
	if (ctx.cr6.eq) goto loc_829177A8;
	// lwz r25,268(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// ble cr6,0x82917714
	if (!ctx.cr6.gt) goto loc_82917714;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_829176D0:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,1716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829176fc
	if (ctx.cr6.eq) goto loc_829176FC;
	// bl 0x8257c780
	ctx.lr = 0x829176E4;
	sub_8257C780(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r29,1728
	ctx.r3.s64 = ctx.r29.s64 + 1728;
	// bl 0x827f0270
	ctx.lr = 0x829176F4;
	sub_827F0270(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82917710
	if (!ctx.cr0.eq) goto loc_82917710;
loc_829176FC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x829176d0
	if (ctx.cr6.lt) goto loc_829176D0;
	// b 0x82917714
	goto loc_82917714;
loc_82917710:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82917714:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82917774
	if (!ctx.cr6.eq) goto loc_82917774;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82917724:
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x8291776c
	if (!ctx.cr6.lt) goto loc_8291776C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,1716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8291775c
	if (ctx.cr6.eq) goto loc_8291775C;
	// bl 0x8257c780
	ctx.lr = 0x82917740;
	sub_8257C780(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r29,1756
	ctx.r3.s64 = ctx.r29.s64 + 1756;
	// bl 0x827f0270
	ctx.lr = 0x82917750;
	sub_827F0270(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8291775c
	if (ctx.cr0.eq) goto loc_8291775C;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_8291775C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82917724
	if (ctx.cr6.eq) goto loc_82917724;
loc_8291776C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x829177a8
	if (ctx.cr6.eq) goto loc_829177A8;
loc_82917774:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
loc_82917780:
	// stfs f0,0(r14)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r14.u32 + 0, temp.u32);
loc_82917784:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8239d768
	ctx.lr = 0x8291778C;
	sub_8239D768(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239d768
	ctx.lr = 0x82917794;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61770
	ctx.lr = 0x829177A4;
	__restfpr_19(ctx, base);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
loc_829177A8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x829177bc
	if (ctx.cr6.eq) goto loc_829177BC;
	// fsqrts f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f31.f64)));
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// b 0x82917780
	goto loc_82917780;
loc_829177BC:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x829177e4
	if (ctx.cr6.eq) goto loc_829177E4;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82332c38
	ctx.lr = 0x829177E4;
	sub_82332C38(ctx, base);
loc_829177E4:
	// lwz r11,13024(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13024);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lfs f1,-32528(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32528);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x828f8bd0
	ctx.lr = 0x82917808;
	sub_828F8BD0(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82917784
	if (!ctx.cr6.gt) goto loc_82917784;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_8291781C:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x824d4028
	ctx.lr = 0x8291782C;
	sub_824D4028(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8291792c
	if (ctx.cr0.eq) goto loc_8291792C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8289cb48
	ctx.lr = 0x82917840;
	sub_8289CB48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8291792c
	if (ctx.cr0.eq) goto loc_8291792C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82917860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq 0x829178b0
	if (ctx.cr0.eq) goto loc_829178B0;
	// beq cr6,0x829178b4
	if (ctx.cr6.eq) goto loc_829178B4;
	// lfs f13,624(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82917920
	goto loc_82917920;
loc_829178B0:
	// bne cr6,0x8291792c
	if (!ctx.cr6.eq) goto loc_8291792C;
loc_829178B4:
	// lwz r11,1716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8291792c
	if (ctx.cr6.eq) goto loc_8291792C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257c780
	ctx.lr = 0x829178C8;
	sub_8257C780(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829178DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8291792c
	if (ctx.cr0.eq) goto loc_8291792C;
	// lfs f13,624(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82917920:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82918880
	ctx.lr = 0x8291792C;
	sub_82918880(ctx, base);
loc_8291792C:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8291781c
	if (ctx.cr6.lt) goto loc_8291781C;
	// lwz r11,688(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82917784
	if (ctx.cr6.eq) goto loc_82917784;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82917968
	if (ctx.cr6.eq) goto loc_82917968;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x829182d0
	ctx.lr = 0x82917960;
	sub_829182D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x829179b4
	goto loc_829179B4;
loc_82917968:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82917994
	if (ctx.cr6.eq) goto loc_82917994;
	// lwz r3,1608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82917988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82917998
	if (!ctx.cr0.eq) goto loc_82917998;
loc_82917994:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82917998:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x829179b0
	if (ctx.cr6.eq) goto loc_829179B0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829179b0
	if (!ctx.cr6.eq) goto loc_829179B0;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// b 0x829179bc
	goto loc_829179BC;
loc_829179B0:
	// lwz r27,432(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
loc_829179B4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82917e30
	if (!ctx.cr6.eq) goto loc_82917E30;
loc_829179BC:
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,624(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,628(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r3,13024(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13024);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// stw r10,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r10.u32);
	// stw r9,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
	// bl 0x82825ff8
	ctx.lr = 0x829179F0;
	sub_82825FF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82917e0c
	if (ctx.cr0.eq) goto loc_82917E0C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82917e0c
	if (!ctx.cr6.gt) goto loc_82917E0C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f23,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f23.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f22,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f22.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f21,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f21.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lfs f20,20144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20144);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f19.f64 = double(temp.f32);
	// lfs f30,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
loc_82917A38:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82917e0c
	if (!ctx.cr6.eq) goto loc_82917E0C;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x828eecd0
	ctx.lr = 0x82917A50;
	sub_828EECD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82917df8
	if (ctx.cr0.eq) goto loc_82917DF8;
	// lwz r29,396(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// lwz r28,400(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82917df8
	if (ctx.cr6.eq) goto loc_82917DF8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82917df8
	if (ctx.cr6.eq) goto loc_82917DF8;
	// lwz r9,628(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	// lwz r11,628(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	// lwz r8,624(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	// lwz r7,624(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	// lwz r10,620(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f3,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,620(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f0,f7,f4
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fsubs f13,f6,f3
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsubs f12,f5,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bne cr6,0x82917b0c
	if (!ctx.cr6.eq) goto loc_82917B0C;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lfs f10,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f8.f64 = double(temp.f32);
	// b 0x82917b38
	goto loc_82917B38;
loc_82917B0C:
	// fcmpu cr6,f11,f19
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f19.f64);
	// bge cr6,0x82917b24
	if (!ctx.cr6.lt) goto loc_82917B24;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// b 0x82917b38
	goto loc_82917B38;
loc_82917B24:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_82917B38:
	// fsubs f26,f4,f22
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f4.f64 - ctx.f22.f64));
	// fsubs f25,f3,f23
	ctx.f25.f64 = double(float(ctx.f3.f64 - ctx.f23.f64));
	// fsubs f24,f2,f21
	ctx.f24.f64 = double(float(ctx.f2.f64 - ctx.f21.f64));
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fmr f13,f25
	ctx.f13.f64 = ctx.f25.f64;
	// stfs f13,240(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fmr f12,f24
	ctx.f12.f64 = ctx.f24.f64;
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bne cr6,0x82917b98
	if (!ctx.cr6.eq) goto loc_82917B98;
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// lfs f0,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82917bc4
	goto loc_82917BC4;
loc_82917B98:
	// fcmpu cr6,f11,f19
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f19.f64);
	// bge cr6,0x82917bb0
	if (!ctx.cr6.lt) goto loc_82917BB0;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x82917bc4
	goto loc_82917BC4;
loc_82917BB0:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_82917BC4:
	// fmuls f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f0,f12,f10,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82917df8
	if (!ctx.cr6.lt) goto loc_82917DF8;
	// fsubs f29,f7,f22
	ctx.f29.f64 = double(float(ctx.f7.f64 - ctx.f22.f64));
	// fsubs f28,f6,f23
	ctx.f28.f64 = double(float(ctx.f6.f64 - ctx.f23.f64));
	// fsubs f27,f5,f21
	ctx.f27.f64 = double(float(ctx.f5.f64 - ctx.f21.f64));
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fmr f13,f28
	ctx.f13.f64 = ctx.f28.f64;
	// stfs f13,224(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fmr f12,f27
	ctx.f12.f64 = ctx.f27.f64;
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bne cr6,0x82917c38
	if (!ctx.cr6.eq) goto loc_82917C38;
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// lfs f0,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82917c64
	goto loc_82917C64;
loc_82917C38:
	// fcmpu cr6,f11,f19
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f19.f64);
	// bge cr6,0x82917c50
	if (!ctx.cr6.lt) goto loc_82917C50;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x82917c64
	goto loc_82917C64;
loc_82917C50:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_82917C64:
	// fmuls f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f0,f12,f10,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82917df8
	if (!ctx.cr6.gt) goto loc_82917DF8;
	// fsubs f0,f22,f4
	ctx.f0.f64 = double(float(ctx.f22.f64 - ctx.f4.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// fsubs f13,f23,f3
	ctx.f13.f64 = double(float(ctx.f23.f64 - ctx.f3.f64));
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// fsubs f12,f21,f2
	ctx.f12.f64 = double(float(ctx.f21.f64 - ctx.f2.f64));
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f0,f12,f10,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f13,328(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// fadds f13,f12,f4
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f13,332(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// fadds f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82917CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82917df8
	if (!ctx.cr0.eq) goto loc_82917DF8;
	// fmuls f0,f26,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f26.f64));
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f31,352(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stw r31,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r31.u32);
	// stfs f31,356(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stw r11,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r11.u32);
	// stfs f31,360(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stfs f31,364(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stw r31,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r31.u32);
	// stfs f31,368(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stw r31,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r31.u32);
	// stfs f31,372(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stw r31,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r31.u32);
	// stfs f31,376(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// stfs f31,380(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// stfs f31,384(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// fmadds f0,f25,f25,f0
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f25.f64 + ctx.f0.f64));
	// stfs f30,388(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// fmadds f0,f24,f24,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f24.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f20
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// ble cr6,0x82917d90
	if (!ctx.cr6.gt) goto loc_82917D90;
	// stfs f31,312(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,316(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// addi r9,r1,312
	ctx.r9.s64 = ctx.r1.s64 + 312;
	// stfs f31,320(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// li r8,8836
	ctx.r8.s64 = 8836;
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// lwz r3,13024(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13024);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// bl 0x82825330
	ctx.lr = 0x82917D68;
	sub_82825330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82917d90
	if (ctx.cr0.eq) goto loc_82917D90;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x828fd368
	ctx.lr = 0x82917D80;
	sub_828FD368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82917d90
	if (ctx.cr0.eq) goto loc_82917D90;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// b 0x82917df8
	goto loc_82917DF8;
loc_82917D90:
	// fmuls f0,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// fmadds f0,f28,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f0.f64));
	// fmadds f0,f27,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f27.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f20
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// ble cr6,0x82917df8
	if (!ctx.cr6.gt) goto loc_82917DF8;
	// stfs f31,296(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,300(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// addi r9,r1,296
	ctx.r9.s64 = ctx.r1.s64 + 296;
	// stfs f31,304(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// li r8,8836
	ctx.r8.s64 = 8836;
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// lwz r3,13024(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13024);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// bl 0x82825330
	ctx.lr = 0x82917DD4;
	sub_82825330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82917df8
	if (ctx.cr0.eq) goto loc_82917DF8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x828fd368
	ctx.lr = 0x82917DEC;
	sub_828FD368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82917df8
	if (ctx.cr0.eq) goto loc_82917DF8;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82917DF8:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82917a38
	if (ctx.cr6.lt) goto loc_82917A38;
loc_82917E0C:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,13024(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13024);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,280
	ctx.r5.s64 = ctx.r1.s64 + 280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82825ff8
	ctx.lr = 0x82917E28;
	sub_82825FF8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82917e68
	if (ctx.cr6.eq) goto loc_82917E68;
loc_82917E30:
	// lfs f13,4(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,624(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,620(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,0(r14)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r14.u32 + 0, temp.u32);
loc_82917E68:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x82917784
	goto loc_82917784;
}

__attribute__((alias("__imp__sub_82917E70"))) PPC_WEAK_FUNC(sub_82917E70);
PPC_FUNC_IMPL(__imp__sub_82917E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d8
	ctx.lr = 0x82917E78;
	__savegprlr_16(ctx, base);
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r18,1608(r19)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1608);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x829182c4
	if (ctx.cr6.eq) goto loc_829182C4;
	// lwz r20,1408(r18)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1408);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x829182c4
	if (ctx.cr6.eq) goto loc_829182C4;
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
	// lwz r16,1492(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1492);
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r4,24(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82917EC0;
	sub_829B9720(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r30,188(r20)
	PPC_STORE_U32(ctx.r20.u32 + 188, ctx.r30.u32);
	// lwz r11,28(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// addi r17,r20,8
	ctx.r17.s64 = ctx.r20.s64 + 8;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r24,24(r20)
	PPC_STORE_U32(ctx.r20.u32 + 24, ctx.r24.u32);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82917ef8
	if (ctx.cr6.eq) goto loc_82917EF8;
	// stw r24,20(r17)
	PPC_STORE_U32(ctx.r17.u32 + 20, ctx.r24.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82332c38
	ctx.lr = 0x82917EF8;
	sub_82332C38(ctx, base);
loc_82917EF8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82917f20
	if (ctx.cr6.eq) goto loc_82917F20;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,172(r20)
	PPC_STORE_U32(ctx.r20.u32 + 172, ctx.r11.u32);
	// b 0x82917f24
	goto loc_82917F24;
loc_82917F20:
	// stw r24,172(r20)
	PPC_STORE_U32(ctx.r20.u32 + 172, ctx.r24.u32);
loc_82917F24:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r4,172(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 172);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwa r10,1624(r10)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + 1624));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,176(r20)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + 176, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82917F74;
	sub_829B9720(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82917f88
	if (ctx.cr6.eq) goto loc_82917F88;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82917F88:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8291805c
	if (!ctx.cr6.gt) goto loc_8291805C;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_82917F9C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r28,r26,r11
	ctx.r28.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82917fcc
	if (ctx.cr6.eq) goto loc_82917FCC;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r4,28(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82917FC0;
	sub_829B9720(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82918048
	if (!ctx.cr6.eq) goto loc_82918048;
loc_82917FCC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8291801c
	if (!ctx.cr6.lt) goto loc_8291801C;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r4,28(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82917FEC;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82918000
	if (ctx.cr0.eq) goto loc_82918000;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,24(r16)
	PPC_STORE_U32(ctx.r16.u32 + 24, ctx.r11.u32);
	// b 0x82918004
	goto loc_82918004;
loc_82918000:
	// stw r24,24(r16)
	PPC_STORE_U32(ctx.r16.u32 + 24, ctx.r24.u32);
loc_82918004:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r27,r25,2
	ctx.r27.s64 = ctx.r25.s64 + 2;
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82918028
	goto loc_82918028;
loc_8291801C:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r27,r25,1
	ctx.r27.s64 = ctx.r25.s64 + 1;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
loc_82918028:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82918040
	if (!ctx.cr6.lt) goto loc_82918040;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82918044
	goto loc_82918044;
loc_82918040:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82918044:
	// li r23,1
	ctx.r23.s64 = 1;
loc_82918048:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82917f9c
	if (ctx.cr6.lt) goto loc_82917F9C;
loc_8291805C:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x82918200
	if (!ctx.cr6.gt) goto loc_82918200;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82918200
	if (!ctx.cr6.eq) goto loc_82918200;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,628(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,624(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f12,620(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r19,620
	ctx.r7.s64 = ctx.r19.s64 + 620;
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f10,17112(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17112);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r29,620
	ctx.r6.s64 = ctx.r29.s64 + 620;
	// lfs f11,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f11,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f13,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f7,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f9,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fmadds f0,f8,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x829181dc
	if (!ctx.cr6.lt) goto loc_829181DC;
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x829181dc
	if (!ctx.cr6.lt) goto loc_829181DC;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r3,13024(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// li r8,8836
	ctx.r8.s64 = 8836;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// bl 0x82825330
	ctx.lr = 0x82918188;
	sub_82825330(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82918200
	if (!ctx.cr6.eq) goto loc_82918200;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829181B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82918200
	if (ctx.cr0.eq) goto loc_82918200;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r27,2
	ctx.r27.s64 = 2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x829181fc
	if (!ctx.cr6.gt) goto loc_829181FC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82918200
	goto loc_82918200;
loc_829181DC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x829181fc
	if (!ctx.cr6.lt) goto loc_829181FC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82918200
	goto loc_82918200;
loc_829181FC:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82918200:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82918250
	if (ctx.cr6.eq) goto loc_82918250;
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_8291820C:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82918220;
	sub_82410060(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82918244
	if (!ctx.cr6.lt) goto loc_82918244;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r29,r28,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// b 0x82918248
	goto loc_82918248;
loc_82918244:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82918248:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8291820c
	if (!ctx.cr6.eq) goto loc_8291820C;
loc_82918250:
	// lwz r11,24(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x829182c4
	if (!ctx.cr6.gt) goto loc_829182C4;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r10,20(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x829b9720
	ctx.lr = 0x82918270;
	sub_829B9720(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829182c0
	if (ctx.cr0.eq) goto loc_829182C0;
	// lwz r10,20(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8291828C;
	sub_829B9720(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x829182c0
	if (ctx.cr0.eq) goto loc_829182C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ed5c8
	ctx.lr = 0x8291829C;
	sub_828ED5C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829182c0
	if (ctx.cr0.eq) goto loc_829182C0;
	// lwa r11,412(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 412));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,40(r16)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r16.u32 + 40, temp.u32);
	// b 0x829182c4
	goto loc_829182C4;
loc_829182C0:
	// stfs f31,40(r16)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r16.u32 + 40, temp.u32);
loc_829182C4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82a4ea28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829182D0"))) PPC_WEAK_FUNC(sub_829182D0);
PPC_FUNC_IMPL(__imp__sub_829182D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829182D8;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r9,256(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 256);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// lfs f0,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r7,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ble cr6,0x829184b8
	if (!ctx.cr6.gt) goto loc_829184B8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r31,r29,620
	ctx.r31.s64 = ctx.r29.s64 + 620;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lfs f30,18400(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18400);
	ctx.f30.f64 = double(temp.f32);
loc_82918370:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r11,620
	ctx.r6.s64 = ctx.r11.s64 + 620;
	// lfs f11,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f11,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f11,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x829184b8
	if (ctx.cr6.gt) goto loc_829184B8;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r8,8836
	ctx.r8.s64 = 8836;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82825330
	ctx.lr = 0x829183DC;
	sub_82825330(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8291847c
	if (ctx.cr6.eq) goto loc_8291847C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x829bed50
	ctx.lr = 0x829183FC;
	sub_829BED50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f13,404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x829bed50
	ctx.lr = 0x82918428;
	sub_829BED50(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,404(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r8,8836
	ctx.r8.s64 = 8836;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f13,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f12,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82825330
	ctx.lr = 0x82918470;
	sub_82825330(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829184a4
	if (!ctx.cr6.eq) goto loc_829184A4;
loc_8291847C:
	// lwz r3,1492(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291849C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829184cc
	if (!ctx.cr0.eq) goto loc_829184CC;
loc_829184A4:
	// lwz r11,256(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 256);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82918370
	if (ctx.cr6.lt) goto loc_82918370;
loc_829184B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829184BC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
loc_829184CC:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// b 0x829184bc
	goto loc_829184BC;
}

__attribute__((alias("__imp__sub_829184D8"))) PPC_WEAK_FUNC(sub_829184D8);
PPC_FUNC_IMPL(__imp__sub_829184D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829184E0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82918510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,7336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7336);
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// li r26,0
	ctx.r26.s64 = 0;
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r10,136
	ctx.r31.s64 = ctx.r10.s64 + 136;
	// beq cr6,0x82918538
	if (ctx.cr6.eq) goto loc_82918538;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8291853c
	goto loc_8291853C;
loc_82918538:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8291853C:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82918550
	if (ctx.cr6.eq) goto loc_82918550;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// b 0x82918554
	goto loc_82918554;
loc_82918550:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82918554:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82918568
	if (ctx.cr6.eq) goto loc_82918568;
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// b 0x8291856c
	goto loc_8291856C;
loc_82918568:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8291856C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// beq cr6,0x829185a0
	if (ctx.cr6.eq) goto loc_829185A0;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x829185A0;
	sub_82332C38(ctx, base);
loc_829185A0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x829185ec
	if (ctx.cr6.eq) goto loc_829185EC;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
loc_829185AC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x829185bc
	if (ctx.cr6.eq) goto loc_829185BC;
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// b 0x829185c0
	goto loc_829185C0;
loc_829185BC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_829185C0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82575930
	ctx.lr = 0x829185D4;
	sub_82575930(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,1640(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1640);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829185E4;
	sub_829B9720(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x829185ac
	if (!ctx.cr0.eq) goto loc_829185AC;
loc_829185EC:
	// lwz r11,7336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7336);
	// li r10,150
	ctx.r10.s64 = 150;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divw r10,r11,r10
	ctx.r10.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mulli r10,r10,150
	ctx.r10.s64 = ctx.r10.s64 * 150;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,7336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7336, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8291861C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82918628"))) PPC_WEAK_FUNC(sub_82918628);
PPC_FUNC_IMPL(__imp__sub_82918628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82918630;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291865C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r27,0
	ctx.r27.s64 = 0;
	// stfs f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// beq cr6,0x8291868c
	if (ctx.cr6.eq) goto loc_8291868C;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8291868C;
	sub_82332C38(ctx, base);
loc_8291868C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829186d8
	if (ctx.cr6.eq) goto loc_829186D8;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
loc_82918698:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829186a8
	if (ctx.cr6.eq) goto loc_829186A8;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// b 0x829186ac
	goto loc_829186AC;
loc_829186A8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_829186AC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82575930
	ctx.lr = 0x829186C0;
	sub_82575930(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,1640(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829186D0;
	sub_829B9720(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82918698
	if (!ctx.cr0.eq) goto loc_82918698;
loc_829186D8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829186EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829186F8"))) PPC_WEAK_FUNC(sub_829186F8);
PPC_FUNC_IMPL(__imp__sub_829186F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x82918700;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// stw r21,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r21.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82918738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r31,r23,168
	ctx.r31.s64 = ctx.r23.s64 + 168;
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
loc_82918744:
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// addi r28,r31,-32
	ctx.r28.s64 = ctx.r31.s64 + -32;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82918758;
	sub_829B9720(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82918790
	if (!ctx.cr6.eq) goto loc_82918790;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82918770;
	sub_829B9720(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82918790
	if (!ctx.cr6.eq) goto loc_82918790;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82918788;
	sub_829B9720(ctx, base);
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x829187ac
	if (ctx.cr6.eq) goto loc_829187AC;
loc_82918790:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmpwi cr6,r26,150
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 150, ctx.xer);
	// blt cr6,0x82918744
	if (ctx.cr6.lt) goto loc_82918744;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r21,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r21.u32);
	// b 0x8291885c
	goto loc_8291885C;
loc_829187AC:
	// lfs f0,40(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r20)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + 0, temp.u32);
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82918858
	if (ctx.cr6.eq) goto loc_82918858;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82918858
	if (ctx.cr6.eq) goto loc_82918858;
	// lwz r30,16(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x829187f8
	if (ctx.cr6.eq) goto loc_829187F8;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x829187F8;
	sub_82332C38(ctx, base);
loc_829187F8:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x8291880C;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x82918824;
	sub_82A455D0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82918858
	if (!ctx.cr6.gt) goto loc_82918858;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82918830:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82918844;
	sub_829B9720(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82918830
	if (!ctx.cr0.eq) goto loc_82918830;
loc_82918858:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8291885C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82918870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82918880"))) PPC_WEAK_FUNC(sub_82918880);
PPC_FUNC_IMPL(__imp__sub_82918880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// ble cr6,0x829188f0
	if (!ctx.cr6.gt) goto loc_829188F0;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// addi r8,r9,32
	ctx.r8.s64 = ctx.r9.s64 + 32;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x829188c8
	if (!ctx.cr6.gt) goto loc_829188C8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// ble cr6,0x829188f0
	if (!ctx.cr6.gt) goto loc_829188F0;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x829188d8
	goto loc_829188D8;
loc_829188C8:
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// ble cr6,0x829188f0
	if (!ctx.cr6.gt) goto loc_829188F0;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
loc_829188D8:
	// addi r8,r9,32
	ctx.r8.s64 = ctx.r9.s64 + 32;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x829188f0
	if (!ctx.cr6.gt) goto loc_829188F0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829188F0:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82918924
	if (!ctx.cr6.lt) goto loc_82918924;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_82918904:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82918924
	if (!ctx.cr6.gt) goto loc_82918924;
	// lwz r8,256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82918904
	if (ctx.cr6.lt) goto loc_82918904;
loc_82918924:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x82918958
	if (!ctx.cr6.eq) goto loc_82918958;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// blr 
	return;
loc_82918958:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stwx r4,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bge cr6,0x82918980
	if (!ctx.cr6.lt) goto loc_82918980;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r10.u32);
loc_82918980:
	// lwz r9,256(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82918998:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r6,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r6.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lwz r9,256(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82918998
	if (ctx.cr6.lt) goto loc_82918998;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829189C8"))) PPC_WEAK_FUNC(sub_829189C8);
PPC_FUNC_IMPL(__imp__sub_829189C8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r7,628(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// lwz r3,1492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r30,1408(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// beq cr6,0x82918a2c
	if (ctx.cr6.eq) goto loc_82918A2C;
	// lwz r11,620(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 620);
	// lwz r10,624(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 624);
	// lwz r9,628(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 628);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
loc_82918A2C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r8,620
	ctx.r5.s64 = ctx.r8.s64 + 620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82918A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f10,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsqrts f1,f13
	ctx.f1.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82918aac
	if (!ctx.cr6.gt) goto loc_82918AAC;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82918aac
	if (ctx.cr6.eq) goto loc_82918AAC;
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,1408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82918AAC:
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

__attribute__((alias("__imp__sub_82918AC8"))) PPC_WEAK_FUNC(sub_82918AC8);
PPC_FUNC_IMPL(__imp__sub_82918AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82918AD0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r9,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r10.u64);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82918c88
	if (ctx.cr6.eq) goto loc_82918C88;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82918c88
	if (ctx.cr6.eq) goto loc_82918C88;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x829c35d8
	ctx.lr = 0x82918B10;
	sub_829C35D8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// lwz r5,1492(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x82918bb0
	if (ctx.cr6.eq) goto loc_82918BB0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82918B30:
	// lwz r9,116(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 116);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82918b54
	if (ctx.cr6.eq) goto loc_82918B54;
	// lwz r9,1556(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1556);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82918b54
	if (!ctx.cr6.eq) goto loc_82918B54;
	// lwz r9,1652(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1652);
	// addi r9,r9,4000
	ctx.r9.s64 = ctx.r9.s64 + 4000;
	// stw r9,1652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1652, ctx.r9.u32);
loc_82918B54:
	// lwz r7,1660(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1660);
	// lis r4,152
	ctx.r4.s64 = 9961472;
	// lwz r8,1656(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1656);
	// addi r9,r11,1652
	ctx.r9.s64 = ctx.r11.s64 + 1652;
	// lwz r6,1648(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1648);
	// ori r4,r4,38528
	ctx.r4.u64 = ctx.r4.u64 | 38528;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r3,1516(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1516);
	// lwz r7,1652(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1652);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r4,1624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1624, ctx.r4.u32);
	// stw r10,1632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1632, ctx.r10.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r10,1636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1636, ctx.r10.u32);
	// stw r10,1640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1640, ctx.r10.u32);
	// stw r3,1512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1512, ctx.r3.u32);
	// stw r10,1516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1516, ctx.r10.u32);
	// stw r8,1644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1644, ctx.r8.u32);
	// stw r10,1564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1564, ctx.r10.u32);
	// lwz r11,1720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1720);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82918b30
	if (!ctx.cr6.eq) goto loc_82918B30;
loc_82918BB0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82918bc0
	if (ctx.cr6.eq) goto loc_82918BC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1512(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1512, ctx.r11.u32);
loc_82918BC0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,620
	ctx.r5.s64 = ctx.r31.s64 + 620;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x82825ff8
	ctx.lr = 0x82918BE0;
	sub_82825FF8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// bl 0x82a4cf18
	ctx.lr = 0x82918BF0;
	sub_82A4CF18(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r11,1624
	ctx.r11.s64 = 1624;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829186f8
	ctx.lr = 0x82918C24;
	sub_829186F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82918c88
	if (ctx.cr0.eq) goto loc_82918C88;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82918c88
	if (ctx.cr6.eq) goto loc_82918C88;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r6,252(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82918c98
	ctx.lr = 0x82918C58;
	sub_82918C98(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq 0x82918c7c
	if (ctx.cr0.eq) goto loc_82918C7C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82918c80
	if (ctx.cr6.eq) goto loc_82918C80;
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x82918c84
	goto loc_82918C84;
loc_82918C7C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82918C80:
	// li r7,3
	ctx.r7.s64 = 3;
loc_82918C84:
	// bl 0x82918628
	ctx.lr = 0x82918C88;
	sub_82918628(ctx, base);
loc_82918C88:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82918C98"))) PPC_WEAK_FUNC(sub_82918C98);
PPC_FUNC_IMPL(__imp__sub_82918C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x82918CA0;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r6,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r6.u32);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r31,1492(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1492);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r29,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r29.u32);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
	// li r15,1
	ctx.r15.s64 = 1;
	// li r14,1
	ctx.r14.s64 = 1;
	// bl 0x829bed50
	ctx.lr = 0x82918CF4;
	sub_829BED50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82918d1c
	if (ctx.cr0.eq) goto loc_82918D1C;
	// lfs f0,400(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,404(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// stfd f13,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f13.u64);
	// lwz r15,156(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r14,148(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_82918D1C:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f0.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// beq cr6,0x82918d8c
	if (ctx.cr6.eq) goto loc_82918D8C;
	// lfs f0,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f0.u64);
	// lfs f0,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lwz r14,164(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r15,148(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_82918D8C:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8291910c
	if (ctx.cr6.eq) goto loc_8291910C;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lfs f30,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// addi r16,r10,7896
	ctx.r16.s64 = ctx.r10.s64 + 7896;
	// lfs f31,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// addi r17,r11,5376
	ctx.r17.s64 = ctx.r11.s64 + 5376;
	// b 0x82918dc4
	goto loc_82918DC4;
loc_82918DC0:
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_82918DC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f1,0(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,444(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r11,1564(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1564, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82918DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82918dfc
	if (!ctx.cr6.gt) goto loc_82918DFC;
	// stfs f1,0(r19)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r19.u32 + 0, temp.u32);
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
loc_82918DFC:
	// lfs f0,0(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8291910c
	if (!ctx.cr6.lt) goto loc_8291910C;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,200
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 200, ctx.xer);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// ble cr6,0x82918e28
	if (!ctx.cr6.gt) goto loc_82918E28;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x8291910c
	if (ctx.cr6.gt) goto loc_8291910C;
	// li r11,150
	ctx.r11.s64 = 150;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_82918E28:
	// lwz r11,1424(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1424);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829190f4
	if (!ctx.cr6.gt) goto loc_829190F4;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_82918E3C:
	// lwz r11,1420(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1420);
	// lwzx r30,r23,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// lwz r31,400(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829190dc
	if (ctx.cr6.eq) goto loc_829190DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8289cb48
	ctx.lr = 0x82918E5C;
	sub_8289CB48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829190dc
	if (ctx.cr0.eq) goto loc_829190DC;
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829190dc
	if (!ctx.cr6.eq) goto loc_829190DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82918E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829190dc
	if (ctx.cr0.eq) goto loc_829190DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82918EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,38528
	ctx.r11.u64 = ctx.r11.u64 | 38528;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x829190dc
	if (!ctx.cr6.lt) goto loc_829190DC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82918f3c
	if (ctx.cr6.gt) goto loc_82918F3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x829c62f0
	ctx.lr = 0x82918EDC;
	sub_829C62F0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82918ef0
	if (ctx.cr6.eq) goto loc_82918EF0;
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82918ef4
	goto loc_82918EF4;
loc_82918EF0:
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_82918EF4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x829c62f0
	ctx.lr = 0x82918F00;
	sub_829C62F0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82918f14
	if (ctx.cr6.eq) goto loc_82918F14;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82918f18
	goto loc_82918F18;
loc_82918F14:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
loc_82918F18:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825d6ef8
	ctx.lr = 0x82918F28;
	sub_825D6EF8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x82918F30;
	sub_82333960(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82333960
	ctx.lr = 0x82918F38;
	sub_82333960(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82918F3C:
	// lwz r11,1624(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1624);
	// lwz r10,1624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x829190d8
	if (!ctx.cr6.gt) goto loc_829190D8;
	// stw r22,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r22.u32);
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,1636(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82918F6C;
	sub_829B9720(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,1632(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82918F80;
	sub_829B9720(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82918ff4
	if (ctx.cr6.eq) goto loc_82918FF4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r22,1632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1632, ctx.r22.u32);
	// beq cr6,0x82918f9c
	if (ctx.cr6.eq) goto loc_82918F9C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,1632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1632, ctx.r11.u32);
loc_82918F9C:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,1632(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82918FAC;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82918fc0
	if (ctx.cr0.eq) goto loc_82918FC0;
	// stw r22,1636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1636, ctx.r22.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,1636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1636, ctx.r11.u32);
loc_82918FC0:
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82918fd8
	if (ctx.cr6.eq) goto loc_82918FD8;
	// lwz r11,1624(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1624);
	// lwz r10,1624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82918fec
	if (!ctx.cr6.gt) goto loc_82918FEC;
loc_82918FD8:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,1636(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82918FE8;
	sub_829B9720(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82918FEC:
	// stw r22,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r22.u32);
	// stw r22,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r22.u32);
loc_82918FF4:
	// stw r29,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r29.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r11,1624(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1624);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bgt cr6,0x82919044
	if (ctx.cr6.gt) goto loc_82919044;
	// lwz r4,1632(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1632);
	// b 0x82919034
	goto loc_82919034;
loc_82919018:
	// lwz r11,1624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1624);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82919074
	if (!ctx.cr6.lt) goto loc_82919074;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,1632(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1632);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_82919034:
	// bl 0x829b9720
	ctx.lr = 0x82919038;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82919018
	if (!ctx.cr0.eq) goto loc_82919018;
	// b 0x82919074
	goto loc_82919074;
loc_82919044:
	// lwz r4,1636(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1636);
	// b 0x82919068
	goto loc_82919068;
loc_8291904C:
	// lwz r11,1624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1624);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82919074
	if (!ctx.cr6.gt) goto loc_82919074;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,1636(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1636);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_82919068:
	// bl 0x829b9720
	ctx.lr = 0x8291906C;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8291904c
	if (!ctx.cr0.eq) goto loc_8291904C;
loc_82919074:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829190d4
	if (ctx.cr6.eq) goto loc_829190D4;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,1632(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8291908C;
	sub_829B9720(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x829190d4
	if (ctx.cr6.eq) goto loc_829190D4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829190a8
	if (ctx.cr6.eq) goto loc_829190A8;
	// stw r22,1636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1636, ctx.r22.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,1636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1636, ctx.r11.u32);
loc_829190A8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r22,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r22.u32);
	// beq cr6,0x829190bc
	if (ctx.cr6.eq) goto loc_829190BC;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
loc_829190BC:
	// stw r22,1632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1632, ctx.r22.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,1632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1632, ctx.r11.u32);
	// stw r22,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r22.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r11.u32);
loc_829190D4:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_829190D8:
	// lwz r29,436(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
loc_829190DC:
	// lwz r11,1424(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1424);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82918e3c
	if (ctx.cr6.lt) goto loc_82918E3C;
	// lwz r30,468(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
loc_829190F4:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,1632(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1632);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82919104;
	sub_829B9720(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82918dc0
	if (!ctx.cr0.eq) goto loc_82918DC0;
loc_8291910C:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82919138
	ctx.lr = 0x82919128;
	sub_82919138(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

