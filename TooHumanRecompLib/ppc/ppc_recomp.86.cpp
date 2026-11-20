#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8263BBF0"))) PPC_WEAK_FUNC(sub_8263BBF0);
PPC_FUNC_IMPL(__imp__sub_8263BBF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,-100(r3)
	PPC_STORE_U32(ctx.r3.u32 + -100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263BC00"))) PPC_WEAK_FUNC(sub_8263BC00);
PPC_FUNC_IMPL(__imp__sub_8263BC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x8263BC08;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,1968(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8263be14
	if (ctx.cr6.eq) goto loc_8263BE14;
	// lwz r11,2548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	// li r10,7
	ctx.r10.s64 = 7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,8496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8496, ctx.r10.u32);
	// beq cr6,0x8263bc4c
	if (ctx.cr6.eq) goto loc_8263BC4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e3cf0
	ctx.lr = 0x8263BC4C;
	sub_825E3CF0(ctx, base);
loc_8263BC4C:
	// lwz r11,11464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11464);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263bc6c
	if (ctx.cr6.eq) goto loc_8263BC6C;
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8261cb10
	ctx.lr = 0x8263BC6C;
	sub_8261CB10(ctx, base);
loc_8263BC6C:
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r10,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r10.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r31,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r31.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// lfs f0,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r31.u32);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// stfs f31,324(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stfs f31,328(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// lwz r9,660(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// stfs f31,336(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// lwz r10,664(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// stfs f31,340(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// lwz r8,656(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// stfs f31,344(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,1976
	ctx.r4.s64 = ctx.r11.s64 + 1976;
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stw r8,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r8.u32);
	// stw r9,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// stw r10,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8263BCEC;
	sub_82A4EA80(ctx, base);
	// lwz r28,-4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,2536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2536);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82817bb8
	ctx.lr = 0x8263BD10;
	sub_82817BB8(ctx, base);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ld r7,320(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwz r4,328(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// ld r28,336(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// lwz r29,344(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f2,17796(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17796);
	ctx.f2.f64 = double(temp.f32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lfs f4,18308(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18308);
	ctx.f4.f64 = double(temp.f32);
	// lwz r24,456(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r21,4(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r9,100
	ctx.r9.s64 = 100;
	// lfs f1,-27804(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -27804);
	ctx.f1.f64 = double(temp.f32);
	// lwz r22,8(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// std r7,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r7.u64);
	// addi r23,r1,400
	ctx.r23.s64 = ctx.r1.s64 + 400;
	// stw r4,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r4.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r8,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// rldicr r8,r24,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r26,620(r30)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r30.u32 + 620);
	// lwz r25,628(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// ld r5,432(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// lwz r27,1012(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1012);
	// ld r6,440(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// ld r7,448(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 448);
	// lwz r4,2536(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2536);
	// stb r31,311(r1)
	PPC_STORE_U8(ctx.r1.u32 + 311, ctx.r31.u8);
	// stw r9,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r9.u32);
	// std r28,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r28.u64);
	// stw r29,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r29.u32);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stb r11,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r11.u8);
	// stb r31,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r31.u8);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// stb r31,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r31.u8);
	// std r26,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r26.u64);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8263BDF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,11352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11352, ctx.r10.u32);
	// stw r9,11356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11356, ctx.r9.u32);
	// stw r11,11360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11360, ctx.r11.u32);
	// bl 0x82400f38
	ctx.lr = 0x8263BE14;
	sub_82400F38(ctx, base);
loc_8263BE14:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263BE20"))) PPC_WEAK_FUNC(sub_8263BE20);
PPC_FUNC_IMPL(__imp__sub_8263BE20) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,-4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,20(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,1968(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1968);
	// stw r11,11352(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11352, ctx.r11.u32);
	// stw r10,11356(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11356, ctx.r10.u32);
	// stw r9,11360(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11360, ctx.r9.u32);
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r7,10764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10764, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263BE70"))) PPC_WEAK_FUNC(sub_8263BE70);
PPC_FUNC_IMPL(__imp__sub_8263BE70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -100);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,-92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r11,1968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// stb r10,192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 192, ctx.r10.u8);
	// lwz r11,960(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x826228f8
	sub_826228F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263BEAC"))) PPC_WEAK_FUNC(sub_8263BEAC);
PPC_FUNC_IMPL(__imp__sub_8263BEAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263BEB0"))) PPC_WEAK_FUNC(sub_8263BEB0);
PPC_FUNC_IMPL(__imp__sub_8263BEB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -100);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r3,2696(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2696);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263BEC8"))) PPC_WEAK_FUNC(sub_8263BEC8);
PPC_FUNC_IMPL(__imp__sub_8263BEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9dc
	ctx.lr = 0x8263BED0;
	__savegprlr_17(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263c16c
	if (ctx.cr6.eq) goto loc_8263C16C;
	// lwz r11,-100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// stw r27,2696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2696, ctx.r27.u32);
	// lwz r11,-100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r28,1968(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r11,2864(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263bf60
	if (ctx.cr6.eq) goto loc_8263BF60;
	// lwz r10,8960(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8960);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8263c128
	if (ctx.cr6.eq) goto loc_8263C128;
	// lwz r10,8964(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8964);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8263c158
	if (!ctx.cr6.eq) goto loc_8263C158;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825f59f8
	ctx.lr = 0x8263BF5C;
	sub_825F59F8(ctx, base);
	// b 0x8263c130
	goto loc_8263C130;
loc_8263BF60:
	// lwz r11,-100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// lwz r26,9760(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9760);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r29,-92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r11,1968(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263c120
	if (ctx.cr6.eq) goto loc_8263C120;
	// lwz r11,8504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8504);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8263c150
	if (ctx.cr6.eq) goto loc_8263C150;
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r30.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r11.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r30,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r30.u32);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// stw r30,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r30.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r30,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r30.u32);
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,324(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f31,328(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f31,336(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f31,340(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f31,344(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// lwz r25,1968(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1968);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lfs f30,9756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9756);
	ctx.f30.f64 = double(temp.f32);
	// lwz r10,664(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 664);
	// lwz r11,660(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 660);
	// lwz r9,656(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 656);
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// stw r10,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
	// bl 0x82817bb8
	ctx.lr = 0x8263C000;
	sub_82817BB8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r4,2536(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2536);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r17,8(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r21,100
	ctx.r21.s64 = 100;
	// ld r9,320(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// li r20,-1
	ctx.r20.s64 = -1;
	// lwz r24,328(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// addi r18,r1,400
	ctx.r18.s64 = ctx.r1.s64 + 400;
	// lfs f4,18308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18308);
	ctx.f4.f64 = double(temp.f32);
	// ld r11,620(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 620);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f2,20252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20252);
	ctx.f2.f64 = double(temp.f32);
	// ld r23,336(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lwz r22,344(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r25,628(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 628);
	// lwz r19,2000(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2000);
	// ld r5,1976(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 1976);
	// ld r6,1984(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 1984);
	// ld r7,1992(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 1992);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwz r29,1012(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1012);
	// rldicr r8,r19,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r19.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r9,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r9.u64);
	// stw r24,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r24.u32);
	// stb r30,311(r1)
	PPC_STORE_U8(ctx.r1.u32 + 311, ctx.r30.u8);
	// stw r21,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r21.u32);
	// stw r20,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r20.u32);
	// std r23,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r23.u64);
	// stw r22,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r22.u32);
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stb r27,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r27.u8);
	// stb r27,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r27.u8);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r27,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r18,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// stb r30,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r30.u8);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8263C0D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8281d960
	ctx.lr = 0x8263C0D8;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8263c114
	if (ctx.cr0.eq) goto loc_8263C114;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8281d960
	ctx.lr = 0x8263C0E8;
	sub_8281D960(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8263C0EC;
	sub_82333A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8263c110
	if (ctx.cr0.eq) goto loc_8263C110;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263C108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8263c114
	if (!ctx.cr0.gt) goto loc_8263C114;
loc_8263C110:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8263C114:
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82400f38
	ctx.lr = 0x8263C11C;
	sub_82400F38(ctx, base);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8263C120:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8263c150
	if (ctx.cr6.eq) goto loc_8263C150;
loc_8263C128:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825f5940
	ctx.lr = 0x8263C130;
	sub_825F5940(ctx, base);
loc_8263C130:
	// lwz r11,-100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r10,r3,638
	ctx.r10.s64 = ctx.r3.s64 + 638;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8263c158
	goto loc_8263C158;
loc_8263C150:
	// lis r4,2853
	ctx.r4.s64 = 186974208;
	// ori r4,r4,42802
	ctx.r4.u64 = ctx.r4.u64 | 42802;
loc_8263C158:
	// lwz r11,-100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// bl 0x82642640
	ctx.lr = 0x8263C16C;
	sub_82642640(ctx, base);
loc_8263C16C:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82a4ea2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263C180"))) PPC_WEAK_FUNC(sub_8263C180);
PPC_FUNC_IMPL(__imp__sub_8263C180) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,5452
	ctx.r4.s64 = ctx.r11.s64 + 5452;
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263C1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-15880
	ctx.r10.s64 = ctx.r10.s64 + -15880;
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
	// lfs f1,-11456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11456);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826436e8
	ctx.lr = 0x8263C1E4;
	sub_826436E8(ctx, base);
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

__attribute__((alias("__imp__sub_8263C1F8"))) PPC_WEAK_FUNC(sub_8263C1F8);
PPC_FUNC_IMPL(__imp__sub_8263C1F8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,1924(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r5,r4,2140
	ctx.r5.s64 = ctx.r4.s64 + 2140;
	// addi r7,r11,-2496
	ctx.r7.s64 = ctx.r11.s64 + -2496;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82614738
	ctx.lr = 0x8263C234;
	sub_82614738(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263C248"))) PPC_WEAK_FUNC(sub_8263C248);
PPC_FUNC_IMPL(__imp__sub_8263C248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8263C250;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// addi r4,r11,-16000
	ctx.r4.s64 = ctx.r11.s64 + -16000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263C278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3172);
	// lwz r10,3176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3176);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8263c2d8
	if (!ctx.cr6.eq) goto loc_8263C2D8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-15800
	ctx.r4.s64 = ctx.r11.s64 + -15800;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263C2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-16000
	ctx.r10.s64 = ctx.r10.s64 + -16000;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x826436e8
	ctx.lr = 0x8263C2D4;
	sub_826436E8(ctx, base);
	// b 0x8263c3bc
	goto loc_8263C3BC;
loc_8263C2D8:
	// li r8,10
	ctx.r8.s64 = 10;
	// bge cr6,0x8263c32c
	if (!ctx.cr6.lt) goto loc_8263C32C;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r9,r9,r8
	ctx.r9.s32 = ctx.r9.s32 / ctx.r8.s32;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bge cr6,0x8263c2f4
	if (!ctx.cr6.lt) goto loc_8263C2F4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8263C2F4:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8263c34c
	if (ctx.cr6.lt) goto loc_8263C34C;
loc_8263C300:
	// stw r10,3176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3176, ctx.r10.u32);
loc_8263C304:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r5,3176(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3176);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-25772
	ctx.r4.s64 = ctx.r11.s64 + -25772;
	// bl 0x82816c30
	ctx.lr = 0x8263C318;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263c354
	if (ctx.cr6.eq) goto loc_8263C354;
	// lwz r31,140(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x8263c35c
	goto loc_8263C35C;
loc_8263C32C:
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r9,r9,r8
	ctx.r9.s32 = ctx.r9.s32 / ctx.r8.s32;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bge cr6,0x8263c340
	if (!ctx.cr6.lt) goto loc_8263C340;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8263C340:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8263c300
	if (!ctx.cr6.gt) goto loc_8263C300;
loc_8263C34C:
	// stw r11,3176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3176, ctx.r11.u32);
	// b 0x8263c304
	goto loc_8263C304;
loc_8263C354:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r31,r11,7896
	ctx.r31.s64 = ctx.r11.s64 + 7896;
loc_8263C35C:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r11,5480
	ctx.r3.s64 = ctx.r11.s64 + 5480;
	// addi r30,r10,5464
	ctx.r30.s64 = ctx.r10.s64 + 5464;
	// bl 0x82816528
	ctx.lr = 0x8263C370;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f1,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// bl 0x8242f7e8
	ctx.lr = 0x8263C3B4;
	sub_8242F7E8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8263C3BC;
	sub_82333960(ctx, base);
loc_8263C3BC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263C3C8"))) PPC_WEAK_FUNC(sub_8263C3C8);
PPC_FUNC_IMPL(__imp__sub_8263C3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8263C3D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263C3F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8263c530
	if (ctx.cr0.eq) goto loc_8263C530;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-15880
	ctx.r4.s64 = ctx.r11.s64 + -15880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263C418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,3176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3176, ctx.r29.u32);
	// stw r28,3172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3172, ctx.r28.u32);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x8263c530
	if (ctx.cr6.eq) goto loc_8263C530;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-25772
	ctx.r4.s64 = ctx.r11.s64 + -25772;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816c30
	ctx.lr = 0x8263C43C;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263c450
	if (ctx.cr6.eq) goto loc_8263C450;
	// lwz r27,140(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x8263c458
	goto loc_8263C458;
loc_8263C450:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r27,r11,7896
	ctx.r27.s64 = ctx.r11.s64 + 7896;
loc_8263C458:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r11,5480
	ctx.r3.s64 = ctx.r11.s64 + 5480;
	// addi r26,r10,5464
	ctx.r26.s64 = ctx.r10.s64 + 5464;
	// bl 0x82816528
	ctx.lr = 0x8263C46C;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f1,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// bl 0x8242f7e8
	ctx.lr = 0x8263C4B0;
	sub_8242F7E8(ctx, base);
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,1924(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r5,r4,2140
	ctx.r5.s64 = ctx.r4.s64 + 2140;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,-2496
	ctx.r7.s64 = ctx.r10.s64 + -2496;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82614738
	ctx.lr = 0x8263C4DC;
	sub_82614738(ctx, base);
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,5520
	ctx.r4.s64 = ctx.r11.s64 + 5520;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263C4FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// addi r10,r10,-15800
	ctx.r10.s64 = ctx.r10.s64 + -15800;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lfs f1,20228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20228);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826436e8
	ctx.lr = 0x8263C528;
	sub_826436E8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8263C530;
	sub_82333960(ctx, base);
loc_8263C530:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263C538"))) PPC_WEAK_FUNC(sub_8263C538);
PPC_FUNC_IMPL(__imp__sub_8263C538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8263C540;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61734
	ctx.lr = 0x8263C548;
	__savefpr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lfs f0,20480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20480);
	ctx.f0.f64 = double(temp.f32);
	// lfs f24,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f24.f64 = double(temp.f32);
	// lfs f13,20476(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20476);
	ctx.f13.f64 = double(temp.f32);
	// stfs f24,92(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f30,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f27,f30,f0
	ctx.f27.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82a4e118
	ctx.lr = 0x8263C590;
	sub_82A4E118(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f0,20472(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20472);
	ctx.f0.f64 = double(temp.f32);
	// lfs f26,20468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20468);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f29,17116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17116);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,20464(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20464);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f0,f13,f26,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f26.f64 + ctx.f29.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82a4e118
	ctx.lr = 0x8263C5C8;
	sub_82A4E118(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r4,1924(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// addi r28,r10,-32616
	ctx.r28.s64 = ctx.r10.s64 + -32616;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r5,r4,1792
	ctx.r5.s64 = ctx.r4.s64 + 1792;
	// addi r29,r10,-2380
	ctx.r29.s64 = ctx.r10.s64 + -2380;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f28,19576(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19576);
	ctx.f28.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f25,84(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	ctx.f25.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmsubs f0,f0,f25,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f25.f64 - ctx.f28.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82644148
	ctx.lr = 0x8263C614;
	sub_82644148(ctx, base);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lwz r11,-17128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17128);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8263c640
	if (!ctx.cr0.eq) goto loc_8263C640;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r8,r9,-17140
	ctx.r8.s64 = ctx.r9.s64 + -17140;
	// stw r11,-17128(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17128, ctx.r11.u32);
	// stfs f29,-17140(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r9.u32 + -17140, temp.u32);
	// stfs f28,4(r8)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f24,8(r8)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
loc_8263C640:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8263c674
	if (!ctx.cr0.eq) goto loc_8263C674;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r6,r9,-17152
	ctx.r6.s64 = ctx.r9.s64 + -17152;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lfs f0,18368(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18368);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,-17128(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17128, ctx.r11.u32);
	// lfs f13,-11456(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -11456);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-17152(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -17152, temp.u32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f24,8(r6)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
loc_8263C674:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82a4e118
	ctx.lr = 0x8263C67C;
	sub_82A4E118(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20460);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmadds f0,f12,f26,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82a4e118
	ctx.lr = 0x8263C6A0;
	sub_82A4E118(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,1924(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r4,1796
	ctx.r5.s64 = ctx.r4.s64 + 1796;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f0,16604(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16604);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// fmadds f0,f13,f25,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f25.f64 + ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82644148
	ctx.lr = 0x8263C6D8;
	sub_82644148(ctx, base);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263c7a4
	if (ctx.cr6.eq) goto loc_8263C7A4;
	// lwz r11,8964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8964);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263c758
	if (ctx.cr6.eq) goto loc_8263C758;
	// lwz r10,2012(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2012);
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f24.f64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8263c738
	if (ctx.cr6.eq) goto loc_8263C738;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwa r11,2004(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 2004));
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_8263C738:
	// lfs f0,3648(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x8263c74c
	if (!ctx.cr6.eq) goto loc_8263C74C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8263c758
	if (ctx.cr6.eq) goto loc_8263C758;
loc_8263C74C:
	// stfs f1,3648(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3648, temp.u32);
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// bl 0x826ccfa8
	ctx.lr = 0x8263C758;
	sub_826CCFA8(ctx, base);
loc_8263C758:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263c7b8
	ctx.lr = 0x8263C764;
	sub_8263C7B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263caf0
	ctx.lr = 0x8263C770;
	sub_8263CAF0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263cc50
	ctx.lr = 0x8263C77C;
	sub_8263CC50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x8263d2d0
	ctx.lr = 0x8263C788;
	sub_8263D2D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263d428
	ctx.lr = 0x8263C790;
	sub_8263D428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261f968
	ctx.lr = 0x8263C798;
	sub_8261F968(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261fba8
	ctx.lr = 0x8263C7A4;
	sub_8261FBA8(ctx, base);
loc_8263C7A4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61780
	ctx.lr = 0x8263C7B0;
	__restfpr_23(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263C7B8"))) PPC_WEAK_FUNC(sub_8263C7B8);
PPC_FUNC_IMPL(__imp__sub_8263C7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8263C7C0;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263C7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,1456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263C808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// beq 0x8263c854
	if (ctx.cr0.eq) goto loc_8263C854;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_8263C854:
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwa r10,8424(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 8424));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r11,8428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8428);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x8263c99c
	if (ctx.cr6.gt) goto loc_8263C99C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263cabc
	if (!ctx.cr6.eq) goto loc_8263CABC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263C894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f0,17144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17144);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,17140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17140);
	ctx.f13.f64 = double(temp.f32);
	// li r3,44
	ctx.r3.s64 = 44;
	// lfs f12,17136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// stw r9,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r9.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82833108
	ctx.lr = 0x8263C8F8;
	sub_82833108(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// beq 0x8263c964
	if (ctx.cr0.eq) goto loc_8263C964;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8263c91c
	if (ctx.cr0.eq) goto loc_8263C91C;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8263c920
	goto loc_8263C920;
loc_8263C91C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8263C920:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8263c930
	if (ctx.cr0.eq) goto loc_8263C930;
	// lwz r31,80(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8263c934
	goto loc_8263C934;
loc_8263C930:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8263C934:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-29620
	ctx.r3.s64 = ctx.r11.s64 + -29620;
	// bl 0x82816528
	ctx.lr = 0x8263C944;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x824bdcb8
	ctx.lr = 0x8263C95C;
	sub_824BDCB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8263c968
	goto loc_8263C968;
loc_8263C964:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8263C968:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8263C974;
	sub_82833A30(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r10,15834
	ctx.r4.s64 = ctx.r10.s64 + 15834;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,1968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r11,8428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8428, ctx.r11.u32);
	// bl 0x8233a258
	ctx.lr = 0x8263C990;
	sub_8233A258(ctx, base);
	// lis r4,7423
	ctx.r4.s64 = 486473728;
	// ori r4,r4,60665
	ctx.r4.u64 = ctx.r4.u64 | 60665;
	// b 0x8263cab0
	goto loc_8263CAB0;
loc_8263C99C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263cabc
	if (ctx.cr6.eq) goto loc_8263CABC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263C9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f0,17144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17144);
	ctx.f0.f64 = double(temp.f32);
	// li r3,44
	ctx.r3.s64 = 44;
	// lfs f13,17140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,17136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17136);
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
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// bl 0x82833108
	ctx.lr = 0x8263CA10;
	sub_82833108(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// beq 0x8263ca7c
	if (ctx.cr0.eq) goto loc_8263CA7C;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8263ca34
	if (ctx.cr0.eq) goto loc_8263CA34;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8263ca38
	goto loc_8263CA38;
loc_8263CA34:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8263CA38:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8263ca48
	if (ctx.cr0.eq) goto loc_8263CA48;
	// lwz r31,80(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8263ca4c
	goto loc_8263CA4C;
loc_8263CA48:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8263CA4C:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-29620
	ctx.r3.s64 = ctx.r11.s64 + -29620;
	// bl 0x82816528
	ctx.lr = 0x8263CA5C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x824bdcb8
	ctx.lr = 0x8263CA74;
	sub_824BDCB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8263ca80
	goto loc_8263CA80;
loc_8263CA7C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8263CA80:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8263CA8C;
	sub_82833A30(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,15834
	ctx.r4.s64 = ctx.r10.s64 + 15834;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,1968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r11,8428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8428, ctx.r11.u32);
	// bl 0x8233a258
	ctx.lr = 0x8263CAA8;
	sub_8233A258(ctx, base);
	// lis r4,11526
	ctx.r4.s64 = 755367936;
	// ori r4,r4,45394
	ctx.r4.u64 = ctx.r4.u64 | 45394;
loc_8263CAB0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// bl 0x829c3740
	ctx.lr = 0x8263CABC;
	sub_829C3740(ctx, base);
loc_8263CABC:
	// lfs f0,3652(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3652);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x8263cad0
	if (!ctx.cr6.eq) goto loc_8263CAD0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8263cae0
	if (ctx.cr6.eq) goto loc_8263CAE0;
loc_8263CAD0:
	// stfs f30,3652(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3652, temp.u32);
	// lwz r3,1924(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x826ccd58
	ctx.lr = 0x8263CAE0;
	sub_826CCD58(ctx, base);
loc_8263CAE0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263CAF0"))) PPC_WEAK_FUNC(sub_8263CAF0);
PPC_FUNC_IMPL(__imp__sub_8263CAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8263CAF8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263CB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x8263cb3c
	if (!ctx.cr0.gt) goto loc_8263CB3C;
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12372(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12372);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x8263cb40
	goto loc_8263CB40;
loc_8263CB3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8263CB40:
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,3656(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3656);
	ctx.f13.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lwz r8,12372(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12372);
	// lwz r10,10464(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10464);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwax r10,r8,r9
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8263cbb8
	if (!ctx.cr6.eq) goto loc_8263CBB8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8263cbf0
	if (ctx.cr6.eq) goto loc_8263CBF0;
loc_8263CBB8:
	// stfs f0,3656(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3656, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1924(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r3,r9,27112
	ctx.r3.s64 = ctx.r9.s64 + 27112;
	// lfs f13,16356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16356);
	ctx.f13.f64 = double(temp.f32);
	// lwz r29,3088(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3088);
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82816528
	ctx.lr = 0x8263CBDC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82983258
	ctx.lr = 0x8263CBF0;
	sub_82983258(ctx, base);
loc_8263CBF0:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,3668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r29,2436(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2436);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8263cc0c
	if (!ctx.cr6.eq) goto loc_8263CC0C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8263cc1c
	if (ctx.cr6.eq) goto loc_8263CC1C;
loc_8263CC0C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826403d0
	ctx.lr = 0x8263CC18;
	sub_826403D0(ctx, base);
	// stw r29,3668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3668, ctx.r29.u32);
loc_8263CC1C:
	// lwz r11,3660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3660);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8263cc30
	if (!ctx.cr6.eq) goto loc_8263CC30;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8263cc40
	if (ctx.cr6.eq) goto loc_8263CC40;
loc_8263CC30:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826404a0
	ctx.lr = 0x8263CC3C;
	sub_826404A0(ctx, base);
	// stw r30,3660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3660, ctx.r30.u32);
loc_8263CC40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263CC50"))) PPC_WEAK_FUNC(sub_8263CC50);
PPC_FUNC_IMPL(__imp__sub_8263CC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8263CC58;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263CC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8263cd1c
	if (ctx.cr0.eq) goto loc_8263CD1C;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lwz r31,352(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// addi r4,r9,-26296
	ctx.r4.s64 = ctx.r9.s64 + -26296;
	// addi r3,r8,-26276
	ctx.r3.s64 = ctx.r8.s64 + -26276;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8263CCAC;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8263ccfc
	if (!ctx.cr6.gt) goto loc_8263CCFC;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_8263CCFC:
	// lfs f0,3664(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3664);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x8263cd10
	if (!ctx.cr6.eq) goto loc_8263CD10;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8263cd1c
	if (ctx.cr6.eq) goto loc_8263CD1C;
loc_8263CD10:
	// stfs f1,3664(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3664, temp.u32);
	// lwz r3,1924(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	// bl 0x826cd200
	ctx.lr = 0x8263CD1C;
	sub_826CD200(ctx, base);
loc_8263CD1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263CD28"))) PPC_WEAK_FUNC(sub_8263CD28);
PPC_FUNC_IMPL(__imp__sub_8263CD28) {
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
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263cd84
	if (ctx.cr6.eq) goto loc_8263CD84;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8263cd60
	if (ctx.cr6.eq) goto loc_8263CD60;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8263cd68
	goto loc_8263CD68;
loc_8263CD60:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_8263CD68:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r11,5532
	ctx.r4.s64 = ctx.r11.s64 + 5532;
	// bl 0x82a4cc80
	ctx.lr = 0x8263CD74;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8263cd84
	if (!ctx.cr0.eq) goto loc_8263CD84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263d428
	ctx.lr = 0x8263CD84;
	sub_8263D428(ctx, base);
loc_8263CD84:
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

__attribute__((alias("__imp__sub_8263CD98"))) PPC_WEAK_FUNC(sub_8263CD98);
PPC_FUNC_IMPL(__imp__sub_8263CD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8263CDA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8277be40
	ctx.lr = 0x8263CDB4;
	sub_8277BE40(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8263cde8
	goto loc_8263CDE8;
loc_8263CDBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e08d0
	ctx.lr = 0x8263CDC8;
	sub_828E08D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8263cdd4
	if (ctx.cr0.eq) goto loc_8263CDD4;
	// stw r29,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r29.u32);
loc_8263CDD4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8263cd98
	ctx.lr = 0x8263CDE4;
	sub_8263CD98(ctx, base);
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_8263CDE8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8263cdbc
	if (!ctx.cr6.eq) goto loc_8263CDBC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263CDF8"))) PPC_WEAK_FUNC(sub_8263CDF8);
PPC_FUNC_IMPL(__imp__sub_8263CDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8263CE00;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r4,r11,5560
	ctx.r4.s64 = ctx.r11.s64 + 5560;
	// ble cr6,0x8263cec0
	if (!ctx.cr6.gt) goto loc_8263CEC0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82816c30
	ctx.lr = 0x8263CE24;
	sub_82816C30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-25772
	ctx.r4.s64 = ctx.r11.s64 + -25772;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82816c30
	ctx.lr = 0x8263CE38;
	sub_82816C30(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r11,7896
	ctx.r31.s64 = ctx.r11.s64 + 7896;
	// bne cr6,0x8263ce54
	if (!ctx.cr6.eq) goto loc_8263CE54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8263CE54:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263ce64
	if (ctx.cr6.eq) goto loc_8263CE64;
	// lwz r31,124(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_8263CE64:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,4420
	ctx.r30.s64 = ctx.r11.s64 + 4420;
	// bl 0x828165a8
	ctx.lr = 0x8263CE70;
	sub_828165A8(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f1,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r3,10548(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10548);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// bl 0x8242f7e8
	ctx.lr = 0x8263CEB0;
	sub_8242F7E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x8263CEB8;
	sub_82333960(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x8263cf60
	goto loc_8263CF60;
loc_8263CEC0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82816c30
	ctx.lr = 0x8263CEC8;
	sub_82816C30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-21936
	ctx.r4.s64 = ctx.r11.s64 + -21936;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82816c30
	ctx.lr = 0x8263CEDC;
	sub_82816C30(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r11,7896
	ctx.r31.s64 = ctx.r11.s64 + 7896;
	// bne cr6,0x8263cef8
	if (!ctx.cr6.eq) goto loc_8263CEF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8263CEF8:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263cf08
	if (ctx.cr6.eq) goto loc_8263CF08;
	// lwz r31,156(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_8263CF08:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,4420
	ctx.r30.s64 = ctx.r11.s64 + 4420;
	// bl 0x828165a8
	ctx.lr = 0x8263CF14;
	sub_828165A8(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f1,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r3,10548(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10548);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// bl 0x8242f7e8
	ctx.lr = 0x8263CF54;
	sub_8242F7E8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x8263CF5C;
	sub_82333960(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_8263CF60:
	// bl 0x82333960
	ctx.lr = 0x8263CF64;
	sub_82333960(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263CF70"))) PPC_WEAK_FUNC(sub_8263CF70);
PPC_FUNC_IMPL(__imp__sub_8263CF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8281bc40
	ctx.lr = 0x8263CF84;
	sub_8281BC40(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f10,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,20396
	ctx.r11.s64 = ctx.r11.s64 + 20396;
	// fsubs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f13,30996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfd f11,17768(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 17768);
	// fadds f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// lfs f12,17840(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17840);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fsubs f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmul f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 * ctx.f11.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8263d004
	if (!ctx.cr6.gt) goto loc_8263D004;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x8263d018
	goto loc_8263D018;
loc_8263D004:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f13,23664(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23664);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8263d018
	if (!ctx.cr6.lt) goto loc_8263D018;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8263D018:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8263d028
	if (ctx.cr6.eq) goto loc_8263D028;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8263d030
	goto loc_8263D030;
loc_8263D028:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,17760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17760);
	ctx.f13.f64 = double(temp.f32);
loc_8263D030:
	// fmuls f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263D048"))) PPC_WEAK_FUNC(sub_8263D048);
PPC_FUNC_IMPL(__imp__sub_8263D048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8263D050;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,2628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263d0f0
	if (ctx.cr6.eq) goto loc_8263D0F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,2036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263D088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x8263D094;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8263D09C;
	sub_82333960(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x8263d0b0
	if (!ctx.cr6.eq) goto loc_8263D0B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8263D0B0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8263d0f0
	if (!ctx.cr6.gt) goto loc_8263D0F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263D0D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263D0EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_8263D0F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263D100"))) PPC_WEAK_FUNC(sub_8263D100);
PPC_FUNC_IMPL(__imp__sub_8263D100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8263D108;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263d130
	if (ctx.cr6.eq) goto loc_8263D130;
	// lwz r29,12(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// b 0x8263d138
	goto loc_8263D138;
loc_8263D130:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r29,r11,7896
	ctx.r29.s64 = ctx.r11.s64 + 7896;
loc_8263D138:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r3,r11,5640
	ctx.r3.s64 = ctx.r11.s64 + 5640;
	// addi r26,r10,4420
	ctx.r26.s64 = ctx.r10.s64 + 4420;
	// bl 0x82816528
	ctx.lr = 0x8263D14C;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r6,512
	ctx.r6.s64 = 512;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// li r7,32
	ctx.r7.s64 = 32;
	// lfs f1,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// bl 0x8242f7e8
	ctx.lr = 0x8263D188;
	sub_8242F7E8(ctx, base);
	// lwz r11,3624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263d1b8
	if (!ctx.cr6.eq) goto loc_8263D1B8;
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,5728
	ctx.r4.s64 = ctx.r11.s64 + 5728;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263D1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,3624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3624, ctx.r30.u32);
loc_8263D1B8:
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r3,r11,5680
	ctx.r3.s64 = ctx.r11.s64 + 5680;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x82816528
	ctx.lr = 0x8263D1F0;
	sub_82816528(ctx, base);
	// lwz r11,1924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r3,2220(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2220);
	// bl 0x82983258
	ctx.lr = 0x8263D208;
	sub_82983258(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5696
	ctx.r3.s64 = ctx.r11.s64 + 5696;
	// bl 0x82816528
	ctx.lr = 0x8263D214;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1924(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r3,2220(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2220);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82983258
	ctx.lr = 0x8263D234;
	sub_82983258(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5712
	ctx.r3.s64 = ctx.r11.s64 + 5712;
	// bl 0x82816528
	ctx.lr = 0x8263D240;
	sub_82816528(ctx, base);
	// lwz r11,1924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,2220(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2220);
	// bl 0x82983258
	ctx.lr = 0x8263D258;
	sub_82983258(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263D268"))) PPC_WEAK_FUNC(sub_8263D268);
PPC_FUNC_IMPL(__imp__sub_8263D268) {
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
	// lwz r11,3624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263d2bc
	if (ctx.cr6.eq) goto loc_8263D2BC;
	// lwz r11,3628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263d2bc
	if (!ctx.cr6.eq) goto loc_8263D2BC;
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,5752
	ctx.r4.s64 = ctx.r11.s64 + 5752;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263D2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3624, ctx.r11.u32);
loc_8263D2BC:
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

__attribute__((alias("__imp__sub_8263D2D0"))) PPC_WEAK_FUNC(sub_8263D2D0);
PPC_FUNC_IMPL(__imp__sub_8263D2D0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x8263d408
	if (!ctx.cr6.gt) goto loc_8263D408;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r3,8452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8452);
	// bl 0x82333a20
	ctx.lr = 0x8263D310;
	sub_82333A20(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8263d408
	if (ctx.cr0.eq) goto loc_8263D408;
	// lwz r11,2112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8263d408
	if (!ctx.cr6.gt) goto loc_8263D408;
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8263d408
	if (!ctx.cr0.eq) goto loc_8263D408;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x8263d048
	ctx.lr = 0x8263D364;
	sub_8263D048(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8263d400
	if (ctx.cr0.eq) goto loc_8263D400;
	// lwz r11,3628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263d384
	if (!ctx.cr6.eq) goto loc_8263D384;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3632, temp.u32);
loc_8263D384:
	// lfs f0,3632(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3632);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,3632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3632, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8263d3e8
	if (!ctx.cr6.gt) goto loc_8263D3E8;
	// lwz r11,3624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3624);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r30,3628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3628, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263d3d0
	if (!ctx.cr6.eq) goto loc_8263D3D0;
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,5728
	ctx.r4.s64 = ctx.r11.s64 + 5728;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263D3CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,3624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3624, ctx.r30.u32);
loc_8263D3D0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8263d100
	ctx.lr = 0x8263D3E4;
	sub_8263D100(ctx, base);
	// b 0x8263d400
	goto loc_8263D400;
loc_8263D3E8:
	// stw r30,3628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3628, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263d268
	ctx.lr = 0x8263D3F4;
	sub_8263D268(ctx, base);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r30,8452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8452, ctx.r30.u32);
	// stw r30,8448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8448, ctx.r30.u32);
loc_8263D400:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x8263D408;
	sub_82333960(ctx, base);
loc_8263D408:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_8263D428"))) PPC_WEAK_FUNC(sub_8263D428);
PPC_FUNC_IMPL(__imp__sub_8263D428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x8263D430;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61710
	ctx.lr = 0x8263D438;
	__savefpr_14(ctx, base);
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// stw r15,1348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1348, ctx.r15.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8262a5d0
	ctx.lr = 0x8263D454;
	sub_8262A5D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8262a5d0
	ctx.lr = 0x8263D460;
	sub_8262A5D0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8281dc68
	ctx.lr = 0x8263D468;
	sub_8281DC68(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r17,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r17.u32);
	// bl 0x8281dc68
	ctx.lr = 0x8263D478;
	sub_8281DC68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82411708
	ctx.lr = 0x8263D484;
	sub_82411708(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82411708
	ctx.lr = 0x8263D490;
	sub_82411708(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r11,1968(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1968);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r14,1
	ctx.r14.s64 = 1;
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// addic. r11,r11,300
	ctx.xer.ca = ctx.r11.u32 > 4294966995;
	ctx.r11.s64 = ctx.r11.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r10,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r10.u32);
	// stw r31,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r31.u32);
	// stw r31,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r31.u32);
	// stw r31,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r31.u32);
	// stw r10,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r10.u32);
	// stw r31,696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 696, ctx.r31.u32);
	// stw r31,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r31.u32);
	// stw r31,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r31.u32);
	// stw r10,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// stw r31,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r31.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stw r24,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r24.u32);
	// stw r31,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r31.u32);
	// stw r19,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r19.u32);
	// stw r10,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r10.u32);
	// stw r31,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r31.u32);
	// stw r31,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r31.u32);
	// stw r31,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r31.u32);
	// stw r31,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r31.u32);
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r31.u32);
	// stw r31,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r31.u32);
	// stw r10,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r10.u32);
	// stw r31,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r31.u32);
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// stw r31,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r31.u32);
	// stw r10,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r10.u32);
	// stw r31,728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 728, ctx.r31.u32);
	// stw r31,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r31.u32);
	// stw r31,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r31.u32);
	// stw r31,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r31.u32);
	// stw r14,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r14.u32);
	// stw r31,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r31.u32);
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// stw r14,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r14.u32);
	// stw r31,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r31.u32);
	// stw r31,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r31.u32);
	// stw r31,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r31.u32);
	// stw r14,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r14.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// stw r31,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r31.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// beq 0x8263d5d4
	if (ctx.cr0.eq) goto loc_8263D5D4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8263d5d4
	if (ctx.cr6.eq) goto loc_8263D5D4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8263d5d8
	goto loc_8263D5D8;
loc_8263D5D4:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8263D5D8:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,18864
	ctx.r3.s64 = ctx.r11.s64 + 18864;
	// bl 0x82816528
	ctx.lr = 0x8263D5E4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e3f50
	ctx.lr = 0x8263D5F0;
	sub_829E3F50(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,-15060
	ctx.r3.s64 = ctx.r11.s64 + -15060;
	// bl 0x823928a0
	ctx.lr = 0x8263D604;
	sub_823928A0(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263d668
	if (ctx.cr6.eq) goto loc_8263D668;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// ble cr6,0x8263d658
	if (!ctx.cr6.gt) goto loc_8263D658;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8263D620:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263D63C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8263d818
	if (!ctx.cr0.eq) goto loc_8263D818;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8263d620
	if (ctx.cr6.lt) goto loc_8263D620;
loc_8263D658:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8263D65C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r14,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// bne cr6,0x8263d66c
	if (!ctx.cr6.eq) goto loc_8263D66C;
loc_8263D668:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
loc_8263D66C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// addi r4,r15,1596
	ctx.r4.s64 = ctx.r15.s64 + 1596;
	// stw r31,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, ctx.r31.u32);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// stw r31,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r31.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r11.u32);
	// stw r31,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r31.u32);
	// mr r16,r31
	ctx.r16.u64 = ctx.r31.u64;
	// stw r31,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8263D6A4;
	sub_82A4EA80(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// addi r10,r11,-27324
	ctx.r10.s64 = ctx.r11.s64 + -27324;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// lfs f1,-27324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27324);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x828191b8
	ctx.lr = 0x8263D6C0;
	sub_828191B8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// lfs f25,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f25.f64 = double(temp.f32);
	// bne cr6,0x8263d6d8
	if (!ctx.cr6.eq) goto loc_8263D6D8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8263dccc
	if (ctx.cr6.eq) goto loc_8263DCCC;
loc_8263D6D8:
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// mr r21,r14
	ctx.r21.u64 = ctx.r14.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8263d9a8
	if (ctx.cr6.eq) goto loc_8263D9A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8263cf70
	ctx.lr = 0x8263D70C;
	sub_8263CF70(ctx, base);
	// stb r14,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82643410
	ctx.lr = 0x8263D720;
	sub_82643410(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82332d50
	ctx.lr = 0x8263D734;
	sub_82332D50(ctx, base);
	// lwz r24,188(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8263d748
	if (ctx.cr0.eq) goto loc_8263D748;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_8263D748:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x824fc978
	ctx.lr = 0x8263D754;
	sub_824FC978(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8281d960
	ctx.lr = 0x8263D75C;
	sub_8281D960(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82333a20
	ctx.lr = 0x8263D764;
	sub_82333A20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8263d828
	if (ctx.cr0.eq) goto loc_8263D828;
	// lwz r11,2380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263d788
	if (!ctx.cr6.eq) goto loc_8263D788;
	// lwz r11,3608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3608);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne cr6,0x8263d78c
	if (!ctx.cr6.eq) goto loc_8263D78C;
loc_8263D788:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8263D78C:
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82643410
	ctx.lr = 0x8263D79C;
	sub_82643410(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,2348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2348);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263D7B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82410060
	ctx.lr = 0x8263D7C4;
	sub_82410060(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824e4f48
	ctx.lr = 0x8263D7D0;
	sub_824E4F48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8263d7f4
	if (ctx.cr0.eq) goto loc_8263D7F4;
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r23,4(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r26,16(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r22,20(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r21,24(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82332db8
	ctx.lr = 0x8263D7F4;
	sub_82332DB8(ctx, base);
loc_8263D7F4:
	// stw r31,464(r20)
	PPC_STORE_U32(ctx.r20.u32 + 464, ctx.r31.u32);
	// addi r7,r1,656
	ctx.r7.s64 = ctx.r1.s64 + 656;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8263d048
	ctx.lr = 0x8263D810;
	sub_8263D048(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// b 0x8263d860
	goto loc_8263D860;
loc_8263D818:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8263d65c
	goto loc_8263D65C;
loc_8263D828:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824a0af8
	ctx.lr = 0x8263D830;
	sub_824A0AF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8263d840
	if (ctx.cr0.eq) goto loc_8263D840;
	// lwz r25,1936(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1936);
	// lwz r23,1940(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1940);
loc_8263D840:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82410060
	ctx.lr = 0x8263D850;
	sub_82410060(ctx, base);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82643410
	ctx.lr = 0x8263D860;
	sub_82643410(ctx, base);
loc_8263D860:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82410060
	ctx.lr = 0x8263D870;
	sub_82410060(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263d894
	if (!ctx.cr6.eq) goto loc_8263D894;
	// stfs f25,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x8263d8c4
	goto loc_8263D8C4;
loc_8263D894:
	// extsw r11,r21
	ctx.r11.s64 = ctx.r21.s32;
	// extsw r10,r22
	ctx.r10.s64 = ctx.r22.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8263D8C4:
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// extsw r10,r23
	ctx.r10.s64 = ctx.r23.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// extsw r11,r25
	ctx.r11.s64 = ctx.r25.s32;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f11,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x8263D930;
	sub_824FC978(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x824fc978
	ctx.lr = 0x8263D93C;
	sub_824FC978(ctx, base);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x824fc978
	ctx.lr = 0x8263D948;
	sub_824FC978(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r8,1968(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1968);
	// bl 0x8281b988
	ctx.lr = 0x8263D958;
	sub_8281B988(ctx, base);
	// stb r14,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,620(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,624(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f30,f11,f13
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// bl 0x82643410
	ctx.lr = 0x8263D984;
	sub_82643410(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fneg f1,f30
	ctx.f1.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// bl 0x82a4e678
	ctx.lr = 0x8263D990;
	sub_82A4E678(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x824fc978
	ctx.lr = 0x8263D9A4;
	sub_824FC978(ctx, base);
	// lwz r19,192(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_8263D9A8:
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// mr r21,r14
	ctx.r21.u64 = ctx.r14.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8263dccc
	if (ctx.cr6.eq) goto loc_8263DCCC;
	// cmplw cr6,r17,r28
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8263dccc
	if (ctx.cr6.eq) goto loc_8263DCCC;
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8263cf70
	ctx.lr = 0x8263D9DC;
	sub_8263CF70(ctx, base);
	// stb r14,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82643410
	ctx.lr = 0x8263D9F0;
	sub_82643410(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82332d50
	ctx.lr = 0x8263DA04;
	sub_82332D50(ctx, base);
	// lwz r24,188(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8263da18
	if (ctx.cr0.eq) goto loc_8263DA18;
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
loc_8263DA18:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x824fc978
	ctx.lr = 0x8263DA24;
	sub_824FC978(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8281d960
	ctx.lr = 0x8263DA2C;
	sub_8281D960(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82333a20
	ctx.lr = 0x8263DA34;
	sub_82333A20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8263dae8
	if (ctx.cr0.eq) goto loc_8263DAE8;
	// lwz r11,2380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263da58
	if (!ctx.cr6.eq) goto loc_8263DA58;
	// lwz r11,3608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3608);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne cr6,0x8263da5c
	if (!ctx.cr6.eq) goto loc_8263DA5C;
loc_8263DA58:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8263DA5C:
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82643410
	ctx.lr = 0x8263DA6C;
	sub_82643410(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,2348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2348);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263DA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82410060
	ctx.lr = 0x8263DA94;
	sub_82410060(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824e4f48
	ctx.lr = 0x8263DAA0;
	sub_824E4F48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8263dac4
	if (ctx.cr0.eq) goto loc_8263DAC4;
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r23,4(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r22,12(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r21,16(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r27,20(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r26,24(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82332db8
	ctx.lr = 0x8263DAC4;
	sub_82332DB8(ctx, base);
loc_8263DAC4:
	// stw r31,464(r18)
	PPC_STORE_U32(ctx.r18.u32 + 464, ctx.r31.u32);
	// addi r7,r1,656
	ctx.r7.s64 = ctx.r1.s64 + 656;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8263d048
	ctx.lr = 0x8263DAE0;
	sub_8263D048(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// b 0x8263db28
	goto loc_8263DB28;
loc_8263DAE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// bl 0x824a0af8
	ctx.lr = 0x8263DAF8;
	sub_824A0AF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8263db08
	if (ctx.cr0.eq) goto loc_8263DB08;
	// lwz r25,1936(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1936);
	// lwz r23,1940(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1940);
loc_8263DB08:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82410060
	ctx.lr = 0x8263DB18;
	sub_82410060(ctx, base);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82643410
	ctx.lr = 0x8263DB28;
	sub_82643410(ctx, base);
loc_8263DB28:
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82410060
	ctx.lr = 0x8263DB38;
	sub_82410060(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263db5c
	if (!ctx.cr6.eq) goto loc_8263DB5C;
	// stfs f25,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x8263db8c
	goto loc_8263DB8C;
loc_8263DB5C:
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8263DB8C:
	// extsw r9,r22
	ctx.r9.s64 = ctx.r22.s32;
	// extsw r11,r21
	ctx.r11.s64 = ctx.r21.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// extsw r10,r25
	ctx.r10.s64 = ctx.r25.s32;
	// extsw r11,r23
	ctx.r11.s64 = ctx.r23.s32;
	// lfd f13,152(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r10,424(r1)
	PPC_STORE_U64(ctx.r1.u32 + 424, ctx.r10.u64);
	// lfd f12,424(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// std r11,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r11.u64);
	// lfd f11,344(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fdivs f30,f12,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x8263DBF8;
	sub_824FC978(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x824fc978
	ctx.lr = 0x8263DC04;
	sub_824FC978(ctx, base);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x824fc978
	ctx.lr = 0x8263DC10;
	sub_824FC978(ctx, base);
	// stfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x824fc978
	ctx.lr = 0x8263DC20;
	sub_824FC978(ctx, base);
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x824fc978
	ctx.lr = 0x8263DC30;
	sub_824FC978(ctx, base);
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x8263DC6C;
	sub_824FC978(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r8,1968(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1968);
	// bl 0x8281b988
	ctx.lr = 0x8263DC7C;
	sub_8281B988(ctx, base);
	// stb r14,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,620(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,624(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f30,f11,f13
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// bl 0x82643410
	ctx.lr = 0x8263DCA8;
	sub_82643410(ctx, base);
	// fneg f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a4e678
	ctx.lr = 0x8263DCB4;
	sub_82A4E678(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x824fc978
	ctx.lr = 0x8263DCC8;
	sub_824FC978(ctx, base);
	// lwz r19,192(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_8263DCCC:
	// lwz r25,112(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r17,-31949
	ctx.r17.s64 = -2093809664;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8263def4
	if (ctx.cr6.eq) goto loc_8263DEF4;
	// li r26,6228
	ctx.r26.s64 = 6228;
loc_8263DCE0:
	// cmpwi cr6,r19,10
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 10, ctx.xer);
	// bgt cr6,0x8263def4
	if (ctx.cr6.gt) goto loc_8263DEF4;
	// lwz r11,1968(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1968);
	// add r3,r26,r11
	ctx.r3.u64 = ctx.r26.u64 + ctx.r11.u64;
	// bl 0x8281dc68
	ctx.lr = 0x8263DCF4;
	sub_8281DC68(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// beq 0x8263dee8
	if (ctx.cr0.eq) goto loc_8263DEE8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824116b0
	ctx.lr = 0x8263DD08;
	sub_824116B0(ctx, base);
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r4,448(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 448);
	// bl 0x829b9720
	ctx.lr = 0x8263DD1C;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8263DD20;
	sub_82333A20(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8263dee8
	if (ctx.cr0.eq) goto loc_8263DEE8;
	// lwz r11,2380(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263dd44
	if (!ctx.cr6.eq) goto loc_8263DD44;
	// lwz r11,3608(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3608);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne cr6,0x8263dd48
	if (!ctx.cr6.eq) goto loc_8263DD48;
loc_8263DD44:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8263DD48:
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82643410
	ctx.lr = 0x8263DD58;
	sub_82643410(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x8263ddb8
	if (!ctx.cr6.gt) goto loc_8263DDB8;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_8263DD6C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263dee8
	if (!ctx.cr6.eq) goto loc_8263DEE8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x824116b0
	ctx.lr = 0x8263DD7C;
	sub_824116B0(ctx, base);
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r4,448(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 448);
	// bl 0x829b9720
	ctx.lr = 0x8263DD90;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8263DD94;
	sub_82333A20(ctx, base);
	// subf r11,r3,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r3.s64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpw cr6,r30,r19
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x8263dd6c
	if (ctx.cr6.lt) goto loc_8263DD6C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263dee8
	if (!ctx.cr6.eq) goto loc_8263DEE8;
loc_8263DDB8:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826426d0
	ctx.lr = 0x8263DDC4;
	sub_826426D0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8263dee0
	if (ctx.cr6.eq) goto loc_8263DEE0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8263cf70
	ctx.lr = 0x8263DDE0;
	sub_8263CF70(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82410060
	ctx.lr = 0x8263DDF4;
	sub_82410060(ctx, base);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x824fc978
	ctx.lr = 0x8263DE00;
	sub_824FC978(ctx, base);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82643410
	ctx.lr = 0x8263DE10;
	sub_82643410(ctx, base);
	// stfs f25,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x824fc978
	ctx.lr = 0x8263DE20;
	sub_824FC978(ctx, base);
	// stfs f25,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x824fc978
	ctx.lr = 0x8263DE30;
	sub_824FC978(ctx, base);
	// stfs f25,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x824fc978
	ctx.lr = 0x8263DE40;
	sub_824FC978(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82410060
	ctx.lr = 0x8263DE54;
	sub_82410060(ctx, base);
	// stb r14,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82643410
	ctx.lr = 0x8263DE64;
	sub_82643410(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r8,1968(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1968);
	// bl 0x8281b988
	ctx.lr = 0x8263DE74;
	sub_8281B988(ctx, base);
	// lfs f10,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,624(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f12,772(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,628(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,788(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,620(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f8,776(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 776);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,792(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 792);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,768(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,784(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f12,f8,f13,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f0,f9,f13,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f1,f7,f10,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f2,f6,f10,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f0.f64));
	// bl 0x82a4e678
	ctx.lr = 0x8263DECC;
	sub_82A4E678(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x824fc978
	ctx.lr = 0x8263DEE0;
	sub_824FC978(ctx, base);
loc_8263DEE0:
	// lwz r24,188(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r19,192(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_8263DEE8:
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// cmplwi cr6,r26,6348
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 6348, ctx.xer);
	// blt cr6,0x8263dce0
	if (ctx.cr6.lt) goto loc_8263DCE0;
loc_8263DEF4:
	// lwz r11,3628(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 3628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263df3c
	if (!ctx.cr6.eq) goto loc_8263DF3C;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x8263df3c
	if (ctx.cr6.eq) goto loc_8263DF3C;
	// lwz r11,672(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x8263df1c
	if (!ctx.cr6.eq) goto loc_8263DF1C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8263DF1C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8263df3c
	if (!ctx.cr6.gt) goto loc_8263DF3C;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8263d100
	ctx.lr = 0x8263DF38;
	sub_8263D100(ctx, base);
	// b 0x8263df44
	goto loc_8263DF44;
loc_8263DF3C:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8263d268
	ctx.lr = 0x8263DF44;
	sub_8263D268(ctx, base);
loc_8263DF44:
	// lwz r25,1924(r15)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1924);
	// cmpwi cr6,r19,10
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 10, ctx.xer);
	// ble cr6,0x8263df54
	if (!ctx.cr6.gt) goto loc_8263DF54;
	// li r19,10
	ctx.r19.s64 = 10;
loc_8263DF54:
	// lwz r11,1968(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1968);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,13024(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// lwz r11,8964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8964);
	// lfs f0,17072(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17072);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,984(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,356(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r11,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r11.u32);
	// beq cr6,0x8263dfa4
	if (ctx.cr6.eq) goto loc_8263DFA4;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,1448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263DF98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1968(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1968);
	// bl 0x825f4198
	ctx.lr = 0x8263DFA0;
	sub_825F4198(ctx, base);
	// stfs f1,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
loc_8263DFA4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r11,r11,-2496
	ctx.r11.s64 = ctx.r11.s64 + -2496;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ble cr6,0x8263eb38
	if (!ctx.cr6.gt) goto loc_8263EB38;
	// addi r11,r25,1800
	ctx.r11.s64 = ctx.r25.s64 + 1800;
	// lwz r10,636(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// subfic r9,r25,-1920
	ctx.xer.ca = ctx.r25.u32 <= 4294965376;
	ctx.r9.s64 = -1920 - ctx.r25.s64;
	// lwz r19,268(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// subf r8,r24,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r24.s64;
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// subf r10,r24,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r24.s64;
	// subfic r9,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r9.s64 = 1 - ctx.r11.s64;
	// lwz r7,700(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// lwz r6,492(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// subf r11,r19,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r19.s64;
	// subf r7,r24,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r24.s64;
	// stw r10,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r10.u32);
	// subf r6,r24,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r24.s64;
	// stw r9,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r9.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r7,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r7.u32);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// stw r8,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r8.u32);
	// stw r6,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r6.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r11,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r11.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r5,604(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f13,30996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,23968(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23968);
	ctx.f12.f64 = double(temp.f32);
	// subf r5,r24,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r24.s64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f11,16668(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16668);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f0,20224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,16852(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16852);
	ctx.f10.f64 = double(temp.f32);
	// stw r5,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
	// lfs f9,20132(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20132);
	ctx.f9.f64 = double(temp.f32);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,572(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f16,20220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20220);
	ctx.f16.f64 = double(temp.f32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f14,18176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18176);
	ctx.f14.f64 = double(temp.f32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// subf r4,r24,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r24.s64;
	// lfs f18,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f18.f64 = double(temp.f32);
	// subf r3,r24,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r24.s64;
	// lfs f15,20216(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20216);
	ctx.f15.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfd f19,20208(r7)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r7.u32 + 20208);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lfd f17,20200(r6)
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r6.u32 + 20200);
	// lfs f26,908(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 908);
	ctx.f26.f64 = double(temp.f32);
	// stw r4,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r4.u32);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// stfs f0,344(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f13,416(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// stfs f12,396(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// addi r21,r25,1920
	ctx.r21.s64 = ctx.r25.s64 + 1920;
	// stfs f11,432(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfs f10,444(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// stfs f9,516(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 516, temp.u32);
	// lis r7,-32225
	ctx.r7.s64 = -2111897600;
	// lis r6,-32225
	ctx.r6.s64 = -2111897600;
	// lis r5,-32225
	ctx.r5.s64 = -2111897600;
	// lis r4,-32225
	ctx.r4.s64 = -2111897600;
	// lis r3,-32225
	ctx.r3.s64 = -2111897600;
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// lis r27,-31946
	ctx.r27.s64 = -2093613056;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// addi r10,r10,-19680
	ctx.r10.s64 = ctx.r10.s64 + -19680;
	// addi r9,r9,-19040
	ctx.r9.s64 = ctx.r9.s64 + -19040;
	// stw r10,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r10.u32);
	// addi r7,r7,5796
	ctx.r7.s64 = ctx.r7.s64 + 5796;
	// stw r9,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r9.u32);
	// addi r10,r6,5776
	ctx.r10.s64 = ctx.r6.s64 + 5776;
	// addi r9,r5,5680
	ctx.r9.s64 = ctx.r5.s64 + 5680;
	// stw r7,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r7.u32);
	// stw r10,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r10.u32);
	// addi r7,r4,5696
	ctx.r7.s64 = ctx.r4.s64 + 5696;
	// stw r9,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r9.u32);
	// addi r10,r3,5712
	ctx.r10.s64 = ctx.r3.s64 + 5712;
	// addi r9,r30,-2348
	ctx.r9.s64 = ctx.r30.s64 + -2348;
	// stw r7,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r7.u32);
	// stw r10,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r10.u32);
	// addi r7,r29,-2280
	ctx.r7.s64 = ctx.r29.s64 + -2280;
	// stw r9,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r9.u32);
	// addi r10,r27,-2728
	ctx.r10.s64 = ctx.r27.s64 + -2728;
	// addi r9,r26,13868
	ctx.r9.s64 = ctx.r26.s64 + 13868;
	// stw r7,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r7.u32);
	// addi r15,r11,-32304
	ctx.r15.s64 = ctx.r11.s64 + -32304;
	// stw r10,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
	// addi r14,r8,5816
	ctx.r14.s64 = ctx.r8.s64 + 5816;
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// addi r18,r28,-2380
	ctx.r18.s64 = ctx.r28.s64 + -2380;
loc_8263E158:
	// lwz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8281b988
	ctx.lr = 0x8263E168;
	sub_8281B988(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r11.u32);
	// stw r10,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r10.u32);
	// stw r9,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8263E188;
	sub_8281D960(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,620(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// lwz r9,624(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// lwz r8,628(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// stw r10,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r10.u32);
	// stw r9,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r9.u32);
	// stw r8,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263E1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f25,436(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f25,100(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr. r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// li r5,-1
	ctx.r5.s64 = -1;
	// beq 0x8263e1cc
	if (ctx.cr0.eq) goto loc_8263E1CC;
	// lwz r5,2184(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2184);
loc_8263E1CC:
	// lwz r11,508(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r10,552(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// lwz r28,1348(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1348);
	// add r24,r11,r19
	ctx.r24.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r4,r24,r10
	ctx.r4.u64 = ctx.r24.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8263cdf8
	ctx.lr = 0x8263E1E8;
	sub_8263CDF8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,436
	ctx.r5.s64 = ctx.r1.s64 + 436;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263E204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f29,852(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,796(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 796);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f28,856(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 856);
	ctx.f28.f64 = double(temp.f32);
	// lfs f11,812(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f13,800(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// lfs f12,804(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// fmuls f12,f28,f12
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f12.f64));
	// lfs f27,848(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	ctx.f27.f64 = double(temp.f32);
	// lfs f10,784(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	ctx.f10.f64 = double(temp.f32);
	// fmr f23,f25
	ctx.f23.f64 = ctx.f25.f64;
	// lfs f9,788(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	ctx.f9.f64 = double(temp.f32);
	// fmr f24,f25
	ctx.f24.f64 = ctx.f25.f64;
	// lfs f8,780(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	ctx.f8.f64 = double(temp.f32);
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// lfs f7,768(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,772(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f28,f11,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f11.f64 + ctx.f0.f64));
	// lfs f11,828(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 828);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,816(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f13,f29,f10,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f10.f64 + ctx.f13.f64));
	// lfs f10,820(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f29,f9,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f9.f64 + ctx.f12.f64));
	// lfs f9,384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f22,f9,f4
	ctx.f22.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fmadds f0,f8,f27,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f27.f64 + ctx.f0.f64));
	// fmadds f13,f27,f7,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f7.f64 + ctx.f13.f64));
	// fmadds f12,f6,f27,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f27.f64 + ctx.f12.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fdivs f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 / ctx.f0.f64));
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f30,f0,f12
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// bl 0x8281bc40
	ctx.lr = 0x8263E2A4;
	sub_8281BC40(ctx, base);
	// lbz r11,984(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 984);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8263e2e4
	if (!ctx.cr0.eq) goto loc_8263E2E4;
	// fsubs f0,f31,f18
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f18.f64));
	// li r20,1
	ctx.r20.s64 = 1;
	// fsubs f13,f30,f18
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f18.f64));
	// fsel f0,f0,f31,f17
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f31.f64 : ctx.f17.f64;
	// fsel f13,f13,f30,f17
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f17.f64;
	// fsub f12,f0,f19
	ctx.f12.f64 = ctx.f0.f64 - ctx.f19.f64;
	// fsub f11,f13,f19
	ctx.f11.f64 = ctx.f13.f64 - ctx.f19.f64;
	// fsel f0,f12,f19,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f19.f64 : ctx.f0.f64;
	// fsel f13,f11,f19,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f19.f64 : ctx.f13.f64;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// fmuls f24,f31,f14
	ctx.f24.f64 = double(float(ctx.f31.f64 * ctx.f14.f64));
	// fmuls f23,f30,f15
	ctx.f23.f64 = double(float(ctx.f30.f64 * ctx.f15.f64));
loc_8263E2E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,516(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,444(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f21,f31,f0
	ctx.f21.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f20,f30,f13
	ctx.f20.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263E308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82411708
	ctx.lr = 0x8263E314;
	sub_82411708(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8263e354
	if (ctx.cr0.eq) goto loc_8263E354;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8263e354
	if (ctx.cr6.eq) goto loc_8263E354;
	// lwz r11,5272(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 5272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263e354
	if (ctx.cr6.eq) goto loc_8263E354;
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8263e354
	if (ctx.cr6.eq) goto loc_8263E354;
	// lwz r10,5288(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 5288);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8263e354
	if (ctx.cr6.gt) goto loc_8263E354;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_8263E354:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8263e4d4
	if (ctx.cr6.eq) goto loc_8263E4D4;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263e4d4
	if (!ctx.cr6.eq) goto loc_8263E4D4;
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263e4d4
	if (ctx.cr6.eq) goto loc_8263E4D4;
	// lwz r11,1968(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263e4d4
	if (ctx.cr6.eq) goto loc_8263E4D4;
	// lwz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// lwz r10,360(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r9,368(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// subf r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r29.s64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r27,4(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// xori r6,r9,1
	ctx.r6.u64 = ctx.r9.u64 ^ 1;
	// stw r7,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r10,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263E3E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f10,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f29,f10
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f10.f64));
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f28,f9
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f9.f64));
	// lfs f8,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f27,f8
	ctx.f12.f64 = double(float(ctx.f27.f64 - ctx.f8.f64));
	// stfs f0,460(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// stfs f13,464(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// stfs f12,456(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f26
	ctx.cr6.compare(ctx.f11.f64, ctx.f26.f64);
	// bne cr6,0x8263e438
	if (!ctx.cr6.eq) goto loc_8263E438;
	// lwz r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r9,464(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// b 0x8263e474
	goto loc_8263E474;
loc_8263E438:
	// lfs f7,432(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// bge cr6,0x8263e454
	if (!ctx.cr6.lt) goto loc_8263E454;
	// stfs f25,120(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f25,124(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f25,128(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// b 0x8263e474
	goto loc_8263E474;
loc_8263E454:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f26,f11
	ctx.f11.f64 = double(float(ctx.f26.f64 / ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_8263E474:
	// lfs f1,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq 0x8263e4c8
	if (ctx.cr0.eq) goto loc_8263E4C8;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// bl 0x8281d010
	ctx.lr = 0x8263E4C4;
	sub_8281D010(ctx, base);
	// b 0x8263e4d0
	goto loc_8263E4D0;
loc_8263E4C8:
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// bl 0x8281d138
	ctx.lr = 0x8263E4D0;
	sub_8281D138(ctx, base);
loc_8263E4D0:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8263E4D4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263E4E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1968(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1968);
	// lfs f29,380(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f28.f64 = double(temp.f32);
	// lfs f0,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// lfs f13,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f22
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f22.f64));
	// lfs f12,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x8263e52c
	if (ctx.cr6.gt) goto loc_8263E52C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8263E52C:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x8263e54c
	if (ctx.cr6.eq) goto loc_8263E54C;
	// addi r24,r21,120
	ctx.r24.s64 = ctx.r21.s64 + 120;
	// b 0x8263e5d4
	goto loc_8263E5D4;
loc_8263E54C:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8263e598
	if (ctx.cr6.eq) goto loc_8263E598;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8263e590
	if (ctx.cr6.eq) goto loc_8263E590;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8263e578
	if (ctx.cr0.eq) goto loc_8263E578;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// addi r30,r21,628
	ctx.r30.s64 = ctx.r21.s64 + 628;
	// b 0x8263e580
	goto loc_8263E580;
loc_8263E578:
	// addi r24,r21,40
	ctx.r24.s64 = ctx.r21.s64 + 40;
	// addi r30,r21,668
	ctx.r30.s64 = ctx.r21.s64 + 668;
loc_8263E580:
	// addi r29,r21,308
	ctx.r29.s64 = ctx.r21.s64 + 308;
	// addi r28,r21,388
	ctx.r28.s64 = ctx.r21.s64 + 388;
	// addi r27,r21,468
	ctx.r27.s64 = ctx.r21.s64 + 468;
	// b 0x8263e5d4
	goto loc_8263E5D4;
loc_8263E590:
	// addi r24,r21,80
	ctx.r24.s64 = ctx.r21.s64 + 80;
	// b 0x8263e5c4
	goto loc_8263E5C4;
loc_8263E598:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8263e5c0
	if (ctx.cr6.eq) goto loc_8263E5C0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263e5c0
	if (!ctx.cr6.eq) goto loc_8263E5C0;
	// addi r24,r21,-80
	ctx.r24.s64 = ctx.r21.s64 + -80;
	// addi r29,r21,308
	ctx.r29.s64 = ctx.r21.s64 + 308;
	// addi r28,r21,388
	ctx.r28.s64 = ctx.r21.s64 + 388;
	// addi r27,r21,468
	ctx.r27.s64 = ctx.r21.s64 + 468;
	// addi r30,r21,548
	ctx.r30.s64 = ctx.r21.s64 + 548;
	// b 0x8263e5d4
	goto loc_8263E5D4;
loc_8263E5C0:
	// addi r24,r21,-40
	ctx.r24.s64 = ctx.r21.s64 + -40;
loc_8263E5C4:
	// addi r30,r21,588
	ctx.r30.s64 = ctx.r21.s64 + 588;
	// addi r27,r21,508
	ctx.r27.s64 = ctx.r21.s64 + 508;
	// addi r28,r21,428
	ctx.r28.s64 = ctx.r21.s64 + 428;
	// addi r29,r21,348
	ctx.r29.s64 = ctx.r21.s64 + 348;
loc_8263E5D4:
	// addi r26,r21,-80
	ctx.r26.s64 = ctx.r21.s64 + -80;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// li r23,6
	ctx.r23.s64 = 6;
loc_8263E5E0:
	// cmplw cr6,r24,r26
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8263e608
	if (ctx.cr6.eq) goto loc_8263E608;
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82614738
	ctx.lr = 0x8263E608;
	sub_82614738(ctx, base);
loc_8263E608:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r26,r26,40
	ctx.r26.s64 = ctx.r26.s64 + 40;
	// bne 0x8263e5e0
	if (!ctx.cr0.eq) goto loc_8263E5E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq cr6,0x8263eb1c
	if (ctx.cr6.eq) goto loc_8263EB1C;
	// lwz r11,440(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// addi r10,r1,752
	ctx.r10.s64 = ctx.r1.s64 + 752;
	// lwz r9,448(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// stfs f25,296(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stfs f25,300(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x8263e66c
	if (ctx.cr6.eq) goto loc_8263E66C;
	// stfs f21,288(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// li r26,4
	ctx.r26.s64 = 4;
	// stfs f20,292(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f23,240(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f24,244(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// b 0x8263e770
	goto loc_8263E770;
loc_8263E66C:
	// lwz r11,512(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfsx f31,r11,r22
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// stfs f31,752(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 752, temp.u32);
	// stfs f30,756(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 756, temp.u32);
	// beq cr6,0x8263e6cc
	if (ctx.cr6.eq) goto loc_8263E6CC;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// stfs f28,288(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f29,292(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stfs f22,296(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// bl 0x824116b0
	ctx.lr = 0x8263E6A4;
	sub_824116B0(ctx, base);
	// lfs f12,396(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,588(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,248(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f12,752(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 752, temp.u32);
	// stfs f0,756(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 756, temp.u32);
	// b 0x8263e750
	goto loc_8263E750;
loc_8263E6CC:
	// lwz r10,364(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// stfs f21,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stfs f20,292(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lfsx f31,r10,r22
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	ctx.f31.f64 = double(temp.f32);
	// li r26,4
	ctx.r26.s64 = 4;
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82644148
	ctx.lr = 0x8263E704;
	sub_82644148(ctx, base);
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82644148
	ctx.lr = 0x8263E724;
	sub_82644148(ctx, base);
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82644148
	ctx.lr = 0x8263E74C;
	sub_82644148(ctx, base);
	// stfs f25,248(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
loc_8263E750:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82614738
	ctx.lr = 0x8263E770;
	sub_82614738(ctx, base);
loc_8263E770:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r5,r10,r22
	ctx.r5.u64 = ctx.r10.u64 + ctx.r22.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82614738
	ctx.lr = 0x8263E798;
	sub_82614738(ctx, base);
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82614738
	ctx.lr = 0x8263E7B8;
	sub_82614738(ctx, base);
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82644148
	ctx.lr = 0x8263E7D8;
	sub_82644148(ctx, base);
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82644148
	ctx.lr = 0x8263E7F8;
	sub_82644148(ctx, base);
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,412(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// addi r6,r1,752
	ctx.r6.s64 = ctx.r1.s64 + 752;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82644148
	ctx.lr = 0x8263E818;
	sub_82644148(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263e830
	if (ctx.cr6.eq) goto loc_8263E830;
	// lwz r11,2204(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2204);
	// b 0x8263e834
	goto loc_8263E834;
loc_8263E830:
	// lwz r11,2180(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2180);
loc_8263E834:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,392(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// lwzx r30,r11,r21
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lfsx f31,r11,r22
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82816528
	ctx.lr = 0x8263E84C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82983258
	ctx.lr = 0x8263E860;
	sub_82983258(ctx, base);
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// lfsx f31,r11,r22
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82816528
	ctx.lr = 0x8263E870;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82983258
	ctx.lr = 0x8263E884;
	sub_82983258(ctx, base);
	// lwz r11,504(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r3,408(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// lfsx f31,r11,r22
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82816528
	ctx.lr = 0x8263E894;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82983258
	ctx.lr = 0x8263E8A8;
	sub_82983258(ctx, base);
	// lfs f0,0(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,584(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// lfs f12,8(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r1,880
	ctx.r29.s64 = ctx.r1.s64 + 880;
	// lfs f11,416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f10.f64 = double(temp.f32);
	// stfs f16,880(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 880, temp.u32);
	// stfs f11,884(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 884, temp.u32);
	// stfs f25,888(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 888, temp.u32);
	// stfs f26,892(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 892, temp.u32);
	// stfs f10,928(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 928, temp.u32);
	// stfs f16,932(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 932, temp.u32);
	// stfs f25,936(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 936, temp.u32);
	// stfs f26,940(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 940, temp.u32);
	// stfs f0,896(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 896, temp.u32);
	// stfs f13,900(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 900, temp.u32);
	// stfs f12,904(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 904, temp.u32);
	// stfs f26,908(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 908, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8263E8F8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829831f8
	ctx.lr = 0x8263E90C;
	sub_829831F8(ctx, base);
	// lwz r28,424(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// addi r29,r1,928
	ctx.r29.s64 = ctx.r1.s64 + 928;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x8263E91C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829831f8
	ctx.lr = 0x8263E930;
	sub_829831F8(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r29,r1,896
	ctx.r29.s64 = ctx.r1.s64 + 896;
	// bl 0x82816528
	ctx.lr = 0x8263E93C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829831f8
	ctx.lr = 0x8263E950;
	sub_829831F8(ctx, base);
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwzx r11,r29,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263e9fc
	if (!ctx.cr6.eq) goto loc_8263E9FC;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8263e9ac
	if (ctx.cr6.eq) goto loc_8263E9AC;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwzx r5,r29,r22
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r22.u32);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// lwz r11,2352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263E984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r1,912
	ctx.r11.s64 = ctx.r1.s64 + 912;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// b 0x8263e9f0
	goto loc_8263E9F0;
loc_8263E9AC:
	// lfs f13,4(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,864
	ctx.r11.s64 = ctx.r1.s64 + 864;
	// lfs f0,8(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,912
	ctx.r10.s64 = ctx.r1.s64 + 912;
	// stfs f13,868(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 868, temp.u32);
	// stfs f0,872(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 872, temp.u32);
	// stfs f26,876(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 876, temp.u32);
	// lfs f0,0(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,864(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 864, temp.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
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
loc_8263E9F0:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r29,r1,912
	ctx.r29.s64 = ctx.r1.s64 + 912;
	// b 0x8263ea88
	goto loc_8263EA88;
loc_8263E9FC:
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwzx r11,r29,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r22.u32);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lwz r11,2352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2352);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263EA1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,912
	ctx.r10.s64 = ctx.r1.s64 + 912;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r27,r1,912
	ctx.r27.s64 = ctx.r1.s64 + 912;
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
	// bl 0x82816528
	ctx.lr = 0x8263EA50;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829831f8
	ctx.lr = 0x8263EA64;
	sub_829831F8(ctx, base);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwzx r5,r29,r22
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r22.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// lwz r11,2352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263EA80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r1,944
	ctx.r29.s64 = ctx.r1.s64 + 944;
loc_8263EA88:
	// bl 0x82816528
	ctx.lr = 0x8263EA8C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829831f8
	ctx.lr = 0x8263EAA0;
	sub_829831F8(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,160(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 160);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8263eb1c
	if (ctx.cr6.eq) goto loc_8263EB1C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,1584(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1584);
	// bl 0x8277db50
	ctx.lr = 0x8263EABC;
	sub_8277DB50(ctx, base);
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x8277be40
	ctx.lr = 0x8263EAD0;
	sub_8277BE40(ctx, base);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8263eb14
	if (ctx.cr6.eq) goto loc_8263EB14;
loc_8263EADC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x828e08d0
	ctx.lr = 0x8263EAE8;
	sub_828E08D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8263eaf4
	if (ctx.cr0.eq) goto loc_8263EAF4;
	// stw r26,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r26.u32);
loc_8263EAF4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8263cd98
	ctx.lr = 0x8263EB04;
	sub_8263CD98(ctx, base);
	// lwz r30,32(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8263eadc
	if (!ctx.cr6.eq) goto loc_8263EADC;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_8263EB14:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r11,160(r21)
	PPC_STORE_U32(ctx.r21.u32 + 160, ctx.r11.u32);
loc_8263EB1C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne 0x8263e158
	if (!ctx.cr0.eq) goto loc_8263E158;
loc_8263EB38:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bge cr6,0x8263eba0
	if (!ctx.cr6.lt) goto loc_8263EBA0;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r8,r25,1800
	ctx.r8.s64 = ctx.r25.s64 + 1800;
	// addi r10,r9,520
	ctx.r10.s64 = ctx.r9.s64 + 520;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r29,r10,r25
	ctx.r29.u64 = ctx.r10.u64 + ctx.r25.u64;
	// subfic r31,r9,10
	ctx.xer.ca = ctx.r9.u32 <= 10;
	ctx.r31.s64 = 10 - ctx.r9.s64;
loc_8263EB68:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82614738
	ctx.lr = 0x8263EB88;
	sub_82614738(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8263eb68
	if (!ctx.cr0.eq) goto loc_8263EB68;
loc_8263EBA0:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82333960
	ctx.lr = 0x8263EBA8;
	sub_82333960(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8239d768
	ctx.lr = 0x8263EBB0;
	sub_8239D768(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82332ca8
	ctx.lr = 0x8263EBC8;
	sub_82332CA8(ctx, base);
	// lwz r3,268(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263ebd8
	if (ctx.cr6.eq) goto loc_8263EBD8;
	// bl 0x82332db8
	ctx.lr = 0x8263EBD8;
	sub_82332DB8(ctx, base);
loc_8263EBD8:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,544(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82332ca8
	ctx.lr = 0x8263EBF0;
	sub_82332CA8(ctx, base);
	// lwz r3,540(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263ec00
	if (ctx.cr6.eq) goto loc_8263EC00;
	// bl 0x82332db8
	ctx.lr = 0x8263EC00;
	sub_82332DB8(ctx, base);
loc_8263EC00:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82332ca8
	ctx.lr = 0x8263EC18;
	sub_82332CA8(ctx, base);
	// lwz r3,332(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263ec28
	if (ctx.cr6.eq) goto loc_8263EC28;
	// bl 0x82332db8
	ctx.lr = 0x8263EC28;
	sub_82332DB8(ctx, base);
loc_8263EC28:
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x8239d768
	ctx.lr = 0x8263EC30;
	sub_8239D768(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x8239d768
	ctx.lr = 0x8263EC38;
	sub_8239D768(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8239d768
	ctx.lr = 0x8263EC40;
	sub_8239D768(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8239d768
	ctx.lr = 0x8263EC48;
	sub_8239D768(ctx, base);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x8239d768
	ctx.lr = 0x8263EC50;
	sub_8239D768(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x8239d768
	ctx.lr = 0x8263EC58;
	sub_8239D768(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8239d768
	ctx.lr = 0x8263EC60;
	sub_8239D768(ctx, base);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a6175c
	ctx.lr = 0x8263EC6C;
	__restfpr_14(ctx, base);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263EC70"))) PPC_WEAK_FUNC(sub_8263EC70);
PPC_FUNC_IMPL(__imp__sub_8263EC70) {
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
	// bl 0x82648a80
	ctx.lr = 0x8263EC88;
	sub_82648A80(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8263eca4
	if (ctx.cr6.eq) goto loc_8263ECA4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8263ecc8
	if (!ctx.cr6.eq) goto loc_8263ECC8;
loc_8263ECA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263ECB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8263ecc8
	if (ctx.cr0.eq) goto loc_8263ECC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263ece0
	ctx.lr = 0x8263ECC8;
	sub_8263ECE0(ctx, base);
loc_8263ECC8:
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

__attribute__((alias("__imp__sub_8263ECE0"))) PPC_WEAK_FUNC(sub_8263ECE0);
PPC_FUNC_IMPL(__imp__sub_8263ECE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9dc
	ctx.lr = 0x8263ECE8;
	__savegprlr_17(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8263ed0c
	if (ctx.cr6.eq) goto loc_8263ED0C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8263f050
	if (!ctx.cr6.eq) goto loc_8263F050;
loc_8263ED0C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82641f08
	ctx.lr = 0x8263ED14;
	sub_82641F08(ctx, base);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// bl 0x82873b58
	ctx.lr = 0x8263ED24;
	sub_82873B58(ctx, base);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8263ed48
	if (ctx.cr6.eq) goto loc_8263ED48;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8263ED40;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8263ED44;
	sub_82409C40(ctx, base);
	// b 0x8263ed4c
	goto loc_8263ED4C;
loc_8263ED48:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8263ED4C:
	// bl 0x82438130
	ctx.lr = 0x8263ED50;
	sub_82438130(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lwz r3,1412(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 1412);
	// bl 0x824090e0
	ctx.lr = 0x8263ED5C;
	sub_824090E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,620(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 620);
	// stw r10,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r10.u32);
	// lwz r10,624(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 624);
	// stw r10,492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 492, ctx.r10.u32);
	// lwz r10,628(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 628);
	// stw r10,496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 496, ctx.r10.u32);
	// stw r25,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r25.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263ED94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x8263edec
	if (ctx.cr0.gt) goto loc_8263EDEC;
	// lwz r10,1968(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1968);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r4,3764(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3764);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8263EDB0;
	sub_829B9720(ctx, base);
	// bl 0x824383d0
	ctx.lr = 0x8263EDB4;
	sub_824383D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8263eddc
	if (ctx.cr0.eq) goto loc_8263EDDC;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r5,80(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r11,r11,27704
	ctx.r11.s64 = ctx.r11.s64 + 27704;
	// lwz r4,80(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 80);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82614448
	ctx.lr = 0x8263EDDC;
	sub_82614448(ctx, base);
loc_8263EDDC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8262d580
	ctx.lr = 0x8263EDEC;
	sub_8262D580(ctx, base);
loc_8263EDEC:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r19,2
	ctx.r19.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8263f038
	if (!ctx.cr6.gt) goto loc_8263F038;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// lwz r20,172(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r22,r11,10528
	ctx.r22.s64 = ctx.r11.s64 + 10528;
loc_8263EE10:
	// lwz r24,0(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8263f02c
	if (ctx.cr6.eq) goto loc_8263F02C;
	// lwz r11,1412(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263f02c
	if (ctx.cr6.eq) goto loc_8263F02C;
	// lwz r11,664(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 664);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,656(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 656);
	// lwz r6,660(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 660);
	// lwz r10,620(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 620);
	// lwz r9,624(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 624);
	// lwz r8,628(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 628);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwz r28,1412(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1412);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263EE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x8263ef58
	if (ctx.cr0.gt) goto loc_8263EF58;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824a0b58
	ctx.lr = 0x8263EE84;
	sub_824A0B58(ctx, base);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r4,3764(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3764);
	// bl 0x829b9720
	ctx.lr = 0x8263EE98;
	sub_829B9720(ctx, base);
	// bl 0x824383d0
	ctx.lr = 0x8263EE9C;
	sub_824383D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8263eed4
	if (ctx.cr0.eq) goto loc_8263EED4;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r5,80(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// addi r11,r11,27704
	ctx.r11.s64 = ctx.r11.s64 + 27704;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8263eec8
	if (ctx.cr6.eq) goto loc_8263EEC8;
	// lwz r4,80(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 80);
	// b 0x8263eecc
	goto loc_8263EECC;
loc_8263EEC8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8263EECC:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82614448
	ctx.lr = 0x8263EED4;
	sub_82614448(ctx, base);
loc_8263EED4:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lwz r29,80(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// addi r11,r11,-10880
	ctx.r11.s64 = ctx.r11.s64 + -10880;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x8263eef8
	if (ctx.cr6.eq) goto loc_8263EEF8;
	// lwz r30,80(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 80);
	// b 0x8263eefc
	goto loc_8263EEFC;
loc_8263EEF8:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8263EEFC:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82833108
	ctx.lr = 0x8263EF04;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8263ef48
	if (ctx.cr0.eq) goto loc_8263EF48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8263EF14;
	sub_82833180(ctx, base);
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// stw r23,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r23.u32);
	// stw r23,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
	// b 0x8263ef4c
	goto loc_8263EF4C;
loc_8263EF48:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8263EF4C:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8263EF58;
	sub_82833A30(ctx, base);
loc_8263EF58:
	// cmplw cr6,r24,r17
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x8263efd0
	if (ctx.cr6.eq) goto loc_8263EFD0;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,1608(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1608);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263EF98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8263efd0
	if (ctx.cr0.eq) goto loc_8263EFD0;
	// lwz r11,620(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// lwz r10,624(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// lwz r9,628(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// lwz r8,656(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 656);
	// lwz r7,660(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 660);
	// lwz r6,664(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
loc_8263EFD0:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82642398
	ctx.lr = 0x8263EFE4;
	sub_82642398(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82825ff8
	ctx.lr = 0x8263F000;
	sub_82825FF8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82825748
	ctx.lr = 0x8263F014;
	sub_82825748(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8263F02C:
	// addic. r18,r18,-1
	ctx.xer.ca = ctx.r18.u32 > 0;
	ctx.r18.s64 = ctx.r18.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// bne 0x8263ee10
	if (!ctx.cr0.eq) goto loc_8263EE10;
loc_8263F038:
	// stw r19,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r19.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// bl 0x8282c688
	ctx.lr = 0x8263F048;
	sub_8282C688(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8239d768
	ctx.lr = 0x8263F050;
	sub_8239D768(ctx, base);
loc_8263F050:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82a4ea2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263F058"))) PPC_WEAK_FUNC(sub_8263F058);
PPC_FUNC_IMPL(__imp__sub_8263F058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8263F060;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f1d0
	if (ctx.cr6.eq) goto loc_8263F1D0;
	// lwz r11,752(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 752);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263f1d0
	if (!ctx.cr6.eq) goto loc_8263F1D0;
	// bl 0x8260eeb8
	ctx.lr = 0x8263F08C;
	sub_8260EEB8(ctx, base);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,12752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12752);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263f1d0
	if (!ctx.cr6.eq) goto loc_8263F1D0;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8263f0bc
	if (!ctx.cr6.eq) goto loc_8263F0BC;
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x8263f180
	if (ctx.cr6.lt) goto loc_8263F180;
loc_8263F0BC:
	// lwz r3,1892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1892);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f180
	if (ctx.cr6.eq) goto loc_8263F180;
	// bl 0x82643c20
	ctx.lr = 0x8263F0CC;
	sub_82643C20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8263f0f8
	if (ctx.cr0.eq) goto loc_8263F0F8;
	// lwz r11,1420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263f0e8
	if (ctx.cr6.eq) goto loc_8263F0E8;
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8263f0ec
	goto loc_8263F0EC;
loc_8263F0E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8263F0EC:
	// bl 0x82644248
	ctx.lr = 0x8263F0F0;
	sub_82644248(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8263f17c
	if (!ctx.cr0.eq) goto loc_8263F17C;
loc_8263F0F8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82437370
	ctx.lr = 0x8263F104;
	sub_82437370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8263f17c
	if (!ctx.cr0.eq) goto loc_8263F17C;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r27,1384(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// bl 0x82408ff8
	ctx.lr = 0x8263F118;
	sub_82408FF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829735e8
	ctx.lr = 0x8263F124;
	sub_829735E8(ctx, base);
	// bl 0x82409140
	ctx.lr = 0x8263F128;
	sub_82409140(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8263f17c
	if (ctx.cr0.eq) goto loc_8263F17C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lfs f1,23968(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23968);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82976340
	ctx.lr = 0x8263F17C;
	sub_82976340(ctx, base);
loc_8263F17C:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_8263F180:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,1968(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82825ff8
	ctx.lr = 0x8263F19C;
	sub_82825FF8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,1968(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// bl 0x82825748
	ctx.lr = 0x8263F1B0;
	sub_82825748(ctx, base);
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F1C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82648a10
	ctx.lr = 0x8263F1D0;
	sub_82648A10(ctx, base);
loc_8263F1D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263F1D8"))) PPC_WEAK_FUNC(sub_8263F1D8);
PPC_FUNC_IMPL(__imp__sub_8263F1D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -104);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,-96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -96);
	// lwz r11,1952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1952);
	// lwz r11,928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 928);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lis r4,2853
	ctx.r4.s64 = 186974208;
	// ori r4,r4,42802
	ctx.r4.u64 = ctx.r4.u64 | 42802;
	// b 0x82642640
	sub_82642640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263F204"))) PPC_WEAK_FUNC(sub_8263F204);
PPC_FUNC_IMPL(__imp__sub_8263F204) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263F208"))) PPC_WEAK_FUNC(sub_8263F208);
PPC_FUNC_IMPL(__imp__sub_8263F208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,2853
	ctx.r11.s64 = 186974208;
	// ori r11,r11,42802
	ctx.r11.u64 = ctx.r11.u64 | 42802;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263F220"))) PPC_WEAK_FUNC(sub_8263F220);
PPC_FUNC_IMPL(__imp__sub_8263F220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,1
	ctx.r30.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r30,1524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1524, ctx.r30.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F26C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r10,1968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// lwz r10,1524(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8263f2a0
	if (ctx.cr6.eq) goto loc_8263F2A0;
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r10,1524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1524, ctx.r10.u32);
loc_8263F2A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263F2B8"))) PPC_WEAK_FUNC(sub_8263F2B8);
PPC_FUNC_IMPL(__imp__sub_8263F2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r30,1524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1524, ctx.r30.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263f32c
	if (ctx.cr6.eq) goto loc_8263F32C;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r10,1524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1524, ctx.r10.u32);
loc_8263F32C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263F348"))) PPC_WEAK_FUNC(sub_8263F348);
PPC_FUNC_IMPL(__imp__sub_8263F348) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8263f3e4
	if (ctx.cr0.eq) goto loc_8263F3E4;
	// lwz r11,1924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263f3e4
	if (ctx.cr6.eq) goto loc_8263F3E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,3608(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3608);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F39C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8263f3b0
	if (ctx.cr0.eq) goto loc_8263F3B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263f4b8
	ctx.lr = 0x8263F3B0;
	sub_8263F4B8(ctx, base);
loc_8263F3B0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lfs f1,988(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 988);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8263c538
	ctx.lr = 0x8263F3C8;
	sub_8263C538(ctx, base);
	// lwz r10,1924(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2760, ctx.r11.u32);
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// bl 0x826caf28
	ctx.lr = 0x8263F3DC;
	sub_826CAF28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3604, ctx.r11.u32);
loc_8263F3E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263F400"))) PPC_WEAK_FUNC(sub_8263F400);
PPC_FUNC_IMPL(__imp__sub_8263F400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8263F408;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8263f4b0
	if (ctx.cr0.eq) goto loc_8263F4B0;
	// lwz r11,1924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263f4b0
	if (ctx.cr6.eq) goto loc_8263F4B0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lfs f1,988(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 988);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8263c538
	ctx.lr = 0x8263F450;
	sub_8263C538(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8263f4a0
	if (ctx.cr6.eq) goto loc_8263F4A0;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,8428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263f4ac
	if (!ctx.cr6.eq) goto loc_8263F4AC;
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lwz r11,2760(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263f4ac
	if (ctx.cr6.eq) goto loc_8263F4AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r29,2760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2760, ctx.r29.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,25584
	ctx.r4.s64 = ctx.r10.s64 + 25584;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F49C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8263f4ac
	goto loc_8263F4AC;
loc_8263F4A0:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// bl 0x826cb2a8
	ctx.lr = 0x8263F4AC;
	sub_826CB2A8(ctx, base);
loc_8263F4AC:
	// stw r29,3604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3604, ctx.r29.u32);
loc_8263F4B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263F4B8"))) PPC_WEAK_FUNC(sub_8263F4B8);
PPC_FUNC_IMPL(__imp__sub_8263F4B8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8263f538
	if (ctx.cr6.eq) goto loc_8263F538;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F4E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8263f5b4
	if (ctx.cr0.eq) goto loc_8263F5B4;
	// lwz r30,1924(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8263f5b4
	if (ctx.cr6.eq) goto loc_8263F5B4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,5836
	ctx.r4.s64 = ctx.r10.s64 + 5836;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,3136(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3136);
	// lwz r4,3132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3132);
	// bl 0x826cd630
	ctx.lr = 0x8263F52C;
	sub_826CD630(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3608, ctx.r11.u32);
	// b 0x8263f5b4
	goto loc_8263F5B4;
loc_8263F538:
	// lwz r11,3608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263f5b4
	if (ctx.cr6.eq) goto loc_8263F5B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8263f5b4
	if (ctx.cr0.eq) goto loc_8263F5B4;
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,5848
	ctx.r4.s64 = ctx.r11.s64 + 5848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// stw r11,3608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3608, ctx.r11.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r9,28408
	ctx.r11.s64 = ctx.r9.s64 + 28408;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f1,-27300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826436e8
	ctx.lr = 0x8263F5B4;
	sub_826436E8(ctx, base);
loc_8263F5B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263F5D0"))) PPC_WEAK_FUNC(sub_8263F5D0);
PPC_FUNC_IMPL(__imp__sub_8263F5D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8263f5e8
	sub_8263F5E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263F5E0"))) PPC_WEAK_FUNC(sub_8263F5E0);
PPC_FUNC_IMPL(__imp__sub_8263F5E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263F5E8"))) PPC_WEAK_FUNC(sub_8263F5E8);
PPC_FUNC_IMPL(__imp__sub_8263F5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8263F5F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8263f688
	if (ctx.cr0.eq) goto loc_8263F688;
	// lwz r31,1924(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8263f688
	if (ctx.cr6.eq) goto loc_8263F688;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r4,r11,-2192
	ctx.r4.s64 = ctx.r11.s64 + -2192;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F63C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,-2496
	ctx.r7.s64 = ctx.r10.s64 + -2496;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,2156
	ctx.r5.s64 = ctx.r31.s64 + 2156;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82614738
	ctx.lr = 0x8263F668;
	sub_82614738(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,5864
	ctx.r4.s64 = ctx.r11.s64 + 5864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8263F688:
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r29,3420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3420, ctx.r29.u32);
	// lwz r10,8420(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8420);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,8420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8420, ctx.r10.u32);
	// lwz r11,3424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263f6b0
	if (ctx.cr6.eq) goto loc_8263F6B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8263fa58
	ctx.lr = 0x8263F6B0;
	sub_8263FA58(ctx, base);
loc_8263F6B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263F6B8"))) PPC_WEAK_FUNC(sub_8263F6B8);
PPC_FUNC_IMPL(__imp__sub_8263F6B8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F6E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8263f740
	if (ctx.cr0.eq) goto loc_8263F740;
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8263f740
	if (ctx.cr6.eq) goto loc_8263F740;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,5876
	ctx.r4.s64 = ctx.r10.s64 + 5876;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r10,r10,-2192
	ctx.r10.s64 = ctx.r10.s64 + -2192;
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
	// lfs f1,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826436e8
	ctx.lr = 0x8263F740;
	sub_826436E8(ctx, base);
loc_8263F740:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r30,3420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3420, ctx.r30.u32);
	// lwz r10,8420(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8420);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,8420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8420, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263F770"))) PPC_WEAK_FUNC(sub_8263F770);
PPC_FUNC_IMPL(__imp__sub_8263F770) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,1924(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r5,r4,2156
	ctx.r5.s64 = ctx.r4.s64 + 2156;
	// addi r7,r11,-2496
	ctx.r7.s64 = ctx.r11.s64 + -2496;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82614738
	ctx.lr = 0x8263F7AC;
	sub_82614738(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263F7C0"))) PPC_WEAK_FUNC(sub_8263F7C0);
PPC_FUNC_IMPL(__imp__sub_8263F7C0) {
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
	// lwz r11,3416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263f810
	if (ctx.cr6.eq) goto loc_8263F810;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F7F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8263f810
	if (ctx.cr0.eq) goto loc_8263F810;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,1924(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,3416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3416, ctx.r11.u32);
	// lwz r4,2788(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2788);
	// bl 0x8263f828
	ctx.lr = 0x8263F810;
	sub_8263F828(ctx, base);
loc_8263F810:
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

__attribute__((alias("__imp__sub_8263F828"))) PPC_WEAK_FUNC(sub_8263F828);
PPC_FUNC_IMPL(__imp__sub_8263F828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263f86c
	if (!ctx.cr6.eq) goto loc_8263F86C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8263f8c8
	if (ctx.cr6.lt) goto loc_8263F8C8;
loc_8263F86C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8263f8c8
	if (ctx.cr0.eq) goto loc_8263F8C8;
	// lwz r11,3416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263f8c8
	if (!ctx.cr6.eq) goto loc_8263F8C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,3416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3416, ctx.r11.u32);
	// bl 0x826c96d8
	ctx.lr = 0x8263F8A8;
	sub_826C96D8(ctx, base);
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,5888
	ctx.r4.s64 = ctx.r11.s64 + 5888;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8263F8C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263F8E0"))) PPC_WEAK_FUNC(sub_8263F8E0);
PPC_FUNC_IMPL(__imp__sub_8263F8E0) {
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
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263f91c
	if (!ctx.cr6.eq) goto loc_8263F91C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8263f96c
	if (ctx.cr6.lt) goto loc_8263F96C;
loc_8263F91C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8263f96c
	if (ctx.cr0.eq) goto loc_8263F96C;
	// lwz r11,3416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263f96c
	if (ctx.cr6.eq) goto loc_8263F96C;
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r11,3416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3416, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,5908
	ctx.r4.s64 = ctx.r10.s64 + 5908;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F96C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8263F96C:
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

__attribute__((alias("__imp__sub_8263F980"))) PPC_WEAK_FUNC(sub_8263F980);
PPC_FUNC_IMPL(__imp__sub_8263F980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8263F988;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263fa48
	if (ctx.cr6.eq) goto loc_8263FA48;
	// lwz r11,8420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8263fa48
	if (!ctx.cr6.eq) goto loc_8263FA48;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F9BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8263fa40
	if (ctx.cr0.eq) goto loc_8263FA40;
	// lwz r31,1924(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8263fa48
	if (ctx.cr6.eq) goto loc_8263FA48;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r4,r11,-1280
	ctx.r4.s64 = ctx.r11.s64 + -1280;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F9EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,-2496
	ctx.r7.s64 = ctx.r10.s64 + -2496;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,2164
	ctx.r5.s64 = ctx.r31.s64 + 2164;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82614738
	ctx.lr = 0x8263FA1C;
	sub_82614738(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,5928
	ctx.r4.s64 = ctx.r11.s64 + 5928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FA3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8263fa44
	goto loc_8263FA44;
loc_8263FA40:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8263FA44:
	// stw r29,3424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3424, ctx.r29.u32);
loc_8263FA48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263FA58"))) PPC_WEAK_FUNC(sub_8263FA58);
PPC_FUNC_IMPL(__imp__sub_8263FA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8263FA60;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FA80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8263fae8
	if (ctx.cr0.eq) goto loc_8263FAE8;
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263faf0
	if (ctx.cr6.eq) goto loc_8263FAF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,5944
	ctx.r4.s64 = ctx.r10.s64 + 5944;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,3424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3424, ctx.r29.u32);
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r10,-1280
	ctx.r10.s64 = ctx.r10.s64 + -1280;
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
	// lfs f1,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x826436e8
	ctx.lr = 0x8263FAE4;
	sub_826436E8(ctx, base);
	// b 0x8263faf0
	goto loc_8263FAF0;
loc_8263FAE8:
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r29,3424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3424, ctx.r29.u32);
loc_8263FAF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263FB00"))) PPC_WEAK_FUNC(sub_8263FB00);
PPC_FUNC_IMPL(__imp__sub_8263FB00) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,1924(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r5,r4,2164
	ctx.r5.s64 = ctx.r4.s64 + 2164;
	// addi r7,r11,-2496
	ctx.r7.s64 = ctx.r11.s64 + -2496;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82614738
	ctx.lr = 0x8263FB3C;
	sub_82614738(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263FB50"))) PPC_WEAK_FUNC(sub_8263FB50);
PPC_FUNC_IMPL(__imp__sub_8263FB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8263FB58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263fbbc
	if (!ctx.cr6.eq) goto loc_8263FBBC;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r31,1924(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r11,-2496
	ctx.r29.s64 = ctx.r11.s64 + -2496;
	// addi r5,r31,2128
	ctx.r5.s64 = ctx.r31.s64 + 2128;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82614738
	ctx.lr = 0x8263FB9C;
	sub_82614738(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r5,r31,2132
	ctx.r5.s64 = ctx.r31.s64 + 2132;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82614738
	ctx.lr = 0x8263FBBC;
	sub_82614738(ctx, base);
loc_8263FBBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263FBC8"))) PPC_WEAK_FUNC(sub_8263FBC8);
PPC_FUNC_IMPL(__imp__sub_8263FBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8263FBD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r25,r31,8
	ctx.r25.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-1080
	ctx.r4.s64 = ctx.r11.s64 + -1080;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FBF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3612);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,1924(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// beq cr6,0x8263fd70
	if (ctx.cr6.eq) goto loc_8263FD70;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,5960
	ctx.r4.s64 = ctx.r10.s64 + 5960;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3460);
	// stw r24,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8263ff1c
	if (!ctx.cr6.gt) goto loc_8263FF1C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,3456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3456);
	// addi r3,r31,3444
	ctx.r3.s64 = ctx.r31.s64 + 3444;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r30,-4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// bl 0x82332ca8
	ctx.lr = 0x8263FC68;
	sub_82332CA8(ctx, base);
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,3492
	ctx.r3.s64 = ctx.r31.s64 + 3492;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82400b48
	ctx.lr = 0x8263FC78;
	sub_82400B48(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,27872
	ctx.r3.s64 = ctx.r11.s64 + 27872;
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x8263FC88;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,2748(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2748);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829832c0
	ctx.lr = 0x8263FC9C;
	sub_829832C0(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r3,r10,5980
	ctx.r3.s64 = ctx.r10.s64 + 5980;
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// bl 0x82816528
	ctx.lr = 0x8263FCCC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,2748(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2748);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x829831f8
	ctx.lr = 0x8263FCE0;
	sub_829831F8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-25544
	ctx.r3.s64 = ctx.r11.s64 + -25544;
	// lwz r26,48(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r23,44(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x82816528
	ctx.lr = 0x8263FCF4;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8263fd0c
	if (!ctx.cr6.eq) goto loc_8263FD0C;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2456
	ctx.r3.s64 = ctx.r11.s64 + 2456;
	// b 0x8263fd1c
	goto loc_8263FD1C;
loc_8263FD0C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8263fd24
	if (ctx.cr6.eq) goto loc_8263FD24;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2504
	ctx.r3.s64 = ctx.r11.s64 + 2504;
loc_8263FD1C:
	// bl 0x82816528
	ctx.lr = 0x8263FD20;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8263FD24:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2548
	ctx.r3.s64 = ctx.r11.s64 + 2548;
	// bl 0x82816528
	ctx.lr = 0x8263FD30;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,2748(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2748);
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829832c0
	ctx.lr = 0x8263FD44;
	sub_829832C0(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,6000
	ctx.r4.s64 = ctx.r11.s64 + 6000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FD64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3616, ctx.r11.u32);
	// b 0x8263fee0
	goto loc_8263FEE0;
loc_8263FD70:
	// lwz r11,3616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263ff1c
	if (ctx.cr6.eq) goto loc_8263FF1C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,6020
	ctx.r4.s64 = ctx.r10.s64 + 6020;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FD9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3460);
	// stw r24,3616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3616, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8263ff1c
	if (!ctx.cr6.gt) goto loc_8263FF1C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,3456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3456);
	// addi r3,r31,3444
	ctx.r3.s64 = ctx.r31.s64 + 3444;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r30,-4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// bl 0x82332ca8
	ctx.lr = 0x8263FDD8;
	sub_82332CA8(ctx, base);
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,3468
	ctx.r3.s64 = ctx.r31.s64 + 3468;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82400b48
	ctx.lr = 0x8263FDE8;
	sub_82400B48(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,27848
	ctx.r3.s64 = ctx.r11.s64 + 27848;
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x8263FDF8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,2744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2744);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829832c0
	ctx.lr = 0x8263FE0C;
	sub_829832C0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-25544
	ctx.r3.s64 = ctx.r11.s64 + -25544;
	// lwz r26,48(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r23,44(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x82816528
	ctx.lr = 0x8263FE20;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8263fe38
	if (!ctx.cr6.eq) goto loc_8263FE38;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2456
	ctx.r3.s64 = ctx.r11.s64 + 2456;
	// b 0x8263fe48
	goto loc_8263FE48;
loc_8263FE38:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8263fe50
	if (ctx.cr6.eq) goto loc_8263FE50;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2504
	ctx.r3.s64 = ctx.r11.s64 + 2504;
loc_8263FE48:
	// bl 0x82816528
	ctx.lr = 0x8263FE4C;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8263FE50:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2548
	ctx.r3.s64 = ctx.r11.s64 + 2548;
	// bl 0x82816528
	ctx.lr = 0x8263FE5C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,2744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2744);
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829832c0
	ctx.lr = 0x8263FE70;
	sub_829832C0(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r3,r10,5980
	ctx.r3.s64 = ctx.r10.s64 + 5980;
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// bl 0x82816528
	ctx.lr = 0x8263FEA4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,2744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2744);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x829831f8
	ctx.lr = 0x8263FEB8;
	sub_829831F8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,6040
	ctx.r4.s64 = ctx.r11.s64 + 6040;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r11.u32);
loc_8263FEE0:
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-1080
	ctx.r11.s64 = ctx.r11.s64 + -1080;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f1,-27300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826436e8
	ctx.lr = 0x8263FF0C;
	sub_826436E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82333960
	ctx.lr = 0x8263FF14;
	sub_82333960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x8263FF1C;
	sub_82332DB8(ctx, base);
loc_8263FF1C:
	// lwz r11,3460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263ff54
	if (!ctx.cr6.eq) goto loc_8263FF54;
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r10,-1200
	ctx.r10.s64 = ctx.r10.s64 + -1200;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f1,19544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826436e8
	ctx.lr = 0x8263FF54;
	sub_826436E8(ctx, base);
loc_8263FF54:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263FF60"))) PPC_WEAK_FUNC(sub_8263FF60);
PPC_FUNC_IMPL(__imp__sub_8263FF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8263FF68;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,3612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8264017c
	if (!ctx.cr6.eq) goto loc_8264017C;
	// lwz r11,3616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8264017c
	if (!ctx.cr6.eq) goto loc_8264017C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8264017c
	if (!ctx.cr6.eq) goto loc_8264017C;
	// lwz r11,3460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8264017c
	if (ctx.cr6.eq) goto loc_8264017C;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// addi r4,r11,-1200
	ctx.r4.s64 = ctx.r11.s64 + -1200;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FFC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3460);
	// lwz r10,3456(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3456);
	// addi r3,r30,3444
	ctx.r3.s64 = ctx.r30.s64 + 3444;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r31,-4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// bl 0x82332ca8
	ctx.lr = 0x8263FFF4;
	sub_82332CA8(ctx, base);
	// addi r26,r31,4
	ctx.r26.s64 = ctx.r31.s64 + 4;
	// addi r3,r30,3468
	ctx.r3.s64 = ctx.r30.s64 + 3468;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82400b48
	ctx.lr = 0x82640004;
	sub_82400B48(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r29,1924(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	// beq cr6,0x826400e0
	if (ctx.cr6.eq) goto loc_826400E0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,27848
	ctx.r3.s64 = ctx.r11.s64 + 27848;
	// bl 0x82816528
	ctx.lr = 0x82640020;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,2744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2744);
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829832c0
	ctx.lr = 0x82640034;
	sub_829832C0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-25544
	ctx.r3.s64 = ctx.r11.s64 + -25544;
	// lwz r25,48(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r24,44(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82816528
	ctx.lr = 0x82640048;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82640060
	if (!ctx.cr6.eq) goto loc_82640060;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2456
	ctx.r3.s64 = ctx.r11.s64 + 2456;
	// b 0x82640070
	goto loc_82640070;
loc_82640060:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82640078
	if (ctx.cr6.eq) goto loc_82640078;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2504
	ctx.r3.s64 = ctx.r11.s64 + 2504;
loc_82640070:
	// bl 0x82816528
	ctx.lr = 0x82640074;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82640078:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2548
	ctx.r3.s64 = ctx.r11.s64 + 2548;
	// bl 0x82816528
	ctx.lr = 0x82640084;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,2744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2744);
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829832c0
	ctx.lr = 0x82640098;
	sub_829832C0(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r10,5980
	ctx.r3.s64 = ctx.r10.s64 + 5980;
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// bl 0x82816528
	ctx.lr = 0x826400CC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,2744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2744);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x829831f8
	ctx.lr = 0x826400E0;
	sub_829831F8(ctx, base);
loc_826400E0:
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,-2496
	ctx.r7.s64 = ctx.r10.s64 + -2496;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r5,r29,2128
	ctx.r5.s64 = ctx.r29.s64 + 2128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82614738
	ctx.lr = 0x82640110;
	sub_82614738(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,6040
	ctx.r4.s64 = ctx.r11.s64 + 6040;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,3612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3612, ctx.r27.u32);
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-1080
	ctx.r10.s64 = ctx.r10.s64 + -1080;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x826436e8
	ctx.lr = 0x82640164;
	sub_826436E8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264017c
	if (ctx.cr6.eq) goto loc_8264017C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82333960
	ctx.lr = 0x82640174;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8264017C;
	sub_82332DB8(ctx, base);
loc_8264017C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82640188"))) PPC_WEAK_FUNC(sub_82640188);
PPC_FUNC_IMPL(__imp__sub_82640188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82640190;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,1924(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826402bc
	if (ctx.cr6.eq) goto loc_826402BC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-1080
	ctx.r4.s64 = ctx.r11.s64 + -1080;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826401C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,5960
	ctx.r4.s64 = ctx.r11.s64 + 5960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826401E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r4,r11,6020
	ctx.r4.s64 = ctx.r11.s64 + 6020;
	// stw r28,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r28.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3460);
	// stw r28,3616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3616, ctx.r28.u32);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82640248
	if (ctx.cr0.lt) goto loc_82640248;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8264021C:
	// lwz r11,3456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3456);
	// lwzx r26,r11,r27
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8264023c
	if (ctx.cr6.eq) goto loc_8264023C;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x82333960
	ctx.lr = 0x82640234;
	sub_82333960(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332db8
	ctx.lr = 0x8264023C;
	sub_82332DB8(ctx, base);
loc_8264023C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
	// bge 0x8264021c
	if (!ctx.cr0.lt) goto loc_8264021C;
loc_82640248:
	// lwz r11,3464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3464);
	// addi r3,r31,3444
	ctx.r3.s64 = ctx.r31.s64 + 3444;
	// stw r28,3460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3460, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8264026c
	if (ctx.cr6.eq) goto loc_8264026C;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x8264026C;
	sub_82332C38(ctx, base);
loc_8264026C:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r11,-2496
	ctx.r29.s64 = ctx.r11.s64 + -2496;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r30,2128
	ctx.r5.s64 = ctx.r30.s64 + 2128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82614738
	ctx.lr = 0x8264029C;
	sub_82614738(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r30,2132
	ctx.r5.s64 = ctx.r30.s64 + 2132;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82614738
	ctx.lr = 0x826402BC;
	sub_82614738(ctx, base);
loc_826402BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826402C8"))) PPC_WEAK_FUNC(sub_826402C8);
PPC_FUNC_IMPL(__imp__sub_826402C8) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// li r5,20
	ctx.r5.s64 = 20;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// addi r3,r31,3516
	ctx.r3.s64 = ctx.r31.s64 + 3516;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x826402FC;
	sub_82332D50(ctx, base);
	// lwz r10,3528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3528);
	// mulli r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 * 20;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264032c
	if (ctx.cr0.eq) goto loc_8264032C;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82640318:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82640318
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82640318;
loc_8264032C:
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

__attribute__((alias("__imp__sub_82640340"))) PPC_WEAK_FUNC(sub_82640340);
PPC_FUNC_IMPL(__imp__sub_82640340) {
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
	// lwz r11,3532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826403b8
	if (!ctx.cr6.gt) goto loc_826403B8;
	// lwz r11,3528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3528);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82640370:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82640370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82640370;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826cec60
	ctx.lr = 0x826403A0;
	sub_826CEC60(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3516
	ctx.r3.s64 = ctx.r31.s64 + 3516;
	// bl 0x82332ca8
	ctx.lr = 0x826403B8;
	sub_82332CA8(ctx, base);
loc_826403B8:
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

__attribute__((alias("__imp__sub_826403D0"))) PPC_WEAK_FUNC(sub_826403D0);
PPC_FUNC_IMPL(__imp__sub_826403D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826403D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826403F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82640498
	if (ctx.cr0.eq) goto loc_82640498;
	// lwz r11,3644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3644);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82640498
	if (ctx.cr6.eq) goto loc_82640498;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-25772
	ctx.r4.s64 = ctx.r11.s64 + -25772;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82816c30
	ctx.lr = 0x8264041C;
	sub_82816C30(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82640430
	if (ctx.cr6.eq) goto loc_82640430;
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x82640438
	goto loc_82640438;
loc_82640430:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
loc_82640438:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r3,r11,6060
	ctx.r3.s64 = ctx.r11.s64 + 6060;
	// addi r28,r10,-29560
	ctx.r28.s64 = ctx.r10.s64 + -29560;
	// bl 0x82816528
	ctx.lr = 0x8264044C;
	sub_82816528(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f1,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// lwz r3,10548(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10548);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// bl 0x8242f7e8
	ctx.lr = 0x8264048C;
	sub_8242F7E8(ctx, base);
	// stw r29,3644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3644, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82640498;
	sub_82333960(ctx, base);
loc_82640498:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826404A0"))) PPC_WEAK_FUNC(sub_826404A0);
PPC_FUNC_IMPL(__imp__sub_826404A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x826404A8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826404C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82640608
	if (ctx.cr0.eq) goto loc_82640608;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-25772
	ctx.r4.s64 = ctx.r11.s64 + -25772;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82816c30
	ctx.lr = 0x826404E4;
	sub_82816C30(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r25,r11,7896
	ctx.r25.s64 = ctx.r11.s64 + 7896;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r28,172(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82640500
	if (!ctx.cr6.eq) goto loc_82640500;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82640500:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r3,r11,6100
	ctx.r3.s64 = ctx.r11.s64 + 6100;
	// addi r24,r10,-29560
	ctx.r24.s64 = ctx.r10.s64 + -29560;
	// bl 0x82816528
	ctx.lr = 0x82640514;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,10548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// li r6,32
	ctx.r6.s64 = 32;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bl 0x8242f7e8
	ctx.lr = 0x8264055C;
	sub_8242F7E8(ctx, base);
	// lwz r3,1968(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1968);
	// li r4,93
	ctx.r4.s64 = 93;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,-21684
	ctx.r4.s64 = ctx.r10.s64 + -21684;
	// lfs f0,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82816c30
	ctx.lr = 0x8264059C;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,140(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826405b0
	if (!ctx.cr6.eq) goto loc_826405B0;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_826405B0:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r3,r11,5080
	ctx.r3.s64 = ctx.r11.s64 + 5080;
	// addi r26,r10,31328
	ctx.r26.s64 = ctx.r10.s64 + 31328;
	// bl 0x82816528
	ctx.lr = 0x826405C4;
	sub_82816528(ctx, base);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// bl 0x8242f7e8
	ctx.lr = 0x826405F8;
	sub_8242F7E8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82640600;
	sub_82333960(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x82640608;
	sub_82333960(ctx, base);
loc_82640608:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82640618"))) PPC_WEAK_FUNC(sub_82640618);
PPC_FUNC_IMPL(__imp__sub_82640618) {
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
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264064c
	if (ctx.cr0.eq) goto loc_8264064C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8264064c
	if (ctx.cr6.eq) goto loc_8264064C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82640650
	goto loc_82640650;
loc_8264064C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82640650:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640664
	if (ctx.cr6.eq) goto loc_82640664;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826437e0
	ctx.lr = 0x82640660;
	sub_826437E0(ctx, base);
	// b 0x82640668
	goto loc_82640668;
loc_82640664:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82640668:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826406f4
	if (ctx.cr6.eq) goto loc_826406F4;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826406f4
	if (ctx.cr6.eq) goto loc_826406F4;
	// lwz r10,1492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826406f4
	if (ctx.cr6.eq) goto loc_826406F4;
	// lwz r9,8504(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8504);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826406f4
	if (!ctx.cr6.eq) goto loc_826406F4;
	// lbz r10,192(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 192);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bge cr6,0x826406f4
	if (!ctx.cr6.lt) goto loc_826406F4;
	// lwz r10,8492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8492);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826406b4
	if (ctx.cr6.eq) goto loc_826406B4;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x826406f4
	if (!ctx.cr6.eq) goto loc_826406F4;
loc_826406B4:
	// lwz r8,656(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r7,3432(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3432);
	// lwz r10,660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lwz r9,664(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x826406f4
	if (!ctx.cr6.eq) goto loc_826406F4;
	// lwz r8,3436(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3436);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x826406f4
	if (!ctx.cr6.eq) goto loc_826406F4;
	// lwz r10,3440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3440);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826406f4
	if (!ctx.cr6.eq) goto loc_826406F4;
	// lwz r11,4104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4104);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x826406f8
	goto loc_826406F8;
loc_826406F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826406F8:
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

__attribute__((alias("__imp__sub_82640710"))) PPC_WEAK_FUNC(sub_82640710);
PPC_FUNC_IMPL(__imp__sub_82640710) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1968(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264074c
	if (ctx.cr6.eq) goto loc_8264074C;
	// lwz r11,1492(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8264074c
	if (ctx.cr6.eq) goto loc_8264074C;
	// lbz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 192);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82640744
	if (!ctx.cr0.eq) goto loc_82640744;
	// lwz r11,4104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4104);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82640744:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8264074C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82640758"))) PPC_WEAK_FUNC(sub_82640758);
PPC_FUNC_IMPL(__imp__sub_82640758) {
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
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r3,1968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r11,2548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,8496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8496, ctx.r10.u32);
	// beq cr6,0x82640794
	if (ctx.cr6.eq) goto loc_82640794;
	// bl 0x825e3cf0
	ctx.lr = 0x82640794;
	sub_825E3CF0(ctx, base);
loc_82640794:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82642640
	ctx.lr = 0x826407A8;
	sub_82642640(ctx, base);
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r10,1968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// stw r11,8520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8520, ctx.r11.u32);
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r10,1968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// stw r11,3092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3092, ctx.r11.u32);
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r10,1968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// stw r11,11532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11532, ctx.r11.u32);
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r10,1968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// stw r11,11528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11528, ctx.r11.u32);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r10,1968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// stw r11,12708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12708, ctx.r11.u32);
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r10,1968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// stw r11,12704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12704, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82640840"))) PPC_WEAK_FUNC(sub_82640840);
PPC_FUNC_IMPL(__imp__sub_82640840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82640860"))) PPC_WEAK_FUNC(sub_82640860);
PPC_FUNC_IMPL(__imp__sub_82640860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d8
	ctx.lr = 0x82640868;
	__savegprlr_16(ctx, base);
	// stfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,-104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -96);
	// lwz r28,1968(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r11,924(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 924);
	// stw r29,3832(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3832, ctx.r29.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x826408b8
	if (!ctx.cr6.eq) goto loc_826408B8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826408B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826408c4
	goto loc_826408C4;
loc_826408B8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,3092(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3092, ctx.r29.u32);
	// stw r11,8520(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8520, ctx.r11.u32);
loc_826408C4:
	// lwz r11,3168(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3168);
	// li r25,1
	ctx.r25.s64 = 1;
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r9,r9,-22360
	ctx.r9.s64 = ctx.r9.s64 + -22360;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,3160(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3160, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// stw r25,-100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -100, ctx.r25.u32);
	// lfs f1,23968(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23968);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r9.u32);
	// ld r6,320(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -96);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r29,8436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8436, ctx.r29.u32);
	// lwz r11,-104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -96);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82611658
	ctx.lr = 0x8264092C;
	sub_82611658(ctx, base);
	// lwz r11,-104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r27,9760(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9760);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r30,-96(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -96);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82640af4
	if (ctx.cr6.eq) goto loc_82640AF4;
	// lwz r11,8504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8504);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82640b8c
	if (ctx.cr6.eq) goto loc_82640B8C;
	// stw r29,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r29.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r29,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r29.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r29,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r29.u32);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// stw r29,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r29.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r11,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r11.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r29,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r29.u32);
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,324(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f31,328(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f31,336(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f31,340(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f31,344(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// lwz r24,1968(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lfs f30,9756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9756);
	ctx.f30.f64 = double(temp.f32);
	// lwz r10,664(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 664);
	// lwz r11,660(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 660);
	// lwz r9,656(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 656);
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// stw r10,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826409D0;
	sub_82817BB8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r4,2536(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2536);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r16,8(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r20,100
	ctx.r20.s64 = 100;
	// ld r9,320(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// li r19,-1
	ctx.r19.s64 = -1;
	// lwz r23,328(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// addi r17,r1,416
	ctx.r17.s64 = ctx.r1.s64 + 416;
	// lfs f4,18308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18308);
	ctx.f4.f64 = double(temp.f32);
	// ld r11,620(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 620);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f2,20252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20252);
	ctx.f2.f64 = double(temp.f32);
	// ld r22,336(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lwz r21,344(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r24,628(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 628);
	// lwz r18,2000(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2000);
	// ld r5,1976(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1976);
	// ld r6,1984(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1984);
	// ld r7,1992(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1992);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwz r30,1012(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1012);
	// rldicr r8,r18,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r18.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r9,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r9.u64);
	// stw r23,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r23.u32);
	// stb r29,311(r1)
	PPC_STORE_U8(ctx.r1.u32 + 311, ctx.r29.u8);
	// stw r20,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r20.u32);
	// stw r19,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r19.u32);
	// std r22,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r22.u64);
	// stw r21,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r21.u32);
	// stw r29,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r29.u32);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stb r25,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r25.u8);
	// stb r25,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r25.u8);
	// stw r29,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r29.u32);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r25,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r25.u32);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r17,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// stb r29,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r29.u8);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82640AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8281d960
	ctx.lr = 0x82640AA8;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82640ae4
	if (ctx.cr0.eq) goto loc_82640AE4;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8281d960
	ctx.lr = 0x82640AB8;
	sub_8281D960(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x82640ABC;
	sub_82333A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82640ae0
	if (ctx.cr0.eq) goto loc_82640AE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82640ae4
	if (!ctx.cr0.gt) goto loc_82640AE4;
loc_82640AE0:
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_82640AE4:
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82400f38
	ctx.lr = 0x82640AEC;
	sub_82400F38(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82640af8
	goto loc_82640AF8;
loc_82640AF4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82640AF8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82640b8c
	if (ctx.cr6.eq) goto loc_82640B8C;
	// lwz r11,1508(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82640b70
	if (ctx.cr6.eq) goto loc_82640B70;
	// lwz r10,-104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -96);
	// lwz r11,1952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82640b70
	if (ctx.cr6.eq) goto loc_82640B70;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f13,1044(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-32720(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32720);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82640b48
	if (!ctx.cr6.lt) goto loc_82640B48;
	// lfs f13,1040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82640b70
	if (ctx.cr6.lt) goto loc_82640B70;
loc_82640B48:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,-96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -96);
	// bl 0x825f59f8
	ctx.lr = 0x82640B5C;
	sub_825F59F8(ctx, base);
loc_82640B5C:
	// addi r11,r3,638
	ctx.r11.s64 = ctx.r3.s64 + 638;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x82640ba4
	goto loc_82640BA4;
loc_82640B70:
	// lwz r11,-104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,-96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -96);
	// bl 0x825f5940
	ctx.lr = 0x82640B88;
	sub_825F5940(ctx, base);
	// b 0x82640b5c
	goto loc_82640B5C;
loc_82640B8C:
	// lwz r11,-104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// lis r4,2853
	ctx.r4.s64 = 186974208;
	// ori r4,r4,42802
	ctx.r4.u64 = ctx.r4.u64 | 42802;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -96);
loc_82640BA4:
	// bl 0x82642640
	ctx.lr = 0x82640BA8;
	sub_82642640(ctx, base);
	// lwz r11,-104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82640c50
	if (!ctx.cr0.eq) goto loc_82640C50;
	// lwz r11,-104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -96);
	// addic. r11,r11,300
	ctx.xer.ca = ctx.r11.u32 > 4294966995;
	ctx.r11.s64 = ctx.r11.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82640c00
	if (ctx.cr0.eq) goto loc_82640C00;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82640c00
	if (ctx.cr6.eq) goto loc_82640C00;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82640c04
	goto loc_82640C04;
loc_82640C00:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82640C04:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82640c50
	if (ctx.cr6.eq) goto loc_82640C50;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82640c2c
	if (ctx.cr0.eq) goto loc_82640C2C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82640c2c
	if (ctx.cr6.eq) goto loc_82640C2C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82640c30
	goto loc_82640C30;
loc_82640C2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82640C30:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r4,2853
	ctx.r4.s64 = 186974208;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,42802
	ctx.r4.u64 = ctx.r4.u64 | 42802;
	// lwz r5,-6056(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x829e3fd0
	ctx.lr = 0x82640C50;
	sub_829E3FD0(ctx, base);
loc_82640C50:
	// lwz r11,960(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82640c9c
	if (!ctx.cr6.eq) goto loc_82640C9C;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r29,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r29.u32);
	// stw r29,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r29.u32);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,-9580
	ctx.r11.s64 = ctx.r11.s64 + -9580;
	// stw r25,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r25.u32);
	// addi r3,r10,31460
	ctx.r3.s64 = ctx.r10.s64 + 31460;
	// stw r11,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r11.u32);
	// addi r31,r1,400
	ctx.r31.s64 = ctx.r1.s64 + 400;
	// bl 0x82816528
	ctx.lr = 0x82640C84;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282c950
	ctx.lr = 0x82640C9C;
	sub_8282C950(ctx, base);
loc_82640C9C:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82a4ea28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82640CB0"))) PPC_WEAK_FUNC(sub_82640CB0);
PPC_FUNC_IMPL(__imp__sub_82640CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82640CB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -104);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -96);
	// lwz r31,1968(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82640d3c
	if (ctx.cr6.eq) goto loc_82640D3C;
	// lwz r11,3092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3092);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82640d3c
	if (!ctx.cr6.eq) goto loc_82640D3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r10,27720
	ctx.r10.s64 = ctx.r10.s64 + 27720;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -104);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// rldicr r7,r29,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-96
	ctx.r3.s64 = ctx.r11.s64 + -96;
	// bl 0x826442a8
	ctx.lr = 0x82640D38;
	sub_826442A8(ctx, base);
	// stw r28,3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3092, ctx.r28.u32);
loc_82640D3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82640D48"))) PPC_WEAK_FUNC(sub_82640D48);
PPC_FUNC_IMPL(__imp__sub_82640D48) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,1968(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82640d88
	if (ctx.cr6.eq) goto loc_82640D88;
	// stw r10,8520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8520, ctx.r10.u32);
	// stw r9,10664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10664, ctx.r9.u32);
loc_82640D88:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82640dd4
	if (!ctx.cr6.eq) goto loc_82640DD4;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,-9580
	ctx.r11.s64 = ctx.r11.s64 + -9580;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r9,31460
	ctx.r3.s64 = ctx.r9.s64 + 31460;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x82640DBC;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282c950
	ctx.lr = 0x82640DD4;
	sub_8282C950(ctx, base);
loc_82640DD4:
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

__attribute__((alias("__imp__sub_82640DF0"))) PPC_WEAK_FUNC(sub_82640DF0);
PPC_FUNC_IMPL(__imp__sub_82640DF0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,-104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -104);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -96);
	// lwz r3,1968(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640e50
	if (ctx.cr6.eq) goto loc_82640E50;
	// lwz r11,924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// stw r10,3160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3160, ctx.r10.u32);
	// bne cr6,0x82640e70
	if (!ctx.cr6.eq) goto loc_82640E70;
	// bl 0x829c2520
	ctx.lr = 0x82640E34;
	sub_829C2520(ctx, base);
	// lwz r3,572(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640e70
	if (ctx.cr6.eq) goto loc_82640E70;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829dff40
	ctx.lr = 0x82640E4C;
	sub_829DFF40(ctx, base);
	// b 0x82640e70
	goto loc_82640E70;
loc_82640E50:
	// lwz r10,-104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -104);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-104
	ctx.r3.s64 = ctx.r11.s64 + -104;
	// lwz r11,-104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -104);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82640E70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82640E80"))) PPC_WEAK_FUNC(sub_82640E80);
PPC_FUNC_IMPL(__imp__sub_82640E80) {
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
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lwz r11,-104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -96);
	// lwz r11,1968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// lwz r10,10664(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10664);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82640ef4
	if (ctx.cr6.eq) goto loc_82640EF4;
	// lwz r11,8520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8520);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82640ef4
	if (!ctx.cr6.eq) goto loc_82640EF4;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82620488
	ctx.lr = 0x82640ED4;
	sub_82620488(ctx, base);
	// lwz r11,-104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-104
	ctx.r3.s64 = ctx.r11.s64 + -104;
	// lwz r11,-104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -104);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82640EF4:
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

__attribute__((alias("__imp__sub_82640F08"))) PPC_WEAK_FUNC(sub_82640F08);
PPC_FUNC_IMPL(__imp__sub_82640F08) {
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
	// lwz r11,1968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82640f94
	if (ctx.cr6.eq) goto loc_82640F94;
	// addic. r11,r3,300
	ctx.xer.ca = ctx.r3.u32 > 4294966995;
	ctx.r11.s64 = ctx.r3.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82640f44
	if (ctx.cr0.eq) goto loc_82640F44;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82640f44
	if (ctx.cr6.eq) goto loc_82640F44;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82640f48
	goto loc_82640F48;
loc_82640F44:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82640F48:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82640f94
	if (ctx.cr0.eq) goto loc_82640F94;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643968
	ctx.lr = 0x82640F70;
	sub_82643968(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82640f94
	if (!ctx.cr0.eq) goto loc_82640F94;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-6056(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82644b00
	ctx.lr = 0x82640F94;
	sub_82644B00(ctx, base);
loc_82640F94:
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

__attribute__((alias("__imp__sub_82640FA8"))) PPC_WEAK_FUNC(sub_82640FA8);
PPC_FUNC_IMPL(__imp__sub_82640FA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// li r10,11
	ctx.r10.s64 = 11;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,1968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r11,2548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,8496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8496, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x825e3cf0
	sub_825E3CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82640FD4"))) PPC_WEAK_FUNC(sub_82640FD4);
PPC_FUNC_IMPL(__imp__sub_82640FD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82640FD8"))) PPC_WEAK_FUNC(sub_82640FD8);
PPC_FUNC_IMPL(__imp__sub_82640FD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -100);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r11,3640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3640);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82640FF8"))) PPC_WEAK_FUNC(sub_82640FF8);
PPC_FUNC_IMPL(__imp__sub_82640FF8) {
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
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r10,r10,9752
	ctx.r10.s64 = ctx.r10.s64 + 9752;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82641088
	ctx.lr = 0x82641070;
	sub_82641088(ctx, base);
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

__attribute__((alias("__imp__sub_82641088"))) PPC_WEAK_FUNC(sub_82641088);
PPC_FUNC_IMPL(__imp__sub_82641088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r9,392
	ctx.r9.s64 = 392;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r9.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// stw r8,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r8.u32);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r9,-28(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// lwz r7,-24(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r4,-8(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// stw r9,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
	// stw r7,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r7.u32);
	// stw r6,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r6.u32);
	// stw r5,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r5.u32);
	// stw r4,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641148"))) PPC_WEAK_FUNC(sub_82641148);
PPC_FUNC_IMPL(__imp__sub_82641148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82641150;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x82333900
	ctx.lr = 0x8264116C;
	sub_82333900(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82641194
	if (ctx.cr0.eq) goto loc_82641194;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r11,10608
	ctx.r11.s64 = ctx.r11.s64 + 10608;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82641198
	goto loc_82641198;
loc_82641194:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
loc_82641198:
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410060
	ctx.lr = 0x826411A8;
	sub_82410060(ctx, base);
	// addi r28,r31,36
	ctx.r28.s64 = ctx.r31.s64 + 36;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x826411BC;
	sub_828D0CB0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// bl 0x82333900
	ctx.lr = 0x826411C8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826411ec
	if (ctx.cr0.eq) goto loc_826411EC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r11,10620
	ctx.r11.s64 = ctx.r11.s64 + 10620;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x826411f0
	goto loc_826411F0;
loc_826411EC:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
loc_826411F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410060
	ctx.lr = 0x826411FC;
	sub_82410060(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x8264120C;
	sub_828D0CB0(ctx, base);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826434f8
	ctx.lr = 0x82641218;
	sub_826434F8(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645ff0
	ctx.lr = 0x82641228;
	sub_82645FF0(ctx, base);
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x82641234;
	sub_82645F38(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x82641240;
	sub_82645F38(ctx, base);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x8264124C;
	sub_82645F38(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645ff0
	ctx.lr = 0x8264125C;
	sub_82645FF0(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643608
	ctx.lr = 0x82641268;
	sub_82643608(ctx, base);
	// addi r4,r31,124
	ctx.r4.s64 = ctx.r31.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x82641274;
	sub_82645F38(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x82641280;
	sub_82645F38(ctx, base);
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x8264128C;
	sub_82645F38(ctx, base);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x82641298;
	sub_82645F38(ctx, base);
	// addi r4,r31,140
	ctx.r4.s64 = ctx.r31.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643608
	ctx.lr = 0x826412A4;
	sub_82643608(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645ff0
	ctx.lr = 0x826412B4;
	sub_82645FF0(ctx, base);
	// addi r4,r31,156
	ctx.r4.s64 = ctx.r31.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x826412C0;
	sub_82645F38(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826434f8
	ctx.lr = 0x826412CC;
	sub_826434F8(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r31,164
	ctx.r4.s64 = ctx.r31.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645ff0
	ctx.lr = 0x826412DC;
	sub_82645FF0(ctx, base);
	// addi r4,r31,172
	ctx.r4.s64 = ctx.r31.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x826412E8;
	sub_82645F38(ctx, base);
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826434f8
	ctx.lr = 0x826412F4;
	sub_826434F8(ctx, base);
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643608
	ctx.lr = 0x82641300;
	sub_82643608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645ff0
	ctx.lr = 0x82641310;
	sub_82645FF0(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645ff0
	ctx.lr = 0x82641320;
	sub_82645FF0(ctx, base);
	// addi r4,r31,188
	ctx.r4.s64 = ctx.r31.s64 + 188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x8264132C;
	sub_82645F38(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x82641338;
	sub_82645F38(ctx, base);
	// addi r4,r31,212
	ctx.r4.s64 = ctx.r31.s64 + 212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x82641344;
	sub_82645F38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82641350"))) PPC_WEAK_FUNC(sub_82641350);
PPC_FUNC_IMPL(__imp__sub_82641350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824f9ba8
	ctx.lr = 0x82641394;
	sub_824F9BA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826413B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826413CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x826413D8;
	sub_828DB368(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x826413E4;
	sub_828DB368(ctx, base);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x826413F0;
	sub_828DB368(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264140C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243c740
	ctx.lr = 0x82641418;
	sub_8243C740(ctx, base);
	// addi r4,r31,124
	ctx.r4.s64 = ctx.r31.s64 + 124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x82641424;
	sub_828DB368(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x82641430;
	sub_828DB368(ctx, base);
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x8264143C;
	sub_828DB368(ctx, base);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x82641448;
	sub_828DB368(ctx, base);
	// addi r4,r31,140
	ctx.r4.s64 = ctx.r31.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243c740
	ctx.lr = 0x82641454;
	sub_8243C740(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,156
	ctx.r4.s64 = ctx.r31.s64 + 156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264148C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826414A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,164
	ctx.r4.s64 = ctx.r31.s64 + 164;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826414C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,172
	ctx.r4.s64 = ctx.r31.s64 + 172;
	// bl 0x828db368
	ctx.lr = 0x826414D0;
	sub_828DB368(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826414EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// bl 0x8243c740
	ctx.lr = 0x826414F8;
	sub_8243C740(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,188
	ctx.r4.s64 = ctx.r31.s64 + 188;
	// bl 0x828db368
	ctx.lr = 0x8264153C;
	sub_828DB368(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// bl 0x828db368
	ctx.lr = 0x82641548;
	sub_828DB368(ctx, base);
	// addi r4,r31,212
	ctx.r4.s64 = ctx.r31.s64 + 212;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x82641554;
	sub_828DB368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641570"))) PPC_WEAK_FUNC(sub_82641570);
PPC_FUNC_IMPL(__imp__sub_82641570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82645e28
	ctx.lr = 0x82641590;
	sub_82645E28(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826415a0
	if (ctx.cr0.eq) goto loc_826415A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826415A0;
	sub_82332DB8(ctx, base);
loc_826415A0:
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

__attribute__((alias("__imp__sub_826415C0"))) PPC_WEAK_FUNC(sub_826415C0);
PPC_FUNC_IMPL(__imp__sub_826415C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82641148
	ctx.lr = 0x826415DC;
	sub_82641148(ctx, base);
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x826415E8;
	sub_82645F38(ctx, base);
	// addi r4,r31,220
	ctx.r4.s64 = ctx.r31.s64 + 220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x826415F4;
	sub_82645F38(ctx, base);
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643608
	ctx.lr = 0x82641600;
	sub_82643608(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r30,r31,236
	ctx.r30.s64 = ctx.r31.s64 + 236;
	// bl 0x82333900
	ctx.lr = 0x8264160C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82641634
	if (ctx.cr0.eq) goto loc_82641634;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r11,10608
	ctx.r11.s64 = ctx.r11.s64 + 10608;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8264163c
	goto loc_8264163C;
loc_82641634:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8264163C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82410060
	ctx.lr = 0x82641648;
	sub_82410060(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x828d0cb0
	ctx.lr = 0x82641658;
	sub_828D0CB0(ctx, base);
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643608
	ctx.lr = 0x82641664;
	sub_82643608(ctx, base);
	// addi r4,r31,252
	ctx.r4.s64 = ctx.r31.s64 + 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643608
	ctx.lr = 0x82641670;
	sub_82643608(ctx, base);
	// addi r4,r31,264
	ctx.r4.s64 = ctx.r31.s64 + 264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x8264167C;
	sub_82645F38(ctx, base);
	// addi r4,r31,268
	ctx.r4.s64 = ctx.r31.s64 + 268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x82641688;
	sub_82645F38(ctx, base);
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643608
	ctx.lr = 0x82641694;
	sub_82643608(ctx, base);
	// addi r4,r31,284
	ctx.r4.s64 = ctx.r31.s64 + 284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643608
	ctx.lr = 0x826416A0;
	sub_82643608(ctx, base);
	// addi r4,r31,344
	ctx.r4.s64 = ctx.r31.s64 + 344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643470
	ctx.lr = 0x826416AC;
	sub_82643470(ctx, base);
	// addi r4,r31,348
	ctx.r4.s64 = ctx.r31.s64 + 348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643470
	ctx.lr = 0x826416B8;
	sub_82643470(ctx, base);
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826434f8
	ctx.lr = 0x826416C4;
	sub_826434F8(ctx, base);
	// addi r4,r31,356
	ctx.r4.s64 = ctx.r31.s64 + 356;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826434f8
	ctx.lr = 0x826416D0;
	sub_826434F8(ctx, base);
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643608
	ctx.lr = 0x826416DC;
	sub_82643608(ctx, base);
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643608
	ctx.lr = 0x826416E8;
	sub_82643608(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r31,320
	ctx.r4.s64 = ctx.r31.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645ff0
	ctx.lr = 0x826416F8;
	sub_82645FF0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r31,324
	ctx.r4.s64 = ctx.r31.s64 + 324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645ff0
	ctx.lr = 0x82641708;
	sub_82645FF0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,360
	ctx.r4.s64 = ctx.r31.s64 + 360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645ff0
	ctx.lr = 0x82641718;
	sub_82645FF0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,364
	ctx.r4.s64 = ctx.r31.s64 + 364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645ff0
	ctx.lr = 0x82641728;
	sub_82645FF0(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r31,368
	ctx.r4.s64 = ctx.r31.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645ff0
	ctx.lr = 0x82641738;
	sub_82645FF0(ctx, base);
	// addi r4,r31,372
	ctx.r4.s64 = ctx.r31.s64 + 372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643580
	ctx.lr = 0x82641744;
	sub_82643580(ctx, base);
	// addi r4,r31,376
	ctx.r4.s64 = ctx.r31.s64 + 376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643580
	ctx.lr = 0x82641750;
	sub_82643580(ctx, base);
	// addi r4,r31,328
	ctx.r4.s64 = ctx.r31.s64 + 328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x8264175C;
	sub_82645F38(ctx, base);
	// addi r4,r31,332
	ctx.r4.s64 = ctx.r31.s64 + 332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x82641768;
	sub_82645F38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641780"))) PPC_WEAK_FUNC(sub_82641780);
PPC_FUNC_IMPL(__imp__sub_82641780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x826417A8;
	sub_828DB368(ctx, base);
	// addi r4,r31,220
	ctx.r4.s64 = ctx.r31.s64 + 220;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x826417B4;
	sub_828DB368(ctx, base);
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243c740
	ctx.lr = 0x826417C0;
	sub_8243C740(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,236
	ctx.r4.s64 = ctx.r31.s64 + 236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826417DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243c740
	ctx.lr = 0x826417E8;
	sub_8243C740(ctx, base);
	// addi r4,r31,252
	ctx.r4.s64 = ctx.r31.s64 + 252;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243c740
	ctx.lr = 0x826417F4;
	sub_8243C740(ctx, base);
	// addi r4,r31,264
	ctx.r4.s64 = ctx.r31.s64 + 264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x82641800;
	sub_828DB368(ctx, base);
	// addi r4,r31,268
	ctx.r4.s64 = ctx.r31.s64 + 268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x8264180C;
	sub_828DB368(ctx, base);
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243c740
	ctx.lr = 0x82641818;
	sub_8243C740(ctx, base);
	// addi r4,r31,284
	ctx.r4.s64 = ctx.r31.s64 + 284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243c740
	ctx.lr = 0x82641824;
	sub_8243C740(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,344
	ctx.r4.s64 = ctx.r31.s64 + 344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264183C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,348
	ctx.r4.s64 = ctx.r31.s64 + 348;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,356
	ctx.r4.s64 = ctx.r31.s64 + 356;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264188C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243c740
	ctx.lr = 0x82641898;
	sub_8243C740(ctx, base);
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243c740
	ctx.lr = 0x826418A4;
	sub_8243C740(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,320
	ctx.r4.s64 = ctx.r31.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826418C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,324
	ctx.r4.s64 = ctx.r31.s64 + 324;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826418DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,360
	ctx.r4.s64 = ctx.r31.s64 + 360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826418F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,364
	ctx.r4.s64 = ctx.r31.s64 + 364;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,368
	ctx.r4.s64 = ctx.r31.s64 + 368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,372
	ctx.r4.s64 = ctx.r31.s64 + 372;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264194C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,376
	ctx.r4.s64 = ctx.r31.s64 + 376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,328
	ctx.r4.s64 = ctx.r31.s64 + 328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x82641974;
	sub_828DB368(ctx, base);
	// addi r4,r31,332
	ctx.r4.s64 = ctx.r31.s64 + 332;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x82641980;
	sub_828DB368(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82641350
	ctx.lr = 0x8264198C;
	sub_82641350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826419A8"))) PPC_WEAK_FUNC(sub_826419A8);
PPC_FUNC_IMPL(__imp__sub_826419A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9dc
	ctx.lr = 0x826419B0;
	__savegprlr_17(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82641088
	ctx.lr = 0x826419BC;
	sub_82641088(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stb r11,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r11.u8);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r28,136(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r27,140(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r26,144(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r25,152(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r24,156(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r23,160(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r22,168(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r21,172(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r20,176(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r19,184(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r18,188(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r17,192(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r9,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r9.u32);
	// stw r8,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r8.u32);
	// stw r7,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r7.u32);
	// stw r6,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r6.u32);
	// stw r5,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r5.u32);
	// stw r4,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r4.u32);
	// stw r3,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r3.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stw r29,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r29.u32);
	// stw r28,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r28.u32);
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
	// stw r26,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r26.u32);
	// stw r25,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r25.u32);
	// stw r24,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r24.u32);
	// stw r23,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r23.u32);
	// stw r22,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r22.u32);
	// stw r21,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r21.u32);
	// stw r20,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r20.u32);
	// stw r19,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r19.u32);
	// stw r18,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r18.u32);
	// stw r17,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r17.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82a4ea2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82641B08"))) PPC_WEAK_FUNC(sub_82641B08);
PPC_FUNC_IMPL(__imp__sub_82641B08) {
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
	// bl 0x82641148
	ctx.lr = 0x82641B20;
	sub_82641148(ctx, base);
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82645ff0
	ctx.lr = 0x82641B30;
	sub_82645FF0(ctx, base);
	// addi r4,r31,220
	ctx.r4.s64 = ctx.r31.s64 + 220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82645ff0
	ctx.lr = 0x82641B40;
	sub_82645FF0(ctx, base);
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826434f8
	ctx.lr = 0x82641B4C;
	sub_826434F8(ctx, base);
	// addi r4,r31,228
	ctx.r4.s64 = ctx.r31.s64 + 228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x82641B58;
	sub_82645F38(ctx, base);
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

__attribute__((alias("__imp__sub_82641B70"))) PPC_WEAK_FUNC(sub_82641B70);
PPC_FUNC_IMPL(__imp__sub_82641B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641BA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,220
	ctx.r4.s64 = ctx.r31.s64 + 220;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,228
	ctx.r4.s64 = ctx.r31.s64 + 228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x82641BEC;
	sub_828DB368(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82641350
	ctx.lr = 0x82641BF8;
	sub_82641350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641C10"))) PPC_WEAK_FUNC(sub_82641C10);
PPC_FUNC_IMPL(__imp__sub_82641C10) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x828db3f8
	ctx.lr = 0x82641C30;
	sub_828DB3F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641C48"))) PPC_WEAK_FUNC(sub_82641C48);
PPC_FUNC_IMPL(__imp__sub_82641C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243c740
	ctx.lr = 0x82641CA8;
	sub_8243C740(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641CC8"))) PPC_WEAK_FUNC(sub_82641CC8);
PPC_FUNC_IMPL(__imp__sub_82641CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lfs f0,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641D10"))) PPC_WEAK_FUNC(sub_82641D10);
PPC_FUNC_IMPL(__imp__sub_82641D10) {
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
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r31,3640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3640, ctx.r31.u32);
	// lwz r7,13024(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,72(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82641d68
	if (ctx.cr6.eq) goto loc_82641D68;
	// lwz r11,960(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82641d68
	if (!ctx.cr6.eq) goto loc_82641D68;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x8276eb48
	ctx.lr = 0x82641D50;
	sub_8276EB48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,72(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// bl 0x828ea068
	ctx.lr = 0x82641D5C;
	sub_828EA068(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82641d68
	if (ctx.cr0.eq) goto loc_82641D68;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
loc_82641D68:
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

__attribute__((alias("__imp__sub_82641D80"))) PPC_WEAK_FUNC(sub_82641D80);
PPC_FUNC_IMPL(__imp__sub_82641D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82641D88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r7,13024(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// stw r29,3640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3640, ctx.r29.u32);
	// lwz r11,72(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82641de0
	if (ctx.cr6.eq) goto loc_82641DE0;
	// lwz r11,788(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82641dc0
	if (ctx.cr6.eq) goto loc_82641DC0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82641de0
	if (!ctx.cr6.eq) goto loc_82641DE0;
loc_82641DC0:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x8276eb48
	ctx.lr = 0x82641DC8;
	sub_8276EB48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,72(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// bl 0x828ea068
	ctx.lr = 0x82641DD4;
	sub_828EA068(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82641de0
	if (ctx.cr0.eq) goto loc_82641DE0;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
loc_82641DE0:
	// addic. r11,r30,300
	ctx.xer.ca = ctx.r30.u32 > 4294966995;
	ctx.r11.s64 = ctx.r30.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82641e00
	if (ctx.cr0.eq) goto loc_82641E00;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82641e00
	if (ctx.cr6.eq) goto loc_82641E00;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82641e04
	goto loc_82641E04;
loc_82641E00:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82641E04:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82641ea4
	if (ctx.cr6.eq) goto loc_82641EA4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82641e2c
	if (ctx.cr0.eq) goto loc_82641E2C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82641e2c
	if (ctx.cr6.eq) goto loc_82641E2C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82641e30
	goto loc_82641E30;
loc_82641E2C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82641E30:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82641ea4
	if (ctx.cr6.eq) goto loc_82641EA4;
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
	// beq cr6,0x82641e78
	if (ctx.cr6.eq) goto loc_82641E78;
	// bl 0x82399780
	ctx.lr = 0x82641E5C;
	sub_82399780(ctx, base);
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
	ctx.lr = 0x82641E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82641e7c
	goto loc_82641E7C;
loc_82641E78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82641E7C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641ea4
	if (ctx.cr6.eq) goto loc_82641EA4;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82641e9c
	if (ctx.cr6.eq) goto loc_82641E9C;
	// lwz r10,704(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 704, ctx.r10.u32);
loc_82641E9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8263afb8
	ctx.lr = 0x82641EA4;
	sub_8263AFB8(ctx, base);
loc_82641EA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82641EB0"))) PPC_WEAK_FUNC(sub_82641EB0);
PPC_FUNC_IMPL(__imp__sub_82641EB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// li r10,10
	ctx.r10.s64 = 10;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,1968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r11,2548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,8496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8496, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x825e3cf0
	sub_825E3CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82641EDC"))) PPC_WEAK_FUNC(sub_82641EDC);
PPC_FUNC_IMPL(__imp__sub_82641EDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641EE0"))) PPC_WEAK_FUNC(sub_82641EE0);
PPC_FUNC_IMPL(__imp__sub_82641EE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -100);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r11,756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641F08"))) PPC_WEAK_FUNC(sub_82641F08);
PPC_FUNC_IMPL(__imp__sub_82641F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,9556
	ctx.r11.s64 = ctx.r11.s64 + 9556;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,15852
	ctx.r10.s64 = ctx.r10.s64 + 15852;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x82641F4C;
	sub_8312E7DC(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82641FA8"))) PPC_WEAK_FUNC(sub_82641FA8);
PPC_FUNC_IMPL(__imp__sub_82641FA8) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// addi r10,r10,16980
	ctx.r10.s64 = ctx.r10.s64 + 16980;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// clrlwi. r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x82641fe0
	if (ctx.cr0.eq) goto loc_82641FE0;
	// bl 0x82332db8
	ctx.lr = 0x82641FE0;
	sub_82332DB8(ctx, base);
loc_82641FE0:
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

__attribute__((alias("__imp__sub_82641FF8"))) PPC_WEAK_FUNC(sub_82641FF8);
PPC_FUNC_IMPL(__imp__sub_82641FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82642000;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r26,r30,8
	ctx.r26.s64 = ctx.r30.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82642024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r30,40
	ctx.r27.s64 = ctx.r30.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82642044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x828db368
	ctx.lr = 0x82642050;
	sub_828DB368(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264206C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82642084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826420e4
	if (!ctx.cr6.gt) goto loc_826420E4;
	// addi r29,r30,88
	ctx.r29.s64 = ctx.r30.s64 + 88;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
loc_8264209C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826420B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243c740
	ctx.lr = 0x826420C0;
	sub_8243C740(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f9ba8
	ctx.lr = 0x826420CC;
	sub_824F9BA8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8264209c
	if (ctx.cr6.lt) goto loc_8264209C;
loc_826420E4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826420F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82642108"))) PPC_WEAK_FUNC(sub_82642108);
PPC_FUNC_IMPL(__imp__sub_82642108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x82642110;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r20,r24,8
	ctx.r20.s64 = ctx.r24.s64 + 8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82642130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82642158
	if (ctx.cr6.eq) goto loc_82642158;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82642150;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82642154;
	sub_82409C40(ctx, base);
	// b 0x8264215c
	goto loc_8264215C;
loc_82642158:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_8264215C:
	// bl 0x82438130
	ctx.lr = 0x82642160;
	sub_82438130(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x82642378
	if (ctx.cr0.eq) goto loc_82642378;
	// lwz r10,52(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82642244
	if (ctx.cr6.eq) goto loc_82642244;
	// lwz r11,1968(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,396
	ctx.r4.s64 = ctx.r11.s64 + 396;
	// bne cr6,0x8264218c
	if (!ctx.cr6.eq) goto loc_8264218C;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_8264218C:
	// lwz r11,396(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 396);
	// addi r3,r10,396
	ctx.r3.s64 = ctx.r10.s64 + 396;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826421A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82642244
	if (ctx.cr0.eq) goto loc_82642244;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// addi r10,r10,-27580
	ctx.r10.s64 = ctx.r10.s64 + -27580;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,1968(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1968);
	// lwz r10,12756(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12756);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826421dc
	if (ctx.cr6.eq) goto loc_826421DC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82642210
	if (!ctx.cr6.eq) goto loc_82642210;
loc_826421DC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,32060
	ctx.r3.s64 = ctx.r11.s64 + 32060;
	// bl 0x82816528
	ctx.lr = 0x826421EC;
	sub_82816528(ctx, base);
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,1968(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1968);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8282c818
	ctx.lr = 0x8264220C;
	sub_8282C818(ctx, base);
	// b 0x82642238
	goto loc_82642238;
loc_82642210:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,32084
	ctx.r3.s64 = ctx.r11.s64 + 32084;
	// bl 0x82816528
	ctx.lr = 0x82642220;
	sub_82816528(ctx, base);
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,1968(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1968);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8282c950
	ctx.lr = 0x82642238;
	sub_8282C950(ctx, base);
loc_82642238:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82642244:
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8264235c
	if (!ctx.cr6.gt) goto loc_8264235C;
	// addi r30,r24,88
	ctx.r30.s64 = ctx.r24.s64 + 88;
	// addi r26,r24,56
	ctx.r26.s64 = ctx.r24.s64 + 56;
loc_8264225C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x824090e0
	ctx.lr = 0x82642264;
	sub_824090E0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r29,-24(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// lwz r28,-20(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// lwz r27,-16(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq 0x82642344
	if (ctx.cr0.eq) goto loc_82642344;
	// lwz r11,1968(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1968);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826422bc
	if (!ctx.cr6.eq) goto loc_826422BC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8263f058
	ctx.lr = 0x826422B8;
	sub_8263F058(ctx, base);
	// b 0x8264232c
	goto loc_8264232C;
loc_826422BC:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,13024(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82825ff8
	ctx.lr = 0x826422D8;
	sub_82825FF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826422F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r27.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// stw r10,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r10.u32);
	// stw r9,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r9.u32);
	// stw r8,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264232C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264232C:
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82642344
	if (!ctx.cr6.eq) goto loc_82642344;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260cfe0
	ctx.lr = 0x82642344;
	sub_8260CFE0(ctx, base);
loc_82642344:
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8264225c
	if (ctx.cr6.lt) goto loc_8264225C;
loc_8264235C:
	// lwz r11,44(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82642378
	if (ctx.cr6.eq) goto loc_82642378;
	// stw r21,44(r24)
	PPC_STORE_U32(ctx.r24.u32 + 44, ctx.r21.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,13024(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// bl 0x8282c688
	ctx.lr = 0x82642378;
	sub_8282C688(ctx, base);
loc_82642378:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264238C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82642398"))) PPC_WEAK_FUNC(sub_82642398);
PPC_FUNC_IMPL(__imp__sub_82642398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826423A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826423CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x82642468
	if (!ctx.cr6.lt) goto loc_82642468;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82642410
	if (!ctx.cr6.gt) goto loc_82642410;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
loc_826423E8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8264240c
	if (ctx.cr6.eq) goto loc_8264240C;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826423e8
	if (ctx.cr6.lt) goto loc_826423E8;
	// b 0x82642410
	goto loc_82642410;
loc_8264240C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82642410:
	// addi r9,r10,14
	ctx.r9.s64 = ctx.r10.s64 + 14;
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r28,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r28.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82642468
	if (!ctx.cr6.eq) goto loc_82642468;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_82642468:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264247C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82642488"))) PPC_WEAK_FUNC(sub_82642488);
PPC_FUNC_IMPL(__imp__sub_82642488) {
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
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x826424AC;
	sub_82409BE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826424e4
	if (ctx.cr0.eq) goto loc_826424E4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826424D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8249b9e0
	ctx.lr = 0x826424D4;
	sub_8249B9E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826424e4
	if (ctx.cr0.eq) goto loc_826424E4;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x826a7e58
	ctx.lr = 0x826424E4;
	sub_826A7E58(ctx, base);
loc_826424E4:
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

__attribute__((alias("__imp__sub_826424F8"))) PPC_WEAK_FUNC(sub_826424F8);
PPC_FUNC_IMPL(__imp__sub_826424F8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x828db368
	ctx.lr = 0x82642514;
	sub_828DB368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642528"))) PPC_WEAK_FUNC(sub_82642528);
PPC_FUNC_IMPL(__imp__sub_82642528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,3600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3600, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642548"))) PPC_WEAK_FUNC(sub_82642548);
PPC_FUNC_IMPL(__imp__sub_82642548) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,2692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82642600
	if (!ctx.cr6.eq) goto loc_82642600;
	// lwz r31,1968(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,9784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82642600
	if (ctx.cr6.eq) goto loc_82642600;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,8964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8964);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x826425c4
	if (ctx.cr6.eq) goto loc_826425C4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,1948(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1948);
	// ld r4,1940(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1940);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,2380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826425B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,10064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10064);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x826425c8
	goto loc_826425C8;
loc_826425C4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_826425C8:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82642600
	if (!ctx.cr6.gt) goto loc_82642600;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,9776
	ctx.r11.s64 = ctx.r11.s64 + 9776;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826436e8
	ctx.lr = 0x826425F8;
	sub_826436E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2692(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2692, ctx.r11.u32);
loc_82642600:
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

__attribute__((alias("__imp__sub_82642620"))) PPC_WEAK_FUNC(sub_82642620);
PPC_FUNC_IMPL(__imp__sub_82642620) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2688, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642630"))) PPC_WEAK_FUNC(sub_82642630);
PPC_FUNC_IMPL(__imp__sub_82642630) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642640"))) PPC_WEAK_FUNC(sub_82642640);
PPC_FUNC_IMPL(__imp__sub_82642640) {
	PPC_FUNC_PROLOGUE();
	// addic. r11,r3,300
	ctx.xer.ca = ctx.r3.u32 > 4294966995;
	ctx.r11.s64 = ctx.r3.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82642660
	if (ctx.cr0.eq) goto loc_82642660;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82642660
	if (ctx.cr6.eq) goto loc_82642660;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82642664
	goto loc_82642664;
loc_82642660:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82642664:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8264268c
	if (ctx.cr0.eq) goto loc_8264268C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8264268c
	if (ctx.cr6.eq) goto loc_8264268C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82642690
	goto loc_82642690;
loc_8264268C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82642690:
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826426bc
	if (ctx.cr6.eq) goto loc_826426BC;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826426bc
	if (ctx.cr6.eq) goto loc_826426BC;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_826426BC:
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// stw r4,2540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2540, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826426D0"))) PPC_WEAK_FUNC(sub_826426D0);
PPC_FUNC_IMPL(__imp__sub_826426D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82642720
	if (!ctx.cr6.gt) goto loc_82642720;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82642704:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82642754
	if (ctx.cr6.eq) goto loc_82642754;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82642704
	if (ctx.cr6.lt) goto loc_82642704;
loc_82642720:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82642734;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264274c
	if (ctx.cr0.eq) goto loc_8264274C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8264274C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_82642754:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642770"))) PPC_WEAK_FUNC(sub_82642770);
PPC_FUNC_IMPL(__imp__sub_82642770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82642778;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82642848
	if (ctx.cr6.eq) goto loc_82642848;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// ble cr6,0x82642828
	if (!ctx.cr6.gt) goto loc_82642828;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826427bc
	if (ctx.cr6.eq) goto loc_826427BC;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x826427BC;
	sub_82332C38(ctx, base);
loc_826427BC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82642848
	if (!ctx.cr6.gt) goto loc_82642848;
loc_826427CC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x826427E0;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82642810
	if (ctx.cr0.eq) goto loc_82642810;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82642810:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826427cc
	if (ctx.cr6.lt) goto loc_826427CC;
	// b 0x82642848
	goto loc_82642848;
loc_82642828:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82642848
	if (ctx.cr6.eq) goto loc_82642848;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82642848;
	sub_82332C38(ctx, base);
loc_82642848:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82642858"))) PPC_WEAK_FUNC(sub_82642858);
PPC_FUNC_IMPL(__imp__sub_82642858) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82333900
	ctx.lr = 0x8264286C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82642894
	if (ctx.cr0.eq) goto loc_82642894;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r10,477
	ctx.r10.s64 = 477;
	// addi r11,r11,9460
	ctx.r11.s64 = ctx.r11.s64 + 9460;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82642898
	goto loc_82642898;
loc_82642894:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82642898:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826428A8"))) PPC_WEAK_FUNC(sub_826428A8);
PPC_FUNC_IMPL(__imp__sub_826428A8) {
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
	// lwz r3,13164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826428f0
	if (!ctx.cr6.eq) goto loc_826428F0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-27748
	ctx.r3.s64 = ctx.r10.s64 + -27748;
	// bl 0x82a4c7d8
	ctx.lr = 0x826428DC;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x826428E4;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x826428EC;
	sub_82816528(ctx, base);
	// stw r3,13164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13164, ctx.r3.u32);
loc_826428F0:
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

__attribute__((alias("__imp__sub_82642908"))) PPC_WEAK_FUNC(sub_82642908);
PPC_FUNC_IMPL(__imp__sub_82642908) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x8264291C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8264297c
	if (ctx.cr0.eq) goto loc_8264297C;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r8,r8,9504
	ctx.r8.s64 = ctx.r8.s64 + 9504;
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// b 0x82642980
	goto loc_82642980;
loc_8264297C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82642980:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642990"))) PPC_WEAK_FUNC(sub_82642990);
PPC_FUNC_IMPL(__imp__sub_82642990) {
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
	// lwz r3,13168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826429d8
	if (!ctx.cr6.eq) goto loc_826429D8;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-27712
	ctx.r3.s64 = ctx.r10.s64 + -27712;
	// bl 0x82a4c7d8
	ctx.lr = 0x826429C4;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x826429CC;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x826429D4;
	sub_82816528(ctx, base);
	// stw r3,13168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13168, ctx.r3.u32);
loc_826429D8:
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

__attribute__((alias("__imp__sub_826429F0"))) PPC_WEAK_FUNC(sub_826429F0);
PPC_FUNC_IMPL(__imp__sub_826429F0) {
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
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82333900
	ctx.lr = 0x82642A04;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82642a14
	if (ctx.cr0.eq) goto loc_82642A14;
	// bl 0x82641f08
	ctx.lr = 0x82642A10;
	sub_82641F08(ctx, base);
	// b 0x82642a18
	goto loc_82642A18;
loc_82642A14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82642A18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642A28"))) PPC_WEAK_FUNC(sub_82642A28);
PPC_FUNC_IMPL(__imp__sub_82642A28) {
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
	// lwz r3,7700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7700);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82642a70
	if (!ctx.cr6.eq) goto loc_82642A70;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,1292
	ctx.r3.s64 = ctx.r10.s64 + 1292;
	// bl 0x82a4c7d8
	ctx.lr = 0x82642A5C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82642A64;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82642A6C;
	sub_82816528(ctx, base);
	// stw r3,7700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7700, ctx.r3.u32);
loc_82642A70:
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

__attribute__((alias("__imp__sub_82642A88"))) PPC_WEAK_FUNC(sub_82642A88);
PPC_FUNC_IMPL(__imp__sub_82642A88) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82333900
	ctx.lr = 0x82642A9C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82642ac4
	if (ctx.cr0.eq) goto loc_82642AC4;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,9616
	ctx.r11.s64 = ctx.r11.s64 + 9616;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82642ac8
	goto loc_82642AC8;
loc_82642AC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82642AC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642AD8"))) PPC_WEAK_FUNC(sub_82642AD8);
PPC_FUNC_IMPL(__imp__sub_82642AD8) {
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
	// lwz r3,7704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7704);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82642b20
	if (!ctx.cr6.eq) goto loc_82642B20;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,1340
	ctx.r3.s64 = ctx.r10.s64 + 1340;
	// bl 0x82a4c7d8
	ctx.lr = 0x82642B0C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82642B14;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82642B1C;
	sub_82816528(ctx, base);
	// stw r3,7704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7704, ctx.r3.u32);
loc_82642B20:
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

__attribute__((alias("__imp__sub_82642B38"))) PPC_WEAK_FUNC(sub_82642B38);
PPC_FUNC_IMPL(__imp__sub_82642B38) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82333900
	ctx.lr = 0x82642B4C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82642b74
	if (ctx.cr0.eq) goto loc_82642B74;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,9656
	ctx.r11.s64 = ctx.r11.s64 + 9656;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82642b78
	goto loc_82642B78;
loc_82642B74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82642B78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642B88"))) PPC_WEAK_FUNC(sub_82642B88);
PPC_FUNC_IMPL(__imp__sub_82642B88) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x82642B9C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82642bbc
	if (ctx.cr0.eq) goto loc_82642BBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,9696
	ctx.r11.s64 = ctx.r10.s64 + 9696;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82642bc0
	goto loc_82642BC0;
loc_82642BBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82642BC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642BD0"))) PPC_WEAK_FUNC(sub_82642BD0);
PPC_FUNC_IMPL(__imp__sub_82642BD0) {
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
	// lwz r3,13172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82642c18
	if (!ctx.cr6.eq) goto loc_82642C18;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-27656
	ctx.r3.s64 = ctx.r10.s64 + -27656;
	// bl 0x82a4c7d8
	ctx.lr = 0x82642C04;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82642C0C;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82642C14;
	sub_82816528(ctx, base);
	// stw r3,13172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13172, ctx.r3.u32);
loc_82642C18:
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

__attribute__((alias("__imp__sub_82642C30"))) PPC_WEAK_FUNC(sub_82642C30);
PPC_FUNC_IMPL(__imp__sub_82642C30) {
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
	// li r3,216
	ctx.r3.s64 = 216;
	// bl 0x82333900
	ctx.lr = 0x82642C44;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82642c54
	if (ctx.cr0.eq) goto loc_82642C54;
	// bl 0x82640ff8
	ctx.lr = 0x82642C50;
	sub_82640FF8(ctx, base);
	// b 0x82642c58
	goto loc_82642C58;
loc_82642C54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82642C58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642C68"))) PPC_WEAK_FUNC(sub_82642C68);
PPC_FUNC_IMPL(__imp__sub_82642C68) {
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
	// lwz r3,13176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82642cb0
	if (!ctx.cr6.eq) goto loc_82642CB0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-27584
	ctx.r3.s64 = ctx.r10.s64 + -27584;
	// bl 0x82a4c7d8
	ctx.lr = 0x82642C9C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82642CA4;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82642CAC;
	sub_82816528(ctx, base);
	// stw r3,13176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13176, ctx.r3.u32);
loc_82642CB0:
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

__attribute__((alias("__imp__sub_82642CC8"))) PPC_WEAK_FUNC(sub_82642CC8);
PPC_FUNC_IMPL(__imp__sub_82642CC8) {
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
	// li r3,300
	ctx.r3.s64 = 300;
	// bl 0x82333900
	ctx.lr = 0x82642CE0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82642d08
	if (ctx.cr0.eq) goto loc_82642D08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82640ff8
	ctx.lr = 0x82642CF0;
	sub_82640FF8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8261b3b0
	ctx.lr = 0x82642D00;
	sub_8261B3B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82642d0c
	goto loc_82642D0C;
loc_82642D08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82642D0C:
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

__attribute__((alias("__imp__sub_82642D20"))) PPC_WEAK_FUNC(sub_82642D20);
PPC_FUNC_IMPL(__imp__sub_82642D20) {
	PPC_FUNC_PROLOGUE();
	// li r3,300
	ctx.r3.s64 = 300;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642D28"))) PPC_WEAK_FUNC(sub_82642D28);
PPC_FUNC_IMPL(__imp__sub_82642D28) {
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
	// lwz r3,13180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82642d70
	if (!ctx.cr6.eq) goto loc_82642D70;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-27512
	ctx.r3.s64 = ctx.r10.s64 + -27512;
	// bl 0x82a4c7d8
	ctx.lr = 0x82642D5C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82642D64;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82642D6C;
	sub_82816528(ctx, base);
	// stw r3,13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13180, ctx.r3.u32);
loc_82642D70:
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

__attribute__((alias("__imp__sub_82642D88"))) PPC_WEAK_FUNC(sub_82642D88);
PPC_FUNC_IMPL(__imp__sub_82642D88) {
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
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x82333900
	ctx.lr = 0x82642DA0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82642dc8
	if (ctx.cr0.eq) goto loc_82642DC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82640ff8
	ctx.lr = 0x82642DB0;
	sub_82640FF8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,9880
	ctx.r11.s64 = ctx.r11.s64 + 9880;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826419a8
	ctx.lr = 0x82642DC0;
	sub_826419A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82642dcc
	goto loc_82642DCC;
loc_82642DC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82642DCC:
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

__attribute__((alias("__imp__sub_82642DE0"))) PPC_WEAK_FUNC(sub_82642DE0);
PPC_FUNC_IMPL(__imp__sub_82642DE0) {
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
	// lwz r3,13184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82642e28
	if (!ctx.cr6.eq) goto loc_82642E28;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-27440
	ctx.r3.s64 = ctx.r10.s64 + -27440;
	// bl 0x82a4c7d8
	ctx.lr = 0x82642E14;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82642E1C;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82642E24;
	sub_82816528(ctx, base);
	// stw r3,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r3.u32);
loc_82642E28:
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

__attribute__((alias("__imp__sub_82642E40"))) PPC_WEAK_FUNC(sub_82642E40);
PPC_FUNC_IMPL(__imp__sub_82642E40) {
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
	// li r3,232
	ctx.r3.s64 = 232;
	// bl 0x82333900
	ctx.lr = 0x82642E54;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82642e70
	if (ctx.cr0.eq) goto loc_82642E70;
	// bl 0x82640ff8
	ctx.lr = 0x82642E60;
	sub_82640FF8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,9944
	ctx.r11.s64 = ctx.r11.s64 + 9944;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82642e74
	goto loc_82642E74;
loc_82642E70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82642E74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642E88"))) PPC_WEAK_FUNC(sub_82642E88);
PPC_FUNC_IMPL(__imp__sub_82642E88) {
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
	// lwz r3,13188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82642ed0
	if (!ctx.cr6.eq) goto loc_82642ED0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-27368
	ctx.r3.s64 = ctx.r10.s64 + -27368;
	// bl 0x82a4c7d8
	ctx.lr = 0x82642EBC;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82642EC4;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82642ECC;
	sub_82816528(ctx, base);
	// stw r3,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r3.u32);
loc_82642ED0:
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

__attribute__((alias("__imp__sub_82642EE8"))) PPC_WEAK_FUNC(sub_82642EE8);
PPC_FUNC_IMPL(__imp__sub_82642EE8) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82333900
	ctx.lr = 0x82642EFC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82642f1c
	if (ctx.cr0.eq) goto loc_82642F1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,10008
	ctx.r11.s64 = ctx.r10.s64 + 10008;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82642f20
	goto loc_82642F20;
loc_82642F1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82642F20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642F30"))) PPC_WEAK_FUNC(sub_82642F30);
PPC_FUNC_IMPL(__imp__sub_82642F30) {
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
	// lwz r3,13192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82642f78
	if (!ctx.cr6.eq) goto loc_82642F78;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-27300
	ctx.r3.s64 = ctx.r10.s64 + -27300;
	// bl 0x82a4c7d8
	ctx.lr = 0x82642F64;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82642F6C;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82642F74;
	sub_82816528(ctx, base);
	// stw r3,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r3.u32);
loc_82642F78:
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

__attribute__((alias("__imp__sub_82642F90"))) PPC_WEAK_FUNC(sub_82642F90);
PPC_FUNC_IMPL(__imp__sub_82642F90) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82333900
	ctx.lr = 0x82642FA4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82642fc4
	if (ctx.cr0.eq) goto loc_82642FC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,10060
	ctx.r11.s64 = ctx.r10.s64 + 10060;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82642fc8
	goto loc_82642FC8;
loc_82642FC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82642FC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642FD8"))) PPC_WEAK_FUNC(sub_82642FD8);
PPC_FUNC_IMPL(__imp__sub_82642FD8) {
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
	// lwz r3,13196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82643020
	if (!ctx.cr6.eq) goto loc_82643020;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-27244
	ctx.r3.s64 = ctx.r10.s64 + -27244;
	// bl 0x82a4c7d8
	ctx.lr = 0x8264300C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82643014;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8264301C;
	sub_82816528(ctx, base);
	// stw r3,13196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13196, ctx.r3.u32);
loc_82643020:
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

__attribute__((alias("__imp__sub_82643038"))) PPC_WEAK_FUNC(sub_82643038);
PPC_FUNC_IMPL(__imp__sub_82643038) {
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
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82833108
	ctx.lr = 0x8264304C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82643060
	if (ctx.cr0.eq) goto loc_82643060;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826443b0
	ctx.lr = 0x8264305C;
	sub_826443B0(ctx, base);
	// b 0x82643064
	goto loc_82643064;
loc_82643060:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82643064:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82643078
	if (ctx.cr6.eq) goto loc_82643078;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82643078:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82643088"))) PPC_WEAK_FUNC(sub_82643088);
PPC_FUNC_IMPL(__imp__sub_82643088) {
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
	// lwz r11,24932(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24932);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826430c8
	if (!ctx.cr0.eq) goto loc_826430C8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24932(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24932, ctx.r11.u32);
	// addi r3,r9,2640
	ctx.r3.s64 = ctx.r9.s64 + 2640;
	// bl 0x82816528
	ctx.lr = 0x826430C0;
	sub_82816528(ctx, base);
	// stw r3,24928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24928, ctx.r3.u32);
	// b 0x826430cc
	goto loc_826430CC;
loc_826430C8:
	// lwz r3,24928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24928);
loc_826430CC:
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

__attribute__((alias("__imp__sub_826430E0"))) PPC_WEAK_FUNC(sub_826430E0);
PPC_FUNC_IMPL(__imp__sub_826430E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82643130
	ctx.lr = 0x82643100;
	sub_82643130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643114;
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

__attribute__((alias("__imp__sub_82643130"))) PPC_WEAK_FUNC(sub_82643130);
PPC_FUNC_IMPL(__imp__sub_82643130) {
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
	// addi r31,r11,13144
	ctx.r31.s64 = ctx.r11.s64 + 13144;
	// lwz r11,13140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13140);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82643178
	if (!ctx.cr0.eq) goto loc_82643178;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,10424
	ctx.r9.s64 = ctx.r9.s64 + 10424;
	// stw r11,13140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13140, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24928
	ctx.r3.s64 = ctx.r11.s64 + 24928;
	// bl 0x82a4c758
	ctx.lr = 0x82643178;
	sub_82A4C758(ctx, base);
loc_82643178:
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

__attribute__((alias("__imp__sub_82643190"))) PPC_WEAK_FUNC(sub_82643190);
PPC_FUNC_IMPL(__imp__sub_82643190) {
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
	// li r3,1792
	ctx.r3.s64 = 1792;
	// bl 0x82833108
	ctx.lr = 0x826431A4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826431b4
	if (ctx.cr0.eq) goto loc_826431B4;
	// bl 0x827e83a8
	ctx.lr = 0x826431B0;
	sub_827E83A8(ctx, base);
	// b 0x826431b8
	goto loc_826431B8;
loc_826431B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826431B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826431C8"))) PPC_WEAK_FUNC(sub_826431C8);
PPC_FUNC_IMPL(__imp__sub_826431C8) {
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
	// lwz r11,24924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24924);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82643208
	if (!ctx.cr0.eq) goto loc_82643208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24924, ctx.r11.u32);
	// addi r3,r9,2684
	ctx.r3.s64 = ctx.r9.s64 + 2684;
	// bl 0x82816528
	ctx.lr = 0x82643200;
	sub_82816528(ctx, base);
	// stw r3,24920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24920, ctx.r3.u32);
	// b 0x8264320c
	goto loc_8264320C;
loc_82643208:
	// lwz r3,24920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24920);
loc_8264320C:
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

__attribute__((alias("__imp__sub_82643220"))) PPC_WEAK_FUNC(sub_82643220);
PPC_FUNC_IMPL(__imp__sub_82643220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82643270
	ctx.lr = 0x82643240;
	sub_82643270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643254;
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

__attribute__((alias("__imp__sub_82643270"))) PPC_WEAK_FUNC(sub_82643270);
PPC_FUNC_IMPL(__imp__sub_82643270) {
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
	// addi r31,r11,13160
	ctx.r31.s64 = ctx.r11.s64 + 13160;
	// lwz r11,13156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13156);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826432b8
	if (!ctx.cr0.eq) goto loc_826432B8;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,10444
	ctx.r9.s64 = ctx.r9.s64 + 10444;
	// stw r11,13156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13156, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24904
	ctx.r3.s64 = ctx.r11.s64 + 24904;
	// bl 0x82a4c758
	ctx.lr = 0x826432B8;
	sub_82A4C758(ctx, base);
loc_826432B8:
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

__attribute__((alias("__imp__sub_826432D0"))) PPC_WEAK_FUNC(sub_826432D0);
PPC_FUNC_IMPL(__imp__sub_826432D0) {
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
	ctx.lr = 0x826432E4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826432f4
	if (ctx.cr0.eq) goto loc_826432F4;
	// bl 0x826658f8
	ctx.lr = 0x826432F0;
	sub_826658F8(ctx, base);
	// b 0x826432f8
	goto loc_826432F8;
loc_826432F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826432F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82643308"))) PPC_WEAK_FUNC(sub_82643308);
PPC_FUNC_IMPL(__imp__sub_82643308) {
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
	// lwz r11,24916(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24916);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82643348
	if (!ctx.cr0.eq) goto loc_82643348;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24916(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24916, ctx.r11.u32);
	// addi r3,r9,2704
	ctx.r3.s64 = ctx.r9.s64 + 2704;
	// bl 0x82816528
	ctx.lr = 0x82643340;
	sub_82816528(ctx, base);
	// stw r3,24912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24912, ctx.r3.u32);
	// b 0x8264334c
	goto loc_8264334C;
loc_82643348:
	// lwz r3,24912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24912);
loc_8264334C:
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

__attribute__((alias("__imp__sub_82643360"))) PPC_WEAK_FUNC(sub_82643360);
PPC_FUNC_IMPL(__imp__sub_82643360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826433b0
	ctx.lr = 0x82643380;
	sub_826433B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643394;
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

__attribute__((alias("__imp__sub_826433B0"))) PPC_WEAK_FUNC(sub_826433B0);
PPC_FUNC_IMPL(__imp__sub_826433B0) {
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
	// addi r31,r11,13024
	ctx.r31.s64 = ctx.r11.s64 + 13024;
	// lwz r11,13020(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13020);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826433f8
	if (!ctx.cr0.eq) goto loc_826433F8;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,10464
	ctx.r9.s64 = ctx.r9.s64 + 10464;
	// stw r11,13020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13020, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24880
	ctx.r3.s64 = ctx.r11.s64 + 24880;
	// bl 0x82a4c758
	ctx.lr = 0x826433F8;
	sub_82A4C758(ctx, base);
loc_826433F8:
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

__attribute__((alias("__imp__sub_82643410"))) PPC_WEAK_FUNC(sub_82643410);
PPC_FUNC_IMPL(__imp__sub_82643410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82332d50
	ctx.lr = 0x8264343C;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82643450
	if (ctx.cr0.eq) goto loc_82643450;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82643450:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82643470"))) PPC_WEAK_FUNC(sub_82643470);
PPC_FUNC_IMPL(__imp__sub_82643470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82333900
	ctx.lr = 0x82643494;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826434bc
	if (ctx.cr0.eq) goto loc_826434BC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r11,10484
	ctx.r11.s64 = ctx.r11.s64 + 10484;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x826434c4
	goto loc_826434C4;
loc_826434BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826434C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82410060
	ctx.lr = 0x826434D0;
	sub_82410060(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x828d0cb0
	ctx.lr = 0x826434E0;
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

__attribute__((alias("__imp__sub_826434F8"))) PPC_WEAK_FUNC(sub_826434F8);
PPC_FUNC_IMPL(__imp__sub_826434F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82333900
	ctx.lr = 0x8264351C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82643544
	if (ctx.cr0.eq) goto loc_82643544;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r11,12412
	ctx.r11.s64 = ctx.r11.s64 + 12412;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8264354c
	goto loc_8264354C;
loc_82643544:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8264354C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82410060
	ctx.lr = 0x82643558;
	sub_82410060(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x828d0cb0
	ctx.lr = 0x82643568;
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

__attribute__((alias("__imp__sub_82643580"))) PPC_WEAK_FUNC(sub_82643580);
PPC_FUNC_IMPL(__imp__sub_82643580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82333900
	ctx.lr = 0x826435A4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826435cc
	if (ctx.cr0.eq) goto loc_826435CC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r11,10496
	ctx.r11.s64 = ctx.r11.s64 + 10496;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x826435d4
	goto loc_826435D4;
loc_826435CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826435D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82410060
	ctx.lr = 0x826435E0;
	sub_82410060(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x828d0cb0
	ctx.lr = 0x826435F0;
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

__attribute__((alias("__imp__sub_82643608"))) PPC_WEAK_FUNC(sub_82643608);
PPC_FUNC_IMPL(__imp__sub_82643608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82333900
	ctx.lr = 0x8264362C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82643654
	if (ctx.cr0.eq) goto loc_82643654;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r11,10508
	ctx.r11.s64 = ctx.r11.s64 + 10508;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8264365c
	goto loc_8264365C;
loc_82643654:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8264365C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82410060
	ctx.lr = 0x82643668;
	sub_82410060(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x828d0cb0
	ctx.lr = 0x82643678;
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

__attribute__((alias("__imp__sub_82643690"))) PPC_WEAK_FUNC(sub_82643690);
PPC_FUNC_IMPL(__imp__sub_82643690) {
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
	// beq cr6,0x826436cc
	if (ctx.cr6.eq) goto loc_826436CC;
	// bl 0x823969b0
	ctx.lr = 0x826436B0;
	sub_823969B0(ctx, base);
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
	ctx.lr = 0x826436C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826436d0
	goto loc_826436D0;
loc_826436CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826436D0:
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

__attribute__((alias("__imp__sub_826436E8"))) PPC_WEAK_FUNC(sub_826436E8);
PPC_FUNC_IMPL(__imp__sub_826436E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826436F0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
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
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x829c80b8
	ctx.lr = 0x82643718;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826437b0
	if (!ctx.cr0.eq) goto loc_826437B0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x82643738
	if (!ctx.cr6.eq) goto loc_82643738;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_82643738:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82396850
	ctx.lr = 0x82643740;
	sub_82396850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82643760;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8264379c
	if (ctx.cr0.eq) goto loc_8264379C;
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
	// b 0x826437a0
	goto loc_826437A0;
loc_8264379C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826437A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x826437AC;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826437B0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826437CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826437E0"))) PPC_WEAK_FUNC(sub_826437E0);
PPC_FUNC_IMPL(__imp__sub_826437E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82643808
	if (!ctx.cr6.eq) goto loc_82643808;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82643844
	goto loc_82643844;
loc_82643808:
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x82396b08
	ctx.lr = 0x82643820;
	sub_82396B08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82643844:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82643860"))) PPC_WEAK_FUNC(sub_82643860);
PPC_FUNC_IMPL(__imp__sub_82643860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82643868;
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
	ctx.lr = 0x82643890;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82643938
	if (!ctx.cr0.eq) goto loc_82643938;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x826438b0
	if (!ctx.cr6.eq) goto loc_826438B0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_826438B0:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82396b08
	ctx.lr = 0x826438B8;
	sub_82396B08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826438CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x826438D8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82643924
	if (ctx.cr0.eq) goto loc_82643924;
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
	// b 0x82643928
	goto loc_82643928;
loc_82643924:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82643928:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82643934;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82643938:
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
	ctx.lr = 0x82643954;
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

__attribute__((alias("__imp__sub_82643968"))) PPC_WEAK_FUNC(sub_82643968);
PPC_FUNC_IMPL(__imp__sub_82643968) {
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
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826439c0
	if (ctx.cr6.eq) goto loc_826439C0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826439c0
	if (ctx.cr6.eq) goto loc_826439C0;
	// bl 0x82396dc0
	ctx.lr = 0x826439A4;
	sub_82396DC0(ctx, base);
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
	ctx.lr = 0x826439BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826439c4
	goto loc_826439C4;
loc_826439C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826439C4:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_826439E8"))) PPC_WEAK_FUNC(sub_826439E8);
PPC_FUNC_IMPL(__imp__sub_826439E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826439F0;
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
	ctx.lr = 0x82643A18;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82643ac0
	if (!ctx.cr0.eq) goto loc_82643AC0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x82643a38
	if (!ctx.cr6.eq) goto loc_82643A38;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_82643A38:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82396f20
	ctx.lr = 0x82643A40;
	sub_82396F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82643A60;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82643aac
	if (ctx.cr0.eq) goto loc_82643AAC;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lwz r8,200(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r9,r9,-17680
	ctx.r9.s64 = ctx.r9.s64 + -17680;
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
	// b 0x82643ab0
	goto loc_82643AB0;
loc_82643AAC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82643AB0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82643ABC;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82643AC0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643ADC;
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

__attribute__((alias("__imp__sub_82643AF0"))) PPC_WEAK_FUNC(sub_82643AF0);
PPC_FUNC_IMPL(__imp__sub_82643AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82643b6c
	if (ctx.cr6.eq) goto loc_82643B6C;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13004
	ctx.r31.s64 = ctx.r11.s64 + 13004;
	// lwz r11,12996(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12996);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82643b48
	if (!ctx.cr0.eq) goto loc_82643B48;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12656
	ctx.r9.s64 = ctx.r9.s64 + 12656;
	// stw r11,12996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12996, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25288
	ctx.r3.s64 = ctx.r11.s64 + 25288;
	// bl 0x82a4c758
	ctx.lr = 0x82643B48;
	sub_82A4C758(ctx, base);
loc_82643B48:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x82643b70
	if (!ctx.cr0.eq) goto loc_82643B70;
loc_82643B6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82643B70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82643B88"))) PPC_WEAK_FUNC(sub_82643B88);
PPC_FUNC_IMPL(__imp__sub_82643B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82643c04
	if (ctx.cr6.eq) goto loc_82643C04;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13000
	ctx.r31.s64 = ctx.r11.s64 + 13000;
	// lwz r11,13008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13008);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82643be0
	if (!ctx.cr0.eq) goto loc_82643BE0;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12700
	ctx.r9.s64 = ctx.r9.s64 + 12700;
	// stw r11,13008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13008, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25264
	ctx.r3.s64 = ctx.r11.s64 + 25264;
	// bl 0x82a4c758
	ctx.lr = 0x82643BE0;
	sub_82A4C758(ctx, base);
loc_82643BE0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643BF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x82643c08
	if (!ctx.cr0.eq) goto loc_82643C08;
loc_82643C04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82643C08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82643C20"))) PPC_WEAK_FUNC(sub_82643C20);
PPC_FUNC_IMPL(__imp__sub_82643C20) {
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
	// bl 0x8249b5a8
	ctx.lr = 0x82643C38;
	sub_8249B5A8(ctx, base);
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
	ctx.lr = 0x82643C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82643c60
	if (!ctx.cr0.eq) goto loc_82643C60;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82643C60:
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

__attribute__((alias("__imp__sub_82643C78"))) PPC_WEAK_FUNC(sub_82643C78);
PPC_FUNC_IMPL(__imp__sub_82643C78) {
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
	// beq cr6,0x82643cb4
	if (ctx.cr6.eq) goto loc_82643CB4;
	// bl 0x823981f8
	ctx.lr = 0x82643C98;
	sub_823981F8(ctx, base);
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
	ctx.lr = 0x82643CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82643cb8
	goto loc_82643CB8;
loc_82643CB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82643CB8:
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

__attribute__((alias("__imp__sub_82643CD0"))) PPC_WEAK_FUNC(sub_82643CD0);
PPC_FUNC_IMPL(__imp__sub_82643CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82643CD8;
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
	ctx.lr = 0x82643CF4;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82643d8c
	if (!ctx.cr0.eq) goto loc_82643D8C;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82396c60
	ctx.lr = 0x82643D04;
	sub_82396C60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82643D24;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82643d78
	if (ctx.cr0.eq) goto loc_82643D78;
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
	// b 0x82643d7c
	goto loc_82643D7C;
loc_82643D78:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82643D7C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82643D88;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82643D8C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,18304(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18304);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82643DB8"))) PPC_WEAK_FUNC(sub_82643DB8);
PPC_FUNC_IMPL(__imp__sub_82643DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82643DC0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
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
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// bl 0x829c80b8
	ctx.lr = 0x82643DEC;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82643e94
	if (!ctx.cr0.eq) goto loc_82643E94;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x82643e0c
	if (!ctx.cr6.eq) goto loc_82643E0C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_82643E0C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823981f8
	ctx.lr = 0x82643E14;
	sub_823981F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82643E34;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82643e80
	if (ctx.cr0.eq) goto loc_82643E80;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lwz r8,200(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r9,r9,-17680
	ctx.r9.s64 = ctx.r9.s64 + -17680;
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
	// b 0x82643e84
	goto loc_82643E84;
loc_82643E80:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82643E84:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82643E90;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82643E94:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82643EC0"))) PPC_WEAK_FUNC(sub_82643EC0);
PPC_FUNC_IMPL(__imp__sub_82643EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82643EC8;
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
	ctx.lr = 0x82643EE4;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82643f7c
	if (!ctx.cr0.eq) goto loc_82643F7C;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82398f70
	ctx.lr = 0x82643EF4;
	sub_82398F70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82643F14;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82643f68
	if (ctx.cr0.eq) goto loc_82643F68;
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
	// b 0x82643f6c
	goto loc_82643F6C;
loc_82643F68:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82643F6C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82643F78;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82643F7C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,24724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24724);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82643FA8"))) PPC_WEAK_FUNC(sub_82643FA8);
PPC_FUNC_IMPL(__imp__sub_82643FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82643FB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,116
	ctx.r3.s64 = 116;
	// lwz r27,-6056(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82833108
	ctx.lr = 0x82643FC8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82643fe0
	if (ctx.cr0.eq) goto loc_82643FE0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823d0a48
	ctx.lr = 0x82643FD8;
	sub_823D0A48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82643fe4
	goto loc_82643FE4;
loc_82643FE0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82643FE4:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826440ac
	if (ctx.cr6.eq) goto loc_826440AC;
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
	// beq cr6,0x826440ac
	if (ctx.cr6.eq) goto loc_826440AC;
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
	ctx.lr = 0x82644040;
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
	ctx.lr = 0x82644058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x826440ac
	if (!ctx.cr6.eq) goto loc_826440AC;
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
	ctx.lr = 0x82644080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826440a0
	if (ctx.cr6.eq) goto loc_826440A0;
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
loc_826440A0:
	// stw r27,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82644140
	goto loc_82644140;
loc_826440AC:
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
	ctx.lr = 0x826440CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82816528
	ctx.lr = 0x826440D0;
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
	ctx.lr = 0x82644104;
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
	ctx.lr = 0x82644124;
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
	ctx.lr = 0x82644140;
	sub_829E3C18(ctx, base);
loc_82644140:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644148"))) PPC_WEAK_FUNC(sub_82644148);
PPC_FUNC_IMPL(__imp__sub_82644148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82644150;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x82333900
	ctx.lr = 0x82644170;
	sub_82333900(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x826441b4
	if (ctx.cr0.eq) goto loc_826441B4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,16
	ctx.r9.s64 = 16;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r10,10520
	ctx.r10.s64 = ctx.r10.s64 + 10520;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stvx128 v0,r6,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r11.u32);
	// bl 0x8277b880
	ctx.lr = 0x826441A4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r11,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r11.u32);
	// b 0x826441b8
	goto loc_826441B8;
loc_826441B4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_826441B8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x826441C0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826441e4
	if (ctx.cr0.eq) goto loc_826441E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82616090
	ctx.lr = 0x826441DC;
	sub_82616090(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x826441e8
	goto loc_826441E8;
loc_826441E4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_826441E8:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r31,r11,-14184
	ctx.r31.s64 = ctx.r11.s64 + -14184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-14184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14184);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r28,420
	ctx.r3.s64 = ctx.r28.s64 + 420;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x82644218;
	sub_82332D50(ctx, base);
	// lwz r11,432(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264422c
	if (ctx.cr0.eq) goto loc_8264422C;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_8264422C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644248"))) PPC_WEAK_FUNC(sub_82644248);
PPC_FUNC_IMPL(__imp__sub_82644248) {
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
	// beq cr6,0x8264428c
	if (ctx.cr6.eq) goto loc_8264428C;
	// bl 0x82643270
	ctx.lr = 0x82644268;
	sub_82643270(ctx, base);
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
	ctx.lr = 0x82644280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82644290
	if (!ctx.cr0.eq) goto loc_82644290;
loc_8264428C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82644290:
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

__attribute__((alias("__imp__sub_826442A8"))) PPC_WEAK_FUNC(sub_826442A8);
PPC_FUNC_IMPL(__imp__sub_826442A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826442B0;
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
	ctx.lr = 0x826442D8;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82644380
	if (!ctx.cr0.eq) goto loc_82644380;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x826442f8
	if (!ctx.cr6.eq) goto loc_826442F8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_826442F8:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82396dc0
	ctx.lr = 0x82644300;
	sub_82396DC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82644320;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8264436c
	if (ctx.cr0.eq) goto loc_8264436C;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lwz r8,200(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r9,r9,-17680
	ctx.r9.s64 = ctx.r9.s64 + -17680;
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
	// b 0x82644370
	goto loc_82644370;
loc_8264436C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82644370:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x8264437C;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82644380:
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
	ctx.lr = 0x8264439C;
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

__attribute__((alias("__imp__sub_826443B0"))) PPC_WEAK_FUNC(sub_826443B0);
PPC_FUNC_IMPL(__imp__sub_826443B0) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-6888
	ctx.r11.s64 = ctx.r11.s64 + -6888;
	// addi r10,r10,-6368
	ctx.r10.s64 = ctx.r10.s64 + -6368;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r8,-10732
	ctx.r11.s64 = ctx.r8.s64 + -10732;
	// addi r9,r9,10412
	ctx.r9.s64 = ctx.r9.s64 + 10412;
	// addi r10,r7,-17796
	ctx.r10.s64 = ctx.r7.s64 + -17796;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// bl 0x823e9df8
	ctx.lr = 0x82644408;
	sub_823E9DF8(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823e9cf0
	ctx.lr = 0x82644414;
	sub_823E9CF0(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823e9618
	ctx.lr = 0x82644420;
	sub_823E9618(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823cf608
	ctx.lr = 0x8264442C;
	sub_823CF608(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823d0930
	ctx.lr = 0x82644438;
	sub_823D0930(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,10112
	ctx.r11.s64 = ctx.r11.s64 + 10112;
	// addi r10,r10,10288
	ctx.r10.s64 = ctx.r10.s64 + 10288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r9,r9,10344
	ctx.r9.s64 = ctx.r9.s64 + 10344;
	// addi r8,r8,-14708
	ctx.r8.s64 = ctx.r8.s64 + -14708;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// addi r7,r7,-16484
	ctx.r7.s64 = ctx.r7.s64 + -16484;
	// addi r6,r6,-22336
	ctx.r6.s64 = ctx.r6.s64 + -22336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r11,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r11.u32);
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stwx r6,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_826444D0"))) PPC_WEAK_FUNC(sub_826444D0);
PPC_FUNC_IMPL(__imp__sub_826444D0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826444F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82644510"))) PPC_WEAK_FUNC(sub_82644510);
PPC_FUNC_IMPL(__imp__sub_82644510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82644538
	if (ctx.cr0.eq) goto loc_82644538;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82644538
	if (ctx.cr6.eq) goto loc_82644538;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82644558
	if (ctx.cr6.eq) goto loc_82644558;
	// b 0x82644548
	goto loc_82644548;
loc_82644538:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82644558
	if (!ctx.cr0.eq) goto loc_82644558;
loc_82644548:
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_82644558:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82644560"))) PPC_WEAK_FUNC(sub_82644560);
PPC_FUNC_IMPL(__imp__sub_82644560) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8243c740
	sub_8243C740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644570"))) PPC_WEAK_FUNC(sub_82644570);
PPC_FUNC_IMPL(__imp__sub_82644570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826445b8
	if (ctx.cr0.eq) goto loc_826445B8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826445b8
	if (ctx.cr6.eq) goto loc_826445B8;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x826445c8
	if (!ctx.cr6.eq) goto loc_826445C8;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x826445c8
	if (!ctx.cr6.eq) goto loc_826445C8;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x826445e8
	if (ctx.cr6.eq) goto loc_826445E8;
	// b 0x826445c8
	goto loc_826445C8;
loc_826445B8:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826445e8
	if (!ctx.cr0.eq) goto loc_826445E8;
loc_826445C8:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_826445E8:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826445F0"))) PPC_WEAK_FUNC(sub_826445F0);
PPC_FUNC_IMPL(__imp__sub_826445F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82644618"))) PPC_WEAK_FUNC(sub_82644618);
PPC_FUNC_IMPL(__imp__sub_82644618) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// lwz r11,1084(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1084);
	// bne cr6,0x82644648
	if (!ctx.cr6.eq) goto loc_82644648;
	// lwz r6,1768(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1768);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82644648:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82644650"))) PPC_WEAK_FUNC(sub_82644650);
PPC_FUNC_IMPL(__imp__sub_82644650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82644688
	if (ctx.cr6.eq) goto loc_82644688;
	// bl 0x82644aa0
	ctx.lr = 0x82644678;
	sub_82644AA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82644688
	if (!ctx.cr6.eq) goto loc_82644688;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82644694
	goto loc_82644694;
loc_82644688:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x82644694;
	sub_82333C70(ctx, base);
loc_82644694:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826446B0"))) PPC_WEAK_FUNC(sub_826446B0);
PPC_FUNC_IMPL(__imp__sub_826446B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82644aa0
	sub_82644AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826446B8"))) PPC_WEAK_FUNC(sub_826446B8);
PPC_FUNC_IMPL(__imp__sub_826446B8) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82833108
	ctx.lr = 0x826446D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8264474c
	if (ctx.cr0.eq) goto loc_8264474C;
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
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,10528
	ctx.r9.s64 = ctx.r9.s64 + 10528;
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
	// b 0x82644750
	goto loc_82644750;
loc_8264474C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82644750:
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

__attribute__((alias("__imp__sub_82644768"))) PPC_WEAK_FUNC(sub_82644768);
PPC_FUNC_IMPL(__imp__sub_82644768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82644aa0
	ctx.lr = 0x82644788;
	sub_82644AA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8264479c
	if (ctx.cr6.eq) goto loc_8264479C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8264479C;
	sub_82333B08(ctx, base);
loc_8264479C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826447B8"))) PPC_WEAK_FUNC(sub_826447B8);
PPC_FUNC_IMPL(__imp__sub_826447B8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82438430
	ctx.lr = 0x826447D4;
	sub_82438430(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826447F0;
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

__attribute__((alias("__imp__sub_82644808"))) PPC_WEAK_FUNC(sub_82644808);
PPC_FUNC_IMPL(__imp__sub_82644808) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82644848"))) PPC_WEAK_FUNC(sub_82644848);
PPC_FUNC_IMPL(__imp__sub_82644848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8264486c
	if (ctx.cr0.eq) goto loc_8264486C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8264486c
	if (ctx.cr6.eq) goto loc_8264486C;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// b 0x82644870
	goto loc_82644870;
loc_8264486C:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_82644870:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82644890
	if (!ctx.cr6.eq) goto loc_82644890;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_82644890:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82644898"))) PPC_WEAK_FUNC(sub_82644898);
PPC_FUNC_IMPL(__imp__sub_82644898) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x824f9ba8
	sub_824F9BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826448A8"))) PPC_WEAK_FUNC(sub_826448A8);
PPC_FUNC_IMPL(__imp__sub_826448A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826448f0
	if (ctx.cr0.eq) goto loc_826448F0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826448f0
	if (ctx.cr6.eq) goto loc_826448F0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82644900
	if (!ctx.cr6.eq) goto loc_82644900;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82644900
	if (!ctx.cr6.eq) goto loc_82644900;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82644920
	if (ctx.cr6.eq) goto loc_82644920;
	// b 0x82644900
	goto loc_82644900;
loc_826448F0:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82644920
	if (!ctx.cr0.eq) goto loc_82644920;
loc_82644900:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_82644920:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82644928"))) PPC_WEAK_FUNC(sub_82644928);
PPC_FUNC_IMPL(__imp__sub_82644928) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,12388
	ctx.r11.s64 = ctx.r11.s64 + 12388;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82644954
	if (ctx.cr0.eq) goto loc_82644954;
	// bl 0x82332db8
	ctx.lr = 0x82644954;
	sub_82332DB8(ctx, base);
loc_82644954:
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

__attribute__((alias("__imp__sub_82644970"))) PPC_WEAK_FUNC(sub_82644970);
PPC_FUNC_IMPL(__imp__sub_82644970) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82833108
	ctx.lr = 0x82644988;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826449dc
	if (ctx.cr0.eq) goto loc_826449DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82644998;
	sub_82833180(ctx, base);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lis r8,-8531
	ctx.r8.s64 = -559087616;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r9,10528
	ctx.r9.s64 = ctx.r9.s64 + 10528;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r8,r8,47806
	ctx.r8.u64 = ctx.r8.u64 | 47806;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// std r7,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r7.u64);
	// b 0x826449e0
	goto loc_826449E0;
loc_826449DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826449E0:
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

__attribute__((alias("__imp__sub_826449F8"))) PPC_WEAK_FUNC(sub_826449F8);
PPC_FUNC_IMPL(__imp__sub_826449F8) {
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
	// lwz r11,24900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24900);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82644a38
	if (!ctx.cr0.eq) goto loc_82644A38;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,24900(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24900, ctx.r11.u32);
	// addi r3,r9,4840
	ctx.r3.s64 = ctx.r9.s64 + 4840;
	// bl 0x82816528
	ctx.lr = 0x82644A30;
	sub_82816528(ctx, base);
	// stw r3,24896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24896, ctx.r3.u32);
	// b 0x82644a3c
	goto loc_82644A3C;
loc_82644A38:
	// lwz r3,24896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24896);
loc_82644A3C:
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

__attribute__((alias("__imp__sub_82644A50"))) PPC_WEAK_FUNC(sub_82644A50);
PPC_FUNC_IMPL(__imp__sub_82644A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82644aa0
	ctx.lr = 0x82644A70;
	sub_82644AA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644A84;
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

__attribute__((alias("__imp__sub_82644AA0"))) PPC_WEAK_FUNC(sub_82644AA0);
PPC_FUNC_IMPL(__imp__sub_82644AA0) {
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
	// addi r31,r11,24904
	ctx.r31.s64 = ctx.r11.s64 + 24904;
	// lwz r11,24908(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24908);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82644ae8
	if (!ctx.cr0.eq) goto loc_82644AE8;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,10632
	ctx.r9.s64 = ctx.r9.s64 + 10632;
	// stw r11,24908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24908, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25240
	ctx.r3.s64 = ctx.r11.s64 + 25240;
	// bl 0x82a4c758
	ctx.lr = 0x82644AE8;
	sub_82A4C758(ctx, base);
loc_82644AE8:
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

__attribute__((alias("__imp__sub_82644B00"))) PPC_WEAK_FUNC(sub_82644B00);
PPC_FUNC_IMPL(__imp__sub_82644B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82644B08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82833108
	ctx.lr = 0x82644B1C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82644b34
	if (ctx.cr0.eq) goto loc_82644B34;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823d0d18
	ctx.lr = 0x82644B2C;
	sub_823D0D18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82644b38
	goto loc_82644B38;
loc_82644B34:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82644B38:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82644c08
	if (ctx.cr6.eq) goto loc_82644C08;
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
	// beq cr6,0x82644c08
	if (ctx.cr6.eq) goto loc_82644C08;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r27,-4(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82644c08
	if (!ctx.cr6.eq) goto loc_82644C08;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82644bfc
	if (ctx.cr6.eq) goto loc_82644BFC;
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
loc_82644BFC:
	// stw r28,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82644ca8
	goto loc_82644CA8;
loc_82644C08:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82816528
	ctx.lr = 0x82644C2C;
	sub_82816528(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x829e3c18
	ctx.lr = 0x82644CA8;
	sub_829E3C18(ctx, base);
loc_82644CA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644CB0"))) PPC_WEAK_FUNC(sub_82644CB0);
PPC_FUNC_IMPL(__imp__sub_82644CB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8261c378
	sub_8261C378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644CB8"))) PPC_WEAK_FUNC(sub_82644CB8);
PPC_FUNC_IMPL(__imp__sub_82644CB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8261a9d0
	sub_8261A9D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644CC0"))) PPC_WEAK_FUNC(sub_82644CC0);
PPC_FUNC_IMPL(__imp__sub_82644CC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8261c4a8
	sub_8261C4A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644CC8"))) PPC_WEAK_FUNC(sub_82644CC8);
PPC_FUNC_IMPL(__imp__sub_82644CC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82644CD8"))) PPC_WEAK_FUNC(sub_82644CD8);
PPC_FUNC_IMPL(__imp__sub_82644CD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82644CE8"))) PPC_WEAK_FUNC(sub_82644CE8);
PPC_FUNC_IMPL(__imp__sub_82644CE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8261aaa0
	sub_8261AAA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644CF0"))) PPC_WEAK_FUNC(sub_82644CF0);
PPC_FUNC_IMPL(__imp__sub_82644CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82644D00"))) PPC_WEAK_FUNC(sub_82644D00);
PPC_FUNC_IMPL(__imp__sub_82644D00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8261c378
	sub_8261C378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644D08"))) PPC_WEAK_FUNC(sub_82644D08);
PPC_FUNC_IMPL(__imp__sub_82644D08) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1476(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1476);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82644D18"))) PPC_WEAK_FUNC(sub_82644D18);
PPC_FUNC_IMPL(__imp__sub_82644D18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8261bb70
	sub_8261BB70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644D20"))) PPC_WEAK_FUNC(sub_82644D20);
PPC_FUNC_IMPL(__imp__sub_82644D20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8261aaa0
	sub_8261AAA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644D28"))) PPC_WEAK_FUNC(sub_82644D28);
PPC_FUNC_IMPL(__imp__sub_82644D28) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82644D38"))) PPC_WEAK_FUNC(sub_82644D38);
PPC_FUNC_IMPL(__imp__sub_82644D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82644D40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// beq cr6,0x82644dec
	if (ctx.cr6.eq) goto loc_82644DEC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82644e7c
	if (!ctx.cr6.gt) goto loc_82644E7C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82644D74:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// beq 0x82644dcc
	if (ctx.cr0.eq) goto loc_82644DCC;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x82644dd4
	goto loc_82644DD4;
loc_82644DCC:
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_82644DD4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82644d74
	if (ctx.cr6.lt) goto loc_82644D74;
	// b 0x82644e7c
	goto loc_82644E7C;
loc_82644DEC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82644e7c
	if (!ctx.cr6.gt) goto loc_82644E7C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82644DFC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x82644e34
	if (!ctx.cr6.eq) goto loc_82644E34;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82644e68
	goto loc_82644E68;
loc_82644E34:
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_82644E68:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82644dfc
	if (ctx.cr6.lt) goto loc_82644DFC;
loc_82644E7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644E88"))) PPC_WEAK_FUNC(sub_82644E88);
PPC_FUNC_IMPL(__imp__sub_82644E88) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1848, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82644E90"))) PPC_WEAK_FUNC(sub_82644E90);
PPC_FUNC_IMPL(__imp__sub_82644E90) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x82644EA4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82644ec4
	if (ctx.cr0.eq) goto loc_82644EC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,12676
	ctx.r11.s64 = ctx.r10.s64 + 12676;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82644ec8
	goto loc_82644EC8;
loc_82644EC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82644EC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82644ED8"))) PPC_WEAK_FUNC(sub_82644ED8);
PPC_FUNC_IMPL(__imp__sub_82644ED8) {
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
	// lwz r3,13212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82644f20
	if (!ctx.cr6.eq) goto loc_82644F20;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-27064
	ctx.r3.s64 = ctx.r10.s64 + -27064;
	// bl 0x82a4c7d8
	ctx.lr = 0x82644F0C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82644F14;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82644F1C;
	sub_82816528(ctx, base);
	// stw r3,13212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13212, ctx.r3.u32);
loc_82644F20:
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

__attribute__((alias("__imp__sub_82644F38"))) PPC_WEAK_FUNC(sub_82644F38);
PPC_FUNC_IMPL(__imp__sub_82644F38) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x82644F4C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82644f6c
	if (ctx.cr0.eq) goto loc_82644F6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,12632
	ctx.r11.s64 = ctx.r10.s64 + 12632;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82644f70
	goto loc_82644F70;
loc_82644F6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82644F70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82644F80"))) PPC_WEAK_FUNC(sub_82644F80);
PPC_FUNC_IMPL(__imp__sub_82644F80) {
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
	// lwz r3,13208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82644fc8
	if (!ctx.cr6.eq) goto loc_82644FC8;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-27116
	ctx.r3.s64 = ctx.r10.s64 + -27116;
	// bl 0x82a4c7d8
	ctx.lr = 0x82644FB4;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82644FBC;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82644FC4;
	sub_82816528(ctx, base);
	// stw r3,13208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13208, ctx.r3.u32);
loc_82644FC8:
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

__attribute__((alias("__imp__sub_82644FE0"))) PPC_WEAK_FUNC(sub_82644FE0);
PPC_FUNC_IMPL(__imp__sub_82644FE0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264500C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645020"))) PPC_WEAK_FUNC(sub_82645020);
PPC_FUNC_IMPL(__imp__sub_82645020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82645044
	if (ctx.cr0.eq) goto loc_82645044;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82645044
	if (ctx.cr6.eq) goto loc_82645044;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// b 0x82645048
	goto loc_82645048;
loc_82645044:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_82645048:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82645068
	if (!ctx.cr6.eq) goto loc_82645068;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_82645068:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645070"))) PPC_WEAK_FUNC(sub_82645070);
PPC_FUNC_IMPL(__imp__sub_82645070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,10720
	ctx.r3.s64 = ctx.r11.s64 + 10720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645080"))) PPC_WEAK_FUNC(sub_82645080);
PPC_FUNC_IMPL(__imp__sub_82645080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826450d0
	ctx.lr = 0x826450A0;
	sub_826450D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826450b4
	if (ctx.cr6.eq) goto loc_826450B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x826450B4;
	sub_82333B08(ctx, base);
loc_826450B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826450D0"))) PPC_WEAK_FUNC(sub_826450D0);
PPC_FUNC_IMPL(__imp__sub_826450D0) {
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
	// addi r31,r11,24892
	ctx.r31.s64 = ctx.r11.s64 + 24892;
	// lwz r11,-19388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19388);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82645118
	if (!ctx.cr0.eq) goto loc_82645118;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12800
	ctx.r9.s64 = ctx.r9.s64 + 12800;
	// stw r11,-19388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19388, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25312
	ctx.r3.s64 = ctx.r11.s64 + 25312;
	// bl 0x82a4c758
	ctx.lr = 0x82645118;
	sub_82A4C758(ctx, base);
loc_82645118:
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

__attribute__((alias("__imp__sub_82645130"))) PPC_WEAK_FUNC(sub_82645130);
PPC_FUNC_IMPL(__imp__sub_82645130) {
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
	// lwz r11,24888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24888);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82645170
	if (!ctx.cr0.eq) goto loc_82645170;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24888, ctx.r11.u32);
	// addi r3,r9,10720
	ctx.r3.s64 = ctx.r9.s64 + 10720;
	// bl 0x82816528
	ctx.lr = 0x82645168;
	sub_82816528(ctx, base);
	// stw r3,24884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24884, ctx.r3.u32);
	// b 0x82645174
	goto loc_82645174;
loc_82645170:
	// lwz r3,24884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24884);
loc_82645174:
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

__attribute__((alias("__imp__sub_82645188"))) PPC_WEAK_FUNC(sub_82645188);
PPC_FUNC_IMPL(__imp__sub_82645188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826450d0
	ctx.lr = 0x826451A8;
	sub_826450D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826451BC;
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

__attribute__((alias("__imp__sub_826451D8"))) PPC_WEAK_FUNC(sub_826451D8);
PPC_FUNC_IMPL(__imp__sub_826451D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82645210
	if (ctx.cr6.eq) goto loc_82645210;
	// bl 0x826450d0
	ctx.lr = 0x82645200;
	sub_826450D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82645210
	if (!ctx.cr6.eq) goto loc_82645210;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8264521c
	goto loc_8264521C;
loc_82645210:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8264521C;
	sub_82333C70(ctx, base);
loc_8264521C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645238"))) PPC_WEAK_FUNC(sub_82645238);
PPC_FUNC_IMPL(__imp__sub_82645238) {
	PPC_FUNC_PROLOGUE();
	// b 0x826450d0
	sub_826450D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82645240"))) PPC_WEAK_FUNC(sub_82645240);
PPC_FUNC_IMPL(__imp__sub_82645240) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82833108
	ctx.lr = 0x8264525C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826452d4
	if (ctx.cr0.eq) goto loc_826452D4;
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
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,12720
	ctx.r9.s64 = ctx.r9.s64 + 12720;
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
	// b 0x826452d8
	goto loc_826452D8;
loc_826452D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826452D8:
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

__attribute__((alias("__imp__sub_826452F0"))) PPC_WEAK_FUNC(sub_826452F0);
PPC_FUNC_IMPL(__imp__sub_826452F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8264531C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82645340;
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

__attribute__((alias("__imp__sub_82645358"))) PPC_WEAK_FUNC(sub_82645358);
PPC_FUNC_IMPL(__imp__sub_82645358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bge cr6,0x8264536c
	if (!ctx.cr6.lt) goto loc_8264536C;
	// neg r11,r4
	ctx.r11.s64 = -ctx.r4.s64;
loc_8264536C:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f12,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82645378:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82645384
	if (ctx.cr0.eq) goto loc_82645384;
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82645384:
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82645394
	if (ctx.cr0.eq) goto loc_82645394;
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// b 0x82645378
	goto loc_82645378;
loc_82645394:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x826453a0
	if (!ctx.cr6.lt) goto loc_826453A0;
	// fdivs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
loc_826453A0:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826453A8"))) PPC_WEAK_FUNC(sub_826453A8);
PPC_FUNC_IMPL(__imp__sub_826453A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826453B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82833180
	ctx.lr = 0x826453C8;
	sub_82833180(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,12288
	ctx.r10.s64 = ctx.r10.s64 + 12288;
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r8,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r8.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82645434
	if (!ctx.cr6.lt) goto loc_82645434;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82645434;
	sub_82332C38(ctx, base);
loc_82645434:
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x82645440;
	sub_82410060(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82645450"))) PPC_WEAK_FUNC(sub_82645450);
PPC_FUNC_IMPL(__imp__sub_82645450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8239d768
	ctx.lr = 0x82645474;
	sub_8239D768(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,14296
	ctx.r11.s64 = ctx.r11.s64 + 14296;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82833238
	ctx.lr = 0x82645490;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826454a0
	if (ctx.cr0.eq) goto loc_826454A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826454A0;
	sub_82332DB8(ctx, base);
loc_826454A0:
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

__attribute__((alias("__imp__sub_826454C0"))) PPC_WEAK_FUNC(sub_826454C0);
PPC_FUNC_IMPL(__imp__sub_826454C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,10652
	ctx.r3.s64 = ctx.r11.s64 + 10652;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826454D0"))) PPC_WEAK_FUNC(sub_826454D0);
PPC_FUNC_IMPL(__imp__sub_826454D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82645520
	ctx.lr = 0x826454F0;
	sub_82645520(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82645504
	if (ctx.cr6.eq) goto loc_82645504;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x82645504;
	sub_82333B08(ctx, base);
loc_82645504:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645520"))) PPC_WEAK_FUNC(sub_82645520);
PPC_FUNC_IMPL(__imp__sub_82645520) {
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
	// addi r31,r11,13012
	ctx.r31.s64 = ctx.r11.s64 + 13012;
	// lwz r11,13016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13016);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82645568
	if (!ctx.cr0.eq) goto loc_82645568;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12368
	ctx.r9.s64 = ctx.r9.s64 + 12368;
	// stw r11,13016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13016, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25336
	ctx.r3.s64 = ctx.r11.s64 + 25336;
	// bl 0x82a4c758
	ctx.lr = 0x82645568;
	sub_82A4C758(ctx, base);
loc_82645568:
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

__attribute__((alias("__imp__sub_82645580"))) PPC_WEAK_FUNC(sub_82645580);
PPC_FUNC_IMPL(__imp__sub_82645580) {
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
	// lwz r11,24880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24880);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826455c0
	if (!ctx.cr0.eq) goto loc_826455C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24880, ctx.r11.u32);
	// addi r3,r9,10652
	ctx.r3.s64 = ctx.r9.s64 + 10652;
	// bl 0x82816528
	ctx.lr = 0x826455B8;
	sub_82816528(ctx, base);
	// stw r3,24876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24876, ctx.r3.u32);
	// b 0x826455c4
	goto loc_826455C4;
loc_826455C0:
	// lwz r3,24876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24876);
loc_826455C4:
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

__attribute__((alias("__imp__sub_826455D8"))) PPC_WEAK_FUNC(sub_826455D8);
PPC_FUNC_IMPL(__imp__sub_826455D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82645520
	ctx.lr = 0x826455F8;
	sub_82645520(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264560C;
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

__attribute__((alias("__imp__sub_82645628"))) PPC_WEAK_FUNC(sub_82645628);
PPC_FUNC_IMPL(__imp__sub_82645628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82645660
	if (ctx.cr6.eq) goto loc_82645660;
	// bl 0x82645520
	ctx.lr = 0x82645650;
	sub_82645520(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82645660
	if (!ctx.cr6.eq) goto loc_82645660;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8264566c
	goto loc_8264566C;
loc_82645660:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8264566C;
	sub_82333C70(ctx, base);
loc_8264566C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645688"))) PPC_WEAK_FUNC(sub_82645688);
PPC_FUNC_IMPL(__imp__sub_82645688) {
	PPC_FUNC_PROLOGUE();
	// b 0x82645520
	sub_82645520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82645690"))) PPC_WEAK_FUNC(sub_82645690);
PPC_FUNC_IMPL(__imp__sub_82645690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82833108
	ctx.lr = 0x826456B0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82645718
	if (ctx.cr0.eq) goto loc_82645718;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,14296
	ctx.r10.s64 = ctx.r10.s64 + 14296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r11,12288
	ctx.r11.s64 = ctx.r11.s64 + 12288;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x82645710;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8264571c
	goto loc_8264571C;
loc_82645718:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264571C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645738"))) PPC_WEAK_FUNC(sub_82645738);
PPC_FUNC_IMPL(__imp__sub_82645738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82645740;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x824096c0
	ctx.lr = 0x82645750;
	sub_824096C0(ctx, base);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826457e0
	if (!ctx.cr6.gt) goto loc_826457E0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
loc_82645774:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// li r3,156
	ctx.r3.s64 = 156;
	// lwzx r27,r11,r30
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82333900
	ctx.lr = 0x82645784;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826457b8
	if (ctx.cr0.eq) goto loc_826457B8;
	// lwz r11,13160(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13160);
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r24,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r31,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r31.u32);
	// stw r31,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r31.u32);
	// b 0x826457bc
	goto loc_826457BC;
loc_826457B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_826457BC:
	// stw r27,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,13156(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13156);
	// bl 0x8281abd8
	ctx.lr = 0x826457CC;
	sub_8281ABD8(ctx, base);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82645774
	if (ctx.cr6.lt) goto loc_82645774;
loc_826457E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826457E8"))) PPC_WEAK_FUNC(sub_826457E8);
PPC_FUNC_IMPL(__imp__sub_826457E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826457F0;
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
	// beq cr6,0x8264584c
	if (ctx.cr6.eq) goto loc_8264584C;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13000
	ctx.r31.s64 = ctx.r11.s64 + 13000;
	// lwz r11,13008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13008);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8264583c
	if (!ctx.cr0.eq) goto loc_8264583C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12700
	ctx.r9.s64 = ctx.r9.s64 + 12700;
	// stw r11,13008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13008, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25264
	ctx.r3.s64 = ctx.r11.s64 + 25264;
	// bl 0x82a4c758
	ctx.lr = 0x8264583C;
	sub_82A4C758(ctx, base);
loc_8264583C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8264584c
	if (!ctx.cr6.eq) goto loc_8264584C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82645858
	goto loc_82645858;
loc_8264584C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82646398
	ctx.lr = 0x82645858;
	sub_82646398(ctx, base);
loc_82645858:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82645860"))) PPC_WEAK_FUNC(sub_82645860);
PPC_FUNC_IMPL(__imp__sub_82645860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82645868;
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
	// addi r31,r11,13000
	ctx.r31.s64 = ctx.r11.s64 + 13000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13008);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826458ac
	if (!ctx.cr0.eq) goto loc_826458AC;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12700
	ctx.r9.s64 = ctx.r9.s64 + 12700;
	// stw r11,13008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13008, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25264
	ctx.r3.s64 = ctx.r11.s64 + 25264;
	// bl 0x82a4c758
	ctx.lr = 0x826458AC;
	sub_82A4C758(ctx, base);
loc_826458AC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x826458c0
	if (ctx.cr6.eq) goto loc_826458C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82646278
	ctx.lr = 0x826458C0;
	sub_82646278(ctx, base);
loc_826458C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826458C8"))) PPC_WEAK_FUNC(sub_826458C8);
PPC_FUNC_IMPL(__imp__sub_826458C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826458D0;
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
	// beq cr6,0x8264592c
	if (ctx.cr6.eq) goto loc_8264592C;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13004
	ctx.r31.s64 = ctx.r11.s64 + 13004;
	// lwz r11,12996(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12996);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8264591c
	if (!ctx.cr0.eq) goto loc_8264591C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12656
	ctx.r9.s64 = ctx.r9.s64 + 12656;
	// stw r11,12996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12996, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25288
	ctx.r3.s64 = ctx.r11.s64 + 25288;
	// bl 0x82a4c758
	ctx.lr = 0x8264591C;
	sub_82A4C758(ctx, base);
loc_8264591C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8264592c
	if (!ctx.cr6.eq) goto loc_8264592C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82645938
	goto loc_82645938;
loc_8264592C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82646398
	ctx.lr = 0x82645938;
	sub_82646398(ctx, base);
loc_82645938:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82645940"))) PPC_WEAK_FUNC(sub_82645940);
PPC_FUNC_IMPL(__imp__sub_82645940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82645948;
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
	// addi r31,r11,13004
	ctx.r31.s64 = ctx.r11.s64 + 13004;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12996(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12996);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8264598c
	if (!ctx.cr0.eq) goto loc_8264598C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12656
	ctx.r9.s64 = ctx.r9.s64 + 12656;
	// stw r11,12996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12996, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25288
	ctx.r3.s64 = ctx.r11.s64 + 25288;
	// bl 0x82a4c758
	ctx.lr = 0x8264598C;
	sub_82A4C758(ctx, base);
loc_8264598C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x826459a0
	if (ctx.cr6.eq) goto loc_826459A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82646278
	ctx.lr = 0x826459A0;
	sub_82646278(ctx, base);
loc_826459A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826459A8"))) PPC_WEAK_FUNC(sub_826459A8);
PPC_FUNC_IMPL(__imp__sub_826459A8) {
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
	// bl 0x82833180
	ctx.lr = 0x826459C0;
	sub_82833180(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,12496
	ctx.r10.s64 = ctx.r10.s64 + 12496;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82645A08"))) PPC_WEAK_FUNC(sub_82645A08);
PPC_FUNC_IMPL(__imp__sub_82645A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82645cb0
	ctx.lr = 0x82645A28;
	sub_82645CB0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82645a38
	if (ctx.cr0.eq) goto loc_82645A38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82645A38;
	sub_82332DB8(ctx, base);
loc_82645A38:
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

__attribute__((alias("__imp__sub_82645A58"))) PPC_WEAK_FUNC(sub_82645A58);
PPC_FUNC_IMPL(__imp__sub_82645A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,10696
	ctx.r3.s64 = ctx.r11.s64 + 10696;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645A68"))) PPC_WEAK_FUNC(sub_82645A68);
PPC_FUNC_IMPL(__imp__sub_82645A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82645ac8
	ctx.lr = 0x82645A88;
	sub_82645AC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82645a98
	if (!ctx.cr6.eq) goto loc_82645A98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82645aac
	goto loc_82645AAC;
loc_82645A98:
	// bl 0x82333d20
	ctx.lr = 0x82645A9C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82645aac
	if (ctx.cr6.eq) goto loc_82645AAC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82645AAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645AC8"))) PPC_WEAK_FUNC(sub_82645AC8);
PPC_FUNC_IMPL(__imp__sub_82645AC8) {
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
	// addi r31,r11,13148
	ctx.r31.s64 = ctx.r11.s64 + 13148;
	// lwz r11,13152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13152);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82645b10
	if (!ctx.cr0.eq) goto loc_82645B10;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12568
	ctx.r9.s64 = ctx.r9.s64 + 12568;
	// stw r11,13152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13152, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25360
	ctx.r3.s64 = ctx.r11.s64 + 25360;
	// bl 0x82a4c758
	ctx.lr = 0x82645B10;
	sub_82A4C758(ctx, base);
loc_82645B10:
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

__attribute__((alias("__imp__sub_82645B28"))) PPC_WEAK_FUNC(sub_82645B28);
PPC_FUNC_IMPL(__imp__sub_82645B28) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x82645B3C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82645b4c
	if (ctx.cr0.eq) goto loc_82645B4C;
	// bl 0x826459a8
	ctx.lr = 0x82645B48;
	sub_826459A8(ctx, base);
	// b 0x82645b50
	goto loc_82645B50;
loc_82645B4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82645B50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645B60"))) PPC_WEAK_FUNC(sub_82645B60);
PPC_FUNC_IMPL(__imp__sub_82645B60) {
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
	// lwz r11,24872(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24872);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82645ba0
	if (!ctx.cr0.eq) goto loc_82645BA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24872, ctx.r11.u32);
	// addi r3,r9,10696
	ctx.r3.s64 = ctx.r9.s64 + 10696;
	// bl 0x82816528
	ctx.lr = 0x82645B98;
	sub_82816528(ctx, base);
	// stw r3,24868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24868, ctx.r3.u32);
	// b 0x82645ba4
	goto loc_82645BA4;
loc_82645BA0:
	// lwz r3,24868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24868);
loc_82645BA4:
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

__attribute__((alias("__imp__sub_82645BB8"))) PPC_WEAK_FUNC(sub_82645BB8);
PPC_FUNC_IMPL(__imp__sub_82645BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82645ac8
	ctx.lr = 0x82645BD8;
	sub_82645AC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82645BEC;
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

__attribute__((alias("__imp__sub_82645C08"))) PPC_WEAK_FUNC(sub_82645C08);
PPC_FUNC_IMPL(__imp__sub_82645C08) {
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
	// beq cr6,0x82645c48
	if (ctx.cr6.eq) goto loc_82645C48;
	// bl 0x82645ac8
	ctx.lr = 0x82645C28;
	sub_82645AC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82645c38
	if (!ctx.cr6.eq) goto loc_82645C38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82645c4c
	goto loc_82645C4C;
loc_82645C38:
	// bl 0x82333d20
	ctx.lr = 0x82645C3C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82645c4c
	if (ctx.cr6.eq) goto loc_82645C4C;
loc_82645C48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82645C4C:
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

__attribute__((alias("__imp__sub_82645C60"))) PPC_WEAK_FUNC(sub_82645C60);
PPC_FUNC_IMPL(__imp__sub_82645C60) {
	PPC_FUNC_PROLOGUE();
	// b 0x82645ac8
	sub_82645AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82645C68"))) PPC_WEAK_FUNC(sub_82645C68);
PPC_FUNC_IMPL(__imp__sub_82645C68) {
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
	ctx.lr = 0x82645C84;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82645c98
	if (ctx.cr0.eq) goto loc_82645C98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82645d28
	ctx.lr = 0x82645C94;
	sub_82645D28(ctx, base);
	// b 0x82645c9c
	goto loc_82645C9C;
loc_82645C98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82645C9C:
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

__attribute__((alias("__imp__sub_82645CB0"))) PPC_WEAK_FUNC(sub_82645CB0);
PPC_FUNC_IMPL(__imp__sub_82645CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82332ca8
	ctx.lr = 0x82645CE4;
	sub_82332CA8(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82645cf4
	if (ctx.cr6.eq) goto loc_82645CF4;
	// bl 0x82332db8
	ctx.lr = 0x82645CF4;
	sub_82332DB8(ctx, base);
loc_82645CF4:
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
	// bl 0x82833238
	ctx.lr = 0x82645D0C;
	sub_82833238(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645D28"))) PPC_WEAK_FUNC(sub_82645D28);
PPC_FUNC_IMPL(__imp__sub_82645D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82645D30;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,12496
	ctx.r10.s64 = ctx.r10.s64 + 12496;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r31,r28,12
	ctx.r31.s64 = ctx.r28.s64 + 12;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r29,r4,12
	ctx.r29.s64 = ctx.r4.s64 + 12;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// stw r30,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r30.u32);
	// stw r30,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r30.u32);
	// stw r30,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r30.u32);
	// stw r30,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r30.u32);
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// beq cr6,0x82645e1c
	if (ctx.cr6.eq) goto loc_82645E1C;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82645e1c
	if (!ctx.cr6.gt) goto loc_82645E1C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82645dbc
	if (ctx.cr0.eq) goto loc_82645DBC;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82645DBC;
	sub_82332C38(ctx, base);
loc_82645DBC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82645e1c
	if (!ctx.cr6.gt) goto loc_82645E1C;
loc_82645DCC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82645DE0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82645e08
	if (ctx.cr0.eq) goto loc_82645E08;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82645E08:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82645dcc
	if (ctx.cr6.lt) goto loc_82645DCC;
loc_82645E1C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82645E28"))) PPC_WEAK_FUNC(sub_82645E28);
PPC_FUNC_IMPL(__imp__sub_82645E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82645E30;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r11,r11,12436
	ctx.r11.s64 = ctx.r11.s64 + 12436;
	// addi r27,r30,36
	ctx.r27.s64 = ctx.r30.s64 + 36;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r25,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r25.u32);
	// beq cr6,0x82645e70
	if (ctx.cr6.eq) goto loc_82645E70;
	// stw r25,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332c38
	ctx.lr = 0x82645E70;
	sub_82332C38(ctx, base);
loc_82645E70:
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// bl 0x823f6de0
	ctx.lr = 0x82645E80;
	sub_823F6DE0(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82645ee0
	if (ctx.cr0.lt) goto loc_82645EE0;
	// addi r26,r30,12
	ctx.r26.s64 = ctx.r30.s64 + 12;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82645E94:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r28,r29,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82332ca8
	ctx.lr = 0x82645EB4;
	sub_82332CA8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82645ed4
	if (ctx.cr6.eq) goto loc_82645ED4;
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
	ctx.lr = 0x82645ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82645ED4:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x82645e94
	if (!ctx.cr0.lt) goto loc_82645E94;
loc_82645EE0:
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8269b988
	ctx.lr = 0x82645EEC;
	sub_8269B988(ctx, base);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82645F08;
	sub_82332CA8(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82645f18
	if (ctx.cr6.eq) goto loc_82645F18;
	// bl 0x82332db8
	ctx.lr = 0x82645F18;
	sub_82332DB8(ctx, base);
loc_82645F18:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82645F38"))) PPC_WEAK_FUNC(sub_82645F38);
PPC_FUNC_IMPL(__imp__sub_82645F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82333900
	ctx.lr = 0x82645F5C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82645f84
	if (ctx.cr0.eq) goto loc_82645F84;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r11,12424
	ctx.r11.s64 = ctx.r11.s64 + 12424;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82645f8c
	goto loc_82645F8C;
loc_82645F84:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82645F8C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82410060
	ctx.lr = 0x82645F98;
	sub_82410060(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x828d0cb0
	ctx.lr = 0x82645FA8;
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

__attribute__((alias("__imp__sub_82645FC0"))) PPC_WEAK_FUNC(sub_82645FC0);
PPC_FUNC_IMPL(__imp__sub_82645FC0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828db368
	ctx.lr = 0x82645FDC;
	sub_828DB368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645FF0"))) PPC_WEAK_FUNC(sub_82645FF0);
PPC_FUNC_IMPL(__imp__sub_82645FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82645FF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82333900
	ctx.lr = 0x82646010;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8264603c
	if (ctx.cr0.eq) goto loc_8264603C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r11,r11,12400
	ctx.r11.s64 = ctx.r11.s64 + 12400;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82646044
	goto loc_82646044;
loc_8264603C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82646044:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// bl 0x82410060
	ctx.lr = 0x82646050;
	sub_82410060(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,36
	ctx.r3.s64 = ctx.r29.s64 + 36;
	// bl 0x828d0cb0
	ctx.lr = 0x82646060;
	sub_828D0CB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82646068"))) PPC_WEAK_FUNC(sub_82646068);
PPC_FUNC_IMPL(__imp__sub_82646068) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828db3f8
	ctx.lr = 0x82646088;
	sub_828DB3F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826460A0"))) PPC_WEAK_FUNC(sub_826460A0);
PPC_FUNC_IMPL(__imp__sub_826460A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826460A8;
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
	// addi r31,r11,13036
	ctx.r31.s64 = ctx.r11.s64 + 13036;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13040);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826460ec
	if (!ctx.cr0.eq) goto loc_826460EC;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12476
	ctx.r9.s64 = ctx.r9.s64 + 12476;
	// stw r11,13040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13040, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25384
	ctx.r3.s64 = ctx.r11.s64 + 25384;
	// bl 0x82a4c758
	ctx.lr = 0x826460EC;
	sub_82A4C758(ctx, base);
loc_826460EC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82646100
	if (ctx.cr6.eq) goto loc_82646100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x82646100;
	sub_82339D80(ctx, base);
loc_82646100:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82646108"))) PPC_WEAK_FUNC(sub_82646108);
PPC_FUNC_IMPL(__imp__sub_82646108) {
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
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82333900
	ctx.lr = 0x8264611C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82646188
	if (ctx.cr0.eq) goto loc_82646188;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r10,12436
	ctx.r10.s64 = ctx.r10.s64 + 12436;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8264618c
	goto loc_8264618C;
loc_82646188:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264618C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826461A0"))) PPC_WEAK_FUNC(sub_826461A0);
PPC_FUNC_IMPL(__imp__sub_826461A0) {
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
	// lwz r3,13200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13200);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826461e8
	if (!ctx.cr6.eq) goto loc_826461E8;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-27184
	ctx.r3.s64 = ctx.r10.s64 + -27184;
	// bl 0x82a4c7d8
	ctx.lr = 0x826461D4;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x826461DC;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x826461E4;
	sub_82816528(ctx, base);
	// stw r3,13200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13200, ctx.r3.u32);
loc_826461E8:
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

__attribute__((alias("__imp__sub_82646200"))) PPC_WEAK_FUNC(sub_82646200);
PPC_FUNC_IMPL(__imp__sub_82646200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82646208;
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
	// beq cr6,0x82646264
	if (ctx.cr6.eq) goto loc_82646264;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13036
	ctx.r31.s64 = ctx.r11.s64 + 13036;
	// lwz r11,13040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13040);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82646254
	if (!ctx.cr0.eq) goto loc_82646254;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12476
	ctx.r9.s64 = ctx.r9.s64 + 12476;
	// stw r11,13040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13040, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25384
	ctx.r3.s64 = ctx.r11.s64 + 25384;
	// bl 0x82a4c758
	ctx.lr = 0x82646254;
	sub_82A4C758(ctx, base);
loc_82646254:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82646264
	if (!ctx.cr6.eq) goto loc_82646264;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82646270
	goto loc_82646270;
loc_82646264:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x82646270;
	sub_82339EE8(ctx, base);
loc_82646270:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82646278"))) PPC_WEAK_FUNC(sub_82646278);
PPC_FUNC_IMPL(__imp__sub_82646278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82646280;
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
	// addi r31,r11,13028
	ctx.r31.s64 = ctx.r11.s64 + 13028;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13032);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826462c4
	if (!ctx.cr0.eq) goto loc_826462C4;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12612
	ctx.r9.s64 = ctx.r9.s64 + 12612;
	// stw r11,13032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13032, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25408
	ctx.r3.s64 = ctx.r11.s64 + 25408;
	// bl 0x82a4c758
	ctx.lr = 0x826462C4;
	sub_82A4C758(ctx, base);
loc_826462C4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x826462d4
	if (!ctx.cr6.eq) goto loc_826462D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x826462e8
	goto loc_826462E8;
loc_826462D4:
	// bl 0x82339c78
	ctx.lr = 0x826462D8;
	sub_82339C78(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x826462e8
	if (ctx.cr6.eq) goto loc_826462E8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826462E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826462F0"))) PPC_WEAK_FUNC(sub_826462F0);
PPC_FUNC_IMPL(__imp__sub_826462F0) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82333900
	ctx.lr = 0x82646304;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82646324
	if (ctx.cr0.eq) goto loc_82646324;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,12588
	ctx.r11.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82646328
	goto loc_82646328;
loc_82646324:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82646328:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646338"))) PPC_WEAK_FUNC(sub_82646338);
PPC_FUNC_IMPL(__imp__sub_82646338) {
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
	// lwz r3,13204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82646380
	if (!ctx.cr6.eq) goto loc_82646380;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-27152
	ctx.r3.s64 = ctx.r10.s64 + -27152;
	// bl 0x82a4c7d8
	ctx.lr = 0x8264636C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82646374;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8264637C;
	sub_82816528(ctx, base);
	// stw r3,13204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13204, ctx.r3.u32);
loc_82646380:
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

__attribute__((alias("__imp__sub_82646398"))) PPC_WEAK_FUNC(sub_82646398);
PPC_FUNC_IMPL(__imp__sub_82646398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82646410
	if (ctx.cr6.eq) goto loc_82646410;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13028
	ctx.r31.s64 = ctx.r11.s64 + 13028;
	// lwz r11,13032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13032);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826463f0
	if (!ctx.cr0.eq) goto loc_826463F0;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12612
	ctx.r9.s64 = ctx.r9.s64 + 12612;
	// stw r11,13032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13032, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25408
	ctx.r3.s64 = ctx.r11.s64 + 25408;
	// bl 0x82a4c758
	ctx.lr = 0x826463F0;
	sub_82A4C758(ctx, base);
loc_826463F0:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82646400
	if (!ctx.cr6.eq) goto loc_82646400;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82646414
	goto loc_82646414;
loc_82646400:
	// bl 0x82339c78
	ctx.lr = 0x82646404;
	sub_82339C78(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82646414
	if (ctx.cr6.eq) goto loc_82646414;
loc_82646410:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82646414:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646430"))) PPC_WEAK_FUNC(sub_82646430);
PPC_FUNC_IMPL(__imp__sub_82646430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82646438;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ff4e8
	ctx.lr = 0x82646448;
	sub_823FF4E8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r10,r10,12208
	ctx.r10.s64 = ctx.r10.s64 + 12208;
	// addi r9,r9,12260
	ctx.r9.s64 = ctx.r9.s64 + 12260;
	// addi r11,r11,10776
	ctx.r11.s64 = ctx.r11.s64 + 10776;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,1564
	ctx.r29.s64 = ctx.r31.s64 + 1564;
	// addi r27,r30,1564
	ctx.r27.s64 = ctx.r30.s64 + 1564;
	// li r11,12
	ctx.r11.s64 = 12;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// lwz r10,1504(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// stw r10,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r10.u32);
	// lfs f0,1508(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1508);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1512(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	// stfs f0,1508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// lwz r9,1512(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	// rlwimi r9,r10,0,1,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r9.u64 & 0xFFFFFFFF80000000);
	// stw r9,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r9.u32);
	// lbz r10,1516(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1516);
	// stb r10,1516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1516, ctx.r10.u8);
	// lbz r10,1517(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1517);
	// stb r10,1517(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1517, ctx.r10.u8);
	// lbz r10,1518(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1518);
	// stb r10,1518(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1518, ctx.r10.u8);
	// lbz r10,1519(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1519);
	// stb r10,1519(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1519, ctx.r10.u8);
	// lbz r10,1520(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1520);
	// stb r10,1520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1520, ctx.r10.u8);
	// lbz r10,1521(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1521);
	// stb r10,1521(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1521, ctx.r10.u8);
	// lwz r10,1524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	// stw r10,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r10.u32);
	// lwz r10,1528(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	// stw r10,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r10.u32);
	// lwz r10,1532(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1532);
	// stw r10,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r10.u32);
	// lwz r10,1536(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1536);
	// stw r10,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r10.u32);
	// lwz r10,1540(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// stw r10,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r10.u32);
	// lwz r10,1544(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1544);
	// stw r10,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r10.u32);
	// lwz r10,1548(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	// stw r10,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r10.u32);
	// lwz r10,1552(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// stw r10,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r10.u32);
	// lwz r10,1556(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	// stw r10,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r10.u32);
	// lwz r10,1560(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	// stw r10,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r10.u32);
	// stw r11,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r11.u32);
	// stw r28,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r28.u32);
	// stw r28,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r28.u32);
	// stw r28,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r28.u32);
	// stw r28,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r28.u32);
	// stw r28,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r28.u32);
	// beq cr6,0x82646584
	if (ctx.cr6.eq) goto loc_82646584;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82646584
	if (!ctx.cr6.gt) goto loc_82646584;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82646568
	if (ctx.cr0.eq) goto loc_82646568;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x82646568;
	sub_82332C38(ctx, base);
loc_82646568:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8264657C;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_82646584:
	// stw r28,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// bl 0x823f6de0
	ctx.lr = 0x82646598;
	sub_823F6DE0(ctx, base);
	// addi r4,r30,1596
	ctx.r4.s64 = ctx.r30.s64 + 1596;
	// addi r3,r31,1596
	ctx.r3.s64 = ctx.r31.s64 + 1596;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x826465A8;
	sub_82A4EA80(ctx, base);
	// lwz r11,1628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1628);
	// addi r4,r30,1704
	ctx.r4.s64 = ctx.r30.s64 + 1704;
	// addi r3,r31,1704
	ctx.r3.s64 = ctx.r31.s64 + 1704;
	// stw r11,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r11.u32);
	// lwz r11,1632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// lwz r11,1636(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1636);
	// stw r11,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r11.u32);
	// lwz r11,1640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// lwz r11,1644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
	// lwz r11,1648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	// stw r11,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r11.u32);
	// lwz r11,1652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
	// lwz r11,1656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1656);
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
	// lwz r11,1660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1660);
	// stw r11,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r11.u32);
	// lfs f0,1664(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1664);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1664(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1664, temp.u32);
	// lfs f0,1668(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1668);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1668, temp.u32);
	// lfs f0,1672(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1672);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1672(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1672, temp.u32);
	// lwz r11,1676(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1676);
	// stw r11,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r11.u32);
	// lwz r11,1680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1680);
	// stw r11,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r11.u32);
	// lwz r11,1684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1684);
	// stw r11,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r11.u32);
	// lwz r11,1688(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1688);
	// stw r11,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r11.u32);
	// lwz r11,1692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1692);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// lwz r11,1696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1696);
	// stw r11,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r11.u32);
	// lwz r11,1700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1700);
	// stw r11,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x8264664C;
	sub_823339B8(ctx, base);
	// addi r4,r30,1728
	ctx.r4.s64 = ctx.r30.s64 + 1728;
	// addi r3,r31,1728
	ctx.r3.s64 = ctx.r31.s64 + 1728;
	// bl 0x823339b8
	ctx.lr = 0x82646658;
	sub_823339B8(ctx, base);
	// addi r4,r30,1752
	ctx.r4.s64 = ctx.r30.s64 + 1752;
	// addi r3,r31,1752
	ctx.r3.s64 = ctx.r31.s64 + 1752;
	// bl 0x823339b8
	ctx.lr = 0x82646664;
	sub_823339B8(ctx, base);
	// addi r4,r30,1776
	ctx.r4.s64 = ctx.r30.s64 + 1776;
	// addi r3,r31,1776
	ctx.r3.s64 = ctx.r31.s64 + 1776;
	// bl 0x823339b8
	ctx.lr = 0x82646670;
	sub_823339B8(ctx, base);
	// addi r4,r30,1800
	ctx.r4.s64 = ctx.r30.s64 + 1800;
	// addi r3,r31,1800
	ctx.r3.s64 = ctx.r31.s64 + 1800;
	// bl 0x823339b8
	ctx.lr = 0x8264667C;
	sub_823339B8(ctx, base);
	// addi r4,r30,1824
	ctx.r4.s64 = ctx.r30.s64 + 1824;
	// addi r3,r31,1824
	ctx.r3.s64 = ctx.r31.s64 + 1824;
	// bl 0x823339b8
	ctx.lr = 0x82646688;
	sub_823339B8(ctx, base);
	// lwz r11,1848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// addi r4,r30,1864
	ctx.r4.s64 = ctx.r30.s64 + 1864;
	// addi r3,r31,1864
	ctx.r3.s64 = ctx.r31.s64 + 1864;
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// lwz r11,1852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1852);
	// stw r11,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r11.u32);
	// lwz r11,1856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1856);
	// stw r11,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r11.u32);
	// lwz r11,1860(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1860);
	// stw r11,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x826466B4;
	sub_82873B58(ctx, base);
	// lwz r11,1888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1888);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826466E8"))) PPC_WEAK_FUNC(sub_826466E8);
PPC_FUNC_IMPL(__imp__sub_826466E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828c1d50
	ctx.lr = 0x82646708;
	sub_828C1D50(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82646718
	if (ctx.cr0.eq) goto loc_82646718;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82646718;
	sub_82332DB8(ctx, base);
loc_82646718:
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

__attribute__((alias("__imp__sub_82646738"))) PPC_WEAK_FUNC(sub_82646738);
PPC_FUNC_IMPL(__imp__sub_82646738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,14536
	ctx.r3.s64 = ctx.r11.s64 + 14536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646748"))) PPC_WEAK_FUNC(sub_82646748);
PPC_FUNC_IMPL(__imp__sub_82646748) {
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
	// li r3,1920
	ctx.r3.s64 = 1920;
	// bl 0x82833108
	ctx.lr = 0x82646764;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82646778
	if (ctx.cr0.eq) goto loc_82646778;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82646430
	ctx.lr = 0x82646774;
	sub_82646430(ctx, base);
	// b 0x8264677c
	goto loc_8264677C;
loc_82646778:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264677C:
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

__attribute__((alias("__imp__sub_82646790"))) PPC_WEAK_FUNC(sub_82646790);
PPC_FUNC_IMPL(__imp__sub_82646790) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826466e8
	sub_826466E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82646798"))) PPC_WEAK_FUNC(sub_82646798);
PPC_FUNC_IMPL(__imp__sub_82646798) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826467a8
	sub_826467A8(ctx, base);
	return;
}

