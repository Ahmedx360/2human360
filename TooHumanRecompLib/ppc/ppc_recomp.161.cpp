#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_829CC468"))) PPC_WEAK_FUNC(sub_829CC468);
PPC_FUNC_IMPL(__imp__sub_829CC468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829CC470;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829cc4f8
	if (!ctx.cr6.gt) goto loc_829CC4F8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_829CC494:
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// bl 0x829ccb50
	ctx.lr = 0x829CC4AC;
	sub_829CCB50(ctx, base);
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829cc4e4
	if (ctx.cr0.eq) goto loc_829CC4E4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cc4cc
	if (ctx.cr6.eq) goto loc_829CC4CC;
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829cc4e4
	if (ctx.cr0.eq) goto loc_829CC4E4;
loc_829CC4CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CC4E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829CC4E4:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829cc494
	if (ctx.cr6.lt) goto loc_829CC494;
loc_829CC4F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CC500"))) PPC_WEAK_FUNC(sub_829CC500);
PPC_FUNC_IMPL(__imp__sub_829CC500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829CC508;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829cc530
	if (ctx.cr6.eq) goto loc_829CC530;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829cc530
	if (!ctx.cr6.eq) goto loc_829CC530;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x829cc7a4
	goto loc_829CC7A4;
loc_829CC530:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f13,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x829cc690
	if (ctx.cr6.gt) goto loc_829CC690;
loc_829CC550:
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x829cc56c
	if (ctx.cr6.gt) goto loc_829CC56C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stb r27,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r27.u8);
	// stw r27,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r27.u32);
loc_829CC56C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x829cc690
	if (!ctx.cr6.eq) goto loc_829CC690;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r8,196(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x829cc5b8
	if (!ctx.cr6.gt) goto loc_829CC5B8;
	// lwz r9,192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_829CC59C:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x829cc63c
	if (ctx.cr6.eq) goto loc_829CC63C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x829cc59c
	if (ctx.cr6.lt) goto loc_829CC59C;
loc_829CC5B8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_829CC5BC:
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x829cc690
	if (ctx.cr6.eq) goto loc_829CC690;
	// lwa r11,8(r4)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 8));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// bl 0x829ccc08
	ctx.lr = 0x829CC5E8;
	sub_829CCC08(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x829cc66c
	if (!ctx.cr6.eq) goto loc_829CC66C;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x829cc66c
	if (ctx.cr6.eq) goto loc_829CC66C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,196(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x829cc66c
	if (!ctx.cr6.gt) goto loc_829CC66C;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_829CC61C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x829cc64c
	if (ctx.cr6.eq) goto loc_829CC64C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829cc61c
	if (ctx.cr6.lt) goto loc_829CC61C;
	// b 0x829cc66c
	goto loc_829CC66C;
loc_829CC63C:
	// mulli r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x829cc5bc
	goto loc_829CC5BC;
loc_829CC64C:
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,20
	ctx.r6.s64 = 20;
	// rlwimi r10,r27,25,6,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r27.u32, 25) & 0x3000000) | (ctx.r10.u64 & 0xFFFFFFFFFCFFFFFF);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// addi r3,r11,180
	ctx.r3.s64 = ctx.r11.s64 + 180;
	// bl 0x82332ca8
	ctx.lr = 0x829CC66C;
	sub_82332CA8(ctx, base);
loc_829CC66C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lwa r11,8(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 8));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x829cc550
	if (ctx.cr6.lt) goto loc_829CC550;
loc_829CC690:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829cc6d0
	if (!ctx.cr6.gt) goto loc_829CC6D0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_829CC6A4:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// ldx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + ctx.r11.u32);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// bl 0x829cc9a0
	ctx.lr = 0x829CC6BC;
	sub_829CC9A0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829cc6a4
	if (ctx.cr6.lt) goto loc_829CC6A4;
loc_829CC6D0:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829cc6f4
	if (ctx.cr6.eq) goto loc_829CC6F4;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82332c38
	ctx.lr = 0x829CC6F4;
	sub_82332C38(ctx, base);
loc_829CC6F4:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829cc768
	if (!ctx.cr6.gt) goto loc_829CC768;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_829CC704:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// ld r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// ld r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// bl 0x829ccb50
	ctx.lr = 0x829CC71C;
	sub_829CCB50(ctx, base);
	// lbz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829cc754
	if (ctx.cr0.eq) goto loc_829CC754;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cc73c
	if (ctx.cr6.eq) goto loc_829CC73C;
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829cc754
	if (ctx.cr0.eq) goto loc_829CC754;
loc_829CC73C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CC754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829CC754:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829cc704
	if (ctx.cr6.lt) goto loc_829CC704;
loc_829CC768:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829cc7a0
	if (ctx.cr6.eq) goto loc_829CC7A0;
	// lwa r11,24(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 24));
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x829cc7a0
	if (ctx.cr6.gt) goto loc_829CC7A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// b 0x829cc7a4
	goto loc_829CC7A4;
loc_829CC7A0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_829CC7A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CC7B0"))) PPC_WEAK_FUNC(sub_829CC7B0);
PPC_FUNC_IMPL(__imp__sub_829CC7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829CC7B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82400b48
	ctx.lr = 0x829CC7FC;
	sub_82400B48(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829cc810
	if (ctx.cr6.eq) goto loc_829CC810;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x829cc818
	goto loc_829CC818;
loc_829CC810:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_829CC818:
	// bl 0x828165a8
	ctx.lr = 0x829CC81C;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-15060
	ctx.r3.s64 = ctx.r11.s64 + -15060;
	// bl 0x823928a0
	ctx.lr = 0x829CC830;
	sub_823928A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829cc990
	if (ctx.cr0.eq) goto loc_829CC990;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CC848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x829cc878
	if (ctx.cr0.eq) goto loc_829CC878;
	// bl 0x823ceb68
	ctx.lr = 0x829CC854;
	sub_823CEB68(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CC86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829cc878
	if (ctx.cr0.eq) goto loc_829CC878;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_829CC878:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cc990
	if (ctx.cr6.eq) goto loc_829CC990;
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x829CC8A0;
	sub_823339B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82400b48
	ctx.lr = 0x829CC8B0;
	sub_82400B48(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82333960
	ctx.lr = 0x829CC8B8;
	sub_82333960(ctx, base);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r10,80(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829CC968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r29,120
	ctx.r3.s64 = ctx.r29.s64 + 120;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x829CC97C;
	sub_82332D50(ctx, base);
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829cc990
	if (ctx.cr0.eq) goto loc_829CC990;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_829CC990:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x829CC998;
	sub_82333960(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CC9A0"))) PPC_WEAK_FUNC(sub_829CC9A0);
PPC_FUNC_IMPL(__imp__sub_829CC9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829CC9A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r4.u64);
	// std r5,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r5.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,204(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r28,200(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r27,196(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r26,192(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x829cca4c
	if (!ctx.cr6.gt) goto loc_829CCA4C;
	// lwz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_829CC9E0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// xor r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 ^ ctx.r10.u64;
	// xor r5,r28,r5
	ctx.r5.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// xor r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 ^ ctx.r7.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// xor r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 ^ ctx.r6.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or. r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x829ccb10
	if (ctx.cr0.eq) goto loc_829CCB10;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829cc9e0
	if (ctx.cr6.lt) goto loc_829CC9E0;
loc_829CCA4C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_829CCA50:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829ccb08
	if (ctx.cr6.eq) goto loc_829CCB08;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CCA6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CCA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829CCA84:
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x829ccb08
	if (!ctx.cr6.gt) goto loc_829CCB08;
	// lwz r7,132(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_829CCA9C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,24
	ctx.r5.s64 = ctx.r10.s64 + 24;
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// stw r3,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r3.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// xor r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r27.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// xor r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r28.u64;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// xor r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r29.u64;
	// xor r6,r26,r4
	ctx.r6.u64 = ctx.r26.u64 ^ ctx.r4.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// or. r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x829ccb30
	if (ctx.cr0.eq) goto loc_829CCB30;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x829cca9c
	if (ctx.cr6.lt) goto loc_829CCA9C;
loc_829CCB08:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
loc_829CCB10:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// lwzx r30,r11,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bl 0x82332ca8
	ctx.lr = 0x829CCB2C;
	sub_82332CA8(ctx, base);
	// b 0x829cca50
	goto loc_829CCA50;
loc_829CCB30:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x829cc9a0
	ctx.lr = 0x829CCB48;
	sub_829CC9A0(ctx, base);
	// b 0x829cca84
	goto loc_829CCA84;
}

__attribute__((alias("__imp__sub_829CCB50"))) PPC_WEAK_FUNC(sub_829CCB50);
PPC_FUNC_IMPL(__imp__sub_829CCB50) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829CCB58;
	__savegprlr_28(ctx, base);
	// lwz r8,136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x829ccbf4
	if (!ctx.cr6.gt) goto loc_829CCBF4;
	// lwz r7,132(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_829CCB78:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// lwz r5,36(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r4,40(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	// lwz r3,32(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// lwz r31,44(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// stw r29,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r29.u32);
	// stw r28,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r28.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// lwz r29,-56(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r6,-64(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r30,-52(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r11,-60(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// xor r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 ^ ctx.r4.u64;
	// xor r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// xor r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 ^ ctx.r30.u64;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// or. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829ccbfc
	if (ctx.cr0.eq) goto loc_829CCBFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x829ccb78
	if (ctx.cr6.lt) goto loc_829CCB78;
loc_829CCBF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829CCBF8:
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_829CCBFC:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// b 0x829ccbf8
	goto loc_829CCBF8;
}

__attribute__((alias("__imp__sub_829CCC08"))) PPC_WEAK_FUNC(sub_829CCC08);
PPC_FUNC_IMPL(__imp__sub_829CCC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829CCC10;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,20
	ctx.r26.s64 = 20;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// ble cr6,0x829ccd80
	if (!ctx.cr6.gt) goto loc_829CCD80;
loc_829CCC30:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x829ccd5c
	if (ctx.cr6.eq) goto loc_829CCD5C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x829ccd4c
	if (ctx.cr6.eq) goto loc_829CCD4C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x829cccdc
	if (ctx.cr6.eq) goto loc_829CCCDC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x829ccc90
	if (ctx.cr6.eq) goto loc_829CCC90;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x829ccc7c
	if (ctx.cr6.eq) goto loc_829CCC7C;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x829ccd64
	if (!ctx.cr6.eq) goto loc_829CCD64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829ccd40
	goto loc_829CCD40;
loc_829CCC7C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stb r11,144(r28)
	PPC_STORE_U8(ctx.r28.u32 + 144, ctx.r11.u8);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 148, temp.u32);
	// b 0x829ccd64
	goto loc_829CCD64;
loc_829CCC90:
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x829ccd64
	if (!ctx.cr6.gt) goto loc_829CCD64;
	// addi r27,r28,68
	ctx.r27.s64 = ctx.r28.s64 + 68;
loc_829CCCA4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// bl 0x8233a258
	ctx.lr = 0x829CCCBC;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824152a0
	ctx.lr = 0x829CCCC8;
	sub_824152A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x829CCCD0;
	sub_82333960(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x829ccca4
	if (!ctx.cr0.eq) goto loc_829CCCA4;
	// b 0x829ccd64
	goto loc_829CCD64;
loc_829CCCDC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// bl 0x829ccb50
	ctx.lr = 0x829CCCEC;
	sub_829CCB50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// bl 0x829ccb50
	ctx.lr = 0x829CCD00;
	sub_829CCB50(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829ccd64
	if (ctx.cr6.eq) goto loc_829CCD64;
	// rlwinm. r11,r29,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829ccd30
	if (!ctx.cr0.eq) goto loc_829CCD30;
	// lbz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829ccd64
	if (ctx.cr0.eq) goto loc_829CCD64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ccd30
	if (ctx.cr6.eq) goto loc_829CCD30;
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829ccd64
	if (ctx.cr0.eq) goto loc_829CCD64;
loc_829CCD30:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
loc_829CCD40:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CCD48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x829ccd64
	goto loc_829CCD64;
loc_829CCD4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829cc7b0
	ctx.lr = 0x829CCD58;
	sub_829CC7B0(ctx, base);
	// b 0x829ccd64
	goto loc_829CCD64;
loc_829CCD5C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 116, ctx.r11.u32);
loc_829CCD64:
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x829ccc30
	if (ctx.cr6.gt) goto loc_829CCC30;
loc_829CCD80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CCD88"))) PPC_WEAK_FUNC(sub_829CCD88);
PPC_FUNC_IMPL(__imp__sub_829CCD88) {
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
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82833108
	ctx.lr = 0x829CCDA0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829cce04
	if (ctx.cr0.eq) goto loc_829CCE04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x829CCDB0;
	sub_82833180(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-11616
	ctx.r9.s64 = ctx.r9.s64 + -11616;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x829cce08
	goto loc_829CCE08;
loc_829CCE04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829CCE08:
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

__attribute__((alias("__imp__sub_829CCE20"))) PPC_WEAK_FUNC(sub_829CCE20);
PPC_FUNC_IMPL(__imp__sub_829CCE20) {
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
	// lwz r11,-27596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27596);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829cce60
	if (!ctx.cr0.eq) goto loc_829CCE60;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27596(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27596, ctx.r11.u32);
	// addi r3,r9,-11644
	ctx.r3.s64 = ctx.r9.s64 + -11644;
	// bl 0x82816528
	ctx.lr = 0x829CCE58;
	sub_82816528(ctx, base);
	// stw r3,-27600(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27600, ctx.r3.u32);
	// b 0x829cce64
	goto loc_829CCE64;
loc_829CCE60:
	// lwz r3,-27600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27600);
loc_829CCE64:
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

__attribute__((alias("__imp__sub_829CCE78"))) PPC_WEAK_FUNC(sub_829CCE78);
PPC_FUNC_IMPL(__imp__sub_829CCE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829ccec8
	ctx.lr = 0x829CCE98;
	sub_829CCEC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CCEAC;
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

__attribute__((alias("__imp__sub_829CCEC8"))) PPC_WEAK_FUNC(sub_829CCEC8);
PPC_FUNC_IMPL(__imp__sub_829CCEC8) {
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
	// addi r31,r11,19448
	ctx.r31.s64 = ctx.r11.s64 + 19448;
	// lwz r11,19444(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19444);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829ccf10
	if (!ctx.cr0.eq) goto loc_829CCF10;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-11528
	ctx.r9.s64 = ctx.r9.s64 + -11528;
	// stw r11,19444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19444, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10168
	ctx.r3.s64 = ctx.r11.s64 + -10168;
	// bl 0x82a4c758
	ctx.lr = 0x829CCF10;
	sub_82A4C758(ctx, base);
loc_829CCF10:
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

__attribute__((alias("__imp__sub_829CCF28"))) PPC_WEAK_FUNC(sub_829CCF28);
PPC_FUNC_IMPL(__imp__sub_829CCF28) {
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
	// lwz r11,-27604(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27604);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829ccf68
	if (!ctx.cr0.eq) goto loc_829CCF68;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27604(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27604, ctx.r11.u32);
	// addi r3,r9,-11628
	ctx.r3.s64 = ctx.r9.s64 + -11628;
	// bl 0x82816528
	ctx.lr = 0x829CCF60;
	sub_82816528(ctx, base);
	// stw r3,-27608(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27608, ctx.r3.u32);
	// b 0x829ccf6c
	goto loc_829CCF6C;
loc_829CCF68:
	// lwz r3,-27608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27608);
loc_829CCF6C:
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

__attribute__((alias("__imp__sub_829CCF80"))) PPC_WEAK_FUNC(sub_829CCF80);
PPC_FUNC_IMPL(__imp__sub_829CCF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829ccfd0
	ctx.lr = 0x829CCFA0;
	sub_829CCFD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CCFB4;
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

__attribute__((alias("__imp__sub_829CCFD0"))) PPC_WEAK_FUNC(sub_829CCFD0);
PPC_FUNC_IMPL(__imp__sub_829CCFD0) {
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
	// addi r31,r11,19456
	ctx.r31.s64 = ctx.r11.s64 + 19456;
	// lwz r11,19452(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19452);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829cd018
	if (!ctx.cr0.eq) goto loc_829CD018;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-11416
	ctx.r9.s64 = ctx.r9.s64 + -11416;
	// stw r11,19452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19452, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10192
	ctx.r3.s64 = ctx.r11.s64 + -10192;
	// bl 0x82a4c758
	ctx.lr = 0x829CD018;
	sub_82A4C758(ctx, base);
loc_829CD018:
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

__attribute__((alias("__imp__sub_829CD030"))) PPC_WEAK_FUNC(sub_829CD030);
PPC_FUNC_IMPL(__imp__sub_829CD030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829CD038;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-13284
	ctx.r4.s64 = ctx.r11.s64 + -13284;
	// bl 0x82414568
	ctx.lr = 0x829CD058;
	sub_82414568(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829cd06c
	if (ctx.cr6.eq) goto loc_829CD06C;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x829cd074
	goto loc_829CD074;
loc_829CD06C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_829CD074:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82409058
	ctx.lr = 0x829CD07C;
	sub_82409058(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829cd0a0
	if (ctx.cr6.eq) goto loc_829CD0A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cd0a0
	if (ctx.cr6.eq) goto loc_829CD0A0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x829CD0A0;
	sub_82332DB8(ctx, base);
loc_829CD0A0:
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r28,r10,-13244
	ctx.r28.s64 = ctx.r10.s64 + -13244;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD0D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82816528
	ctx.lr = 0x829CD0E4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965458
	ctx.lr = 0x829CD0F8;
	sub_82965458(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r28,r11,-13184
	ctx.r28.s64 = ctx.r11.s64 + -13184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82816528
	ctx.lr = 0x829CD130;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965458
	ctx.lr = 0x829CD144;
	sub_82965458(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r5,r11,-13132
	ctx.r5.s64 = ctx.r11.s64 + -13132;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD16C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r5,r11,-13112
	ctx.r5.s64 = ctx.r11.s64 + -13112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r11,-13092
	ctx.r5.s64 = ctx.r11.s64 + -13092;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,45
	ctx.r6.s64 = 45;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD1CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-13152
	ctx.r3.s64 = ctx.r11.s64 + -13152;
	// bl 0x82816528
	ctx.lr = 0x829CD1E0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x829CD1F4;
	sub_829653C8(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r28,r11,-13072
	ctx.r28.s64 = ctx.r11.s64 + -13072;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82816528
	ctx.lr = 0x829CD22C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965458
	ctx.lr = 0x829CD240;
	sub_82965458(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r5,r11,-13024
	ctx.r5.s64 = ctx.r11.s64 + -13024;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r5,r11,-12996
	ctx.r5.s64 = ctx.r11.s64 + -12996;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r11,-12968
	ctx.r5.s64 = ctx.r11.s64 + -12968;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,45
	ctx.r6.s64 = 45;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD2C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-13048
	ctx.r3.s64 = ctx.r11.s64 + -13048;
	// bl 0x82816528
	ctx.lr = 0x829CD2DC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x829CD2F0;
	sub_829653C8(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r28,r11,-12940
	ctx.r28.s64 = ctx.r11.s64 + -12940;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82816528
	ctx.lr = 0x829CD328;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965458
	ctx.lr = 0x829CD33C;
	sub_82965458(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r5,r11,-12896
	ctx.r5.s64 = ctx.r11.s64 + -12896;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r5,r11,-12868
	ctx.r5.s64 = ctx.r11.s64 + -12868;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r11,-12840
	ctx.r5.s64 = ctx.r11.s64 + -12840;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,45
	ctx.r6.s64 = 45;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD3C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-12920
	ctx.r3.s64 = ctx.r11.s64 + -12920;
	// bl 0x82816528
	ctx.lr = 0x829CD3D8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x829CD3EC;
	sub_829653C8(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r28,r11,-12812
	ctx.r28.s64 = ctx.r11.s64 + -12812;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82816528
	ctx.lr = 0x829CD424;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965458
	ctx.lr = 0x829CD438;
	sub_82965458(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r5,r11,-12760
	ctx.r5.s64 = ctx.r11.s64 + -12760;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addi r5,r11,-12728
	ctx.r5.s64 = ctx.r11.s64 + -12728;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD48C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r11,-12696
	ctx.r5.s64 = ctx.r11.s64 + -12696;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,45
	ctx.r6.s64 = 45;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-12788
	ctx.r3.s64 = ctx.r11.s64 + -12788;
	// bl 0x82816528
	ctx.lr = 0x829CD4D4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x829CD4E8;
	sub_829653C8(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r28,r11,-12664
	ctx.r28.s64 = ctx.r11.s64 + -12664;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82816528
	ctx.lr = 0x829CD520;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965458
	ctx.lr = 0x829CD534;
	sub_82965458(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r28,r11,-12636
	ctx.r28.s64 = ctx.r11.s64 + -12636;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82816528
	ctx.lr = 0x829CD56C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965458
	ctx.lr = 0x829CD580;
	sub_82965458(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r28,r11,-12608
	ctx.r28.s64 = ctx.r11.s64 + -12608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82816528
	ctx.lr = 0x829CD5B8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965458
	ctx.lr = 0x829CD5CC;
	sub_82965458(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r28,r11,-12592
	ctx.r28.s64 = ctx.r11.s64 + -12592;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD5F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82816528
	ctx.lr = 0x829CD604;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965458
	ctx.lr = 0x829CD618;
	sub_82965458(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r28,r11,-12572
	ctx.r28.s64 = ctx.r11.s64 + -12572;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82816528
	ctx.lr = 0x829CD650;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965458
	ctx.lr = 0x829CD664;
	sub_82965458(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r5,r11,-12528
	ctx.r5.s64 = ctx.r11.s64 + -12528;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r5,r11,-12504
	ctx.r5.s64 = ctx.r11.s64 + -12504;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,232(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829CD6B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r11,-12480
	ctx.r5.s64 = ctx.r11.s64 + -12480;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,45
	ctx.r6.s64 = 45;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-12548
	ctx.r3.s64 = ctx.r11.s64 + -12548;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x829CD700;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x829CD714;
	sub_829653C8(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r28,r11,-12456
	ctx.r28.s64 = ctx.r11.s64 + -12456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82816528
	ctx.lr = 0x829CD74C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965458
	ctx.lr = 0x829CD760;
	sub_82965458(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r5,r11,-12432
	ctx.r5.s64 = ctx.r11.s64 + -12432;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r5,r11,-12404
	ctx.r5.s64 = ctx.r11.s64 + -12404;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD7B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r11,-12376
	ctx.r5.s64 = ctx.r11.s64 + -12376;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,45
	ctx.r6.s64 = 45;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD7E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-12348
	ctx.r3.s64 = ctx.r11.s64 + -12348;
	// bl 0x82816528
	ctx.lr = 0x829CD7FC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x829CD810;
	sub_829653C8(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r5,r11,-12324
	ctx.r5.s64 = ctx.r11.s64 + -12324;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r5,r11,-12296
	ctx.r5.s64 = ctx.r11.s64 + -12296;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r11,-12268
	ctx.r5.s64 = ctx.r11.s64 + -12268;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,45
	ctx.r6.s64 = 45;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-12240
	ctx.r3.s64 = ctx.r11.s64 + -12240;
	// bl 0x82816528
	ctx.lr = 0x829CD8AC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x829CD8C0;
	sub_829653C8(ctx, base);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r5,r11,-12216
	ctx.r5.s64 = ctx.r11.s64 + -12216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD8E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,45
	ctx.r6.s64 = 45;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r11,-12160
	ctx.r5.s64 = ctx.r11.s64 + -12160;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,45
	ctx.r6.s64 = 45;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-12132
	ctx.r3.s64 = ctx.r11.s64 + -12132;
	// bl 0x82816528
	ctx.lr = 0x829CD95C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x829CD970;
	sub_829653C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x829CD978;
	sub_82333960(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CD988"))) PPC_WEAK_FUNC(sub_829CD988);
PPC_FUNC_IMPL(__imp__sub_829CD988) {
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
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829cd9fc
	if (ctx.cr6.eq) goto loc_829CD9FC;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x829CD9B0;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829cd9e8
	if (ctx.cr0.eq) goto loc_829CD9E8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cd9d0
	if (ctx.cr6.eq) goto loc_829CD9D0;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829cd9d4
	goto loc_829CD9D4;
loc_829CD9D0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_829CD9D4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x824f7c50
	ctx.lr = 0x829CD9E0;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829cd9ec
	goto loc_829CD9EC;
loc_829CD9E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CD9EC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829CD9FC;
	sub_82833A30(ctx, base);
loc_829CD9FC:
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

__attribute__((alias("__imp__sub_829CDA10"))) PPC_WEAK_FUNC(sub_829CDA10);
PPC_FUNC_IMPL(__imp__sub_829CDA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829CDA18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x829cda30
	if (!ctx.cr6.eq) goto loc_829CDA30;
	// bl 0x829cdcf0
	ctx.lr = 0x829CDA30;
	sub_829CDCF0(ctx, base);
loc_829CDA30:
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829cdb7c
	if (!ctx.cr6.eq) goto loc_829CDB7C;
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829cdb7c
	if (ctx.cr6.eq) goto loc_829CDB7C;
	// lwz r29,44(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x829cdb7c
	if (ctx.cr6.eq) goto loc_829CDB7C;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829cdaf0
	if (ctx.cr6.eq) goto loc_829CDAF0;
	// ble cr6,0x829cdb7c
	if (!ctx.cr6.gt) goto loc_829CDB7C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x829cdb7c
	if (ctx.cr6.gt) goto loc_829CDB7C;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829cdb7c
	if (ctx.cr6.eq) goto loc_829CDB7C;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x829CDA80;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829cdb68
	if (ctx.cr0.eq) goto loc_829CDB68;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cdaa0
	if (ctx.cr6.eq) goto loc_829CDAA0;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829cdaa4
	goto loc_829CDAA4;
loc_829CDAA0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_829CDAA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,120(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r27,108(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r30,160(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// bl 0x82833180
	ctx.lr = 0x829CDAB8;
	sub_82833180(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r11,r11,-11360
	ctx.r11.s64 = ctx.r11.s64 + -11360;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
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
	// b 0x829cdb6c
	goto loc_829CDB6C;
loc_829CDAF0:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x829CDAF8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829cdb68
	if (ctx.cr0.eq) goto loc_829CDB68;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r28,108(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cdb1c
	if (ctx.cr6.eq) goto loc_829CDB1C;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829cdb20
	goto loc_829CDB20;
loc_829CDB1C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_829CDB20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,108(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r30,160(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// bl 0x82833180
	ctx.lr = 0x829CDB30;
	sub_82833180(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r11,r11,-11360
	ctx.r11.s64 = ctx.r11.s64 + -11360;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
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
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// b 0x829cdb6c
	goto loc_829CDB6C;
loc_829CDB68:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CDB6C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829CDB7C;
	sub_82833A30(ctx, base);
loc_829CDB7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CDB88"))) PPC_WEAK_FUNC(sub_829CDB88);
PPC_FUNC_IMPL(__imp__sub_829CDB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829CDB90;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829cdbc8
	if (ctx.cr6.eq) goto loc_829CDBC8;
	// ble cr6,0x829cdce4
	if (!ctx.cr6.gt) goto loc_829CDCE4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x829cdce4
	if (ctx.cr6.gt) goto loc_829CDCE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// b 0x829cdce4
	goto loc_829CDCE4;
loc_829CDBC8:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823339b8
	ctx.lr = 0x829CDBE4;
	sub_823339B8(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r29,r11,7896
	ctx.r29.s64 = ctx.r11.s64 + 7896;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829cdc00
	if (!ctx.cr6.eq) goto loc_829CDC00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_829CDC00:
	// bl 0x828165a8
	ctx.lr = 0x829CDC04;
	sub_828165A8(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x829CDC10;
	sub_82333960(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823339b8
	ctx.lr = 0x829CDC2C;
	sub_823339B8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829cdc40
	if (!ctx.cr6.eq) goto loc_829CDC40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_829CDC40:
	// bl 0x828165a8
	ctx.lr = 0x829CDC44;
	sub_828165A8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x829CDC50;
	sub_82333960(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823339b8
	ctx.lr = 0x829CDC74;
	sub_823339B8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829cdc88
	if (!ctx.cr6.eq) goto loc_829CDC88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_829CDC88:
	// bl 0x828165a8
	ctx.lr = 0x829CDC8C;
	sub_828165A8(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x829CDC98;
	sub_82333960(ctx, base);
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// lwz r9,76(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// lwz r9,80(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x829cdcf0
	ctx.lr = 0x829CDCE4;
	sub_829CDCF0(ctx, base);
loc_829CDCE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CDCF0"))) PPC_WEAK_FUNC(sub_829CDCF0);
PPC_FUNC_IMPL(__imp__sub_829CDCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x829CDCF8;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lwz r21,44(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x829ce1c8
	if (ctx.cr6.eq) goto loc_829CE1C8;
	// lwz r11,108(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ce1c8
	if (ctx.cr6.eq) goto loc_829CE1C8;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829ce0a8
	if (ctx.cr6.eq) goto loc_829CE0A8;
	// ble cr6,0x829ce1b8
	if (!ctx.cr6.gt) goto loc_829CE1B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x829ce1b8
	if (ctx.cr6.gt) goto loc_829CE1B8;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82336a38
	ctx.lr = 0x829CDD60;
	sub_82336A38(ctx, base);
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x829cdd9c
	if (!ctx.cr6.eq) goto loc_829CDD9C;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82336b48
	ctx.lr = 0x829CDD8C;
	sub_82336B48(ctx, base);
	// lwz r27,112(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// beq cr6,0x829ce1c8
	if (ctx.cr6.eq) goto loc_829CE1C8;
loc_829CDD9C:
	// stw r23,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r23.u32);
	// li r3,1488
	ctx.r3.s64 = 1488;
	// bl 0x82833108
	ctx.lr = 0x829CDDA8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829cddbc
	if (ctx.cr0.eq) goto loc_829CDDBC;
	// bl 0x8284c630
	ctx.lr = 0x829CDDB4;
	sub_8284C630(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x829cddc0
	goto loc_829CDDC0;
loc_829CDDBC:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_829CDDC0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x829cdde4
	if (ctx.cr6.eq) goto loc_829CDDE4;
	// li r3,848
	ctx.r3.s64 = 848;
	// bl 0x82833108
	ctx.lr = 0x829CDDD0;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829cde04
	if (ctx.cr0.eq) goto loc_829CDE04;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82963eb8
	ctx.lr = 0x829CDDE0;
	sub_82963EB8(ctx, base);
	// b 0x829cddfc
	goto loc_829CDDFC;
loc_829CDDE4:
	// li r3,2000
	ctx.r3.s64 = 2000;
	// bl 0x82833108
	ctx.lr = 0x829CDDEC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829cde04
	if (ctx.cr0.eq) goto loc_829CDE04;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82851e78
	ctx.lr = 0x829CDDFC;
	sub_82851E78(ctx, base);
loc_829CDDFC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x829cde08
	goto loc_829CDE08;
loc_829CDE04:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_829CDE08:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CDE28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x829CDE3C;
	sub_829B8EE8(ctx, base);
	// lis r10,22628
	ctx.r10.s64 = 1482948608;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// ori r6,r10,28342
	ctx.r6.u64 = ctx.r10.u64 | 28342;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r28,r11,15060
	ctx.r28.s64 = ctx.r11.s64 + 15060;
	// addi r27,r10,15044
	ctx.r27.s64 = ctx.r10.s64 + 15044;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// addi r26,r9,15028
	ctx.r26.s64 = ctx.r9.s64 + 15028;
	// addi r25,r8,15012
	ctx.r25.s64 = ctx.r8.s64 + 15012;
	// addi r24,r7,14996
	ctx.r24.s64 = ctx.r7.s64 + 14996;
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// beq cr6,0x829cdea0
	if (ctx.cr6.eq) goto loc_829CDEA0;
	// lis r10,3333
	ctx.r10.s64 = 218431488;
	// ori r10,r10,63700
	ctx.r10.u64 = ctx.r10.u64 | 63700;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829cdea0
	if (ctx.cr6.eq) goto loc_829CDEA0;
	// lis r10,9971
	ctx.r10.s64 = 653459456;
	// ori r10,r10,14598
	ctx.r10.u64 = ctx.r10.u64 | 14598;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829cdf60
	if (!ctx.cr6.eq) goto loc_829CDF60;
loc_829CDEA0:
	// lis r11,23083
	ctx.r11.s64 = 1512767488;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ori r29,r11,1832
	ctx.r29.u64 = ctx.r11.u64 | 1832;
	// bl 0x82816528
	ctx.lr = 0x829CDEB0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829CDEC4;
	sub_82965800(ctx, base);
	// lis r11,-27255
	ctx.r11.s64 = -1786183680;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r29,r11,40452
	ctx.r29.u64 = ctx.r11.u64 | 40452;
	// bl 0x82816528
	ctx.lr = 0x829CDED4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829CDEE8;
	sub_82965800(ctx, base);
	// lis r11,-11066
	ctx.r11.s64 = -725221376;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r29,r11,11230
	ctx.r29.u64 = ctx.r11.u64 | 11230;
	// bl 0x82816528
	ctx.lr = 0x829CDEF8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829CDF0C;
	sub_82965800(ctx, base);
	// lis r11,-11457
	ctx.r11.s64 = -750845952;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r29,r11,59949
	ctx.r29.u64 = ctx.r11.u64 | 59949;
	// bl 0x82816528
	ctx.lr = 0x829CDF1C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829CDF30;
	sub_82965800(ctx, base);
	// lis r11,22716
	ctx.r11.s64 = 1488715776;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r29,r11,48070
	ctx.r29.u64 = ctx.r11.u64 | 48070;
	// bl 0x82816528
	ctx.lr = 0x829CDF40;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829CDF54;
	sub_82965800(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x829cd030
	ctx.lr = 0x829CDF60;
	sub_829CD030(ctx, base);
loc_829CDF60:
	// lis r11,32202
	ctx.r11.s64 = 2110390272;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// ori r11,r11,7099
	ctx.r11.u64 = ctx.r11.u64 | 7099;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829ce034
	if (!ctx.cr6.eq) goto loc_829CE034;
	// lis r11,-16795
	ctx.r11.s64 = -1100677120;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ori r29,r11,11157
	ctx.r29.u64 = ctx.r11.u64 | 11157;
	// bl 0x82816528
	ctx.lr = 0x829CDF84;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829CDF98;
	sub_82965800(ctx, base);
	// lis r11,26738
	ctx.r11.s64 = 1752301568;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r29,r11,50745
	ctx.r29.u64 = ctx.r11.u64 | 50745;
	// bl 0x82816528
	ctx.lr = 0x829CDFA8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829CDFBC;
	sub_82965800(ctx, base);
	// lis r11,-29014
	ctx.r11.s64 = -1901461504;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r29,r11,35259
	ctx.r29.u64 = ctx.r11.u64 | 35259;
	// bl 0x82816528
	ctx.lr = 0x829CDFCC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829CDFE0;
	sub_82965800(ctx, base);
	// lis r11,4636
	ctx.r11.s64 = 303824896;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r29,r11,62461
	ctx.r29.u64 = ctx.r11.u64 | 62461;
	// bl 0x82816528
	ctx.lr = 0x829CDFF0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829CE004;
	sub_82965800(ctx, base);
	// lis r11,25269
	ctx.r11.s64 = 1656029184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r29,r11,20634
	ctx.r29.u64 = ctx.r11.u64 | 20634;
	// bl 0x82816528
	ctx.lr = 0x829CE014;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829CE028;
	sub_82965800(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x829cd030
	ctx.lr = 0x829CE034;
	sub_829CD030(ctx, base);
loc_829CE034:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82833108
	ctx.lr = 0x829CE03C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829ce0a0
	if (ctx.cr0.eq) goto loc_829CE0A0;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r30,108(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 108);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ce060
	if (ctx.cr6.eq) goto loc_829CE060;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829ce064
	goto loc_829CE064;
loc_829CE060:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_829CE064:
	// lwz r29,148(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r6,124(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// ld r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 140);
	// ld r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 128);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x828f7920
	ctx.lr = 0x829CE098;
	sub_828F7920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829ce1bc
	goto loc_829CE1BC;
loc_829CE0A0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x829ce1bc
	goto loc_829CE1BC;
loc_829CE0A8:
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82336a38
	ctx.lr = 0x829CE0CC;
	sub_82336A38(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ce104
	if (!ctx.cr6.eq) goto loc_829CE104;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82336b48
	ctx.lr = 0x829CE0F8;
	sub_82336B48(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ce1c8
	if (ctx.cr6.eq) goto loc_829CE1C8;
loc_829CE104:
	// stw r23,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r23.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82833108
	ctx.lr = 0x829CE110;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829ce0a0
	if (ctx.cr0.eq) goto loc_829CE0A0;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r28,108(r21)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r21.u32 + 108);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ce134
	if (ctx.cr6.eq) goto loc_829CE134;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829ce138
	goto loc_829CE138;
loc_829CE134:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_829CE138:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,124(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r26,116(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r25,108(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r24,140(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r21,144(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r20,148(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r19,128(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r18,132(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r31,136(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82833180
	ctx.lr = 0x829CE164;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// addi r11,r11,-2544
	ctx.r11.s64 = ctx.r11.s64 + -2544;
	// stw r25,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r25.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r26,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r26.u32);
	// stw r27,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stw r23,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r23.u32);
	// stw r23,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r23.u32);
	// stw r19,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r19.u32);
	// stw r18,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r18.u32);
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
	// stw r24,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r24.u32);
	// stw r21,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r21.u32);
	// stw r20,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r20.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x829ce1bc
	goto loc_829CE1BC;
loc_829CE1B8:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_829CE1BC:
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829CE1C8;
	sub_82833A30(ctx, base);
loc_829CE1C8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CE1D0"))) PPC_WEAK_FUNC(sub_829CE1D0);
PPC_FUNC_IMPL(__imp__sub_829CE1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829ce220
	ctx.lr = 0x829CE1F0;
	sub_829CE220(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829ce204
	if (ctx.cr6.eq) goto loc_829CE204;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x829CE204;
	sub_82333B08(ctx, base);
loc_829CE204:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CE220"))) PPC_WEAK_FUNC(sub_829CE220);
PPC_FUNC_IMPL(__imp__sub_829CE220) {
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
	// addi r31,r11,19460
	ctx.r31.s64 = ctx.r11.s64 + 19460;
	// lwz r11,19464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19464);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829ce268
	if (!ctx.cr0.eq) goto loc_829CE268;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-11280
	ctx.r9.s64 = ctx.r9.s64 + -11280;
	// stw r11,19464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19464, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10144
	ctx.r3.s64 = ctx.r11.s64 + -10144;
	// bl 0x82a4c758
	ctx.lr = 0x829CE268;
	sub_82A4C758(ctx, base);
loc_829CE268:
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

__attribute__((alias("__imp__sub_829CE280"))) PPC_WEAK_FUNC(sub_829CE280);
PPC_FUNC_IMPL(__imp__sub_829CE280) {
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
	// lwz r11,-27612(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27612);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829ce2c0
	if (!ctx.cr0.eq) goto loc_829CE2C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27612, ctx.r11.u32);
	// addi r3,r9,-11396
	ctx.r3.s64 = ctx.r9.s64 + -11396;
	// bl 0x82816528
	ctx.lr = 0x829CE2B8;
	sub_82816528(ctx, base);
	// stw r3,-27616(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27616, ctx.r3.u32);
	// b 0x829ce2c4
	goto loc_829CE2C4;
loc_829CE2C0:
	// lwz r3,-27616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27616);
loc_829CE2C4:
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

__attribute__((alias("__imp__sub_829CE2D8"))) PPC_WEAK_FUNC(sub_829CE2D8);
PPC_FUNC_IMPL(__imp__sub_829CE2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829ce220
	ctx.lr = 0x829CE2F8;
	sub_829CE220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CE30C;
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

__attribute__((alias("__imp__sub_829CE328"))) PPC_WEAK_FUNC(sub_829CE328);
PPC_FUNC_IMPL(__imp__sub_829CE328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829ce360
	if (ctx.cr6.eq) goto loc_829CE360;
	// bl 0x829ce220
	ctx.lr = 0x829CE350;
	sub_829CE220(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829ce360
	if (!ctx.cr6.eq) goto loc_829CE360;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829ce36c
	goto loc_829CE36C;
loc_829CE360:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x829CE36C;
	sub_82333C70(ctx, base);
loc_829CE36C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CE388"))) PPC_WEAK_FUNC(sub_829CE388);
PPC_FUNC_IMPL(__imp__sub_829CE388) {
	PPC_FUNC_PROLOGUE();
	// b 0x829ce220
	sub_829CE220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CE390"))) PPC_WEAK_FUNC(sub_829CE390);
PPC_FUNC_IMPL(__imp__sub_829CE390) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x829CE3AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829ce414
	if (ctx.cr0.eq) goto loc_829CE414;
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
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-11360
	ctx.r9.s64 = ctx.r9.s64 + -11360;
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
	// b 0x829ce418
	goto loc_829CE418;
loc_829CE414:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829CE418:
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

__attribute__((alias("__imp__sub_829CE430"))) PPC_WEAK_FUNC(sub_829CE430);
PPC_FUNC_IMPL(__imp__sub_829CE430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-11396
	ctx.r3.s64 = ctx.r11.s64 + -11396;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CE440"))) PPC_WEAK_FUNC(sub_829CE440);
PPC_FUNC_IMPL(__imp__sub_829CE440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82337028
	ctx.lr = 0x829CE460;
	sub_82337028(ctx, base);
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
	ctx.lr = 0x829CE478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x829ce488
	if (!ctx.cr0.eq) goto loc_829CE488;
	// li r3,0
	ctx.r3.s64 = 0;
loc_829CE488:
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x8284e580
	ctx.lr = 0x829CE494;
	sub_8284E580(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CE4B0"))) PPC_WEAK_FUNC(sub_829CE4B0);
PPC_FUNC_IMPL(__imp__sub_829CE4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x829CE4B8;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829CE4D4;
	sub_829B9720(ctx, base);
	// bl 0x824381f0
	ctx.lr = 0x829CE4D8;
	sub_824381F0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x829ce860
	if (ctx.cr0.eq) goto loc_829CE860;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f13,908(r11)
	ctx.fpscr.disableFlushMode();
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
	ctx.lr = 0x829CE524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// li r28,1
	ctx.r28.s64 = 1;
	// ori r25,r11,47806
	ctx.r25.u64 = ctx.r11.u64 | 47806;
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// stw r11,1596(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1596, ctx.r11.u32);
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829ce5a8
	if (ctx.cr6.eq) goto loc_829CE5A8;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82833108
	ctx.lr = 0x829CE54C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829ce59c
	if (ctx.cr0.eq) goto loc_829CE59C;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ce56c
	if (ctx.cr6.eq) goto loc_829CE56C;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829ce570
	goto loc_829CE570;
loc_829CE56C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_829CE570:
	// lwz r11,500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,488(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// rldicr r5,r5,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,492(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 492);
	// ld r4,480(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 480);
	// bl 0x8254f228
	ctx.lr = 0x829CE594;
	sub_8254F228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829ce5a0
	goto loc_829CE5A0;
loc_829CE59C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CE5A0:
	// stw r28,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r28.u32);
	// b 0x829ce624
	goto loc_829CE624;
loc_829CE5A8:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x829CE5B0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829ce620
	if (ctx.cr0.eq) goto loc_829CE620;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ce5d0
	if (ctx.cr6.eq) goto loc_829CE5D0;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829ce5d4
	goto loc_829CE5D4;
loc_829CE5D0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_829CE5D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r24,108(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r23,492(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// lwz r22,496(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// lwz r21,500(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// bl 0x82833180
	ctx.lr = 0x829CE5EC;
	sub_82833180(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// addi r11,r11,-11176
	ctx.r11.s64 = ctx.r11.s64 + -11176;
	// stw r23,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r23.u32);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r22,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r22.u32);
	// stw r21,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r21.u32);
	// b 0x829ce624
	goto loc_829CE624;
loc_829CE620:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CE624:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829CE630;
	sub_82833A30(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_829CE638:
	// lwz r11,292(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 292);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x829ce66c
	if (!ctx.cr6.lt) goto loc_829CE66C;
	// lwz r11,288(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82411cb0
	ctx.lr = 0x829CE650;
	sub_82411CB0(ctx, base);
	// bl 0x82411cb0
	ctx.lr = 0x829CE654;
	sub_82411CB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829ce660
	if (ctx.cr0.eq) goto loc_829CE660;
	// stw r28,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r28.u32);
loc_829CE660:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x829ce638
	goto loc_829CE638;
loc_829CE66C:
	// lwz r31,1608(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1608);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x829ce6c0
	if (ctx.cr6.eq) goto loc_829CE6C0;
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829ce69c
	if (ctx.cr6.eq) goto loc_829CE69C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829CE690;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x829CE694;
	sub_82409C40(ctx, base);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// b 0x829ce6a0
	goto loc_829CE6A0;
loc_829CE69C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829CE6A0:
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x829ce6c0
	if (ctx.cr6.eq) goto loc_829CE6C0;
	// lwz r11,1608(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1608);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,172(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r9,1488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1488, ctx.r9.u32);
	// stw r10,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r10.u32);
	// b 0x829ce774
	goto loc_829CE774;
loc_829CE6C0:
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// lwz r31,1608(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1608);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829ce6e4
	if (ctx.cr6.eq) goto loc_829CE6E4;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829CE6D8;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x829CE6DC;
	sub_82409C40(ctx, base);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// b 0x829ce6e8
	goto loc_829CE6E8;
loc_829CE6E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829CE6E8:
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x829ce774
	if (!ctx.cr6.eq) goto loc_829CE774;
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829ce70c
	if (ctx.cr6.eq) goto loc_829CE70C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829CE704;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x829CE708;
	sub_82409C40(ctx, base);
	// b 0x829ce710
	goto loc_829CE710;
loc_829CE70C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829CE710:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ce774
	if (ctx.cr6.eq) goto loc_829CE774;
	// lwz r31,1412(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ce774
	if (ctx.cr6.eq) goto loc_829CE774;
	// lwz r11,504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// lwz r11,1120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1120);
	// lwz r10,508(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// stw r10,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r10.u32);
	// lwz r10,512(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// stw r10,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r10.u32);
	// lwz r10,516(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// stw r10,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r10.u32);
	// lwz r10,520(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// stw r10,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r10.u32);
	// lwz r10,524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// stw r10,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r10.u32);
	// lwz r4,528(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CE76C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
loc_829CE774:
	// lbz r11,123(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 123);
	// li r3,28
	ctx.r3.s64 = 28;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x829ce7d4
	if (!ctx.cr6.eq) goto loc_829CE7D4;
	// bl 0x82833108
	ctx.lr = 0x829CE788;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829ce7c0
	if (ctx.cr0.eq) goto loc_829CE7C0;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ce7a8
	if (ctx.cr6.eq) goto loc_829CE7A8;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829ce7ac
	goto loc_829CE7AC;
loc_829CE7A8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_829CE7AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,108(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x824f7c50
	ctx.lr = 0x829CE7B8;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829ce7c4
	goto loc_829CE7C4;
loc_829CE7C0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CE7C4:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829CE7D0;
	sub_82833A30(ctx, base);
	// b 0x829ce860
	goto loc_829CE860;
loc_829CE7D4:
	// bl 0x82833108
	ctx.lr = 0x829CE7D8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829ce838
	if (ctx.cr0.eq) goto loc_829CE838;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ce7f8
	if (ctx.cr6.eq) goto loc_829CE7F8;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829ce7fc
	goto loc_829CE7FC;
loc_829CE7F8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_829CE7FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,108(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x82833180
	ctx.lr = 0x829CE808;
	sub_82833180(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r11,r11,-11072
	ctx.r11.s64 = ctx.r11.s64 + -11072;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// b 0x829ce83c
	goto loc_829CE83C;
loc_829CE838:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CE83C:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829CE848;
	sub_82833A30(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,1128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CE860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829CE860:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CE868"))) PPC_WEAK_FUNC(sub_829CE868);
PPC_FUNC_IMPL(__imp__sub_829CE868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x829CE870;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,468(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829ce960
	if (ctx.cr6.eq) goto loc_829CE960;
	// lwa r11,420(r28)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r28.u32 + 420));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x829ce960
	if (!ctx.cr6.lt) goto loc_829CE960;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829ce960
	if (ctx.cr0.eq) goto loc_829CE960;
	// lbz r11,123(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 123);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x829ce948
	if (!ctx.cr6.eq) goto loc_829CE948;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x829CE8D0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829ce934
	if (ctx.cr0.eq) goto loc_829CE934;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ce8f0
	if (ctx.cr6.eq) goto loc_829CE8F0;
	// lwz r30,80(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829ce8f4
	goto loc_829CE8F4;
loc_829CE8F0:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_829CE8F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,108(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// bl 0x82833180
	ctx.lr = 0x829CE900;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r11,r11,9488
	ctx.r11.s64 = ctx.r11.s64 + 9488;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// b 0x829ce938
	goto loc_829CE938;
loc_829CE934:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_829CE938:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829CE948;
	sub_82833A30(ctx, base);
loc_829CE948:
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// ld r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// ld r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// bl 0x829cc358
	ctx.lr = 0x829CE958;
	sub_829CC358(ctx, base);
	// stw r25,468(r28)
	PPC_STORE_U32(ctx.r28.u32 + 468, ctx.r25.u32);
	// b 0x829ceb4c
	goto loc_829CEB4C;
loc_829CE960:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829ce974
	if (!ctx.cr6.eq) goto loc_829CE974;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829cedc0
	ctx.lr = 0x829CE974;
	sub_829CEDC0(ctx, base);
loc_829CE974:
	// lwz r4,108(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829ce9dc
	if (ctx.cr6.eq) goto loc_829CE9DC;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829CE990;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x829CE994;
	sub_82416348(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829ce9dc
	if (ctx.cr0.eq) goto loc_829CE9DC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f13,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CE9DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829CE9DC:
	// lwz r4,108(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829ceaac
	if (ctx.cr6.eq) goto loc_829CEAAC;
	// lwz r11,244(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829ceaac
	if (ctx.cr6.eq) goto loc_829CEAAC;
	// lwa r11,240(r28)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r28.u32 + 240));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x829ceaac
	if (!ctx.cr6.lt) goto loc_829CEAAC;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829ceaac
	if (ctx.cr0.eq) goto loc_829CEAAC;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829CEA30;
	sub_829B9720(ctx, base);
	// bl 0x82336ae8
	ctx.lr = 0x829CEA34;
	sub_82336AE8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829ceaa8
	if (ctx.cr0.eq) goto loc_829CEAA8;
	// lwz r27,288(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_829CEA48:
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x829ceaa8
	if (!ctx.cr6.lt) goto loc_829CEAA8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824112d0
	ctx.lr = 0x829CEA60;
	sub_824112D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829cea90
	if (ctx.cr0.eq) goto loc_829CEA90;
	// bl 0x823368e8
	ctx.lr = 0x829CEA6C;
	sub_823368E8(ctx, base);
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
	ctx.lr = 0x829CEA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x829cea94
	if (!ctx.cr0.eq) goto loc_829CEA94;
loc_829CEA90:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_829CEA94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ceaa0
	if (ctx.cr6.eq) goto loc_829CEAA0;
	// stw r27,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r27.u32);
loc_829CEAA0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x829cea48
	goto loc_829CEA48;
loc_829CEAA8:
	// stw r25,244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 244, ctx.r25.u32);
loc_829CEAAC:
	// lwz r4,108(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829ceb4c
	if (ctx.cr6.eq) goto loc_829CEB4C;
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829ceb4c
	if (ctx.cr6.eq) goto loc_829CEB4C;
	// lwa r11,360(r28)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r28.u32 + 360));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x829ceb4c
	if (!ctx.cr6.lt) goto loc_829CEB4C;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829ceb4c
	if (ctx.cr0.eq) goto loc_829CEB4C;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829CEAFC;
	sub_829B9720(ctx, base);
	// bl 0x82336ae8
	ctx.lr = 0x829CEB00;
	sub_82336AE8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829ceb48
	if (ctx.cr0.eq) goto loc_829CEB48;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_829CEB10:
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x829ceb48
	if (!ctx.cr6.lt) goto loc_829CEB48;
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82411cb0
	ctx.lr = 0x829CEB28;
	sub_82411CB0(ctx, base);
	// bl 0x82411cb0
	ctx.lr = 0x829CEB2C;
	sub_82411CB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829ceb3c
	if (ctx.cr0.eq) goto loc_829CEB3C;
	// lwz r11,408(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 408);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
loc_829CEB3C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x829ceb10
	goto loc_829CEB10;
loc_829CEB48:
	// stw r25,364(r28)
	PPC_STORE_U32(ctx.r28.u32 + 364, ctx.r25.u32);
loc_829CEB4C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CEB58"))) PPC_WEAK_FUNC(sub_829CEB58);
PPC_FUNC_IMPL(__imp__sub_829CEB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829CEB60;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x829ced34
	if (ctx.cr6.gt) goto loc_829CED34;
	// beq cr6,0x829ced04
	if (ctx.cr6.eq) goto loc_829CED04;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829cebd4
	if (ctx.cr6.eq) goto loc_829CEBD4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x829cedb8
	if (!ctx.cr6.gt) goto loc_829CEDB8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x829cebc0
	if (!ctx.cr6.gt) goto loc_829CEBC0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x829cedb8
	if (!ctx.cr6.eq) goto loc_829CEDB8;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r10,1
	ctx.r10.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// b 0x829cedb8
	goto loc_829CEDB8;
loc_829CEBC0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// b 0x829cedb8
	goto loc_829CEDB8;
loc_829CEBD4:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stb r11,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r11.u8);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stb r11,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r11.u8);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stb r11,123(r31)
	PPC_STORE_U8(ctx.r31.u32 + 123, ctx.r11.u8);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x829CEC40;
	sub_823339B8(ctx, base);
	// addi r29,r31,176
	ctx.r29.s64 = ctx.r31.s64 + 176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82400b48
	ctx.lr = 0x829CEC50;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x829CEC58;
	sub_82333960(ctx, base);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x829CEC7C;
	sub_823339B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// bl 0x82400b48
	ctx.lr = 0x829CEC88;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x829CEC90;
	sub_82333960(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829ceca4
	if (ctx.cr6.eq) goto loc_829CECA4;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x829cecac
	goto loc_829CECAC;
loc_829CECA4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_829CECAC:
	// bl 0x828165a8
	ctx.lr = 0x829CECB0;
	sub_828165A8(ctx, base);
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x829cecf8
	if (ctx.cr6.lt) goto loc_829CECF8;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
loc_829CECF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829cedc0
	ctx.lr = 0x829CED00;
	sub_829CEDC0(ctx, base);
	// b 0x829cedb8
	goto loc_829CEDB8;
loc_829CED04:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829CED18;
	sub_829B9720(ctx, base);
	// bl 0x824381f0
	ctx.lr = 0x829CED1C;
	sub_824381F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829cedb8
	if (ctx.cr0.eq) goto loc_829CEDB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,536(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// lwz r11,816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 816);
	// b 0x829cedb0
	goto loc_829CEDB0;
loc_829CED34:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x829ced80
	if (ctx.cr6.eq) goto loc_829CED80;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x829ced68
	if (ctx.cr6.eq) goto loc_829CED68;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x829cedb8
	if (!ctx.cr6.eq) goto loc_829CEDB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// b 0x829cedb8
	goto loc_829CEDB8;
loc_829CED68:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// b 0x829cedb8
	goto loc_829CEDB8;
loc_829CED80:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829CED94;
	sub_829B9720(ctx, base);
	// bl 0x824381f0
	ctx.lr = 0x829CED98;
	sub_824381F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829cedb8
	if (ctx.cr0.eq) goto loc_829CEDB8;
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r4,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,820(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 820);
loc_829CEDB0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CEDB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829CEDB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CEDC0"))) PPC_WEAK_FUNC(sub_829CEDC0);
PPC_FUNC_IMPL(__imp__sub_829CEDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x829CEDC8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r10,-15060
	ctx.r3.s64 = ctx.r10.s64 + -15060;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x823928a0
	ctx.lr = 0x829CEDEC;
	sub_823928A0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x829cee48
	if (!ctx.cr0.eq) goto loc_829CEE48;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r31,r11,92
	ctx.r31.s64 = ctx.r11.s64 + 92;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x829CEE10;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829cf278
	if (ctx.cr0.eq) goto loc_829CF278;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x829cf278
	goto loc_829CF278;
loc_829CEE48:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lbz r11,123(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 123);
	// li r24,1
	ctx.r24.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x829cee70
	if (ctx.cr0.eq) goto loc_829CEE70;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x829cef08
	if (!ctx.cr6.eq) goto loc_829CEF08;
loc_829CEE70:
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// lwz r4,224(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// ori r11,r11,48879
	ctx.r11.u64 = ctx.r11.u64 | 48879;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// beq cr6,0x829cee9c
	if (ctx.cr6.eq) goto loc_829CEE9C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x829CEE90;
	sub_829B98F8(ctx, base);
	// bl 0x824381f0
	ctx.lr = 0x829CEE94;
	sub_824381F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829cef00
	goto loc_829CEF00;
loc_829CEE9C:
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829cef08
	if (!ctx.cr6.gt) goto loc_829CEF08;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_829CEEB0:
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ceee4
	if (ctx.cr6.eq) goto loc_829CEEE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CEEDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829cef00
	if (!ctx.cr0.eq) goto loc_829CEF00;
loc_829CEEE4:
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829ceeb0
	if (ctx.cr6.lt) goto loc_829CEEB0;
loc_829CEF00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x829cef80
	if (!ctx.cr6.eq) goto loc_829CEF80;
loc_829CEF08:
	// lbz r11,123(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 123);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x829cef1c
	if (ctx.cr6.eq) goto loc_829CEF1C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x829cf278
	if (!ctx.cr6.eq) goto loc_829CF278;
loc_829CEF1C:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,228(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f31,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r7,r1,168
	ctx.r7.s64 = ctx.r1.s64 + 168;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// stw r27,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82825148
	ctx.lr = 0x829CEF6C;
	sub_82825148(ctx, base);
	// bl 0x824381f0
	ctx.lr = 0x829CEF70;
	sub_824381F0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stb r11,123(r29)
	PPC_STORE_U8(ctx.r29.u32 + 123, ctx.r11.u8);
	// beq 0x829cf278
	if (ctx.cr0.eq) goto loc_829CF278;
loc_829CEF80:
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8f98
	ctx.lr = 0x829CEF90;
	sub_829B8F98(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cefa0
	if (ctx.cr6.eq) goto loc_829CEFA0;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x829cefa4
	goto loc_829CEFA4;
loc_829CEFA0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_829CEFA4:
	// stw r11,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CEFC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f31,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r11,472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CEFFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r30,1608(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x829cf05c
	if (ctx.cr6.eq) goto loc_829CF05C;
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829cf02c
	if (ctx.cr6.eq) goto loc_829CF02C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829CF020;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x829CF024;
	sub_82409C40(ctx, base);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// b 0x829cf030
	goto loc_829CF030;
loc_829CF02C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_829CF030:
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x829cf05c
	if (ctx.cr6.eq) goto loc_829CF05C;
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,1488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// stw r11,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r11.u32);
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r10,1608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lwz r11,584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// stw r11,1488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1488, ctx.r11.u32);
	// b 0x829cf15c
	goto loc_829CF15C;
loc_829CF05C:
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// lwz r30,1608(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829cf080
	if (ctx.cr6.eq) goto loc_829CF080;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829CF074;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x829CF078;
	sub_82409C40(ctx, base);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// b 0x829cf084
	goto loc_829CF084;
loc_829CF080:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_829CF084:
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x829cf15c
	if (!ctx.cr6.eq) goto loc_829CF15C;
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829cf0a8
	if (ctx.cr6.eq) goto loc_829CF0A8;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829CF0A0;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x829CF0A4;
	sub_82409C40(ctx, base);
	// b 0x829cf0ac
	goto loc_829CF0AC;
loc_829CF0A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_829CF0AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cf15c
	if (ctx.cr6.eq) goto loc_829CF15C;
	// lwz r30,1412(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829cf15c
	if (ctx.cr6.eq) goto loc_829CF15C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CF0D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,504(r29)
	PPC_STORE_U32(ctx.r29.u32 + 504, ctx.r11.u32);
	// lwz r11,1508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// stw r11,508(r29)
	PPC_STORE_U32(ctx.r29.u32 + 508, ctx.r11.u32);
	// lwz r11,1512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	// stw r11,512(r29)
	PPC_STORE_U32(ctx.r29.u32 + 512, ctx.r11.u32);
	// lwz r11,1516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// stw r11,516(r29)
	PPC_STORE_U32(ctx.r29.u32 + 516, ctx.r11.u32);
	// lwz r11,1520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	// stw r11,520(r29)
	PPC_STORE_U32(ctx.r29.u32 + 520, ctx.r11.u32);
	// lwz r11,1524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// stw r11,524(r29)
	PPC_STORE_U32(ctx.r29.u32 + 524, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CF11C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 528, ctx.r3.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,532(r29)
	PPC_STORE_U32(ctx.r29.u32 + 532, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,1504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1504, ctx.r27.u32);
	// stw r27,1508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1508, ctx.r27.u32);
	// stw r27,1512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1512, ctx.r27.u32);
	// stw r27,1516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1516, ctx.r27.u32);
	// stw r27,1520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1520, ctx.r27.u32);
	// stw r27,1524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1524, ctx.r27.u32);
	// lwz r11,1120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CF158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,1532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1532, ctx.r27.u32);
loc_829CF15C:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r10,1596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// lwz r11,19484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19484);
	// stw r10,472(r29)
	PPC_STORE_U32(ctx.r29.u32 + 472, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r27.u32);
	// beq cr6,0x829cf198
	if (ctx.cr6.eq) goto loc_829CF198;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CF18C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
loc_829CF198:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82833108
	ctx.lr = 0x829CF1A0;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829cf1f0
	if (ctx.cr0.eq) goto loc_829CF1F0;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cf1c0
	if (ctx.cr6.eq) goto loc_829CF1C0;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829cf1c4
	goto loc_829CF1C4;
loc_829CF1C0:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_829CF1C4:
	// lwz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,132(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,108(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// rldicr r5,r5,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,136(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 136);
	// ld r4,124(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 124);
	// bl 0x8254f228
	ctx.lr = 0x829CF1E8;
	sub_8254F228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829cf1f4
	goto loc_829CF1F4;
loc_829CF1F0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_829CF1F4:
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829CF200;
	sub_82833A30(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x829CF208;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829cf268
	if (ctx.cr0.eq) goto loc_829CF268;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cf228
	if (ctx.cr6.eq) goto loc_829CF228;
	// lwz r30,80(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829cf22c
	goto loc_829CF22C;
loc_829CF228:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_829CF22C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,108(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// bl 0x82833180
	ctx.lr = 0x829CF238;
	sub_82833180(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r11,r11,-11072
	ctx.r11.s64 = ctx.r11.s64 + -11072;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// b 0x829cf26c
	goto loc_829CF26C;
loc_829CF268:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_829CF26C:
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829CF278;
	sub_82833A30(ctx, base);
loc_829CF278:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CF288"))) PPC_WEAK_FUNC(sub_829CF288);
PPC_FUNC_IMPL(__imp__sub_829CF288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829cf2d8
	ctx.lr = 0x829CF2A8;
	sub_829CF2D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829cf2bc
	if (ctx.cr6.eq) goto loc_829CF2BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x829CF2BC;
	sub_82333B08(ctx, base);
loc_829CF2BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CF2D8"))) PPC_WEAK_FUNC(sub_829CF2D8);
PPC_FUNC_IMPL(__imp__sub_829CF2D8) {
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
	// addi r31,r11,19468
	ctx.r31.s64 = ctx.r11.s64 + 19468;
	// lwz r11,19472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19472);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829cf320
	if (!ctx.cr0.eq) goto loc_829CF320;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-10992
	ctx.r9.s64 = ctx.r9.s64 + -10992;
	// stw r11,19472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19472, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10120
	ctx.r3.s64 = ctx.r11.s64 + -10120;
	// bl 0x82a4c758
	ctx.lr = 0x829CF320;
	sub_82A4C758(ctx, base);
loc_829CF320:
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

__attribute__((alias("__imp__sub_829CF338"))) PPC_WEAK_FUNC(sub_829CF338);
PPC_FUNC_IMPL(__imp__sub_829CF338) {
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
	// lwz r11,-27620(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27620);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829cf378
	if (!ctx.cr0.eq) goto loc_829CF378;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27620, ctx.r11.u32);
	// addi r3,r9,-11224
	ctx.r3.s64 = ctx.r9.s64 + -11224;
	// bl 0x82816528
	ctx.lr = 0x829CF370;
	sub_82816528(ctx, base);
	// stw r3,-27624(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27624, ctx.r3.u32);
	// b 0x829cf37c
	goto loc_829CF37C;
loc_829CF378:
	// lwz r3,-27624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27624);
loc_829CF37C:
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

__attribute__((alias("__imp__sub_829CF390"))) PPC_WEAK_FUNC(sub_829CF390);
PPC_FUNC_IMPL(__imp__sub_829CF390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829cf2d8
	ctx.lr = 0x829CF3B0;
	sub_829CF2D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CF3C4;
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

__attribute__((alias("__imp__sub_829CF3E0"))) PPC_WEAK_FUNC(sub_829CF3E0);
PPC_FUNC_IMPL(__imp__sub_829CF3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829cf418
	if (ctx.cr6.eq) goto loc_829CF418;
	// bl 0x829cf2d8
	ctx.lr = 0x829CF408;
	sub_829CF2D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829cf418
	if (!ctx.cr6.eq) goto loc_829CF418;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829cf424
	goto loc_829CF424;
loc_829CF418:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x829CF424;
	sub_82333C70(ctx, base);
loc_829CF424:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CF440"))) PPC_WEAK_FUNC(sub_829CF440);
PPC_FUNC_IMPL(__imp__sub_829CF440) {
	PPC_FUNC_PROLOGUE();
	// b 0x829cf2d8
	sub_829CF2D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CF448"))) PPC_WEAK_FUNC(sub_829CF448);
PPC_FUNC_IMPL(__imp__sub_829CF448) {
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
	ctx.lr = 0x829CF464;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829cf4c4
	if (ctx.cr0.eq) goto loc_829CF4C4;
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
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-11072
	ctx.r9.s64 = ctx.r9.s64 + -11072;
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
	// b 0x829cf4c8
	goto loc_829CF4C8;
loc_829CF4C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829CF4C8:
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

__attribute__((alias("__imp__sub_829CF4E0"))) PPC_WEAK_FUNC(sub_829CF4E0);
PPC_FUNC_IMPL(__imp__sub_829CF4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-11224
	ctx.r3.s64 = ctx.r11.s64 + -11224;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CF4F0"))) PPC_WEAK_FUNC(sub_829CF4F0);
PPC_FUNC_IMPL(__imp__sub_829CF4F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_829CF510"))) PPC_WEAK_FUNC(sub_829CF510);
PPC_FUNC_IMPL(__imp__sub_829CF510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829cf560
	ctx.lr = 0x829CF530;
	sub_829CF560(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829cf544
	if (ctx.cr6.eq) goto loc_829CF544;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x829CF544;
	sub_82333B08(ctx, base);
loc_829CF544:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CF560"))) PPC_WEAK_FUNC(sub_829CF560);
PPC_FUNC_IMPL(__imp__sub_829CF560) {
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
	// addi r31,r11,19480
	ctx.r31.s64 = ctx.r11.s64 + 19480;
	// lwz r11,19476(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19476);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829cf5a8
	if (!ctx.cr0.eq) goto loc_829CF5A8;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-11096
	ctx.r9.s64 = ctx.r9.s64 + -11096;
	// stw r11,19476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19476, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10096
	ctx.r3.s64 = ctx.r11.s64 + -10096;
	// bl 0x82a4c758
	ctx.lr = 0x829CF5A8;
	sub_82A4C758(ctx, base);
loc_829CF5A8:
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

__attribute__((alias("__imp__sub_829CF5C0"))) PPC_WEAK_FUNC(sub_829CF5C0);
PPC_FUNC_IMPL(__imp__sub_829CF5C0) {
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
	// lwz r11,-27628(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27628);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829cf600
	if (!ctx.cr0.eq) goto loc_829CF600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27628, ctx.r11.u32);
	// addi r3,r9,-11260
	ctx.r3.s64 = ctx.r9.s64 + -11260;
	// bl 0x82816528
	ctx.lr = 0x829CF5F8;
	sub_82816528(ctx, base);
	// stw r3,-27632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27632, ctx.r3.u32);
	// b 0x829cf604
	goto loc_829CF604;
loc_829CF600:
	// lwz r3,-27632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27632);
loc_829CF604:
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

__attribute__((alias("__imp__sub_829CF618"))) PPC_WEAK_FUNC(sub_829CF618);
PPC_FUNC_IMPL(__imp__sub_829CF618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829cf560
	ctx.lr = 0x829CF638;
	sub_829CF560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CF64C;
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

__attribute__((alias("__imp__sub_829CF668"))) PPC_WEAK_FUNC(sub_829CF668);
PPC_FUNC_IMPL(__imp__sub_829CF668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829cf6a0
	if (ctx.cr6.eq) goto loc_829CF6A0;
	// bl 0x829cf560
	ctx.lr = 0x829CF690;
	sub_829CF560(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829cf6a0
	if (!ctx.cr6.eq) goto loc_829CF6A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829cf6ac
	goto loc_829CF6AC;
loc_829CF6A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x829CF6AC;
	sub_82333C70(ctx, base);
loc_829CF6AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CF6C8"))) PPC_WEAK_FUNC(sub_829CF6C8);
PPC_FUNC_IMPL(__imp__sub_829CF6C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829cf560
	sub_829CF560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CF6D0"))) PPC_WEAK_FUNC(sub_829CF6D0);
PPC_FUNC_IMPL(__imp__sub_829CF6D0) {
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
	ctx.lr = 0x829CF6EC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829cf75c
	if (ctx.cr0.eq) goto loc_829CF75C;
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
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-11176
	ctx.r9.s64 = ctx.r9.s64 + -11176;
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
	// b 0x829cf760
	goto loc_829CF760;
loc_829CF75C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829CF760:
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

__attribute__((alias("__imp__sub_829CF778"))) PPC_WEAK_FUNC(sub_829CF778);
PPC_FUNC_IMPL(__imp__sub_829CF778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-11260
	ctx.r3.s64 = ctx.r11.s64 + -11260;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CF788"))) PPC_WEAK_FUNC(sub_829CF788);
PPC_FUNC_IMPL(__imp__sub_829CF788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23152
	ctx.r3.s64 = ctx.r11.s64 + -23152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CF798"))) PPC_WEAK_FUNC(sub_829CF798);
PPC_FUNC_IMPL(__imp__sub_829CF798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829cf7d0
	if (ctx.cr6.eq) goto loc_829CF7D0;
	// bl 0x828be988
	ctx.lr = 0x829CF7C0;
	sub_828BE988(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829cf7d0
	if (!ctx.cr6.eq) goto loc_829CF7D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829cf7dc
	goto loc_829CF7DC;
loc_829CF7D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x829CF7DC;
	sub_8237B670(ctx, base);
loc_829CF7DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CF7F8"))) PPC_WEAK_FUNC(sub_829CF7F8);
PPC_FUNC_IMPL(__imp__sub_829CF7F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828be988
	sub_828BE988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CF800"))) PPC_WEAK_FUNC(sub_829CF800);
PPC_FUNC_IMPL(__imp__sub_829CF800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82833108
	ctx.lr = 0x829CF820;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829cf888
	if (ctx.cr0.eq) goto loc_829CF888;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x829CF834;
	sub_8237B768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// addi r11,r11,-10968
	ctx.r11.s64 = ctx.r11.s64 + -10968;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x829CF850;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,132
	ctx.r4.s64 = ctx.r30.s64 + 132;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x829CF860;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,156
	ctx.r4.s64 = ctx.r30.s64 + 156;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82a4ea80
	ctx.lr = 0x829CF870;
	sub_82A4EA80(ctx, base);
	// lwz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// b 0x829cf88c
	goto loc_829CF88C;
loc_829CF888:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829CF88C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CF8A8"))) PPC_WEAK_FUNC(sub_829CF8A8);
PPC_FUNC_IMPL(__imp__sub_829CF8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828be988
	ctx.lr = 0x829CF8C8;
	sub_828BE988(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829cf8d8
	if (!ctx.cr6.eq) goto loc_829CF8D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x829cf8f0
	goto loc_829CF8F0;
loc_829CF8D8:
	// bl 0x823ceb68
	ctx.lr = 0x829CF8DC;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829cf8f0
	if (ctx.cr6.eq) goto loc_829CF8F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x829CF8F0;
	sub_8237B5A8(ctx, base);
loc_829CF8F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CF908"))) PPC_WEAK_FUNC(sub_829CF908);
PPC_FUNC_IMPL(__imp__sub_829CF908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829CF910;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829cf940
	if (!ctx.cr6.eq) goto loc_829CF940;
	// bl 0x829cfde0
	ctx.lr = 0x829CF934;
	sub_829CFDE0(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829cfc28
	if (ctx.cr6.eq) goto loc_829CFC28;
loc_829CF940:
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x829CF954;
	sub_829B98F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829cf98c
	if (ctx.cr0.eq) goto loc_829CF98C;
	// bl 0x82879f68
	ctx.lr = 0x829CF960;
	sub_82879F68(ctx, base);
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
	ctx.lr = 0x829CF978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829cf984
	if (!ctx.cr0.eq) goto loc_829CF984;
	// li r30,0
	ctx.r30.s64 = 0;
loc_829CF984:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x829cf990
	goto loc_829CF990;
loc_829CF98C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_829CF990:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x829cfab4
	if (ctx.cr6.eq) goto loc_829CFAB4;
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x829cfab4
	if (ctx.cr6.lt) goto loc_829CFAB4;
	// lfs f13,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x829cfab4
	if (ctx.cr6.gt) goto loc_829CFAB4;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829cfa60
	if (ctx.cr0.eq) goto loc_829CFA60;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x829cf9dc
	if (!ctx.cr6.eq) goto loc_829CF9DC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
loc_829CF9DC:
	// fsubs f13,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// lfs f12,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f30,f11,f0,f12
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CFA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f30,152(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,140
	ctx.r5.s64 = ctx.r31.s64 + 140;
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826d1f30
	ctx.lr = 0x829CFA24;
	sub_826D1F30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x829cfb58
	goto loc_829CFB58;
loc_829CFA60:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CFA74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f11,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,17048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x829cfb58
	goto loc_829CFB58;
loc_829CFAB4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bge cr6,0x829cfb18
	if (!ctx.cr6.lt) goto loc_829CFB18;
	// bctrl 
	ctx.lr = 0x829CFAD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f11,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x829cfb5c
	goto loc_829CFB5C;
loc_829CFB18:
	// bctrl 
	ctx.lr = 0x829CFB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,17048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f11,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
loc_829CFB58:
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_829CFB5C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ecb40
	ctx.lr = 0x829CFB68;
	sub_826ECB40(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CFB7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829cfc28
	if (ctx.cr6.eq) goto loc_829CFC28;
	// lwa r11,164(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 164));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x829cfc28
	if (!ctx.cr6.lt) goto loc_829CFC28;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829cfc28
	if (ctx.cr0.eq) goto loc_829CFC28;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x829CFBC4;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829cfc10
	if (ctx.cr0.eq) goto loc_829CFC10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,80(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r27,212(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x82833180
	ctx.lr = 0x829CFBDC;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r11,r11,9488
	ctx.r11.s64 = ctx.r11.s64 + 9488;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r27,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r27.u32);
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
	// b 0x829cfc14
	goto loc_829CFC14;
loc_829CFC10:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CFC14:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829CFC20;
	sub_82833A30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_829CFC28:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CFC38"))) PPC_WEAK_FUNC(sub_829CFC38);
PPC_FUNC_IMPL(__imp__sub_829CFC38) {
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
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829cfdbc
	if (ctx.cr6.eq) goto loc_829CFDBC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829cfcd8
	if (ctx.cr6.eq) goto loc_829CFCD8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x829cfcb4
	if (ctx.cr6.eq) goto loc_829CFCB4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x829cfdc8
	if (!ctx.cr6.eq) goto loc_829CFDC8;
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829cfdc8
	if (ctx.cr6.eq) goto loc_829CFDC8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,220(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x829CFC8C;
	sub_829B98F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829cfdc8
	if (ctx.cr0.eq) goto loc_829CFDC8;
	// bl 0x82879f68
	ctx.lr = 0x829CFC98;
	sub_82879F68(ctx, base);
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
	ctx.lr = 0x829CFCB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x829cfdc8
	goto loc_829CFDC8;
loc_829CFCB4:
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r10,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// b 0x829cfdc8
	goto loc_829CFDC8;
loc_829CFCD8:
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829cfdc8
	if (ctx.cr6.eq) goto loc_829CFDC8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x829cfd40
	if (!ctx.cr6.lt) goto loc_829CFD40;
	// lwa r11,8(r4)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 8));
	// addi r10,r3,116
	ctx.r10.s64 = ctx.r3.s64 + 116;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// b 0x829cfd74
	goto loc_829CFD74;
loc_829CFD40:
	// addi r8,r3,140
	ctx.r8.s64 = ctx.r3.s64 + 140;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f0,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,148(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lfs f13,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,152(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r10,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// stw r8,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r8.u32);
loc_829CFD74:
	// lwa r11,8(r4)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 8));
	// addi r10,r3,140
	ctx.r10.s64 = ctx.r3.s64 + 140;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// b 0x829cfdc8
	goto loc_829CFDC8;
loc_829CFDBC:
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// bl 0x829cfde0
	ctx.lr = 0x829CFDC8;
	sub_829CFDE0(ctx, base);
loc_829CFDC8:
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

__attribute__((alias("__imp__sub_829CFDE0"))) PPC_WEAK_FUNC(sub_829CFDE0);
PPC_FUNC_IMPL(__imp__sub_829CFDE0) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x829CFE0C;
	sub_829B98F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829cfe38
	if (ctx.cr0.eq) goto loc_829CFE38;
	// bl 0x82879f68
	ctx.lr = 0x829CFE18;
	sub_82879F68(ctx, base);
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
	ctx.lr = 0x829CFE30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829cfe3c
	if (!ctx.cr0.eq) goto loc_829CFE3C;
loc_829CFE38:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829CFE3C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x829cfe50
	if (!ctx.cr6.eq) goto loc_829CFE50;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r11.u32);
	// b 0x829cfec4
	goto loc_829CFEC4;
loc_829CFE50:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r10.u32);
	// stfs f0,108(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CFE78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,152(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CFE94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,156
	ctx.r4.s64 = ctx.r3.s64 + 156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817340
	ctx.lr = 0x829CFEA0;
	sub_82817340(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r9.u32);
	// stw r8,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r8.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
loc_829CFEC4:
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

__attribute__((alias("__imp__sub_829CFEE0"))) PPC_WEAK_FUNC(sub_829CFEE0);
PPC_FUNC_IMPL(__imp__sub_829CFEE0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x829cff80
	if (!ctx.cr6.eq) goto loc_829CFF80;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x829CFF20;
	sub_823339B8(ctx, base);
	// addi r31,r30,112
	ctx.r31.s64 = ctx.r30.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x829CFF30;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x829CFF38;
	sub_82333960(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829cff4c
	if (ctx.cr6.eq) goto loc_829CFF4C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x829cff54
	goto loc_829CFF54;
loc_829CFF4C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_829CFF54:
	// bl 0x828165a8
	ctx.lr = 0x829CFF58;
	sub_828165A8(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x829CFF6C;
	sub_829B98F8(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x829CFF70;
	sub_82416348(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829cff80
	if (ctx.cr0.eq) goto loc_829CFF80;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
loc_829CFF80:
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

__attribute__((alias("__imp__sub_829CFF98"))) PPC_WEAK_FUNC(sub_829CFF98);
PPC_FUNC_IMPL(__imp__sub_829CFF98) {
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
	// lbz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x829d000c
	if (!ctx.cr0.eq) goto loc_829D000C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x829CFFC0;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829cfff8
	if (ctx.cr0.eq) goto loc_829CFFF8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cffe0
	if (ctx.cr6.eq) goto loc_829CFFE0;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829cffe4
	goto loc_829CFFE4;
loc_829CFFE0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_829CFFE4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,108(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x824f7c50
	ctx.lr = 0x829CFFF0;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829cfffc
	goto loc_829CFFFC;
loc_829CFFF8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CFFFC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D000C;
	sub_82833A30(ctx, base);
loc_829D000C:
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

__attribute__((alias("__imp__sub_829D0020"))) PPC_WEAK_FUNC(sub_829D0020);
PPC_FUNC_IMPL(__imp__sub_829D0020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x829D0028;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d0048
	if (!ctx.cr6.eq) goto loc_829D0048;
	// bl 0x829d0390
	ctx.lr = 0x829D0048;
	sub_829D0390(ctx, base);
loc_829D0048:
	// lwz r11,368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d011c
	if (ctx.cr6.eq) goto loc_829D011C;
	// lwa r11,320(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 320));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x829d011c
	if (!ctx.cr6.lt) goto loc_829D011C;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d011c
	if (ctx.cr0.eq) goto loc_829D011C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x829D0088;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// beq 0x829d00f0
	if (ctx.cr0.eq) goto loc_829D00F0;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d00ac
	if (ctx.cr6.eq) goto loc_829D00AC;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d00b0
	goto loc_829D00B0;
loc_829D00AC:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_829D00B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,108(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x82833180
	ctx.lr = 0x829D00BC;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r11,r11,9488
	ctx.r11.s64 = ctx.r11.s64 + 9488;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// b 0x829d00f4
	goto loc_829D00F4;
loc_829D00F0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_829D00F4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D0104;
	sub_82833A30(ctx, base);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// ld r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// bl 0x829cc358
	ctx.lr = 0x829D0114;
	sub_829CC358(ctx, base);
	// stw r25,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r25.u32);
	// b 0x829d0290
	goto loc_829D0290;
loc_829D011C:
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829d01f0
	if (ctx.cr6.eq) goto loc_829D01F0;
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d01f0
	if (ctx.cr6.eq) goto loc_829D01F0;
	// lwa r11,200(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 200));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x829d01f0
	if (!ctx.cr6.lt) goto loc_829D01F0;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d01f0
	if (ctx.cr0.eq) goto loc_829D01F0;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829D0174;
	sub_829B9720(ctx, base);
	// bl 0x82336ae8
	ctx.lr = 0x829D0178;
	sub_82336AE8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829d01ec
	if (ctx.cr0.eq) goto loc_829D01EC;
	// lwz r27,248(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_829D018C:
	// lwz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x829d01ec
	if (!ctx.cr6.lt) goto loc_829D01EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824112d0
	ctx.lr = 0x829D01A4;
	sub_824112D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829d01d4
	if (ctx.cr0.eq) goto loc_829D01D4;
	// bl 0x823368e8
	ctx.lr = 0x829D01B0;
	sub_823368E8(ctx, base);
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
	ctx.lr = 0x829D01C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x829d01d8
	if (!ctx.cr0.eq) goto loc_829D01D8;
loc_829D01D4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_829D01D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d01e4
	if (ctx.cr6.eq) goto loc_829D01E4;
	// stw r27,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r27.u32);
loc_829D01E4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x829d018c
	goto loc_829D018C;
loc_829D01EC:
	// stw r25,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r25.u32);
loc_829D01F0:
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829d0290
	if (ctx.cr6.eq) goto loc_829D0290;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d0290
	if (ctx.cr6.eq) goto loc_829D0290;
	// lwa r11,260(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 260));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x829d0290
	if (!ctx.cr6.lt) goto loc_829D0290;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d0290
	if (ctx.cr0.eq) goto loc_829D0290;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829D0240;
	sub_829B9720(ctx, base);
	// bl 0x82336ae8
	ctx.lr = 0x829D0244;
	sub_82336AE8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829d028c
	if (ctx.cr0.eq) goto loc_829D028C;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_829D0254:
	// lwz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x829d028c
	if (!ctx.cr6.lt) goto loc_829D028C;
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82411cb0
	ctx.lr = 0x829D026C;
	sub_82411CB0(ctx, base);
	// bl 0x82411cb0
	ctx.lr = 0x829D0270;
	sub_82411CB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d0280
	if (ctx.cr0.eq) goto loc_829D0280;
	// lwz r11,308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
loc_829D0280:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x829d0254
	goto loc_829D0254;
loc_829D028C:
	// stw r25,264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 264, ctx.r25.u32);
loc_829D0290:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D02A0"))) PPC_WEAK_FUNC(sub_829D02A0);
PPC_FUNC_IMPL(__imp__sub_829D02A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829d0338
	if (ctx.cr6.eq) goto loc_829D0338;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829d0324
	if (ctx.cr6.eq) goto loc_829D0324;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x829d0300
	if (ctx.cr6.eq) goto loc_829D0300;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x829d02e8
	if (ctx.cr6.eq) goto loc_829D02E8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// stw r10,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r10.u32);
	// blr 
	return;
loc_829D02E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stw r10,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r10.u32);
	// blr 
	return;
loc_829D0300:
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// li r10,1
	ctx.r10.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r10,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r10.u32);
	// blr 
	return;
loc_829D0324:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// blr 
	return;
loc_829D0338:
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stb r11,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r11.u8);
	// lwz r11,92(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// b 0x829d0390
	sub_829D0390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D0390"))) PPC_WEAK_FUNC(sub_829D0390);
PPC_FUNC_IMPL(__imp__sub_829D0390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x829D0398;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lbz r11,176(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d03d4
	if (ctx.cr0.eq) goto loc_829D03D4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,180(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 180);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x829D03C8;
	sub_829B98F8(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x829d0874
	if (ctx.cr0.eq) goto loc_829D0874;
	// b 0x829d086c
	goto loc_829D086C;
loc_829D03D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,180(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 180);
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82336a38
	ctx.lr = 0x829D03FC;
	sub_82336A38(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829d0874
	if (ctx.cr6.eq) goto loc_829D0874;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15336
	ctx.r3.s64 = ctx.r11.s64 + 15336;
	// bl 0x82816528
	ctx.lr = 0x829D0414;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82740840
	ctx.lr = 0x829D0420;
	sub_82740840(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829d0874
	if (ctx.cr0.eq) goto loc_829D0874;
	// li r3,1488
	ctx.r3.s64 = 1488;
	// bl 0x82833108
	ctx.lr = 0x829D0430;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d0444
	if (ctx.cr0.eq) goto loc_829D0444;
	// bl 0x8284c630
	ctx.lr = 0x829D043C;
	sub_8284C630(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x829d0448
	goto loc_829D0448;
loc_829D0444:
	// li r25,0
	ctx.r25.s64 = 0;
loc_829D0448:
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x82833108
	ctx.lr = 0x829D0450;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d046c
	if (ctx.cr0.eq) goto loc_829D046C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// bl 0x828aef20
	ctx.lr = 0x829D0464;
	sub_828AEF20(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x829d0470
	goto loc_829D0470;
loc_829D046C:
	// li r23,0
	ctx.r23.s64 = 0;
loc_829D0470:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,19488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d048c
	if (ctx.cr6.eq) goto loc_829D048C;
	// lwz r11,236(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 236);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,236(r23)
	PPC_STORE_U32(ctx.r23.u32 + 236, ctx.r11.u32);
loc_829D048C:
	// li r3,848
	ctx.r3.s64 = 848;
	// bl 0x82833108
	ctx.lr = 0x829D0494;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d04ac
	if (ctx.cr0.eq) goto loc_829D04AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82963eb8
	ctx.lr = 0x829D04A4;
	sub_82963EB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829d04b0
	goto loc_829D04B0;
loc_829D04AC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829D04B0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-10864
	ctx.r3.s64 = ctx.r11.s64 + -10864;
	// bl 0x82816528
	ctx.lr = 0x829D04BC;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82965458
	ctx.lr = 0x829D04D8;
	sub_82965458(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-10844
	ctx.r3.s64 = ctx.r11.s64 + -10844;
	// bl 0x82816528
	ctx.lr = 0x829D04E4;
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
	ctx.lr = 0x829D04F8;
	sub_82965458(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-10820
	ctx.r3.s64 = ctx.r11.s64 + -10820;
	// bl 0x82816528
	ctx.lr = 0x829D0504;
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
	ctx.lr = 0x829D0518;
	sub_82965458(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-10800
	ctx.r3.s64 = ctx.r11.s64 + -10800;
	// bl 0x82816528
	ctx.lr = 0x829D0524;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f30,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82965458
	ctx.lr = 0x829D0540;
	sub_82965458(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-10776
	ctx.r3.s64 = ctx.r11.s64 + -10776;
	// bl 0x82816528
	ctx.lr = 0x829D054C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965458
	ctx.lr = 0x829D0560;
	sub_82965458(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-10752
	ctx.r3.s64 = ctx.r11.s64 + -10752;
	// bl 0x82816528
	ctx.lr = 0x829D056C;
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
	ctx.lr = 0x829D0580;
	sub_82965458(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-10728
	ctx.r3.s64 = ctx.r11.s64 + -10728;
	// bl 0x82816528
	ctx.lr = 0x829D058C;
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
	ctx.lr = 0x829D05A0;
	sub_82965458(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-10704
	ctx.r3.s64 = ctx.r11.s64 + -10704;
	// bl 0x82816528
	ctx.lr = 0x829D05AC;
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
	ctx.lr = 0x829D05C0;
	sub_82965458(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,26940
	ctx.r3.s64 = ctx.r11.s64 + 26940;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x829D05E0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x829D05F4;
	sub_829653C8(ctx, base);
	// lis r9,22628
	ctx.r9.s64 = 1482948608;
	// lwz r11,180(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 180);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// ori r5,r9,28342
	ctx.r5.u64 = ctx.r9.u64 | 28342;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// addi r30,r10,15060
	ctx.r30.s64 = ctx.r10.s64 + 15060;
	// addi r29,r9,15044
	ctx.r29.s64 = ctx.r9.s64 + 15044;
	// addi r28,r8,15028
	ctx.r28.s64 = ctx.r8.s64 + 15028;
	// addi r27,r7,15012
	ctx.r27.s64 = ctx.r7.s64 + 15012;
	// addi r26,r6,14996
	ctx.r26.s64 = ctx.r6.s64 + 14996;
	// beq cr6,0x829d0650
	if (ctx.cr6.eq) goto loc_829D0650;
	// lis r10,3333
	ctx.r10.s64 = 218431488;
	// ori r10,r10,63700
	ctx.r10.u64 = ctx.r10.u64 | 63700;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829d0650
	if (ctx.cr6.eq) goto loc_829D0650;
	// lis r10,9971
	ctx.r10.s64 = 653459456;
	// ori r10,r10,14598
	ctx.r10.u64 = ctx.r10.u64 | 14598;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829d0710
	if (!ctx.cr6.eq) goto loc_829D0710;
loc_829D0650:
	// lis r11,23083
	ctx.r11.s64 = 1512767488;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r21,r11,1832
	ctx.r21.u64 = ctx.r11.u64 | 1832;
	// bl 0x82816528
	ctx.lr = 0x829D0660;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829D0674;
	sub_82965800(ctx, base);
	// lis r11,-27255
	ctx.r11.s64 = -1786183680;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r21,r11,40452
	ctx.r21.u64 = ctx.r11.u64 | 40452;
	// bl 0x82816528
	ctx.lr = 0x829D0684;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829D0698;
	sub_82965800(ctx, base);
	// lis r11,-11066
	ctx.r11.s64 = -725221376;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r21,r11,11230
	ctx.r21.u64 = ctx.r11.u64 | 11230;
	// bl 0x82816528
	ctx.lr = 0x829D06A8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829D06BC;
	sub_82965800(ctx, base);
	// lis r11,-11457
	ctx.r11.s64 = -750845952;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r21,r11,59949
	ctx.r21.u64 = ctx.r11.u64 | 59949;
	// bl 0x82816528
	ctx.lr = 0x829D06CC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829D06E0;
	sub_82965800(ctx, base);
	// lis r11,22716
	ctx.r11.s64 = 1488715776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r21,r11,48070
	ctx.r21.u64 = ctx.r11.u64 | 48070;
	// bl 0x82816528
	ctx.lr = 0x829D06F0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829D0704;
	sub_82965800(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x829cd030
	ctx.lr = 0x829D0710;
	sub_829CD030(ctx, base);
loc_829D0710:
	// lis r11,32202
	ctx.r11.s64 = 2110390272;
	// lwz r10,180(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 180);
	// ori r11,r11,7099
	ctx.r11.u64 = ctx.r11.u64 | 7099;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829d07e4
	if (!ctx.cr6.eq) goto loc_829D07E4;
	// lis r11,-16795
	ctx.r11.s64 = -1100677120;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r26,r11,11157
	ctx.r26.u64 = ctx.r11.u64 | 11157;
	// bl 0x82816528
	ctx.lr = 0x829D0734;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829D0748;
	sub_82965800(ctx, base);
	// lis r11,26738
	ctx.r11.s64 = 1752301568;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r27,r11,50745
	ctx.r27.u64 = ctx.r11.u64 | 50745;
	// bl 0x82816528
	ctx.lr = 0x829D0758;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829D076C;
	sub_82965800(ctx, base);
	// lis r11,-29014
	ctx.r11.s64 = -1901461504;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r28,r11,35259
	ctx.r28.u64 = ctx.r11.u64 | 35259;
	// bl 0x82816528
	ctx.lr = 0x829D077C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829D0790;
	sub_82965800(ctx, base);
	// lis r11,4636
	ctx.r11.s64 = 303824896;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r29,r11,62461
	ctx.r29.u64 = ctx.r11.u64 | 62461;
	// bl 0x82816528
	ctx.lr = 0x829D07A0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829D07B4;
	sub_82965800(ctx, base);
	// lis r11,25269
	ctx.r11.s64 = 1656029184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r30,r11,20634
	ctx.r30.u64 = ctx.r11.u64 | 20634;
	// bl 0x82816528
	ctx.lr = 0x829D07C4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x829D07D8;
	sub_82965800(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x829cd030
	ctx.lr = 0x829D07E4;
	sub_829CD030(ctx, base);
loc_829D07E4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D07FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8284dcb0
	ctx.lr = 0x829D0808;
	sub_8284DCB0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r24,124
	ctx.r4.s64 = ctx.r24.s64 + 124;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D0820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r24,136
	ctx.r4.s64 = ctx.r24.s64 + 136;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D0838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,188(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d0848
	if (ctx.cr6.eq) goto loc_829D0848;
	// stw r11,1412(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1412, ctx.r11.u32);
loc_829D0848:
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x829D085C;
	sub_829B8EE8(ctx, base);
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8f98
	ctx.lr = 0x829D086C;
	sub_829B8F98(ctx, base);
loc_829D086C:
	// lwz r11,80(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// stw r11,108(r24)
	PPC_STORE_U32(ctx.r24.u32 + 108, ctx.r11.u32);
loc_829D0874:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D0888"))) PPC_WEAK_FUNC(sub_829D0888);
PPC_FUNC_IMPL(__imp__sub_829D0888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-10692
	ctx.r3.s64 = ctx.r11.s64 + -10692;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D0898"))) PPC_WEAK_FUNC(sub_829D0898);
PPC_FUNC_IMPL(__imp__sub_829D0898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829d08d0
	if (ctx.cr6.eq) goto loc_829D08D0;
	// bl 0x829d1028
	ctx.lr = 0x829D08C0;
	sub_829D1028(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829d08d0
	if (!ctx.cr6.eq) goto loc_829D08D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829d08dc
	goto loc_829D08DC;
loc_829D08D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x829D08DC;
	sub_82333C70(ctx, base);
loc_829D08DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D08F8"))) PPC_WEAK_FUNC(sub_829D08F8);
PPC_FUNC_IMPL(__imp__sub_829D08F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829d1028
	sub_829D1028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D0900"))) PPC_WEAK_FUNC(sub_829D0900);
PPC_FUNC_IMPL(__imp__sub_829D0900) {
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
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82833108
	ctx.lr = 0x829D091C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d09b4
	if (ctx.cr0.eq) goto loc_829D09B4;
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
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-10656
	ctx.r9.s64 = ctx.r9.s64 + -10656;
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
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// b 0x829d09b8
	goto loc_829D09B8;
loc_829D09B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D09B8:
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

__attribute__((alias("__imp__sub_829D09D0"))) PPC_WEAK_FUNC(sub_829D09D0);
PPC_FUNC_IMPL(__imp__sub_829D09D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d1028
	ctx.lr = 0x829D09F0;
	sub_829D1028(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829d0a04
	if (ctx.cr6.eq) goto loc_829D0A04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x829D0A04;
	sub_82333B08(ctx, base);
loc_829D0A04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D0A20"))) PPC_WEAK_FUNC(sub_829D0A20);
PPC_FUNC_IMPL(__imp__sub_829D0A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829D0A28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d0a78
	if (!ctx.cr6.gt) goto loc_829D0A78;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_829D0A48:
	// lwz r11,208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// ldx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282ba28
	ctx.lr = 0x829D0A64;
	sub_8282BA28(ctx, base);
	// lwz r11,212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829d0a48
	if (ctx.cr6.lt) goto loc_829D0A48;
loc_829D0A78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D0A80"))) PPC_WEAK_FUNC(sub_829D0A80);
PPC_FUNC_IMPL(__imp__sub_829D0A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x829D0A88;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x829d0c48
	if (ctx.cr6.lt) goto loc_829D0C48;
	// lfs f13,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bgt cr6,0x829d0c48
	if (ctx.cr6.gt) goto loc_829D0C48;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d0c74
	if (ctx.cr0.eq) goto loc_829D0C74;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x829d0adc
	if (!ctx.cr6.eq) goto loc_829D0ADC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
loc_829D0ADC:
	// fsubs f13,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f12,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// lfs f11,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f8,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f10,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f7,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fdivs f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f0,f9,f30
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f13,f8,f30
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fmuls f9,f7,f30
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824f97d8
	ctx.lr = 0x829D0B44;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817f30
	ctx.lr = 0x829D0B50;
	sub_82817F30(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,124
	ctx.r4.s64 = ctx.r31.s64 + 124;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x824f97d8
	ctx.lr = 0x829D0B84;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817f30
	ctx.lr = 0x829D0B90;
	sub_82817F30(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x825c0090
	ctx.lr = 0x829D0BC0;
	sub_825C0090(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825c0090
	ctx.lr = 0x829D0BC8;
	sub_825C0090(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8269cbe0
	ctx.lr = 0x829D0BDC;
	sub_8269CBE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// bl 0x825c0090
	ctx.lr = 0x829D0C0C;
	sub_825C0090(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817b48
	ctx.lr = 0x829D0C18;
	sub_82817B48(ctx, base);
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f12,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lwz r25,4(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f13,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lwz r24,8(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmadds f31,f12,f30,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fmadds f30,f11,f30,f13
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f13.f64));
	// b 0x829d0c94
	goto loc_829D0C94;
loc_829D0C48:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x829d0c74
	if (!ctx.cr6.lt) goto loc_829D0C74;
	// lfs f31,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f31.f64 = double(temp.f32);
	// lwz r29,112(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lfs f30,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f30.f64 = double(temp.f32);
	// lwz r28,116(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r27,120(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r26,124(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r25,128(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r24,132(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x829d0c94
	goto loc_829D0C94;
loc_829D0C74:
	// lwz r24,176(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lfs f30,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f30.f64 = double(temp.f32);
	// lwz r25,172(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lfs f31,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f31.f64 = double(temp.f32);
	// lwz r26,168(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r27,164(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r28,160(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r29,156(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
loc_829D0C94:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82833108
	ctx.lr = 0x829D0C9C;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829d0d1c
	if (ctx.cr0.eq) goto loc_829D0D1C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d0cbc
	if (ctx.cr0.eq) goto loc_829D0CBC;
	// lwz r31,80(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d0cc0
	goto loc_829D0CC0;
loc_829D0CBC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829D0CC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r23,604(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// bl 0x82833180
	ctx.lr = 0x829D0CCC;
	sub_82833180(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stfs f31,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// addi r11,r11,-10656
	ctx.r11.s64 = ctx.r11.s64 + -10656;
	// stfs f30,52(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r23,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r23.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// stw r27,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r27.u32);
	// stw r26,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r26.u32);
	// stw r25,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r25.u32);
	// stw r24,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r24.u32);
	// b 0x829d0d20
	goto loc_829D0D20;
loc_829D0D1C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829D0D20:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D0D30;
	sub_82833A30(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D0D40"))) PPC_WEAK_FUNC(sub_829D0D40);
PPC_FUNC_IMPL(__imp__sub_829D0D40) {
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
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829d0e58
	if (ctx.cr6.eq) goto loc_829D0E58;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x829d0dd8
	if (ctx.cr6.eq) goto loc_829D0DD8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x829d0dac
	if (ctx.cr6.eq) goto loc_829D0DAC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x829d0f64
	if (!ctx.cr6.eq) goto loc_829D0F64;
	// lwa r10,8(r4)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 8));
	// li r11,0
	ctx.r11.s64 = 0;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,156(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 156, temp.u32);
	// stb r11,152(r9)
	PPC_STORE_U8(ctx.r9.u32 + 152, ctx.r11.u8);
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// b 0x829d0f64
	goto loc_829D0F64;
loc_829D0DAC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// addi r30,r4,56
	ctx.r30.s64 = ctx.r4.s64 + 56;
	// ld r4,56(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282ba28
	ctx.lr = 0x829D0DC8;
	sub_8282BA28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x828cd3d0
	ctx.lr = 0x829D0DD4;
	sub_828CD3D0(ctx, base);
	// b 0x829d0f64
	goto loc_829D0F64;
loc_829D0DD8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// addi r30,r4,56
	ctx.r30.s64 = ctx.r4.s64 + 56;
	// ld r4,56(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282b8c8
	ctx.lr = 0x829D0DF4;
	sub_8282B8C8(ctx, base);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x829d0e4c
	if (!ctx.cr6.gt) goto loc_829D0E4C;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_829D0E10:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x829d0e3c
	if (!ctx.cr6.eq) goto loc_829D0E3C;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x829d0e3c
	if (!ctx.cr6.eq) goto loc_829D0E3C;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x829d0f64
	if (ctx.cr6.eq) goto loc_829D0F64;
loc_829D0E3C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x829d0e10
	if (ctx.cr6.lt) goto loc_829D0E10;
loc_829D0E4C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824cac78
	ctx.lr = 0x829D0E54;
	sub_824CAC78(ctx, base);
	// b 0x829d0f64
	goto loc_829D0F64;
loc_829D0E58:
	// lwa r11,8(r4)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 8));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f13,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x829d0ec4
	if (ctx.cr6.gt) goto loc_829D0EC4;
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// lfs f0,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// lfs f0,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// b 0x829d0f0c
	goto loc_829D0F0C;
loc_829D0EC4:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lfs f13,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lfs f12,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lwz r7,128(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stfs f13,180(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// lwz r6,132(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stfs f12,188(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// stw r7,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r7.u32);
	// stw r6,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r6.u32);
loc_829D0F0C:
	// lwa r11,8(r4)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 8));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lfs f0,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lfs f0,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
loc_829D0F64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D0F80"))) PPC_WEAK_FUNC(sub_829D0F80);
PPC_FUNC_IMPL(__imp__sub_829D0F80) {
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
	// lwz r11,-27636(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27636);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d0fc0
	if (!ctx.cr0.eq) goto loc_829D0FC0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27636, ctx.r11.u32);
	// addi r3,r9,-10692
	ctx.r3.s64 = ctx.r9.s64 + -10692;
	// bl 0x82816528
	ctx.lr = 0x829D0FB8;
	sub_82816528(ctx, base);
	// stw r3,-27640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27640, ctx.r3.u32);
	// b 0x829d0fc4
	goto loc_829D0FC4;
loc_829D0FC0:
	// lwz r3,-27640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27640);
loc_829D0FC4:
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

__attribute__((alias("__imp__sub_829D0FD8"))) PPC_WEAK_FUNC(sub_829D0FD8);
PPC_FUNC_IMPL(__imp__sub_829D0FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d1028
	ctx.lr = 0x829D0FF8;
	sub_829D1028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D100C;
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

__attribute__((alias("__imp__sub_829D1028"))) PPC_WEAK_FUNC(sub_829D1028);
PPC_FUNC_IMPL(__imp__sub_829D1028) {
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
	// addi r31,r11,19496
	ctx.r31.s64 = ctx.r11.s64 + 19496;
	// lwz r11,19492(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19492);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d1070
	if (!ctx.cr0.eq) goto loc_829D1070;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-10576
	ctx.r9.s64 = ctx.r9.s64 + -10576;
	// stw r11,19492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19492, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10072
	ctx.r3.s64 = ctx.r11.s64 + -10072;
	// bl 0x82a4c758
	ctx.lr = 0x829D1070;
	sub_82A4C758(ctx, base);
loc_829D1070:
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

__attribute__((alias("__imp__sub_829D1088"))) PPC_WEAK_FUNC(sub_829D1088);
PPC_FUNC_IMPL(__imp__sub_829D1088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f13,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stw r9,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r9.u32);
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lfs f0,1508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lfs f0,1512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// lfs f0,1516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lfs f0,1520(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1520);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// lfs f0,1524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1524);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// lfs f0,1528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// lfs f0,1532(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1532);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// lfs f0,1536(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1536);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// lfs f0,1540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1540);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r10.u32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stw r9,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r9.u32);
	// lfs f0,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r8.u32);
	// lfs f13,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r7.u32);
	// lfs f12,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f6.f64 = double(temp.f32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f13,232(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// stfs f12,236(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stfs f11,240(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stfs f10,244(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stfs f9,248(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f8,252(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// stfs f7,256(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f6,260(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D1178"))) PPC_WEAK_FUNC(sub_829D1178);
PPC_FUNC_IMPL(__imp__sub_829D1178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lfs f0,1452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,1408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1408, ctx.r10.u32);
	// stfs f0,1816(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1816, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D1198"))) PPC_WEAK_FUNC(sub_829D1198);
PPC_FUNC_IMPL(__imp__sub_829D1198) {
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
	// lfs f0,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x829d134c
	if (ctx.cr6.lt) goto loc_829D134C;
	// lfs f13,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bgt cr6,0x829d134c
	if (ctx.cr6.gt) goto loc_829D134C;
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d134c
	if (ctx.cr6.eq) goto loc_829D134C;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lfs f12,19500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19500);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// beq cr6,0x829d134c
	if (ctx.cr6.eq) goto loc_829D134C;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lbz r10,152(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 152);
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x829d12d4
	if (ctx.cr0.eq) goto loc_829D12D4;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f1,19500(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 19500, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x829d1210
	if (!ctx.cr6.eq) goto loc_829D1210;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
loc_829D1210:
	// fsubs f13,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f12,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r3,228
	ctx.r4.s64 = ctx.r3.s64 + 228;
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmadds f13,f11,f0,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,228(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lfs f13,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f10,f13
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,232(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// lfs f13,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,236(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// lfs f13,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f8,f13
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,240(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// lfs f13,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f7,f13
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,244(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// lfs f13,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f6,f13
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,248(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// lfs f13,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,252(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// lfs f13,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f4,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,256(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// lfs f13,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,260(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// b 0x829d1320
	goto loc_829D1320;
loc_829D12D4:
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r3,228
	ctx.r4.s64 = ctx.r3.s64 + 228;
	// lfs f13,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f13,232(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// stfs f12,236(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stfs f11,240(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stfs f10,244(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stfs f9,248(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f8,252(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// stfs f7,256(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f6,260(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
loc_829D1320:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r31,100(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// bl 0x82a4ea80
	ctx.lr = 0x829D1338;
	sub_82A4EA80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,1448(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1448, temp.u32);
	// stfs f31,1452(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1452, temp.u32);
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// b 0x829d1424
	goto loc_829D1424;
loc_829D134C:
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d1424
	if (ctx.cr6.eq) goto loc_829D1424;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// addi r4,r3,228
	ctx.r4.s64 = ctx.r3.s64 + 228;
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bge cr6,0x829d13b8
	if (!ctx.cr6.lt) goto loc_829D13B8;
	// lfs f0,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f13,256(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f12,236(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// lfs f0,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// stfs f13,244(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stfs f12,260(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stfs f10,248(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f9,252(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// b 0x829d13fc
	goto loc_829D13FC;
loc_829D13B8:
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f13,232(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// lfs f12,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,236(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stfs f10,244(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stfs f9,248(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f8,252(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// stfs f0,256(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f13,260(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
loc_829D13FC:
	// stfs f11,240(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// lwz r31,100(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// bl 0x82a4ea80
	ctx.lr = 0x829D140C;
	sub_82A4EA80(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1452, temp.u32);
	// stfs f0,1448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1448, temp.u32);
	// stw r10,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r10.u32);
loc_829D1424:
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

__attribute__((alias("__imp__sub_829D1440"))) PPC_WEAK_FUNC(sub_829D1440);
PPC_FUNC_IMPL(__imp__sub_829D1440) {
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
	// lis r10,-256
	ctx.r10.s64 = -16777216;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x829d1604
	if (ctx.cr6.eq) goto loc_829D1604;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x829d1664
	if (!ctx.cr6.eq) goto loc_829D1664;
	// lwa r11,8(r4)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 8));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x829d1504
	if (ctx.cr6.gt) goto loc_829D1504;
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f0,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lfs f0,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lfs f0,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lfs f0,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lfs f0,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// lfs f0,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// lfs f0,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// lwz r11,92(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// lwz r11,104(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// b 0x829d1578
	goto loc_829D1578;
loc_829D1504:
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfs f0,164(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,208(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// lfs f13,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,212(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// lfs f12,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// lfs f11,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r3,204
	ctx.r7.s64 = ctx.r3.s64 + 204;
	// lfs f9,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// lfs f8,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f8.f64 = double(temp.f32);
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// lfs f7,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f7.f64 = double(temp.f32);
	// stw r9,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r9.u32);
	// lfs f6,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f6.f64 = double(temp.f32);
	// stw r8,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r8.u32);
	// lfs f5,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f5.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f12,116(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f11,120(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f10,124(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f9,128(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f8,132(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f7,136(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f6,140(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f5,144(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
loc_829D1578:
	// lwa r11,8(r4)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 8));
	// addi r10,r4,92
	ctx.r10.s64 = ctx.r4.s64 + 92;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r10,r3,204
	ctx.r10.s64 = ctx.r3.s64 + 204;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lfs f0,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// lfs f0,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lfs f0,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// lfs f0,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// lfs f0,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// lfs f0,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// lfs f0,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// lfs f0,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lwz r11,92(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// lwz r11,104(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// b 0x829d1664
	goto loc_829D1664;
loc_829D1604:
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// beq cr6,0x829d164c
	if (ctx.cr6.eq) goto loc_829D164C;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r3,228
	ctx.r4.s64 = ctx.r3.s64 + 228;
	// stw r30,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r30.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r31,100(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// bl 0x82a4ea80
	ctx.lr = 0x829D1634;
	sub_82A4EA80(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r30,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r30.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1448, temp.u32);
	// stfs f0,1452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1452, temp.u32);
	// b 0x829d1664
	goto loc_829D1664;
loc_829D164C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lfs f0,1452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,1408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1408, ctx.r10.u32);
	// stfs f0,1816(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1816, temp.u32);
loc_829D1664:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D1680"))) PPC_WEAK_FUNC(sub_829D1680);
PPC_FUNC_IMPL(__imp__sub_829D1680) {
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
	// lbz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 304);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x829d16f4
	if (!ctx.cr0.eq) goto loc_829D16F4;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x829D16A8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d16e0
	if (ctx.cr0.eq) goto loc_829D16E0;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d16c8
	if (ctx.cr6.eq) goto loc_829D16C8;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d16cc
	goto loc_829D16CC;
loc_829D16C8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_829D16CC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,108(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x824f7c50
	ctx.lr = 0x829D16D8;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829d16e4
	goto loc_829D16E4;
loc_829D16E0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829D16E4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D16F4;
	sub_82833A30(ctx, base);
loc_829D16F4:
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

__attribute__((alias("__imp__sub_829D1708"))) PPC_WEAK_FUNC(sub_829D1708);
PPC_FUNC_IMPL(__imp__sub_829D1708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829D1710;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d1770
	if (ctx.cr6.eq) goto loc_829D1770;
	// lwa r11,244(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 244));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x829d1770
	if (!ctx.cr6.lt) goto loc_829D1770;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d1770
	if (ctx.cr0.eq) goto loc_829D1770;
	// ld r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// bl 0x829cc358
	ctx.lr = 0x829D1764;
	sub_829CC358(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// b 0x829d1a0c
	goto loc_829D1A0C;
loc_829D1770:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d1784
	if (!ctx.cr6.eq) goto loc_829D1784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d1bb0
	ctx.lr = 0x829D1784;
	sub_829D1BB0(ctx, base);
loc_829D1784:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d1958
	if (ctx.cr6.eq) goto loc_829D1958;
	// lfs f0,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x829d1958
	if (ctx.cr6.lt) goto loc_829D1958;
	// lfs f13,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x829d1958
	if (ctx.cr6.gt) goto loc_829D1958;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d18f0
	if (ctx.cr0.eq) goto loc_829D18F0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x829d17d4
	if (!ctx.cr6.eq) goto loc_829D17D4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
loc_829D17D4:
	// fsubs f13,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fdivs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x824f97d8
	ctx.lr = 0x829D17E8;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817f30
	ctx.lr = 0x829D17F4;
	sub_82817F30(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x824f97d8
	ctx.lr = 0x829D1828;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817f30
	ctx.lr = 0x829D1834;
	sub_82817F30(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x8269cbe0
	ctx.lr = 0x829D1870;
	sub_8269CBE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817b48
	ctx.lr = 0x829D187C;
	sub_82817B48(ctx, base);
	// lfs f0,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f12,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f10,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f9,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// fadds f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// b 0x829d1918
	goto loc_829D1918;
loc_829D18F0:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r9,212(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r8,216(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r30,232(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r29,220(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_829D1918:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82833108
	ctx.lr = 0x829D1920;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d19f8
	if (ctx.cr0.eq) goto loc_829D19F8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1940
	if (ctx.cr6.eq) goto loc_829D1940;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d1944
	goto loc_829D1944;
loc_829D1940:
	// li r9,0
	ctx.r9.s64 = 0;
loc_829D1944:
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r7,r30,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r5,r29,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// b 0x829d19e4
	goto loc_829D19E4;
loc_829D1958:
	// lfs f0,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// li r3,56
	ctx.r3.s64 = 56;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x829d19a4
	if (!ctx.cr6.lt) goto loc_829D19A4;
	// bl 0x82833108
	ctx.lr = 0x829D196C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d19f8
	if (ctx.cr0.eq) goto loc_829D19F8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d198c
	if (ctx.cr6.eq) goto loc_829D198C;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d1990
	goto loc_829D1990;
loc_829D198C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_829D1990:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// ld r6,192(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 192);
	// ld r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 180);
	// b 0x829d19dc
	goto loc_829D19DC;
loc_829D19A4:
	// bl 0x82833108
	ctx.lr = 0x829D19A8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d19f8
	if (ctx.cr0.eq) goto loc_829D19F8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d19c8
	if (ctx.cr6.eq) goto loc_829D19C8;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d19cc
	goto loc_829D19CC;
loc_829D19C8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_829D19CC:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r5,220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// ld r6,224(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 224);
	// ld r4,212(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 212);
loc_829D19DC:
	// rldicr r5,r5,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
loc_829D19E4:
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x8254f228
	ctx.lr = 0x829D19F0;
	sub_8254F228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829d19fc
	goto loc_829D19FC;
loc_829D19F8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829D19FC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D1A0C;
	sub_82833A30(ctx, base);
loc_829D1A0C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D1A18"))) PPC_WEAK_FUNC(sub_829D1A18);
PPC_FUNC_IMPL(__imp__sub_829D1A18) {
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
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829d1b34
	if (ctx.cr6.eq) goto loc_829D1B34;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829d1a54
	if (ctx.cr6.eq) goto loc_829D1A54;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x829d1b9c
	if (!ctx.cr6.eq) goto loc_829D1B9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// b 0x829d1b9c
	goto loc_829D1B9C;
loc_829D1A54:
	// lwa r11,8(r4)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 8));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f13,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x829d1ab0
	if (ctx.cr6.gt) goto loc_829D1AB0;
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// b 0x829d1ae8
	goto loc_829D1AE8;
loc_829D1AB0:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lfs f0,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r9,188(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r8,192(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r7,196(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r6,200(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// stw r10,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r10.u32);
	// stw r9,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r9.u32);
	// stw r8,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r8.u32);
	// stw r7,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r7.u32);
	// stw r6,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r6.u32);
loc_829D1AE8:
	// lwa r11,8(r4)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 8));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// b 0x829d1b9c
	goto loc_829D1B9C;
loc_829D1B34:
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// lwz r11,92(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stb r11,304(r3)
	PPC_STORE_U8(ctx.r3.u32 + 304, ctx.r11.u8);
	// stw r10,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r10.u32);
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x829d1b98
	if (ctx.cr6.lt) goto loc_829D1B98;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r11.u32);
loc_829D1B98:
	// bl 0x829d1bb0
	ctx.lr = 0x829D1B9C;
	sub_829D1BB0(ctx, base);
loc_829D1B9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D1BB0"))) PPC_WEAK_FUNC(sub_829D1BB0);
PPC_FUNC_IMPL(__imp__sub_829D1BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829D1BB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 304);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d1bf0
	if (ctx.cr0.eq) goto loc_829D1BF0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,296(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x829D1BE0;
	sub_829B98F8(ctx, base);
	// bl 0x82916530
	ctx.lr = 0x829D1BE4;
	sub_82916530(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829d1d14
	if (ctx.cr0.eq) goto loc_829D1D14;
	// b 0x829d1d0c
	goto loc_829D1D0C;
loc_829D1BF0:
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r5,300(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82957960
	ctx.lr = 0x829D1C18;
	sub_82957960(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829d1d14
	if (ctx.cr6.eq) goto loc_829D1D14;
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x82833108
	ctx.lr = 0x829D1C2C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d1c48
	if (ctx.cr0.eq) goto loc_829D1C48;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8299f8e0
	ctx.lr = 0x829D1C40;
	sub_8299F8E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x829d1c4c
	goto loc_829D1C4C;
loc_829D1C48:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_829D1C4C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1488
	ctx.r3.s64 = 1488;
	// stw r11,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r11.u32);
	// lwz r11,308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// stw r11,456(r29)
	PPC_STORE_U32(ctx.r29.u32 + 456, ctx.r11.u32);
	// bl 0x82833108
	ctx.lr = 0x829D1C64;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d1c78
	if (ctx.cr0.eq) goto loc_829D1C78;
	// bl 0x828fe3c8
	ctx.lr = 0x829D1C70;
	sub_828FE3C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829d1c7c
	goto loc_829D1C7C;
loc_829D1C78:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_829D1C7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D1C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f13,176(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// beq cr6,0x829d1cd0
	if (ctx.cr6.eq) goto loc_829D1CD0;
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D1CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// b 0x829d1ce0
	goto loc_829D1CE0;
loc_829D1CD0:
	// addi r4,r30,124
	ctx.r4.s64 = ctx.r30.s64 + 124;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D1CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r30,136
	ctx.r4.s64 = ctx.r30.s64 + 136;
loc_829D1CE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D1CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r27.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x829D1D0C;
	sub_829B8EE8(ctx, base);
loc_829D1D0C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
loc_829D1D14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D1D20"))) PPC_WEAK_FUNC(sub_829D1D20);
PPC_FUNC_IMPL(__imp__sub_829D1D20) {
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
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1d94
	if (ctx.cr6.eq) goto loc_829D1D94;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x829D1D48;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d1d80
	if (ctx.cr0.eq) goto loc_829D1D80;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1d68
	if (ctx.cr6.eq) goto loc_829D1D68;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d1d6c
	goto loc_829D1D6C;
loc_829D1D68:
	// li r5,0
	ctx.r5.s64 = 0;
loc_829D1D6C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,164(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x824f7c50
	ctx.lr = 0x829D1D78;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829d1d84
	goto loc_829D1D84;
loc_829D1D80:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829D1D84:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D1D94;
	sub_82833A30(ctx, base);
loc_829D1D94:
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

__attribute__((alias("__imp__sub_829D1DA8"))) PPC_WEAK_FUNC(sub_829D1DA8);
PPC_FUNC_IMPL(__imp__sub_829D1DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829D1DB0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x829d1f90
	if (ctx.cr6.lt) goto loc_829D1F90;
	// lfs f13,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bgt cr6,0x829d1f90
	if (ctx.cr6.gt) goto loc_829D1F90;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1f90
	if (ctx.cr6.eq) goto loc_829D1F90;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d1f28
	if (ctx.cr0.eq) goto loc_829D1F28;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x829d1e0c
	if (!ctx.cr6.eq) goto loc_829D1E0C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
loc_829D1E0C:
	// fsubs f13,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// addi r4,r31,124
	ctx.r4.s64 = ctx.r31.s64 + 124;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fdivs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x824f97d8
	ctx.lr = 0x829D1E20;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817f30
	ctx.lr = 0x829D1E2C;
	sub_82817F30(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x824f97d8
	ctx.lr = 0x829D1E60;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817f30
	ctx.lr = 0x829D1E6C;
	sub_82817F30(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x8269cbe0
	ctx.lr = 0x829D1EA8;
	sub_8269CBE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817b48
	ctx.lr = 0x829D1EB4;
	sub_82817B48(ctx, base);
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f12,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f10,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f9,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// fadds f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// b 0x829d1f50
	goto loc_829D1F50;
loc_829D1F28:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r29,120(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_829D1F50:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82833108
	ctx.lr = 0x829D1F58;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d202c
	if (ctx.cr0.eq) goto loc_829D202C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1f78
	if (ctx.cr6.eq) goto loc_829D1F78;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d1f7c
	goto loc_829D1F7C;
loc_829D1F78:
	// li r9,0
	ctx.r9.s64 = 0;
loc_829D1F7C:
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r7,r30,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r5,r29,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// b 0x829d2018
	goto loc_829D2018;
loc_829D1F90:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// li r3,56
	ctx.r3.s64 = 56;
	// bge cr6,0x829d1fd8
	if (!ctx.cr6.lt) goto loc_829D1FD8;
	// bl 0x82833108
	ctx.lr = 0x829D1FA0;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d202c
	if (ctx.cr0.eq) goto loc_829D202C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1fc0
	if (ctx.cr6.eq) goto loc_829D1FC0;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d1fc4
	goto loc_829D1FC4;
loc_829D1FC0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_829D1FC4:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r5,148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// ld r6,152(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 152);
	// ld r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 140);
	// b 0x829d2010
	goto loc_829D2010;
loc_829D1FD8:
	// bl 0x82833108
	ctx.lr = 0x829D1FDC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d202c
	if (ctx.cr0.eq) goto loc_829D202C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1ffc
	if (ctx.cr6.eq) goto loc_829D1FFC;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d2000
	goto loc_829D2000;
loc_829D1FFC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_829D2000:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// ld r6,124(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 124);
	// ld r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
loc_829D2010:
	// rldicr r5,r5,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
loc_829D2018:
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x8254f228
	ctx.lr = 0x829D2024;
	sub_8254F228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829d2030
	goto loc_829D2030;
loc_829D202C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829D2030:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D2040;
	sub_82833A30(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D2050"))) PPC_WEAK_FUNC(sub_829D2050);
PPC_FUNC_IMPL(__imp__sub_829D2050) {
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
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x829d2264
	if (ctx.cr6.lt) goto loc_829D2264;
	// beq cr6,0x829d2174
	if (ctx.cr6.eq) goto loc_829D2174;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x829d2128
	if (ctx.cr6.lt) goto loc_829D2128;
	// beq cr6,0x829d20f4
	if (ctx.cr6.eq) goto loc_829D20F4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x829d227c
	if (!ctx.cr6.lt) goto loc_829D227C;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d227c
	if (ctx.cr6.eq) goto loc_829D227C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x829D209C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d20d4
	if (ctx.cr0.eq) goto loc_829D20D4;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d20bc
	if (ctx.cr6.eq) goto loc_829D20BC;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d20c0
	goto loc_829D20C0;
loc_829D20BC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_829D20C0:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,164(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x824f7c50
	ctx.lr = 0x829D20CC;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829d20d8
	goto loc_829D20D8;
loc_829D20D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829D20D8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D20E8;
	sub_82833A30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// b 0x829d227c
	goto loc_829D227C;
loc_829D20F4:
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x829d227c
	if (ctx.cr6.eq) goto loc_829D227C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829D2110;
	sub_829B9720(ctx, base);
	// bl 0x82916590
	ctx.lr = 0x829D2114;
	sub_82916590(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d227c
	if (ctx.cr0.eq) goto loc_829D227C;
	// lwz r3,1408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x829D2124;
	sub_82978ED0(ctx, base);
	// b 0x829d227c
	goto loc_829D227C;
loc_829D2128:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d213c
	if (!ctx.cr6.eq) goto loc_829D213C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d2290
	ctx.lr = 0x829D213C;
	sub_829D2290(ctx, base);
loc_829D213C:
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x829d227c
	if (ctx.cr6.eq) goto loc_829D227C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829D2158;
	sub_829B9720(ctx, base);
	// bl 0x82916590
	ctx.lr = 0x829D215C;
	sub_82916590(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d227c
	if (ctx.cr0.eq) goto loc_829D227C;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lwz r3,1408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// bl 0x82978d98
	ctx.lr = 0x829D2170;
	sub_82978D98(ctx, base);
	// b 0x829d227c
	goto loc_829D227C;
loc_829D2174:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d227c
	if (ctx.cr6.eq) goto loc_829D227C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x829d21e0
	if (!ctx.cr6.lt) goto loc_829D21E0;
	// lwa r11,8(r4)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 8));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x829d2218
	goto loc_829D2218;
loc_829D21E0:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r7,156(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r6,160(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// stw r8,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r8.u32);
	// stw r7,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r7.u32);
	// stw r6,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r6.u32);
loc_829D2218:
	// lwa r11,8(r4)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 8));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// b 0x829d227c
	goto loc_829D227C;
loc_829D2264:
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
loc_829D227C:
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

__attribute__((alias("__imp__sub_829D2290"))) PPC_WEAK_FUNC(sub_829D2290);
PPC_FUNC_IMPL(__imp__sub_829D2290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829D2298;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r5,168(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x823cf190
	ctx.lr = 0x829D22C8;
	sub_823CF190(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x829d235c
	if (ctx.cr6.eq) goto loc_829D235C;
	// li r3,1424
	ctx.r3.s64 = 1424;
	// bl 0x82833108
	ctx.lr = 0x829D22DC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d22f0
	if (ctx.cr0.eq) goto loc_829D22F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828adc70
	ctx.lr = 0x829D22EC;
	sub_828ADC70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_829D22F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829d235c
	if (ctx.cr6.eq) goto loc_829D235C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ae6e8
	ctx.lr = 0x829D2310;
	sub_828AE6E8(ctx, base);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r10,332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 332, ctx.r10.u32);
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x829D2324;
	sub_82978ED0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lwz r4,44(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D2340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x829D2354;
	sub_829B8EE8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r11.u32);
loc_829D235C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D2368"))) PPC_WEAK_FUNC(sub_829D2368);
PPC_FUNC_IMPL(__imp__sub_829D2368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-10556
	ctx.r3.s64 = ctx.r11.s64 + -10556;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D2378"))) PPC_WEAK_FUNC(sub_829D2378);
PPC_FUNC_IMPL(__imp__sub_829D2378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829d23b0
	if (ctx.cr6.eq) goto loc_829D23B0;
	// bl 0x829d2d88
	ctx.lr = 0x829D23A0;
	sub_829D2D88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829d23b0
	if (!ctx.cr6.eq) goto loc_829D23B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829d23bc
	goto loc_829D23BC;
loc_829D23B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x829D23BC;
	sub_82333C70(ctx, base);
loc_829D23BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D23D8"))) PPC_WEAK_FUNC(sub_829D23D8);
PPC_FUNC_IMPL(__imp__sub_829D23D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829d2d88
	sub_829D2D88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D23E0"))) PPC_WEAK_FUNC(sub_829D23E0);
PPC_FUNC_IMPL(__imp__sub_829D23E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82833108
	ctx.lr = 0x829D2400;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829d2474
	if (ctx.cr0.eq) goto loc_829D2474;
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r11,-10488
	ctx.r11.s64 = ctx.r11.s64 + -10488;
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
	// bl 0x823339b8
	ctx.lr = 0x829D2460;
	sub_823339B8(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x823339b8
	ctx.lr = 0x829D246C;
	sub_823339B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x829d2478
	goto loc_829D2478;
loc_829D2474:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D2478:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D2490"))) PPC_WEAK_FUNC(sub_829D2490);
PPC_FUNC_IMPL(__imp__sub_829D2490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d2d88
	ctx.lr = 0x829D24B0;
	sub_829D2D88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829d24c4
	if (ctx.cr6.eq) goto loc_829D24C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x829D24C4;
	sub_82333B08(ctx, base);
loc_829D24C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D24E0"))) PPC_WEAK_FUNC(sub_829D24E0);
PPC_FUNC_IMPL(__imp__sub_829D24E0) {
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
	// bl 0x824a0a48
	ctx.lr = 0x829D24FC;
	sub_824A0A48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// lwz r11,824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 824);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D2514;
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

__attribute__((alias("__imp__sub_829D2528"))) PPC_WEAK_FUNC(sub_829D2528);
PPC_FUNC_IMPL(__imp__sub_829D2528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82333960
	ctx.lr = 0x829D254C;
	sub_82333960(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82333960
	ctx.lr = 0x829D2554;
	sub_82333960(ctx, base);
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
	ctx.lr = 0x829D2570;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829d2580
	if (ctx.cr0.eq) goto loc_829D2580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x829D2580;
	sub_82332DB8(ctx, base);
loc_829D2580:
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

__attribute__((alias("__imp__sub_829D25A0"))) PPC_WEAK_FUNC(sub_829D25A0);
PPC_FUNC_IMPL(__imp__sub_829D25A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-10524
	ctx.r3.s64 = ctx.r11.s64 + -10524;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D25B0"))) PPC_WEAK_FUNC(sub_829D25B0);
PPC_FUNC_IMPL(__imp__sub_829D25B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829d25e8
	if (ctx.cr6.eq) goto loc_829D25E8;
	// bl 0x829d2e90
	ctx.lr = 0x829D25D8;
	sub_829D2E90(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829d25e8
	if (!ctx.cr6.eq) goto loc_829D25E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829d25f4
	goto loc_829D25F4;
loc_829D25E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x829D25F4;
	sub_82333C70(ctx, base);
loc_829D25F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D2610"))) PPC_WEAK_FUNC(sub_829D2610);
PPC_FUNC_IMPL(__imp__sub_829D2610) {
	PPC_FUNC_PROLOGUE();
	// b 0x829d2e90
	sub_829D2E90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D2618"))) PPC_WEAK_FUNC(sub_829D2618);
PPC_FUNC_IMPL(__imp__sub_829D2618) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x829D2634;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d2694
	if (ctx.cr0.eq) goto loc_829D2694;
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
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-10384
	ctx.r9.s64 = ctx.r9.s64 + -10384;
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
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// b 0x829d2698
	goto loc_829D2698;
loc_829D2694:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D2698:
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

__attribute__((alias("__imp__sub_829D26B0"))) PPC_WEAK_FUNC(sub_829D26B0);
PPC_FUNC_IMPL(__imp__sub_829D26B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d2e90
	ctx.lr = 0x829D26D0;
	sub_829D2E90(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829d26e4
	if (ctx.cr6.eq) goto loc_829D26E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x829D26E4;
	sub_82333B08(ctx, base);
loc_829D26E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D2700"))) PPC_WEAK_FUNC(sub_829D2700);
PPC_FUNC_IMPL(__imp__sub_829D2700) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x824a0a48
	ctx.lr = 0x829D271C;
	sub_824A0A48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 832);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D2730;
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

__attribute__((alias("__imp__sub_829D2748"))) PPC_WEAK_FUNC(sub_829D2748);
PPC_FUNC_IMPL(__imp__sub_829D2748) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// bl 0x829ccb50
	ctx.lr = 0x829D276C;
	sub_829CCB50(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,-14712
	ctx.r11.s64 = ctx.r11.s64 + -14712;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x829d279c
	if (ctx.cr6.eq) goto loc_829D279C;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x829d27a4
	goto loc_829D27A4;
loc_829D279C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_829D27A4:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x824099b8
	ctx.lr = 0x829D27AC;
	sub_824099B8(ctx, base);
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

__attribute__((alias("__imp__sub_829D27C0"))) PPC_WEAK_FUNC(sub_829D27C0);
PPC_FUNC_IMPL(__imp__sub_829D27C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x829D27C8;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d2b4c
	if (ctx.cr6.eq) goto loc_829D2B4C;
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x829d2b4c
	if (ctx.cr6.eq) goto loc_829D2B4C;
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// lis r21,-31949
	ctx.r21.s64 = -2093809664;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d2940
	if (!ctx.cr6.gt) goto loc_829D2940;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r22,-1
	ctx.r22.s64 = -1;
loc_829D281C:
	// lwz r10,148(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwz r11,13024(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x82411dc0
	ctx.lr = 0x829D2840;
	sub_82411DC0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828f7090
	ctx.lr = 0x829D2848;
	sub_828F7090(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829d2928
	if (ctx.cr0.eq) goto loc_829D2928;
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x829d2894
	if (ctx.cr6.eq) goto loc_829D2894;
	// lwz r11,13024(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829D2870;
	sub_829B9720(ctx, base);
	// bl 0x82336ae8
	ctx.lr = 0x829D2874;
	sub_82336AE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d2894
	if (ctx.cr0.eq) goto loc_829D2894;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D288C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x829d28c4
	if (!ctx.cr0.eq) goto loc_829D28C4;
loc_829D2894:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwz r11,13024(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82411dc0
	ctx.lr = 0x829D28B4;
	sub_82411DC0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x828f70f0
	ctx.lr = 0x829D28BC;
	sub_828F70F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d2928
	if (ctx.cr0.eq) goto loc_829D2928;
loc_829D28C4:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8292c1b0
	ctx.lr = 0x829D28CC;
	sub_8292C1B0(ctx, base);
	// addi r26,r29,136
	ctx.r26.s64 = ctx.r29.s64 + 136;
	// cmpw cr6,r25,r23
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x829d2904
	if (!ctx.cr6.lt) goto loc_829D2904;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// subf r31,r25,r23
	ctx.r31.s64 = ctx.r23.s64 - ctx.r25.s64;
loc_829D28E0:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x82333960
	ctx.lr = 0x829D28F0;
	sub_82333960(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82333960
	ctx.lr = 0x829D28F8;
	sub_82333960(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r28,r28,52
	ctx.r28.s64 = ctx.r28.s64 + 52;
	// bne 0x829d28e0
	if (!ctx.cr0.eq) goto loc_829D28E0;
loc_829D2904:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,52
	ctx.r6.s64 = 52;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332ca8
	ctx.lr = 0x829D291C;
	sub_82332CA8(ctx, base);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// addi r24,r24,-52
	ctx.r24.s64 = ctx.r24.s64 + -52;
loc_829D2928:
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,52
	ctx.r24.s64 = ctx.r24.s64 + 52;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829d281c
	if (ctx.cr6.lt) goto loc_829D281C;
loc_829D2940:
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d2b4c
	if (!ctx.cr6.eq) goto loc_829D2B4C;
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d2aa4
	if (ctx.cr6.eq) goto loc_829D2AA4;
	// stw r30,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r30.u32);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82833108
	ctx.lr = 0x829D2964;
	sub_82833108(ctx, base);
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ori r27,r11,47806
	ctx.r27.u64 = ctx.r11.u64 | 47806;
	// beq 0x829d2a44
	if (ctx.cr0.eq) goto loc_829D2A44;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r10,108(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r26,108(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d2994
	if (ctx.cr6.eq) goto loc_829D2994;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d2998
	goto loc_829D2998;
loc_829D2994:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_829D2998:
	// addi r4,r29,188
	ctx.r4.s64 = ctx.r29.s64 + 188;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823339b8
	ctx.lr = 0x829D29A4;
	sub_823339B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r29,164
	ctx.r4.s64 = ctx.r29.s64 + 164;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823339b8
	ctx.lr = 0x829D29B4;
	sub_823339B8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x829D29C0;
	sub_82833180(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r10,r10,-10488
	ctx.r10.s64 = ctx.r10.s64 + -10488;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bl 0x82400b48
	ctx.lr = 0x829D2A20;
	sub_82400B48(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82400b48
	ctx.lr = 0x829D2A2C;
	sub_82400B48(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82333960
	ctx.lr = 0x829D2A34;
	sub_82333960(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82333960
	ctx.lr = 0x829D2A3C;
	sub_82333960(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x829d2a48
	goto loc_829D2A48;
loc_829D2A44:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_829D2A48:
	// lwz r11,13024(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D2A54;
	sub_82833A30(ctx, base);
	// lwz r11,13024(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13024);
	// li r3,28
	ctx.r3.s64 = 28;
	// lfs f31,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,212(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 212, temp.u32);
	// bl 0x82833108
	ctx.lr = 0x829D2A68;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829d2b3c
	if (ctx.cr0.eq) goto loc_829D2B3C;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r10,108(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r28,108(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d2a90
	if (ctx.cr6.eq) goto loc_829D2A90;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d2a94
	goto loc_829D2A94;
loc_829D2A90:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_829D2A94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x829D2A9C;
	sub_82833180(ctx, base);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// b 0x829d2b18
	goto loc_829D2B18;
loc_829D2AA4:
	// lwz r11,13024(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13024);
	// lfs f0,212(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x829d2b4c
	if (ctx.cr6.eq) goto loc_829D2B4C;
	// lfs f0,216(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f12,212(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// li r3,28
	ctx.r3.s64 = 28;
	// lfs f0,-25412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25412);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f31,f13,f0,f12
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// bl 0x82833108
	ctx.lr = 0x829D2AD8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829d2b3c
	if (ctx.cr0.eq) goto loc_829D2B3C;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r10,108(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r28,108(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d2b00
	if (ctx.cr6.eq) goto loc_829D2B00;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d2b04
	goto loc_829D2B04;
loc_829D2B00:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_829D2B04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x829D2B0C;
	sub_82833180(ctx, base);
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_829D2B18:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-10384
	ctx.r11.s64 = ctx.r11.s64 + -10384;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x829d2b40
	goto loc_829D2B40;
loc_829D2B3C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_829D2B40:
	// lwz r11,13024(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D2B4C;
	sub_82833A30(ctx, base);
loc_829D2B4C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D2B58"))) PPC_WEAK_FUNC(sub_829D2B58);
PPC_FUNC_IMPL(__imp__sub_829D2B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829D2B60;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq cr6,0x829d2c24
	if (ctx.cr6.eq) goto loc_829D2C24;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x829d2ccc
	if (!ctx.cr6.eq) goto loc_829D2CCC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// mulli r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 * 24;
	// lwz r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x829D2BC4;
	sub_823339B8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x82400b48
	ctx.lr = 0x829D2BD0;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x829D2BD8;
	sub_82333960(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823339b8
	ctx.lr = 0x829D2BF4;
	sub_823339B8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// bl 0x82400b48
	ctx.lr = 0x829D2C00;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x829D2C08;
	sub_82333960(ctx, base);
	// lwa r11,8(r29)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r29.u32 + 8));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// b 0x829d2ccc
	goto loc_829D2CCC;
loc_829D2C24:
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x829D2C38;
	sub_82332D50(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mulli r30,r3,52
	ctx.r30.s64 = ctx.r3.s64 * 52;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a455d0
	ctx.lr = 0x829D2C50;
	sub_82A455D0(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823339b8
	ctx.lr = 0x829D2C6C;
	sub_823339B8(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x829D2C7C;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x829D2C84;
	sub_82333960(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823339b8
	ctx.lr = 0x829D2CA0;
	sub_823339B8(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82400b48
	ctx.lr = 0x829D2CB4;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x829D2CBC;
	sub_82333960(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_829D2CCC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x829D2CD4;
	sub_82333960(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D2CE0"))) PPC_WEAK_FUNC(sub_829D2CE0);
PPC_FUNC_IMPL(__imp__sub_829D2CE0) {
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
	// lwz r11,-27644(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27644);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d2d20
	if (!ctx.cr0.eq) goto loc_829D2D20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27644, ctx.r11.u32);
	// addi r3,r9,-10556
	ctx.r3.s64 = ctx.r9.s64 + -10556;
	// bl 0x82816528
	ctx.lr = 0x829D2D18;
	sub_82816528(ctx, base);
	// stw r3,-27648(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27648, ctx.r3.u32);
	// b 0x829d2d24
	goto loc_829D2D24;
loc_829D2D20:
	// lwz r3,-27648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27648);
loc_829D2D24:
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

__attribute__((alias("__imp__sub_829D2D38"))) PPC_WEAK_FUNC(sub_829D2D38);
PPC_FUNC_IMPL(__imp__sub_829D2D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d2d88
	ctx.lr = 0x829D2D58;
	sub_829D2D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D2D6C;
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

__attribute__((alias("__imp__sub_829D2D88"))) PPC_WEAK_FUNC(sub_829D2D88);
PPC_FUNC_IMPL(__imp__sub_829D2D88) {
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
	// addi r31,r11,20276
	ctx.r31.s64 = ctx.r11.s64 + 20276;
	// lwz r11,20284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20284);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d2dd0
	if (!ctx.cr0.eq) goto loc_829D2DD0;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-10408
	ctx.r9.s64 = ctx.r9.s64 + -10408;
	// stw r11,20284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20284, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10024
	ctx.r3.s64 = ctx.r11.s64 + -10024;
	// bl 0x82a4c758
	ctx.lr = 0x829D2DD0;
	sub_82A4C758(ctx, base);
loc_829D2DD0:
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

__attribute__((alias("__imp__sub_829D2DE8"))) PPC_WEAK_FUNC(sub_829D2DE8);
PPC_FUNC_IMPL(__imp__sub_829D2DE8) {
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
	// lwz r11,-27652(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27652);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d2e28
	if (!ctx.cr0.eq) goto loc_829D2E28;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27652(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27652, ctx.r11.u32);
	// addi r3,r9,-10524
	ctx.r3.s64 = ctx.r9.s64 + -10524;
	// bl 0x82816528
	ctx.lr = 0x829D2E20;
	sub_82816528(ctx, base);
	// stw r3,-27656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27656, ctx.r3.u32);
	// b 0x829d2e2c
	goto loc_829D2E2C;
loc_829D2E28:
	// lwz r3,-27656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27656);
loc_829D2E2C:
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

__attribute__((alias("__imp__sub_829D2E40"))) PPC_WEAK_FUNC(sub_829D2E40);
PPC_FUNC_IMPL(__imp__sub_829D2E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d2e90
	ctx.lr = 0x829D2E60;
	sub_829D2E90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D2E74;
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

__attribute__((alias("__imp__sub_829D2E90"))) PPC_WEAK_FUNC(sub_829D2E90);
PPC_FUNC_IMPL(__imp__sub_829D2E90) {
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
	// addi r31,r11,20272
	ctx.r31.s64 = ctx.r11.s64 + 20272;
	// lwz r11,20280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20280);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d2ed8
	if (!ctx.cr0.eq) goto loc_829D2ED8;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-10304
	ctx.r9.s64 = ctx.r9.s64 + -10304;
	// stw r11,20280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20280, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10048
	ctx.r3.s64 = ctx.r11.s64 + -10048;
	// bl 0x82a4c758
	ctx.lr = 0x829D2ED8;
	sub_82A4C758(ctx, base);
loc_829D2ED8:
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

__attribute__((alias("__imp__sub_829D2EF0"))) PPC_WEAK_FUNC(sub_829D2EF0);
PPC_FUNC_IMPL(__imp__sub_829D2EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829D2EF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d2f8c
	if (ctx.cr6.eq) goto loc_829D2F8C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x829D2F14;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829d2f78
	if (ctx.cr0.eq) goto loc_829D2F78;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d2f38
	if (ctx.cr6.eq) goto loc_829D2F38;
	// lwz r30,80(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d2f3c
	goto loc_829D2F3C;
loc_829D2F38:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_829D2F3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,112(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// bl 0x82833180
	ctx.lr = 0x829D2F48;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r11,r11,9488
	ctx.r11.s64 = ctx.r11.s64 + 9488;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// b 0x829d2f7c
	goto loc_829D2F7C;
loc_829D2F78:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829D2F7C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D2F8C;
	sub_82833A30(ctx, base);
loc_829D2F8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D2F98"))) PPC_WEAK_FUNC(sub_829D2F98);
PPC_FUNC_IMPL(__imp__sub_829D2F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829D2FA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d308c
	if (ctx.cr6.eq) goto loc_829D308C;
	// lwz r29,44(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x829d308c
	if (ctx.cr6.eq) goto loc_829D308C;
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d308c
	if (ctx.cr6.eq) goto loc_829D308C;
	// lwa r10,124(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 124));
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x829d308c
	if (!ctx.cr6.lt) goto loc_829D308C;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d308c
	if (ctx.cr0.eq) goto loc_829D308C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x829D3008;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829d3070
	if (ctx.cr0.eq) goto loc_829D3070;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r28,108(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d302c
	if (ctx.cr6.eq) goto loc_829D302C;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d3030
	goto loc_829D3030;
loc_829D302C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_829D3030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,172(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x82833180
	ctx.lr = 0x829D303C;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r11,r11,9488
	ctx.r11.s64 = ctx.r11.s64 + 9488;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
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
	// b 0x829d3074
	goto loc_829D3074;
loc_829D3070:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829D3074:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D3084;
	sub_82833A30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
loc_829D308C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D3098"))) PPC_WEAK_FUNC(sub_829D3098);
PPC_FUNC_IMPL(__imp__sub_829D3098) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D30C8"))) PPC_WEAK_FUNC(sub_829D30C8);
PPC_FUNC_IMPL(__imp__sub_829D30C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r11.u32);
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r31,1384(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// bl 0x8286ebe0
	ctx.lr = 0x829D30F8;
	sub_8286EBE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829735e8
	ctx.lr = 0x829D3104;
	sub_829735E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829d3138
	if (ctx.cr0.eq) goto loc_829D3138;
	// bl 0x8286ebe0
	ctx.lr = 0x829D3110;
	sub_8286EBE0(ctx, base);
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
	ctx.lr = 0x829D3128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829d3134
	if (!ctx.cr0.eq) goto loc_829D3134;
	// li r31,0
	ctx.r31.s64 = 0;
loc_829D3134:
	// stw r31,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r31.u32);
loc_829D3138:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D3150"))) PPC_WEAK_FUNC(sub_829D3150);
PPC_FUNC_IMPL(__imp__sub_829D3150) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d3164
	if (ctx.cr6.eq) goto loc_829D3164;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_829D3164:
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D3170"))) PPC_WEAK_FUNC(sub_829D3170);
PPC_FUNC_IMPL(__imp__sub_829D3170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x829d31a8
	if (ctx.cr6.eq) goto loc_829D31A8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x829d31a0
	if (ctx.cr6.eq) goto loc_829D31A0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x829d31d8
	goto loc_829D31D8;
loc_829D31A0:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x829d31d8
	goto loc_829D31D8;
loc_829D31A8:
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f0,64(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f12,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f12,56(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_829D31D8:
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D31E0"))) PPC_WEAK_FUNC(sub_829D31E0);
PPC_FUNC_IMPL(__imp__sub_829D31E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-10284
	ctx.r3.s64 = ctx.r11.s64 + -10284;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D31F0"))) PPC_WEAK_FUNC(sub_829D31F0);
PPC_FUNC_IMPL(__imp__sub_829D31F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829d3228
	if (ctx.cr6.eq) goto loc_829D3228;
	// bl 0x829d3598
	ctx.lr = 0x829D3218;
	sub_829D3598(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829d3228
	if (!ctx.cr6.eq) goto loc_829D3228;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829d3234
	goto loc_829D3234;
loc_829D3228:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x829D3234;
	sub_82333C70(ctx, base);
loc_829D3234:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D3250"))) PPC_WEAK_FUNC(sub_829D3250);
PPC_FUNC_IMPL(__imp__sub_829D3250) {
	PPC_FUNC_PROLOGUE();
	// b 0x829d3598
	sub_829D3598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D3258"))) PPC_WEAK_FUNC(sub_829D3258);
PPC_FUNC_IMPL(__imp__sub_829D3258) {
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
	ctx.lr = 0x829D3274;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d32d4
	if (ctx.cr0.eq) goto loc_829D32D4;
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
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-10248
	ctx.r9.s64 = ctx.r9.s64 + -10248;
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
	// b 0x829d32d8
	goto loc_829D32D8;
loc_829D32D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D32D8:
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

__attribute__((alias("__imp__sub_829D32F0"))) PPC_WEAK_FUNC(sub_829D32F0);
PPC_FUNC_IMPL(__imp__sub_829D32F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d3598
	ctx.lr = 0x829D3310;
	sub_829D3598(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829d3324
	if (ctx.cr6.eq) goto loc_829D3324;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x829D3324;
	sub_82333B08(ctx, base);
loc_829D3324:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D3340"))) PPC_WEAK_FUNC(sub_829D3340);
PPC_FUNC_IMPL(__imp__sub_829D3340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r30,1384(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// bl 0x82408ff8
	ctx.lr = 0x829D3368;
	sub_82408FF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829735e8
	ctx.lr = 0x829D3374;
	sub_829735E8(ctx, base);
	// bl 0x82409140
	ctx.lr = 0x829D3378;
	sub_82409140(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D3398"))) PPC_WEAK_FUNC(sub_829D3398);
PPC_FUNC_IMPL(__imp__sub_829D3398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829D33A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829d3460
	if (ctx.cr6.eq) goto loc_829D3460;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x829d34e8
	if (!ctx.cr6.eq) goto loc_829D34E8;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x829D33C8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// beq 0x829d344c
	if (ctx.cr0.eq) goto loc_829D344C;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d33ec
	if (ctx.cr6.eq) goto loc_829D33EC;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d33f0
	goto loc_829D33F0;
loc_829D33EC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_829D33F0:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d3408
	if (ctx.cr6.eq) goto loc_829D3408;
	// lwz r30,80(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d340c
	goto loc_829D340C;
loc_829D3408:
	// li r30,0
	ctx.r30.s64 = 0;
loc_829D340C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,56(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x82833180
	ctx.lr = 0x829D3418;
	sub_82833180(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r11,r11,-10248
	ctx.r11.s64 = ctx.r11.s64 + -10248;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
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
	// b 0x829d3450
	goto loc_829D3450;
loc_829D344C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829D3450:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D345C;
	sub_82833A30(ctx, base);
	// b 0x829d34e8
	goto loc_829D34E8;
loc_829D3460:
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,60(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,64(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,68(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r10,r29,56
	ctx.r10.s64 = ctx.r29.s64 + 56;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// addi r10,r11,44
	ctx.r10.s64 = ctx.r11.s64 + 44;
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r4,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r30,4(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,12(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stw r8,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
	// stw r6,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r6.u32);
	// stw r4,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// stw r30,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r30.u32);
	// stw r5,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r5.u32);
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
loc_829D34E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D34F0"))) PPC_WEAK_FUNC(sub_829D34F0);
PPC_FUNC_IMPL(__imp__sub_829D34F0) {
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
	// lwz r11,-27660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27660);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d3530
	if (!ctx.cr0.eq) goto loc_829D3530;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27660, ctx.r11.u32);
	// addi r3,r9,-10284
	ctx.r3.s64 = ctx.r9.s64 + -10284;
	// bl 0x82816528
	ctx.lr = 0x829D3528;
	sub_82816528(ctx, base);
	// stw r3,-27664(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27664, ctx.r3.u32);
	// b 0x829d3534
	goto loc_829D3534;
loc_829D3530:
	// lwz r3,-27664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27664);
loc_829D3534:
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

__attribute__((alias("__imp__sub_829D3548"))) PPC_WEAK_FUNC(sub_829D3548);
PPC_FUNC_IMPL(__imp__sub_829D3548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d3598
	ctx.lr = 0x829D3568;
	sub_829D3598(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D357C;
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

__attribute__((alias("__imp__sub_829D3598"))) PPC_WEAK_FUNC(sub_829D3598);
PPC_FUNC_IMPL(__imp__sub_829D3598) {
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
	// addi r31,r11,19508
	ctx.r31.s64 = ctx.r11.s64 + 19508;
	// lwz r11,19504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19504);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d35e0
	if (!ctx.cr0.eq) goto loc_829D35E0;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-10168
	ctx.r9.s64 = ctx.r9.s64 + -10168;
	// stw r11,19504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19504, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10000
	ctx.r3.s64 = ctx.r11.s64 + -10000;
	// bl 0x82a4c758
	ctx.lr = 0x829D35E0;
	sub_82A4C758(ctx, base);
loc_829D35E0:
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

__attribute__((alias("__imp__sub_829D35F8"))) PPC_WEAK_FUNC(sub_829D35F8);
PPC_FUNC_IMPL(__imp__sub_829D35F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x829D3600;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82a61748
	ctx.lr = 0x829D3608;
	__savefpr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lfs f29,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// lwz r4,112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// lwz r3,1384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// bl 0x82973658
	ctx.lr = 0x829D3634;
	sub_82973658(ctx, base);
	// bl 0x8249ba40
	ctx.lr = 0x829D3638;
	sub_8249BA40(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d3940
	if (!ctx.cr6.gt) goto loc_829D3940;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// ori r26,r9,47806
	ctx.r26.u64 = ctx.r9.u64 | 47806;
	// lfs f28,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f28.f64 = double(temp.f32);
	// addi r24,r11,5584
	ctx.r24.s64 = ctx.r11.s64 + 5584;
loc_829D366C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x829d392c
	if (ctx.cr6.eq) goto loc_829D392C;
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x829d3754
	if (ctx.cr6.lt) goto loc_829D3754;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x829d3754
	if (ctx.cr6.gt) goto loc_829D3754;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d3790
	if (ctx.cr0.eq) goto loc_829D3790;
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x829d36c4
	if (!ctx.cr6.eq) goto loc_829D36C4;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
loc_829D36C4:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bne cr6,0x829d3704
	if (!ctx.cr6.eq) goto loc_829D3704;
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f30,f12,f0,f13
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x829d37d4
	goto loc_829D37D4;
loc_829D3704:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x829d37d4
	if (!ctx.cr6.eq) goto loc_829D37D4;
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r5,r11,40
	ctx.r5.s64 = ctx.r11.s64 + 40;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x826d1f30
	ctx.lr = 0x829D372C;
	sub_826D1F30(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
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
	// b 0x829d37d4
	goto loc_829D37D4;
loc_829D3754:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x829d3790
	if (!ctx.cr6.lt) goto loc_829D3790;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d3770
	if (!ctx.cr6.eq) goto loc_829D3770;
	// lfs f30,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// b 0x829d37d4
	goto loc_829D37D4;
loc_829D3770:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x829d37d4
	if (!ctx.cr6.eq) goto loc_829D37D4;
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x829d37c0
	goto loc_829D37C0;
loc_829D3790:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d37a4
	if (!ctx.cr6.eq) goto loc_829D37A4;
	// lfs f30,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// b 0x829d37d4
	goto loc_829D37D4;
loc_829D37A4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x829d37d4
	if (!ctx.cr6.eq) goto loc_829D37D4;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
loc_829D37C0:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
loc_829D37D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d386c
	if (!ctx.cr6.eq) goto loc_829D386C;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82833108
	ctx.lr = 0x829D37E8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829d391c
	if (ctx.cr0.eq) goto loc_829D391C;
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r11,1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d380c
	if (ctx.cr6.eq) goto loc_829D380C;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d3810
	goto loc_829D3810;
loc_829D380C:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_829D3810:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d3828
	if (ctx.cr6.eq) goto loc_829D3828;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d382c
	goto loc_829D382C;
loc_829D3828:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_829D382C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r20,r27,r10
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// lwz r19,112(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x82833180
	ctx.lr = 0x829D383C;
	sub_82833180(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r19,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r19.u32);
	// stw r20,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r20.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x829d3920
	goto loc_829D3920;
loc_829D386C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x829d392c
	if (!ctx.cr6.eq) goto loc_829D392C;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82833108
	ctx.lr = 0x829D387C;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829d391c
	if (ctx.cr0.eq) goto loc_829D391C;
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r11,1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d38a0
	if (ctx.cr6.eq) goto loc_829D38A0;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d38a4
	goto loc_829D38A4;
loc_829D38A0:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_829D38A4:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d38bc
	if (ctx.cr6.eq) goto loc_829D38BC;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d38c0
	goto loc_829D38C0;
loc_829D38BC:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_829D38C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r20,r27,r10
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// lwz r19,112(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x82833180
	ctx.lr = 0x829D38D0;
	sub_82833180(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r19,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r19.u32);
	// stw r20,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r20.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r25,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r25.u32);
	// b 0x829d3920
	goto loc_829D3920;
loc_829D391C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_829D3920:
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D392C;
	sub_82833A30(ctx, base);
loc_829D392C:
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r27,r27,56
	ctx.r27.s64 = ctx.r27.s64 + 56;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829d366c
	if (ctx.cr6.lt) goto loc_829D366C;
loc_829D3940:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82a61794
	ctx.lr = 0x829D394C;
	__restfpr_28(ctx, base);
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D3950"))) PPC_WEAK_FUNC(sub_829D3950);
PPC_FUNC_IMPL(__imp__sub_829D3950) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829d3bf0
	if (ctx.cr6.eq) goto loc_829D3BF0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829d3ae8
	if (ctx.cr6.eq) goto loc_829D3AE8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x829d3c00
	if (!ctx.cr6.eq) goto loc_829D3C00;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d39cc
	if (!ctx.cr6.gt) goto loc_829D39CC;
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
loc_829D39A0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x829d39c4
	if (ctx.cr6.eq) goto loc_829D39C4;
	// lwz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829d39a0
	if (ctx.cr6.lt) goto loc_829D39A0;
	// b 0x829d39cc
	goto loc_829D39CC;
loc_829D39C4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x829d3a00
	if (!ctx.cr6.eq) goto loc_829D3A00;
loc_829D39CC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x82332d50
	ctx.lr = 0x829D39E0;
	sub_82332D50(ctx, base);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mulli r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 * 56;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_829D3A00:
	// lwa r11,8(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x829d3a64
	if (ctx.cr6.gt) goto loc_829D3A64;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// b 0x829d3a90
	goto loc_829D3A90;
loc_829D3A64:
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
loc_829D3A90:
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// lwa r9,8(r30)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// b 0x829d3c00
	goto loc_829D3C00;
loc_829D3AE8:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d3b2c
	if (!ctx.cr6.gt) goto loc_829D3B2C;
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
loc_829D3B00:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x829d3b24
	if (ctx.cr6.eq) goto loc_829D3B24;
	// lwz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829d3b00
	if (ctx.cr6.lt) goto loc_829D3B00;
	// b 0x829d3b2c
	goto loc_829D3B2C;
loc_829D3B24:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x829d3b60
	if (!ctx.cr6.eq) goto loc_829D3B60;
loc_829D3B2C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x82332d50
	ctx.lr = 0x829D3B40;
	sub_82332D50(ctx, base);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mulli r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 * 56;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
loc_829D3B60:
	// lwa r11,8(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mulli r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 * 56;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x829d3ba4
	if (ctx.cr6.gt) goto loc_829D3BA4;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x829d3bb8
	goto loc_829D3BB8;
loc_829D3BA4:
	// lfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
loc_829D3BB8:
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwa r9,8(r30)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// b 0x829d3c00
	goto loc_829D3C00;
loc_829D3BF0:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_829D3C00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D3C18"))) PPC_WEAK_FUNC(sub_829D3C18);
PPC_FUNC_IMPL(__imp__sub_829D3C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r31,1384(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// bl 0x8286ea80
	ctx.lr = 0x829D3C40;
	sub_8286EA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829735e8
	ctx.lr = 0x829D3C4C;
	sub_829735E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8286ea80
	ctx.lr = 0x829D3C54;
	sub_8286EA80(ctx, base);
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
	ctx.lr = 0x829D3C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829d3c78
	if (!ctx.cr0.eq) goto loc_829D3C78;
	// li r31,0
	ctx.r31.s64 = 0;
loc_829D3C78:
	// stw r31,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D3C98"))) PPC_WEAK_FUNC(sub_829D3C98);
PPC_FUNC_IMPL(__imp__sub_829D3C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,1348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d3cbc
	if (!ctx.cr6.eq) goto loc_829D3CBC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_829D3CBC:
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D3CD0"))) PPC_WEAK_FUNC(sub_829D3CD0);
PPC_FUNC_IMPL(__imp__sub_829D3CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829d3cf0
	if (ctx.cr6.eq) goto loc_829D3CF0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// b 0x829d3d64
	goto loc_829D3D64;
loc_829D3CF0:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lfs f13,16356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16356);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x829d3d4c
	if (!ctx.cr6.gt) goto loc_829D3D4C;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lfd f13,16552(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16552);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x829d3d28
	if (ctx.cr6.gt) goto loc_829D3D28;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_829D3D28:
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// b 0x829d3d64
	goto loc_829D3D64;
loc_829D3D4C:
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_829D3D64:
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D3D70"))) PPC_WEAK_FUNC(sub_829D3D70);
PPC_FUNC_IMPL(__imp__sub_829D3D70) {
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
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d3de4
	if (ctx.cr6.eq) goto loc_829D3DE4;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x829D3D98;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d3dd0
	if (ctx.cr0.eq) goto loc_829D3DD0;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d3db8
	if (ctx.cr6.eq) goto loc_829D3DB8;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d3dbc
	goto loc_829D3DBC;
loc_829D3DB8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_829D3DBC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,108(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x824f7c50
	ctx.lr = 0x829D3DC8;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829d3dd4
	goto loc_829D3DD4;
loc_829D3DD0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829D3DD4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D3DE4;
	sub_82833A30(ctx, base);
loc_829D3DE4:
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

__attribute__((alias("__imp__sub_829D3DF8"))) PPC_WEAK_FUNC(sub_829D3DF8);
PPC_FUNC_IMPL(__imp__sub_829D3DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829D3E00;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829d4138
	if (ctx.cr6.eq) goto loc_829D4138;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829D3E2C;
	sub_829B9720(ctx, base);
	// bl 0x82916590
	ctx.lr = 0x829D3E30;
	sub_82916590(ctx, base);
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r27,1408(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x829d3ff0
	if (ctx.cr6.lt) goto loc_829D3FF0;
	// lfs f13,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x829d3ff0
	if (ctx.cr6.gt) goto loc_829D3FF0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x829d4138
	if (ctx.cr6.eq) goto loc_829D4138;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d3f44
	if (ctx.cr0.eq) goto loc_829D3F44;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x829d3e80
	if (!ctx.cr6.eq) goto loc_829D3E80;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
loc_829D3E80:
	// fsubs f13,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// lfs f12,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f8,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f7,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfs f5,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f5,f5,f6
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// lfs f4,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fsubs f2,f2,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f12,f10,f7
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f12,f6,f5
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fadds f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fadds f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// b 0x829d3f6c
	goto loc_829D3F6C;
loc_829D3F44:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r29,144(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_829D3F6C:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82833108
	ctx.lr = 0x829D3F74;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d3fc8
	if (ctx.cr0.eq) goto loc_829D3FC8;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d3f98
	if (ctx.cr6.eq) goto loc_829D3F98;
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// b 0x829d3f9c
	goto loc_829D3F9C;
loc_829D3F98:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_829D3F9C:
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r8,2
	ctx.r8.s64 = 2;
	// rldicr r5,r30,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// rldicr r7,r11,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x8254f228
	ctx.lr = 0x829D3FC0;
	sub_8254F228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829d3fcc
	goto loc_829D3FCC;
loc_829D3FC8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829D3FCC:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D3FD8;
	sub_82833A30(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,19164
	ctx.r3.s64 = ctx.r11.s64 + 19164;
	// bl 0x82816528
	ctx.lr = 0x829D3FE4;
	sub_82816528(ctx, base);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// b 0x829d412c
	goto loc_829D412C;
loc_829D3FF0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x829d4138
	if (ctx.cr6.eq) goto loc_829D4138;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// li r3,56
	ctx.r3.s64 = 56;
	// bge cr6,0x829d4098
	if (!ctx.cr6.lt) goto loc_829D4098;
	// bl 0x82833108
	ctx.lr = 0x829D4008;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d4060
	if (ctx.cr0.eq) goto loc_829D4060;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d402c
	if (ctx.cr6.eq) goto loc_829D402C;
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// b 0x829d4030
	goto loc_829D4030;
loc_829D402C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_829D4030:
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r7,160(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// rldicr r5,r7,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rldicr r7,r11,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 152);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x8254f228
	ctx.lr = 0x829D4058;
	sub_8254F228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829d4064
	goto loc_829D4064;
loc_829D4060:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829D4064:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D4070;
	sub_82833A30(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r3,r11,19164
	ctx.r3.s64 = ctx.r11.s64 + 19164;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r31,172(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x829D4090;
	sub_82816528(ctx, base);
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// b 0x829d4128
	goto loc_829D4128;
loc_829D4098:
	// bl 0x82833108
	ctx.lr = 0x829D409C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d40f4
	if (ctx.cr0.eq) goto loc_829D40F4;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d40c0
	if (ctx.cr6.eq) goto loc_829D40C0;
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// b 0x829d40c4
	goto loc_829D40C4;
loc_829D40C0:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_829D40C4:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r7,132(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// rldicr r5,r7,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rldicr r7,r11,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 124);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x8254f228
	ctx.lr = 0x829D40EC;
	sub_8254F228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829d40f8
	goto loc_829D40F8;
loc_829D40F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829D40F8:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D4104;
	sub_82833A30(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r3,r11,19164
	ctx.r3.s64 = ctx.r11.s64 + 19164;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r31,172(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x829D4124;
	sub_82816528(ctx, base);
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
loc_829D4128:
	// rldicr r6,r31,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFFFFFFFFFF;
loc_829D412C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82979140
	ctx.lr = 0x829D4138;
	sub_82979140(ctx, base);
loc_829D4138:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D4148"))) PPC_WEAK_FUNC(sub_829D4148);
PPC_FUNC_IMPL(__imp__sub_829D4148) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// beq cr6,0x829d4384
	if (ctx.cr6.eq) goto loc_829D4384;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829d4294
	if (ctx.cr6.eq) goto loc_829D4294;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x829d4248
	if (ctx.cr6.eq) goto loc_829D4248;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x829d4214
	if (ctx.cr6.eq) goto loc_829D4214;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x829d4394
	if (!ctx.cr6.eq) goto loc_829D4394;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d4394
	if (ctx.cr6.eq) goto loc_829D4394;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x829D41C0;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d41f8
	if (ctx.cr0.eq) goto loc_829D41F8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d41e0
	if (ctx.cr6.eq) goto loc_829D41E0;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d41e4
	goto loc_829D41E4;
loc_829D41E0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_829D41E4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,108(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x824f7c50
	ctx.lr = 0x829D41F0;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829d41fc
	goto loc_829D41FC;
loc_829D41F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_829D41FC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D420C;
	sub_82833A30(ctx, base);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// b 0x829d4394
	goto loc_829D4394;
loc_829D4214:
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829d4394
	if (ctx.cr6.eq) goto loc_829D4394;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829D4230;
	sub_829B9720(ctx, base);
	// bl 0x82916590
	ctx.lr = 0x829D4234;
	sub_82916590(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d4394
	if (ctx.cr0.eq) goto loc_829D4394;
	// lwz r3,1408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x829D4244;
	sub_82978ED0(ctx, base);
	// b 0x829d4394
	goto loc_829D4394;
loc_829D4248:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d425c
	if (!ctx.cr6.eq) goto loc_829D425C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d43b8
	ctx.lr = 0x829D425C;
	sub_829D43B8(ctx, base);
loc_829D425C:
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829d4394
	if (ctx.cr6.eq) goto loc_829D4394;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829D4278;
	sub_829B9720(ctx, base);
	// bl 0x82916590
	ctx.lr = 0x829D427C;
	sub_82916590(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d4394
	if (ctx.cr0.eq) goto loc_829D4394;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lwz r3,1408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// bl 0x82978d98
	ctx.lr = 0x829D4290;
	sub_82978D98(ctx, base);
	// b 0x829d4394
	goto loc_829D4394;
loc_829D4294:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d4394
	if (ctx.cr6.eq) goto loc_829D4394;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x829d4300
	if (!ctx.cr6.lt) goto loc_829D4300;
	// lwa r11,8(r4)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 8));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// b 0x829d4338
	goto loc_829D4338;
loc_829D4300:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r8,164(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r7,168(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// stw r8,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r8.u32);
	// stw r7,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r7.u32);
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
loc_829D4338:
	// lwa r11,8(r4)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 8));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// b 0x829d4394
	goto loc_829D4394;
loc_829D4384:
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_829D4394:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x829D439C;
	sub_82333960(ctx, base);
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

__attribute__((alias("__imp__sub_829D43B8"))) PPC_WEAK_FUNC(sub_829D43B8);
PPC_FUNC_IMPL(__imp__sub_829D43B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829D43C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r5,116(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x823cf190
	ctx.lr = 0x829D43F0;
	sub_823CF190(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x829d446c
	if (ctx.cr6.eq) goto loc_829D446C;
	// li r3,1424
	ctx.r3.s64 = 1424;
	// bl 0x82833108
	ctx.lr = 0x829D4404;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d4418
	if (ctx.cr0.eq) goto loc_829D4418;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828adc70
	ctx.lr = 0x829D4414;
	sub_828ADC70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_829D4418:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829d446c
	if (ctx.cr6.eq) goto loc_829D446C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ae6e8
	ctx.lr = 0x829D4438;
	sub_828AE6E8(ctx, base);
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x829D4440;
	sub_82978ED0(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x829D4454;
	sub_829B8EE8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
loc_829D446C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D4478"))) PPC_WEAK_FUNC(sub_829D4478);
PPC_FUNC_IMPL(__imp__sub_829D4478) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// bl 0x829ccb50
	ctx.lr = 0x829D449C;
	sub_829CCB50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829D44C0"))) PPC_WEAK_FUNC(sub_829D44C0);
PPC_FUNC_IMPL(__imp__sub_829D44C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829D44C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lwz r10,108(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r4,108(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829D44E8;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x829D44EC;
	sub_82416348(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// beq 0x829d4534
	if (ctx.cr0.eq) goto loc_829D4534;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_829D4500:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x829d4534
	if (!ctx.cr6.lt) goto loc_829D4534;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82411cb0
	ctx.lr = 0x829D4518;
	sub_82411CB0(ctx, base);
	// bl 0x82411cb0
	ctx.lr = 0x829D451C;
	sub_82411CB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d4528
	if (ctx.cr0.eq) goto loc_829D4528;
	// stw r26,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r26.u32);
loc_829D4528:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x829d4500
	goto loc_829D4500;
loc_829D4534:
	// lwz r4,112(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x829d454c
	if (ctx.cr6.eq) goto loc_829D454C;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829bb1f8
	ctx.lr = 0x829D454C;
	sub_829BB1F8(ctx, base);
loc_829D454C:
	// stw r26,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D4558"))) PPC_WEAK_FUNC(sub_829D4558);
PPC_FUNC_IMPL(__imp__sub_829D4558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829D4560;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d465c
	if (ctx.cr6.eq) goto loc_829D465C;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r4,108(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829D458C;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x829D4590;
	sub_82416348(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d45f4
	if (ctx.cr6.eq) goto loc_829D45F4;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,116(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82336bf8
	ctx.lr = 0x829D45C0;
	sub_82336BF8(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829d4610
	if (ctx.cr6.eq) goto loc_829D4610;
	// li r3,964
	ctx.r3.s64 = 964;
	// bl 0x82833108
	ctx.lr = 0x829D45D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d45e8
	if (ctx.cr0.eq) goto loc_829D45E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82855c68
	ctx.lr = 0x829D45E4;
	sub_82855C68(ctx, base);
	// b 0x829d45ec
	goto loc_829D45EC;
loc_829D45E8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_829D45EC:
	// stw r3,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r3.u32);
	// b 0x829d4610
	goto loc_829D4610;
loc_829D45F4:
	// lwz r4,112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x829d460c
	if (ctx.cr6.eq) goto loc_829D460C;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829bb1f8
	ctx.lr = 0x829D460C;
	sub_829BB1F8(ctx, base);
loc_829D460C:
	// stw r27,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r27.u32);
loc_829D4610:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x829d465c
	if (ctx.cr6.eq) goto loc_829D465C;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_829D4620:
	// lwz r11,292(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x829d465c
	if (!ctx.cr6.lt) goto loc_829D465C;
	// lwz r11,288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82411cb0
	ctx.lr = 0x829D4638;
	sub_82411CB0(ctx, base);
	// bl 0x82411cb0
	ctx.lr = 0x829D463C;
	sub_82411CB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d4650
	if (ctx.cr0.eq) goto loc_829D4650;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r11.u32);
	// stw r27,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r27.u32);
loc_829D4650:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x829d4620
	goto loc_829D4620;
loc_829D465C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D4668"))) PPC_WEAK_FUNC(sub_829D4668);
PPC_FUNC_IMPL(__imp__sub_829D4668) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// beq cr6,0x829d4714
	if (ctx.cr6.eq) goto loc_829D4714;
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x829d46fc
	if (ctx.cr6.eq) goto loc_829D46FC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x829d46e0
	if (ctx.cr6.eq) goto loc_829D46E0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x829d4714
	if (!ctx.cr6.eq) goto loc_829D4714;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d4714
	if (ctx.cr6.eq) goto loc_829D4714;
	// addi r3,r10,816
	ctx.r3.s64 = ctx.r10.s64 + 816;
	// lfs f1,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x82980518
	ctx.lr = 0x829D46DC;
	sub_82980518(ctx, base);
	// b 0x829d4714
	goto loc_829D4714;
loc_829D46E0:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r9.u32);
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// lwz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// b 0x829d4714
	goto loc_829D4714;
loc_829D46FC:
	// lwz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// lwz r10,60(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
loc_829D4714:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x829D471C;
	sub_82333960(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D4730"))) PPC_WEAK_FUNC(sub_829D4730);
PPC_FUNC_IMPL(__imp__sub_829D4730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r31,1384(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// bl 0x8286e038
	ctx.lr = 0x829D4758;
	sub_8286E038(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829735e8
	ctx.lr = 0x829D4764;
	sub_829735E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829d4794
	if (ctx.cr0.eq) goto loc_829D4794;
	// bl 0x8286e038
	ctx.lr = 0x829D4770;
	sub_8286E038(ctx, base);
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
	ctx.lr = 0x829D4788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x829d4798
	if (!ctx.cr0.eq) goto loc_829D4798;
loc_829D4794:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829D4798:
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D47B8"))) PPC_WEAK_FUNC(sub_829D47B8);
PPC_FUNC_IMPL(__imp__sub_829D47B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,1348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D47E0"))) PPC_WEAK_FUNC(sub_829D47E0);
PPC_FUNC_IMPL(__imp__sub_829D47E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f13,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// lfs f0,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfs f0,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// stw r7,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D4858"))) PPC_WEAK_FUNC(sub_829D4858);
PPC_FUNC_IMPL(__imp__sub_829D4858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-10148
	ctx.r3.s64 = ctx.r11.s64 + -10148;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D4868"))) PPC_WEAK_FUNC(sub_829D4868);
PPC_FUNC_IMPL(__imp__sub_829D4868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829d48a0
	if (ctx.cr6.eq) goto loc_829D48A0;
	// bl 0x829d4ec0
	ctx.lr = 0x829D4890;
	sub_829D4EC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829d48a0
	if (!ctx.cr6.eq) goto loc_829D48A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829d48ac
	goto loc_829D48AC;
loc_829D48A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x829D48AC;
	sub_82333C70(ctx, base);
loc_829D48AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D48C8"))) PPC_WEAK_FUNC(sub_829D48C8);
PPC_FUNC_IMPL(__imp__sub_829D48C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829d4ec0
	sub_829D4EC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D48D0"))) PPC_WEAK_FUNC(sub_829D48D0);
PPC_FUNC_IMPL(__imp__sub_829D48D0) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x829D48EC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d495c
	if (ctx.cr0.eq) goto loc_829D495C;
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
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-10104
	ctx.r9.s64 = ctx.r9.s64 + -10104;
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
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// b 0x829d4960
	goto loc_829D4960;
loc_829D495C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D4960:
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

__attribute__((alias("__imp__sub_829D4978"))) PPC_WEAK_FUNC(sub_829D4978);
PPC_FUNC_IMPL(__imp__sub_829D4978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d4ec0
	ctx.lr = 0x829D4998;
	sub_829D4EC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829d49ac
	if (ctx.cr6.eq) goto loc_829D49AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x829D49AC;
	sub_82333B08(ctx, base);
loc_829D49AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D49C8"))) PPC_WEAK_FUNC(sub_829D49C8);
PPC_FUNC_IMPL(__imp__sub_829D49C8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82336ae8
	ctx.lr = 0x829D49EC;
	sub_82336AE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d4a34
	if (ctx.cr0.eq) goto loc_829D4A34;
	// bl 0x82337028
	ctx.lr = 0x829D49F8;
	sub_82337028(ctx, base);
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
	ctx.lr = 0x829D4A10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x829d4a20
	if (!ctx.cr0.eq) goto loc_829D4A20;
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D4A20:
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x8284e4a0
	ctx.lr = 0x829D4A30;
	sub_8284E4A0(ctx, base);
	// b 0x829d4a80
	goto loc_829D4A80;
loc_829D4A34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82916530
	ctx.lr = 0x829D4A3C;
	sub_82916530(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d4a80
	if (ctx.cr0.eq) goto loc_829D4A80;
	// bl 0x824a3890
	ctx.lr = 0x829D4A48;
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
	ctx.lr = 0x829D4A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x829d4a70
	if (!ctx.cr0.eq) goto loc_829D4A70;
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D4A70:
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x828fe900
	ctx.lr = 0x829D4A80;
	sub_828FE900(ctx, base);
loc_829D4A80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D4A98"))) PPC_WEAK_FUNC(sub_829D4A98);
PPC_FUNC_IMPL(__imp__sub_829D4A98) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// bl 0x829ccb50
	ctx.lr = 0x829D4ABC;
	sub_829CCB50(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_829D4AD8"))) PPC_WEAK_FUNC(sub_829D4AD8);
PPC_FUNC_IMPL(__imp__sub_829D4AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829D4AE0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x829d4b88
	if (ctx.cr6.lt) goto loc_829D4B88;
	// lfs f13,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bgt cr6,0x829d4b88
	if (ctx.cr6.gt) goto loc_829D4B88;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d4b4c
	if (ctx.cr0.eq) goto loc_829D4B4C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x829d4b30
	if (!ctx.cr6.eq) goto loc_829D4B30;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
loc_829D4B30:
	// fsubs f13,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f12,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmadds f31,f0,f11,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64));
	// b 0x829d4b50
	goto loc_829D4B50;
loc_829D4B4C:
	// lfs f31,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f31.f64 = double(temp.f32);
loc_829D4B50:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x829D4B58;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829d4c5c
	if (ctx.cr0.eq) goto loc_829D4C5C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r28,108(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d4b80
	if (ctx.cr6.eq) goto loc_829D4B80;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d4c10
	goto loc_829D4C10;
loc_829D4B80:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x829d4c10
	goto loc_829D4C10;
loc_829D4B88:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f13,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x829d4c70
	if (ctx.cr6.eq) goto loc_829D4C70;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// li r3,36
	ctx.r3.s64 = 36;
	// bge cr6,0x829d4bdc
	if (!ctx.cr6.lt) goto loc_829D4BDC;
	// bl 0x82833108
	ctx.lr = 0x829D4BA8;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829d4c5c
	if (ctx.cr0.eq) goto loc_829D4C5C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r28,108(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d4bd0
	if (ctx.cr6.eq) goto loc_829D4BD0;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d4bd4
	goto loc_829D4BD4;
loc_829D4BD0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_829D4BD4:
	// lfs f31,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f31.f64 = double(temp.f32);
	// b 0x829d4c10
	goto loc_829D4C10;
loc_829D4BDC:
	// bl 0x82833108
	ctx.lr = 0x829D4BE0;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829d4c5c
	if (ctx.cr0.eq) goto loc_829D4C5C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r28,108(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d4c08
	if (ctx.cr6.eq) goto loc_829D4C08;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d4c0c
	goto loc_829D4C0C;
loc_829D4C08:
	// li r29,0
	ctx.r29.s64 = 0;
loc_829D4C0C:
	// lfs f31,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f31.f64 = double(temp.f32);
loc_829D4C10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,200(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r31,204(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x82833180
	ctx.lr = 0x829D4C20;
	sub_82833180(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stfs f31,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// addi r11,r11,-10104
	ctx.r11.s64 = ctx.r11.s64 + -10104;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
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
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// stw r27,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r27.u32);
	// b 0x829d4c60
	goto loc_829D4C60;
loc_829D4C5C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829D4C60:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D4C70;
	sub_82833A30(ctx, base);
loc_829D4C70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D4C80"))) PPC_WEAK_FUNC(sub_829D4C80);
PPC_FUNC_IMPL(__imp__sub_829D4C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829D4C88;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// beq cr6,0x829d4e08
	if (ctx.cr6.eq) goto loc_829D4E08;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829d4d44
	if (ctx.cr6.eq) goto loc_829D4D44;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829d4e08
	if (ctx.cr6.eq) goto loc_829D4E08;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x829d4e08
	if (!ctx.cr6.eq) goto loc_829D4E08;
	// lwa r11,8(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x829d4d10
	if (ctx.cr6.gt) goto loc_829D4D10;
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// b 0x829d4d20
	goto loc_829D4D20;
loc_829D4D10:
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
loc_829D4D20:
	// lwa r11,8(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// b 0x829d4e08
	goto loc_829D4E08;
loc_829D4D44:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x829D4D60;
	sub_823339B8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82400b48
	ctx.lr = 0x829D4D6C;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x829D4D74;
	sub_82333960(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823339b8
	ctx.lr = 0x829D4D90;
	sub_823339B8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82400b48
	ctx.lr = 0x829D4D9C;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x829D4DA4;
	sub_82333960(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823339b8
	ctx.lr = 0x829D4DC0;
	sub_823339B8(ctx, base);
	// addi r29,r31,160
	ctx.r29.s64 = ctx.r31.s64 + 160;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82400b48
	ctx.lr = 0x829D4DD0;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x829D4DD8;
	sub_82333960(ctx, base);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d4df4
	if (ctx.cr6.eq) goto loc_829D4DF4;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x829d4dfc
	goto loc_829D4DFC;
loc_829D4DF4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_829D4DFC:
	// bl 0x828165a8
	ctx.lr = 0x829D4E00;
	sub_828165A8(ctx, base);
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// stw r28,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r28.u32);
loc_829D4E08:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x829D4E10;
	sub_82333960(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D4E18"))) PPC_WEAK_FUNC(sub_829D4E18);
PPC_FUNC_IMPL(__imp__sub_829D4E18) {
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
	// lwz r11,-27668(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27668);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d4e58
	if (!ctx.cr0.eq) goto loc_829D4E58;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27668, ctx.r11.u32);
	// addi r3,r9,-10148
	ctx.r3.s64 = ctx.r9.s64 + -10148;
	// bl 0x82816528
	ctx.lr = 0x829D4E50;
	sub_82816528(ctx, base);
	// stw r3,-27672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27672, ctx.r3.u32);
	// b 0x829d4e5c
	goto loc_829D4E5C;
loc_829D4E58:
	// lwz r3,-27672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27672);
loc_829D4E5C:
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

__attribute__((alias("__imp__sub_829D4E70"))) PPC_WEAK_FUNC(sub_829D4E70);
PPC_FUNC_IMPL(__imp__sub_829D4E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d4ec0
	ctx.lr = 0x829D4E90;
	sub_829D4EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D4EA4;
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

__attribute__((alias("__imp__sub_829D4EC0"))) PPC_WEAK_FUNC(sub_829D4EC0);
PPC_FUNC_IMPL(__imp__sub_829D4EC0) {
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
	// addi r31,r11,20264
	ctx.r31.s64 = ctx.r11.s64 + 20264;
	// lwz r11,20268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20268);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d4f08
	if (!ctx.cr0.eq) goto loc_829D4F08;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-10024
	ctx.r9.s64 = ctx.r9.s64 + -10024;
	// stw r11,20268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20268, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-9976
	ctx.r3.s64 = ctx.r11.s64 + -9976;
	// bl 0x82a4c758
	ctx.lr = 0x829D4F08;
	sub_82A4C758(ctx, base);
loc_829D4F08:
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

__attribute__((alias("__imp__sub_829D4F20"))) PPC_WEAK_FUNC(sub_829D4F20);
PPC_FUNC_IMPL(__imp__sub_829D4F20) {
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
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829d5008
	if (ctx.cr6.eq) goto loc_829D5008;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829d4fc0
	if (ctx.cr6.eq) goto loc_829D4FC0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x829d4f8c
	if (ctx.cr6.eq) goto loc_829D4F8C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x829d5018
	if (!ctx.cr6.eq) goto loc_829D5018;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x829D4F64;
	sub_829B98F8(ctx, base);
	// bl 0x82409258
	ctx.lr = 0x829D4F68;
	sub_82409258(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d5018
	if (ctx.cr0.eq) goto loc_829D5018;
	// lwz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x829d4f84
	if (ctx.cr6.eq) goto loc_829D4F84;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x829d5018
	if (!ctx.cr6.eq) goto loc_829D5018;
loc_829D4F84:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x829d5000
	goto loc_829D5000;
loc_829D4F8C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x829D4FA0;
	sub_829B98F8(ctx, base);
	// bl 0x82409258
	ctx.lr = 0x829D4FA4;
	sub_82409258(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d5018
	if (ctx.cr0.eq) goto loc_829D5018;
	// lwz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x829d5018
	if (!ctx.cr6.eq) goto loc_829D5018;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x829d5000
	goto loc_829D5000;
loc_829D4FC0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x829D4FD4;
	sub_829B98F8(ctx, base);
	// bl 0x82409258
	ctx.lr = 0x829D4FD8;
	sub_82409258(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d5018
	if (ctx.cr0.eq) goto loc_829D5018;
	// lwz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d4ff4
	if (!ctx.cr6.eq) goto loc_829D4FF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x829d5000
	goto loc_829D5000;
loc_829D4FF4:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x829d5018
	if (!ctx.cr6.eq) goto loc_829D5018;
	// li r11,3
	ctx.r11.s64 = 3;
loc_829D5000:
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
	// b 0x829d5018
	goto loc_829D5018;
loc_829D5008:
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
loc_829D5018:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D5028"))) PPC_WEAK_FUNC(sub_829D5028);
PPC_FUNC_IMPL(__imp__sub_829D5028) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// bl 0x829ccb50
	ctx.lr = 0x829D504C;
	sub_829CCB50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// beq 0x829d506c
	if (ctx.cr0.eq) goto loc_829D506C;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// b 0x829d5070
	goto loc_829D5070;
loc_829D506C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_829D5070:
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829D5088"))) PPC_WEAK_FUNC(sub_829D5088);
PPC_FUNC_IMPL(__imp__sub_829D5088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829D5090;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61744
	ctx.lr = 0x829D5098;
	__savefpr_27(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x829d5768
	if (ctx.cr6.eq) goto loc_829D5768;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d5768
	if (ctx.cr6.eq) goto loc_829D5768;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f0,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lfs f29,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// blt cr6,0x829d52b0
	if (ctx.cr6.lt) goto loc_829D52B0;
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x829d52b0
	if (ctx.cr6.gt) goto loc_829D52B0;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d5240
	if (ctx.cr0.eq) goto loc_829D5240;
	// lfs f12,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// beq cr6,0x829d5240
	if (ctx.cr6.eq) goto loc_829D5240;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x829d5124
	if (!ctx.cr6.eq) goto loc_829D5124;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
loc_829D5124:
	// fsubs f13,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fdivs f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x824f97d8
	ctx.lr = 0x829D5138;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817f30
	ctx.lr = 0x829D5144;
	sub_82817F30(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x824f97d8
	ctx.lr = 0x829D5178;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817f30
	ctx.lr = 0x829D5184;
	sub_82817F30(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x8269cbe0
	ctx.lr = 0x829D51C0;
	sub_8269CBE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817b48
	ctx.lr = 0x829D51CC;
	sub_82817B48(ctx, base);
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f12,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f10,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f9,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmuls f11,f11,f27
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// fmuls f9,f9,f27
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// fadds f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// b 0x829d5268
	goto loc_829D5268;
loc_829D5240:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r29,124(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_829D5268:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82833108
	ctx.lr = 0x829D5270;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d5360
	if (ctx.cr0.eq) goto loc_829D5360;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d5298
	if (ctx.cr6.eq) goto loc_829D5298;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d529c
	goto loc_829D529C;
loc_829D5298:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_829D529C:
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r7,r30,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r5,r29,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// b 0x829d5350
	goto loc_829D5350;
loc_829D52B0:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x829d5370
	if (ctx.cr6.eq) goto loc_829D5370;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// li r3,56
	ctx.r3.s64 = 56;
	// bge cr6,0x829d5308
	if (!ctx.cr6.lt) goto loc_829D5308;
	// bl 0x82833108
	ctx.lr = 0x829D52C8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d5360
	if (ctx.cr0.eq) goto loc_829D5360;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d52f0
	if (ctx.cr6.eq) goto loc_829D52F0;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d52f4
	goto loc_829D52F4;
loc_829D52F0:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_829D52F4:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// ld r6,160(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 160);
	// ld r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 148);
	// b 0x829d5348
	goto loc_829D5348;
loc_829D5308:
	// bl 0x82833108
	ctx.lr = 0x829D530C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d5360
	if (ctx.cr0.eq) goto loc_829D5360;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d5334
	if (ctx.cr6.eq) goto loc_829D5334;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d5338
	goto loc_829D5338;
loc_829D5334:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_829D5338:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// ld r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 128);
	// ld r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 116);
loc_829D5348:
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r5,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
loc_829D5350:
	// li r8,2
	ctx.r8.s64 = 2;
	// bl 0x8254f228
	ctx.lr = 0x829D5358;
	sub_8254F228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829d5364
	goto loc_829D5364;
loc_829D5360:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_829D5364:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D5370;
	sub_82833A30(ctx, base);
loc_829D5370:
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x829d55cc
	if (ctx.cr6.lt) goto loc_829D55CC;
	// lfs f13,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x829d55cc
	if (ctx.cr6.gt) goto loc_829D55CC;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x829d53d4
	if (ctx.cr6.eq) goto loc_829D53D4;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// stw r27,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d53c0
	if (ctx.cr6.eq) goto loc_829D53C0;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x829D53C0;
	sub_82332C38(ctx, base);
loc_829D53C0:
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r4,228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x829D53D4;
	sub_82332D50(ctx, base);
loc_829D53D4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d5530
	if (ctx.cr0.eq) goto loc_829D5530;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d5530
	if (ctx.cr6.eq) goto loc_829D5530;
	// lfs f13,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x829d5408
	if (!ctx.cr6.eq) goto loc_829D5408;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
loc_829D5408:
	// fsubs f13,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fdivs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// ble cr6,0x829d5708
	if (!ctx.cr6.gt) goto loc_829D5708;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_829D5424:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// add r4,r30,r10
	ctx.r4.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8269cbe0
	ctx.lr = 0x829D5448;
	sub_8269CBE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lfs f11,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// add r8,r30,r9
	ctx.r8.u64 = ctx.r30.u64 + ctx.r9.u64;
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f12,f10,f31
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// stw r9,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829d5424
	if (ctx.cr6.lt) goto loc_829D5424;
	// b 0x829d5708
	goto loc_829D5708;
loc_829D5530:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d5708
	if (!ctx.cr6.gt) goto loc_829D5708;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_829D5544:
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r7,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r7.u32);
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r7,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r7.u32);
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f0,28(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stfs f0,28(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829d5544
	if (ctx.cr6.lt) goto loc_829D5544;
	// b 0x829d5708
	goto loc_829D5708;
loc_829D55CC:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x829d575c
	if (ctx.cr6.eq) goto loc_829D575C;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bge cr6,0x829d5678
	if (!ctx.cr6.lt) goto loc_829D5678;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d5708
	if (!ctx.cr6.gt) goto loc_829D5708;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_829D55F0:
	// lwz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// lwz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r7,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r7.u32);
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r7,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r7.u32);
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f0,28(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stfs f0,28(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829d55f0
	if (ctx.cr6.lt) goto loc_829D55F0;
	// b 0x829d5708
	goto loc_829D5708;
loc_829D5678:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d5708
	if (!ctx.cr6.gt) goto loc_829D5708;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_829D5684:
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// lwz r8,192(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r7,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r7.u32);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// stw r7,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r7.u32);
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r8,192(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lfs f0,28(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829d5684
	if (ctx.cr6.lt) goto loc_829D5684;
loc_829D5708:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82833108
	ctx.lr = 0x829D5710;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d574c
	if (ctx.cr0.eq) goto loc_829D574C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r6,108(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d5738
	if (ctx.cr6.eq) goto loc_829D5738;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d573c
	goto loc_829D573C;
loc_829D5738:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_829D573C:
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// bl 0x829d5c60
	ctx.lr = 0x829D5744;
	sub_829D5C60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829d5750
	goto loc_829D5750;
loc_829D574C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_829D5750:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D575C;
	sub_82833A30(ctx, base);
loc_829D575C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r27.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
loc_829D5768:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61790
	ctx.lr = 0x829D5774;
	__restfpr_27(ctx, base);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D5778"))) PPC_WEAK_FUNC(sub_829D5778);
PPC_FUNC_IMPL(__imp__sub_829D5778) {
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
	// lwa r10,8(r5)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r5.u32 + 8));
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r5,68
	ctx.r11.s64 = ctx.r5.s64 + 68;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r7,56(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,60(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,64(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi v13,v13,v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 8));
	// lvrx v0,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vor v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vupkd3d128 v0,v0,20
	__builtin_debugtrap();
	// stvlx v0,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r10,r6
	ea = ctx.r10.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// bl 0x82817b48
	ctx.lr = 0x829D57F8;
	sub_82817B48(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829D5830"))) PPC_WEAK_FUNC(sub_829D5830);
PPC_FUNC_IMPL(__imp__sub_829D5830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x829D5838;
	__savegprlr_23(ctx, base);
	// lwa r9,8(r5)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r5.u32 + 8));
	// li r29,1
	ctx.r29.s64 = 1;
	// std r9,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// lfd f0,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r5,r5,56
	ctx.r5.s64 = ctx.r5.s64 + 56;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// addi r30,r4,24
	ctx.r30.s64 = ctx.r4.s64 + 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x829d5994
	if (!ctx.cr6.gt) goto loc_829D5994;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
loc_829D5894:
	// srawi r9,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 5;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf. r9,r9,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d58b8
	if (!ctx.cr0.eq) goto loc_829D58B8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x829d58b8
	if (ctx.cr6.eq) goto loc_829D58B8;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D58B8:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// slw r7,r29,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r3.u8 & 0x3F));
	// and. r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x829d597c
	if (ctx.cr0.eq) goto loc_829D597C;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r28,r1,-96
	ctx.r28.s64 = ctx.r1.s64 + -96;
	// vsldoi v0,v0,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// lvrx v13,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r27,r1,-96
	ctx.r27.s64 = ctx.r1.s64 + -96;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r26,4
	ctx.r26.s64 = 4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// vor v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// li r25,16
	ctx.r25.s64 = 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r24,r1,-112
	ctx.r24.s64 = ctx.r1.s64 + -112;
	// addi r23,r1,-104
	ctx.r23.s64 = ctx.r1.s64 + -104;
	// vupkd3d128 v0,v0,20
	__builtin_debugtrap();
	// addi r7,r4,20
	ctx.r7.s64 = ctx.r4.s64 + 20;
	// stvx128 v0,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,-84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// lvx128 v0,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// stvewx v13,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// stvewx v12,r9,r26
	ea = (ctx.r9.u32 + ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v0,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lvrx v0,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi v13,v13,v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 8));
	// vor v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vupkd3d128 v0,v0,20
	__builtin_debugtrap();
	// stvlx v0,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r9,r25
	ea = ctx.r9.u32 + ctx.r25.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// sth r9,-112(r1)
	PPC_STORE_U16(ctx.r1.u32 + -112, ctx.r9.u16);
	// lvlx v0,0,r24
	temp.u32 = ctx.r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsplth v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xF0E))));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vupkd3d128 v0,v0,20
	__builtin_debugtrap();
	// stvewx v0,r0,r23
	ea = (ctx.r23.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lfs f13,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stfs f13,28(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
loc_829D597C:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829d5894
	if (ctx.cr6.lt) goto loc_829D5894;
loc_829D5994:
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D5998"))) PPC_WEAK_FUNC(sub_829D5998);
PPC_FUNC_IMPL(__imp__sub_829D5998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829D59A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829d5ab8
	if (ctx.cr6.eq) goto loc_829D5AB8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829d5a20
	if (ctx.cr6.eq) goto loc_829D5A20;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x829d5a08
	if (ctx.cr6.eq) goto loc_829D5A08;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x829d59fc
	if (ctx.cr6.eq) goto loc_829D59FC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x829d5c58
	if (!ctx.cr6.eq) goto loc_829D5C58;
	// lwz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// li r11,1
	ctx.r11.s64 = 1;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// b 0x829d5c58
	goto loc_829D5C58;
loc_829D59FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// b 0x829d5c58
	goto loc_829D5C58;
loc_829D5A08:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// b 0x829d5c58
	goto loc_829D5C58;
loc_829D5A20:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d5c58
	if (ctx.cr6.eq) goto loc_829D5C58;
	// lwa r11,8(r28)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r28.u32 + 8));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x829d5a64
	if (ctx.cr6.gt) goto loc_829D5A64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d5778
	ctx.lr = 0x829D5A60;
	sub_829D5778(ctx, base);
	// b 0x829d5aa4
	goto loc_829D5AA4;
loc_829D5A64:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lfs f13,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lwz r8,160(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stfs f13,108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r7,164(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r6,168(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// stw r6,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r6.u32);
loc_829D5AA4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,140
	ctx.r4.s64 = ctx.r31.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d5778
	ctx.lr = 0x829D5AB4;
	sub_829D5778(ctx, base);
	// b 0x829d5c58
	goto loc_829D5C58;
loc_829D5AB8:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d5c58
	if (ctx.cr6.eq) goto loc_829D5C58;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x829d5b1c
	if (ctx.cr6.eq) goto loc_829D5B1C;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r30,r31,180
	ctx.r30.s64 = ctx.r31.s64 + 180;
	// stw r29,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d5b08
	if (ctx.cr6.eq) goto loc_829D5B08;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x829D5B08;
	sub_82332C38(ctx, base);
loc_829D5B08:
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x829D5B1C;
	sub_82332D50(ctx, base);
loc_829D5B1C:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x829d5b68
	if (ctx.cr6.eq) goto loc_829D5B68;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r30,r31,212
	ctx.r30.s64 = ctx.r31.s64 + 212;
	// stw r29,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d5b54
	if (ctx.cr6.eq) goto loc_829D5B54;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x829D5B54;
	sub_82332C38(ctx, base);
loc_829D5B54:
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x829D5B68;
	sub_82332D50(ctx, base);
loc_829D5B68:
	// lwa r11,8(r28)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r28.u32 + 8));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x829d5ba0
	if (ctx.cr6.gt) goto loc_829D5BA0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,172
	ctx.r4.s64 = ctx.r31.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d5830
	ctx.lr = 0x829D5B9C;
	sub_829D5830(ctx, base);
	// b 0x829d5c48
	goto loc_829D5C48;
loc_829D5BA0:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// ble cr6,0x829d5c48
	if (!ctx.cr6.gt) goto loc_829D5C48;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_829D5BC4:
	// lwz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,192(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r8,224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r7,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r7.u32);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// stw r7,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r7.u32);
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r8,224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,28(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829d5bc4
	if (ctx.cr6.lt) goto loc_829D5BC4;
loc_829D5C48:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,204
	ctx.r4.s64 = ctx.r31.s64 + 204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d5830
	ctx.lr = 0x829D5C58;
	sub_829D5830(ctx, base);
loc_829D5C58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D5C60"))) PPC_WEAK_FUNC(sub_829D5C60);
PPC_FUNC_IMPL(__imp__sub_829D5C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829D5C68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82833180
	ctx.lr = 0x829D5C80;
	sub_82833180(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// addi r11,r11,-9960
	ctx.r11.s64 = ctx.r11.s64 + -9960;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lwz r28,16(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x829D5CDC;
	sub_82332D50(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r5,r28,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x829D5CF4;
	sub_82A455D0(ctx, base);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x829d5d48
	if (!ctx.cr6.gt) goto loc_829D5D48;
loc_829D5D04:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// ld r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r8,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r8.u64);
	// ld r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r10,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r10.u64);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x829d5d04
	if (ctx.cr6.lt) goto loc_829D5D04;
loc_829D5D48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D5D58"))) PPC_WEAK_FUNC(sub_829D5D58);
PPC_FUNC_IMPL(__imp__sub_829D5D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829D5D60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-9960
	ctx.r11.s64 = ctx.r11.s64 + -9960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// beq cr6,0x829d5da4
	if (ctx.cr6.eq) goto loc_829D5DA4;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x829D5DA4;
	sub_82332C38(ctx, base);
loc_829D5DA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82855110
	ctx.lr = 0x829D5DAC;
	sub_82855110(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,14296
	ctx.r11.s64 = ctx.r11.s64 + 14296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82833238
	ctx.lr = 0x829D5DC4;
	sub_82833238(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829d5dd4
	if (ctx.cr0.eq) goto loc_829D5DD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x829D5DD4;
	sub_82332DB8(ctx, base);
loc_829D5DD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D5DE0"))) PPC_WEAK_FUNC(sub_829D5DE0);
PPC_FUNC_IMPL(__imp__sub_829D5DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d5e30
	ctx.lr = 0x829D5E00;
	sub_829D5E30(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829d5e14
	if (ctx.cr6.eq) goto loc_829D5E14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x829D5E14;
	sub_82333B08(ctx, base);
loc_829D5E14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D5E30"))) PPC_WEAK_FUNC(sub_829D5E30);
PPC_FUNC_IMPL(__imp__sub_829D5E30) {
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
	// addi r31,r11,19516
	ctx.r31.s64 = ctx.r11.s64 + 19516;
	// lwz r11,19512(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19512);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d5e78
	if (!ctx.cr0.eq) goto loc_829D5E78;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-9880
	ctx.r9.s64 = ctx.r9.s64 + -9880;
	// stw r11,19512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19512, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-9952
	ctx.r3.s64 = ctx.r11.s64 + -9952;
	// bl 0x82a4c758
	ctx.lr = 0x829D5E78;
	sub_82A4C758(ctx, base);
loc_829D5E78:
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

__attribute__((alias("__imp__sub_829D5E90"))) PPC_WEAK_FUNC(sub_829D5E90);
PPC_FUNC_IMPL(__imp__sub_829D5E90) {
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
	// lwz r11,-27676(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27676);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d5ed0
	if (!ctx.cr0.eq) goto loc_829D5ED0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27676, ctx.r11.u32);
	// addi r3,r9,-10004
	ctx.r3.s64 = ctx.r9.s64 + -10004;
	// bl 0x82816528
	ctx.lr = 0x829D5EC8;
	sub_82816528(ctx, base);
	// stw r3,-27680(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27680, ctx.r3.u32);
	// b 0x829d5ed4
	goto loc_829D5ED4;
loc_829D5ED0:
	// lwz r3,-27680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27680);
loc_829D5ED4:
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

__attribute__((alias("__imp__sub_829D5EE8"))) PPC_WEAK_FUNC(sub_829D5EE8);
PPC_FUNC_IMPL(__imp__sub_829D5EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d5e30
	ctx.lr = 0x829D5F08;
	sub_829D5E30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D5F1C;
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

__attribute__((alias("__imp__sub_829D5F38"))) PPC_WEAK_FUNC(sub_829D5F38);
PPC_FUNC_IMPL(__imp__sub_829D5F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829d5f70
	if (ctx.cr6.eq) goto loc_829D5F70;
	// bl 0x829d5e30
	ctx.lr = 0x829D5F60;
	sub_829D5E30(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829d5f70
	if (!ctx.cr6.eq) goto loc_829D5F70;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829d5f7c
	goto loc_829D5F7C;
loc_829D5F70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x829D5F7C;
	sub_82333C70(ctx, base);
loc_829D5F7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D5F98"))) PPC_WEAK_FUNC(sub_829D5F98);
PPC_FUNC_IMPL(__imp__sub_829D5F98) {
	PPC_FUNC_PROLOGUE();
	// b 0x829d5e30
	sub_829D5E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D5FA0"))) PPC_WEAK_FUNC(sub_829D5FA0);
PPC_FUNC_IMPL(__imp__sub_829D5FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x829D5FC0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829d6028
	if (ctx.cr0.eq) goto loc_829D6028;
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r11,-9960
	ctx.r11.s64 = ctx.r11.s64 + -9960;
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
	// bl 0x825c7d68
	ctx.lr = 0x829D6020;
	sub_825C7D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x829d602c
	goto loc_829D602C;
loc_829D6028:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D602C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D6048"))) PPC_WEAK_FUNC(sub_829D6048);
PPC_FUNC_IMPL(__imp__sub_829D6048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-10004
	ctx.r3.s64 = ctx.r11.s64 + -10004;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D6058"))) PPC_WEAK_FUNC(sub_829D6058);
PPC_FUNC_IMPL(__imp__sub_829D6058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829D6060;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// blt cr6,0x829d61a8
	if (ctx.cr6.lt) goto loc_829D61A8;
	// beq cr6,0x829d6140
	if (ctx.cr6.eq) goto loc_829D6140;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x829d610c
	if (ctx.cr6.lt) goto loc_829D610C;
	// bne cr6,0x829d61d8
	if (!ctx.cr6.eq) goto loc_829D61D8;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d61d8
	if (ctx.cr6.eq) goto loc_829D61D8;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x829D60B8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d60f0
	if (ctx.cr0.eq) goto loc_829D60F0;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d60d8
	if (ctx.cr6.eq) goto loc_829D60D8;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x829d60dc
	goto loc_829D60DC;
loc_829D60D8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_829D60DC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,108(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x824f7c50
	ctx.lr = 0x829D60E8;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829d60f4
	goto loc_829D60F4;
loc_829D60F0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_829D60F4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x829D6104;
	sub_82833A30(ctx, base);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// b 0x829d61d8
	goto loc_829D61D8;
loc_829D610C:
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829d61d8
	if (ctx.cr6.eq) goto loc_829D61D8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829D6128;
	sub_829B9720(ctx, base);
	// bl 0x82916590
	ctx.lr = 0x829D612C;
	sub_82916590(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d61d8
	if (ctx.cr0.eq) goto loc_829D61D8;
	// lwz r3,1408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x829D613C;
	sub_82978ED0(ctx, base);
	// b 0x829d61d8
	goto loc_829D61D8;
loc_829D6140:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d6154
	if (!ctx.cr6.eq) goto loc_829D6154;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d6540
	ctx.lr = 0x829D6154;
	sub_829D6540(ctx, base);
loc_829D6154:
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x829d61d8
	if (ctx.cr6.eq) goto loc_829D61D8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829D6170;
	sub_829B9720(ctx, base);
	// bl 0x82916590
	ctx.lr = 0x829D6174;
	sub_82916590(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829d61d8
	if (ctx.cr0.eq) goto loc_829D61D8;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d6198
	if (ctx.cr6.eq) goto loc_829D6198;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d61e8
	ctx.lr = 0x829D6194;
	sub_829D61E8(ctx, base);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
loc_829D6198:
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x82978d98
	ctx.lr = 0x829D61A4;
	sub_82978D98(ctx, base);
	// b 0x829d61d8
	goto loc_829D61D8;
loc_829D61A8:
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_829D61D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x829D61E0;
	sub_82333960(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D61E8"))) PPC_WEAK_FUNC(sub_829D61E8);
PPC_FUNC_IMPL(__imp__sub_829D61E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829D61F0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ec4bb4
	ctx.lr = 0x829D61F8;
	__savevmx_124(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// lfs f13,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x827236a0
	ctx.lr = 0x829D626C;
	sub_827236A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d6530
	if (ctx.cr0.eq) goto loc_829D6530;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r4,108(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829D6288;
	sub_829B9720(ctx, base);
	// bl 0x82336ae8
	ctx.lr = 0x829D628C;
	sub_82336AE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829d6530
	if (ctx.cr0.eq) goto loc_829D6530;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r4,124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r11,r11,17344
	ctx.r11.s64 = ctx.r11.s64 + 17344;
	// addi r9,r9,17360
	ctx.r9.s64 = ctx.r9.s64 + 17360;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// addi r8,r8,17376
	ctx.r8.s64 = ctx.r8.s64 + 17376;
	// lvx128 v124,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v125,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,17456
	ctx.r7.s64 = ctx.r7.s64 + 17456;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lvx128 v126,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v126,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lvx128 v127,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stvx128 v124,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v125,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x829d6364
	if (ctx.cr6.eq) goto loc_829D6364;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D6308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x829d6350
	if (ctx.cr6.eq) goto loc_829D6350;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r11,852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D632C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_829D633C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x829d633c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829D633C;
loc_829D6350:
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// b 0x829d64f8
	goto loc_829D64F8;
loc_829D6364:
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D6370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829d64e8
	if (ctx.cr0.eq) goto loc_829D64E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D6390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x829d63f4
	if (ctx.cr6.eq) goto loc_829D63F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r11,852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D63B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_829D63C0:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x829d63c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829D63C0;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v126,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v125,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v124,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_829D63F4:
	// vmrghw128 v13,v125,v127
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), simde_mm_load_si128((simde__m128i*)ctx.v125.u32)));
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// vmrghw128 v0,v124,v126
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), simde_mm_load_si128((simde__m128i*)ctx.v124.u32)));
	// li r10,16
	ctx.r10.s64 = 16;
	// vmrglw128 v11,v125,v127
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), simde_mm_load_si128((simde__m128i*)ctx.v125.u32)));
	// li r9,32
	ctx.r9.s64 = 32;
	// vmrglw128 v12,v124,v126
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), simde_mm_load_si128((simde__m128i*)ctx.v124.u32)));
	// li r8,48
	ctx.r8.s64 = 48;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// vmrghw v10,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// lvx128 v13,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v8,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// lvx128 v7,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// lvx128 v11,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v6,v9,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// vmsum4fp128 v5,v9,v0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// vmsum4fp128 v4,v9,v8
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// vmsum4fp128 v9,v9,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// vmsum4fp128 v2,v13,v0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vmsum4fp128 v3,v13,v12
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// li r9,8
	ctx.r9.s64 = 8;
	// vmsum4fp128 v30,v7,v0
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v31,v7,v12
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v1,v13,v8
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v29,v7,v8
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v12,v11,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v0,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v8,v11,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v13,v13,v10
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v11,v11,v10
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v7,v7,v10
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmrghw v10,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v9,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmrghw v6,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v9,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghw v0,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrghw v13,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v12,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// stvx128 v10,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v7,v7,v29
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v13,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v11,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// stvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_829D64D4:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x829d64d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829D64D4;
loc_829D64E8:
	// lfs f0,304(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lfs f13,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f12.f64 = double(temp.f32);
loc_829D64F8:
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// stfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82817e08
	ctx.lr = 0x829D6510;
	sub_82817E08(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828264e0
	ctx.lr = 0x829D6530;
	sub_828264E0(ctx, base);
loc_829D6530:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ec4e4c
	ctx.lr = 0x829D653C;
	__restvmx_124(ctx, base);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D6540"))) PPC_WEAK_FUNC(sub_829D6540);
PPC_FUNC_IMPL(__imp__sub_829D6540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829D6548;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x827236a0
	ctx.lr = 0x829D6560;
	sub_827236A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d6574
	if (ctx.cr0.eq) goto loc_829D6574;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d66e4
	if (ctx.cr6.eq) goto loc_829D66E4;
loc_829D6574:
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lwz r4,108(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x829D6588;
	sub_829B9720(ctx, base);
	// bl 0x82336ae8
	ctx.lr = 0x829D658C;
	sub_82336AE8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829d66e4
	if (ctx.cr0.eq) goto loc_829D66E4;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,112(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x823cf190
	ctx.lr = 0x829D65B0;
	sub_823CF190(ctx, base);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x829d66e4
	if (ctx.cr6.eq) goto loc_829D66E4;
	// li r3,1424
	ctx.r3.s64 = 1424;
	// bl 0x82833108
	ctx.lr = 0x829D65C4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d65dc
	if (ctx.cr0.eq) goto loc_829D65DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828adc70
	ctx.lr = 0x829D65D4;
	sub_828ADC70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829d65e0
	goto loc_829D65E0;
loc_829D65DC:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_829D65E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829d66e4
	if (ctx.cr6.eq) goto loc_829D66E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,128(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ae6e8
	ctx.lr = 0x829D6600;
	sub_828AE6E8(ctx, base);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r10,332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 332, ctx.r10.u32);
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x829D6614;
	sub_82978ED0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D662C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x829D6640;
	sub_829B8EE8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d66e4
	if (!ctx.cr6.eq) goto loc_829D66E4;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// rldicr r9,r27,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bne cr6,0x829d66bc
	if (!ctx.cr6.eq) goto loc_829D66BC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,284(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 284);
	// ld r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x829d66e0
	goto loc_829D66E0;
loc_829D66BC:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// beq cr6,0x829d66d4
	if (ctx.cr6.eq) goto loc_829D66D4;
	// lwz r11,284(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 284);
	// b 0x829d66d8
	goto loc_829D66D8;
loc_829D66D4:
	// lwz r11,280(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 280);
loc_829D66D8:
	// ld r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_829D66E0:
	// bctrl 
	ctx.lr = 0x829D66E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829D66E4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D66F0"))) PPC_WEAK_FUNC(sub_829D66F0);
PPC_FUNC_IMPL(__imp__sub_829D66F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829D66F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829bc540
	ctx.lr = 0x829D6704;
	sub_829BC540(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r11,r11,-9816
	ctx.r11.s64 = ctx.r11.s64 + -9816;
	// addi r10,r10,-8808
	ctx.r10.s64 = ctx.r10.s64 + -8808;
	// addi r9,r9,-8756
	ctx.r9.s64 = ctx.r9.s64 + -8756;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// stw r10,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r10.u32);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// stw r30,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r30.u32);
	// stw r30,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r30.u32);
	// stw r30,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r30.u32);
	// stw r30,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r30.u32);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// stw r30,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r30.u32);
	// stw r30,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r30.u32);
	// stw r30,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r30.u32);
	// stw r30,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r30.u32);
	// stw r30,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r30.u32);
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// stw r30,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r30.u32);
	// stw r30,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r30.u32);
	// stw r30,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r30.u32);
	// stw r30,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r30.u32);
	// stw r30,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r30.u32);
	// stw r30,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r30.u32);
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d67a0
	if (ctx.cr6.eq) goto loc_829D67A0;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82332c38
	ctx.lr = 0x829D67A0;
	sub_82332C38(ctx, base);
loc_829D67A0:
	// stb r30,1448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1448, ctx.r30.u8);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stb r30,1449(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1449, ctx.r30.u8);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r30.u32);
	// stw r30,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r30.u32);
	// stb r30,1450(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1450, ctx.r30.u8);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r30.u32);
	// stfs f0,1548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1548, temp.u32);
	// stw r30,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r30.u32);
	// stfs f0,1552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// stw r30,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// stfs f0,1556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1556, temp.u32);
	// stw r30,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r30.u32);
	// stfs f0,1560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1560, temp.u32);
	// stw r30,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r30.u32);
	// stfs f0,1564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
	// stw r30,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r30.u32);
	// stw r30,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r30.u32);
	// stw r10,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r10.u32);
	// stw r30,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r30.u32);
	// stw r30,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r30.u32);
	// stw r10,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r10.u32);
	// stw r30,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r30.u32);
	// stw r30,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r30.u32);
	// stw r30,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r30.u32);
	// stw r30,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// lwz r29,900(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 900);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x829d684c
	if (ctx.cr6.eq) goto loc_829D684C;
	// bl 0x82772e48
	ctx.lr = 0x829D6828;
	sub_82772E48(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D6840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829d684c
	if (ctx.cr0.eq) goto loc_829D684C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_829D684C:
	// stw r30,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D6860"))) PPC_WEAK_FUNC(sub_829D6860);
PPC_FUNC_IMPL(__imp__sub_829D6860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r11,r11,-9816
	ctx.r11.s64 = ctx.r11.s64 + -9816;
	// lwz r3,1504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// addi r10,r10,-8808
	ctx.r10.s64 = ctx.r10.s64 + -8808;
	// addi r9,r9,-8756
	ctx.r9.s64 = ctx.r9.s64 + -8756;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// beq cr6,0x829d68b4
	if (ctx.cr6.eq) goto loc_829D68B4;
	// bl 0x82332db8
	ctx.lr = 0x829D68B0;
	sub_82332DB8(ctx, base);
	// stw r30,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r30.u32);
loc_829D68B4:
	// lwz r3,1508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d68c8
	if (ctx.cr6.eq) goto loc_829D68C8;
	// bl 0x82332db8
	ctx.lr = 0x829D68C4;
	sub_82332DB8(ctx, base);
	// stw r30,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
loc_829D68C8:
	// lwz r4,1440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x829d68f0
	if (ctx.cr6.eq) goto loc_829D68F0;
	// lwz r3,1444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D68F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829D68F0:
	// lwz r3,1572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d6904
	if (ctx.cr6.eq) goto loc_829D6904;
	// bl 0x82332db8
	ctx.lr = 0x829D6900;
	sub_82332DB8(ctx, base);
	// stw r30,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r30.u32);
loc_829D6904:
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d6934
	if (ctx.cr6.eq) goto loc_829D6934;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x82767008
	ctx.lr = 0x829D691C;
	sub_82767008(ctx, base);
	// lwz r3,1568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d6930
	if (ctx.cr6.eq) goto loc_829D6930;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824345e8
	ctx.lr = 0x829D6930;
	sub_824345E8(ctx, base);
loc_829D6930:
	// stw r30,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r30.u32);
loc_829D6934:
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
	// bl 0x82333960
	ctx.lr = 0x829D693C;
	sub_82333960(ctx, base);
	// addi r3,r31,1456
	ctx.r3.s64 = ctx.r31.s64 + 1456;
	// bl 0x82333960
	ctx.lr = 0x829D6944;
	sub_82333960(ctx, base);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// bl 0x828585a0
	ctx.lr = 0x829D694C;
	sub_828585A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x829D6954;
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

__attribute__((alias("__imp__sub_829D6970"))) PPC_WEAK_FUNC(sub_829D6970);
PPC_FUNC_IMPL(__imp__sub_829D6970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829D6978;
	__savegprlr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bne cr6,0x829d6a2c
	if (!ctx.cr6.eq) goto loc_829D6A2C;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r3,13016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829d69c8
	if (!ctx.cr6.eq) goto loc_829D69C8;
	// bl 0x828223f0
	ctx.lr = 0x829D69C4;
	sub_828223F0(ctx, base);
	// lwz r3,13016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
loc_829D69C8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// lis r4,32
	ctx.r4.s64 = 2097152;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D69E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,32
	ctx.r5.s64 = 2097152;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r3.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x829D69F0;
	sub_82A4EFB0(ctx, base);
	// lwz r3,13016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829d6a04
	if (!ctx.cr6.eq) goto loc_829D6A04;
	// bl 0x828223f0
	ctx.lr = 0x829D6A00;
	sub_828223F0(ctx, base);
	// lwz r3,13016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
loc_829D6A04:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// lis r4,32
	ctx.r4.s64 = 2097152;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D6A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,32
	ctx.r5.s64 = 2097152;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r3.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x829D6A2C;
	sub_82A4EFB0(ctx, base);
loc_829D6A2C:
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r27,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-9860
	ctx.r4.s64 = ctx.r11.s64 + -9860;
	// bl 0x824099b8
	ctx.lr = 0x829D6A44;
	sub_824099B8(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d6a60
	if (ctx.cr6.eq) goto loc_829D6A60;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x829d6a64
	goto loc_829D6A64;
loc_829D6A60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_829D6A64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824193a8
	ctx.lr = 0x829D6A6C;
	sub_824193A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,1456
	ctx.r3.s64 = ctx.r31.s64 + 1456;
	// bl 0x82400b48
	ctx.lr = 0x829D6A78;
	sub_82400B48(ctx, base);
	// stb r29,1576(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1576, ctx.r29.u8);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82333900
	ctx.lr = 0x829D6A84;
	sub_82333900(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r3.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// bne cr6,0x829d6ac8
	if (!ctx.cr6.eq) goto loc_829D6AC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_829D6AC8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82409058
	ctx.lr = 0x829D6AD0;
	sub_82409058(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// lwz r30,132(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829d6af4
	if (ctx.cr6.eq) goto loc_829D6AF4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d6af4
	if (ctx.cr6.eq) goto loc_829D6AF4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x829D6AF4;
	sub_82332DB8(ctx, base);
loc_829D6AF4:
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82333900
	ctx.lr = 0x829D6AFC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d6b30
	if (ctx.cr0.eq) goto loc_829D6B30;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// lis r7,-32099
	ctx.r7.s64 = -2103640064;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r7,r7,27608
	ctx.r7.s64 = ctx.r7.s64 + 27608;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82766a70
	ctx.lr = 0x829D6B2C;
	sub_82766A70(ctx, base);
	// b 0x829d6b34
	goto loc_829D6B34;
loc_829D6B30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_829D6B34:
	// stw r3,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d6b58
	ctx.lr = 0x829D6B44;
	sub_829D6B58(ctx, base);
	// stb r27,1448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1448, ctx.r27.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x829D6B50;
	sub_82333960(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D6B58"))) PPC_WEAK_FUNC(sub_829D6B58);
PPC_FUNC_IMPL(__imp__sub_829D6B58) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,383
	ctx.r11.s64 = ctx.r4.s64 + 383;
	// addi r10,r4,378
	ctx.r10.s64 = ctx.r4.s64 + 378;
	// addi r9,r4,376
	ctx.r9.s64 = ctx.r4.s64 + 376;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,1584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1584, ctx.r11.u32);
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// stwx r11,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// subf r8,r11,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,1572(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r10,1572(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r10,1572(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r10,1572(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,1572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// lwz r10,1568(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1568);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 256, ctx.r11.u32);
	// lwz r11,1568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1568);
	// stw r8,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r8.u32);
	// lwz r3,1568(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1568);
	// b 0x82766cd0
	sub_82766CD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D6BD8"))) PPC_WEAK_FUNC(sub_829D6BD8);
PPC_FUNC_IMPL(__imp__sub_829D6BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829D6BE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x829D6C08;
	sub_82A4EA80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne cr6,0x829d6c64
	if (!ctx.cr6.eq) goto loc_829D6C64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,1528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1528, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,378
	ctx.r11.s64 = ctx.r11.s64 + 378;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,1524(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1524);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1524, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_829D6C64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D6C70"))) PPC_WEAK_FUNC(sub_829D6C70);
PPC_FUNC_IMPL(__imp__sub_829D6C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x829D6C78;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r27,376
	ctx.r11.s64 = ctx.r27.s64 + 376;
	// addi r10,r27,383
	ctx.r10.s64 = ctx.r27.s64 + 383;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r26,32
	ctx.r26.s64 = 2097152;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lwzx r30,r11,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stwx r25,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r25.u32);
	// stw r25,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r25.u32);
loc_829D6CAC:
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x829d6e40
	if (ctx.cr6.gt) goto loc_829D6E40;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x829d6e40
	if (ctx.cr6.gt) goto loc_829D6E40;
	// lis r11,21332
	ctx.r11.s64 = 1398013952;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r11,r11,20291
	ctx.r11.u64 = ctx.r11.u64 | 20291;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x829d6cf0
	if (!ctx.cr6.eq) goto loc_829D6CF0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r9,r11,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d6cf0
	if (!ctx.cr0.eq) goto loc_829D6CF0;
loc_829D6CE8:
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// b 0x829d6dbc
	goto loc_829D6DBC;
loc_829D6CF0:
	// lis r11,21332
	ctx.r11.s64 = 1398013952;
	// ori r11,r11,16725
	ctx.r11.u64 = ctx.r11.u64 | 16725;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x829d6d0c
	if (!ctx.cr6.eq) goto loc_829D6D0C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r9,r11,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x829d6ce8
	if (ctx.cr0.eq) goto loc_829D6CE8;
loc_829D6D0C:
	// lis r11,21332
	ctx.r11.s64 = 1398013952;
	// ori r11,r11,17732
	ctx.r11.u64 = ctx.r11.u64 | 17732;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x829d6dd8
	if (ctx.cr6.eq) goto loc_829D6DD8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d6dc0
	if (!ctx.cr0.eq) goto loc_829D6DC0;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829d6dc0
	if (!ctx.cr0.eq) goto loc_829D6DC0;
	// lis r11,22605
	ctx.r11.s64 = 1481441280;
	// ori r11,r11,16672
	ctx.r11.u64 = ctx.r11.u64 | 16672;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x829d6db0
	if (!ctx.cr6.eq) goto loc_829D6DB0;
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x829D6D54;
	sub_82332D50(ctx, base);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// mulli r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 * 20;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82a455d0
	ctx.lr = 0x829D6D6C;
	sub_82A455D0(ctx, base);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// stwx r27,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r27.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
loc_829D6DB0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_829D6DBC:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_829D6DC0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x829d6cac
	if (!ctx.cr6.gt) goto loc_829D6CAC;
	// b 0x829d6e4c
	goto loc_829D6E4C;
loc_829D6DD8:
	// lwa r11,8(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r3,1572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,1548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1548, temp.u32);
	// stb r10,1450(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1450, ctx.r10.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d6e0c
	if (ctx.cr6.eq) goto loc_829D6E0C;
	// bl 0x82332db8
	ctx.lr = 0x829D6E08;
	sub_82332DB8(ctx, base);
	// stw r25,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r25.u32);
loc_829D6E0C:
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d6e4c
	if (ctx.cr6.eq) goto loc_829D6E4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x82767008
	ctx.lr = 0x829D6E24;
	sub_82767008(ctx, base);
	// lwz r3,1568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d6e38
	if (ctx.cr6.eq) goto loc_829D6E38;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824345e8
	ctx.lr = 0x829D6E38;
	sub_824345E8(ctx, base);
loc_829D6E38:
	// stw r25,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r25.u32);
	// b 0x829d6e4c
	goto loc_829D6E4C;
loc_829D6E40:
	// subf r11,r28,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r28.s64;
	// stw r30,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r30.u32);
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
loc_829D6E4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D6E58"))) PPC_WEAK_FUNC(sub_829D6E58);
PPC_FUNC_IMPL(__imp__sub_829D6E58) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r3,1444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d6ec0
	if (ctx.cr6.eq) goto loc_829D6EC0;
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d6ec0
	if (ctx.cr6.eq) goto loc_829D6EC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D6EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwz r4,1440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D6EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_829D6EC0:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// stfs f0,1552(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f11,1560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-28788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28788);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-27300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,1556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1556, temp.u32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x829d7094
	if (ctx.cr6.gt) goto loc_829D7094;
loc_829D6EE8:
	// lwz r10,1424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x829d7094
	if (!ctx.cr6.gt) goto loc_829D7094;
	// lwz r9,1420(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
loc_829D6F08:
	// lis r8,22605
	ctx.r8.s64 = 1481441280;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ori r8,r8,16672
	ctx.r8.u64 = ctx.r8.u64 | 16672;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x829d6f34
	if (ctx.cr6.eq) goto loc_829D6F34;
	// lwz r8,1424(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x829d6f08
	if (ctx.cr6.lt) goto loc_829D6F08;
	// b 0x829d7094
	goto loc_829D7094;
loc_829D6F34:
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// beq cr6,0x829d7094
	if (ctx.cr6.eq) goto loc_829D7094;
	// lwa r11,8(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 8));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r5,1452(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,1560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1560, temp.u32);
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829d6fb8
	if (ctx.cr6.eq) goto loc_829D6FB8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829d6f8c
	if (ctx.cr6.eq) goto loc_829D6F8C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x829d6ffc
	if (ctx.cr6.eq) goto loc_829D6FFC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x829d6ffc
	if (!ctx.cr6.eq) goto loc_829D6FFC;
loc_829D6F8C:
	// lwz r3,1444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d6ffc
	if (ctx.cr6.eq) goto loc_829D6FFC;
	// lwz r4,1440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x829d6ffc
	if (ctx.cr6.eq) goto loc_829D6FFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D6FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x829d6ffc
	goto loc_829D6FFC;
loc_829D6FB8:
	// lwz r3,1444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d6ffc
	if (ctx.cr6.eq) goto loc_829D6FFC;
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d6ffc
	if (!ctx.cr6.eq) goto loc_829D6FFC;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// lwz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// stw r11,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,28(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D6FF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
loc_829D6FFC:
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d7070
	if (!ctx.cr6.gt) goto loc_829D7070;
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// lwz r10,1452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_829D7018:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829d703c
	if (ctx.cr6.eq) goto loc_829D703C;
	// lwz r9,1424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829d7018
	if (ctx.cr6.lt) goto loc_829D7018;
	// b 0x829d7070
	goto loc_829D7070;
loc_829D703C:
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,0,8,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x82332ca8
	ctx.lr = 0x829D7070;
	sub_82332CA8(ctx, base);
loc_829D7070:
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lfs f0,1556(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	ctx.f0.f64 = double(temp.f32);
	// lwa r11,8(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 8));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x829d6ee8
	if (ctx.cr6.lt) goto loc_829D6EE8;
loc_829D7094:
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

__attribute__((alias("__imp__sub_829D70A8"))) PPC_WEAK_FUNC(sub_829D70A8);
PPC_FUNC_IMPL(__imp__sub_829D70A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x829D70B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1448);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d7388
	if (ctx.cr0.eq) goto loc_829D7388;
	// lwz r11,1524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d7388
	if (!ctx.cr6.gt) goto loc_829D7388;
	// lwz r11,1528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x829d7114
	if (ctx.cr6.eq) goto loc_829D7114;
	// lbz r11,1450(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1450);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x829d7114
	if (!ctx.cr0.eq) goto loc_829D7114;
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x82767008
	ctx.lr = 0x829D70F8;
	sub_82767008(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d7114
	if (ctx.cr0.eq) goto loc_829D7114;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// bl 0x829d6c70
	ctx.lr = 0x829D710C;
	sub_829D6C70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r11.u32);
loc_829D7114:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d6e58
	ctx.lr = 0x829D711C;
	sub_829D6E58(ctx, base);
	// lwz r9,1424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x829d729c
	if (!ctx.cr6.eq) goto loc_829D729C;
	// lbz r11,1450(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1450);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x829d729c
	if (!ctx.cr6.eq) goto loc_829D729C;
	// lbz r11,1449(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1449);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d7168
	if (ctx.cr0.eq) goto loc_829D7168;
	// addi r4,r31,1456
	ctx.r4.s64 = ctx.r31.s64 + 1456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d6970
	ctx.lr = 0x829D714C;
	sub_829D6970(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1450(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1450, ctx.r10.u8);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// stfs f0,1560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1560, temp.u32);
	// b 0x829d7388
	goto loc_829D7388;
loc_829D7168:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,1448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1448, ctx.r30.u8);
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
	ctx.lr = 0x829D7198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d71b4
	if (!ctx.cr6.gt) goto loc_829D71B4;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x829d7284
	goto loc_829D7284;
loc_829D71B4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d7250
	if (!ctx.cr6.eq) goto loc_829D7250;
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
	ctx.lr = 0x829D71D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d7230
	if (!ctx.cr6.gt) goto loc_829D7230;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_829D71EC:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829d721c
	if (!ctx.cr6.eq) goto loc_829D721C;
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
	ctx.lr = 0x829D7214;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_829D721C:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829d71ec
	if (ctx.cr6.lt) goto loc_829D71EC;
loc_829D7230:
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
	ctx.lr = 0x829D7250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829D7250:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829d7284
	if (!ctx.cr0.eq) goto loc_829D7284;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D7270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829d7284
	if (ctx.cr0.eq) goto loc_829D7284;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x829D7284;
	sub_82410060(ctx, base);
loc_829D7284:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D7298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x829d7388
	goto loc_829D7388;
loc_829D729C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// ble cr6,0x829d72d0
	if (!ctx.cr6.gt) goto loc_829D72D0;
	// lwz r10,1420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
loc_829D72B0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x829d7310
	if (ctx.cr6.eq) goto loc_829D7310;
	// lwz r8,1424(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x829d72b0
	if (ctx.cr6.lt) goto loc_829D72B0;
loc_829D72D0:
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d7310
	if (!ctx.cr6.eq) goto loc_829D7310;
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d7310
	if (!ctx.cr6.eq) goto loc_829D7310;
	// lwz r5,1540(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x829d7308
	if (!ctx.cr6.gt) goto loc_829D7308;
	// lwz r4,1544(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// lwz r3,1504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// bl 0x82a4ea80
	ctx.lr = 0x829D7300;
	sub_82A4EA80(ctx, base);
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// stw r11,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r11.u32);
loc_829D7308:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x829d737c
	goto loc_829D737C;
loc_829D7310:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x829d7340
	if (!ctx.cr6.gt) goto loc_829D7340;
	// lwz r10,1420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
loc_829D7320:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x829d7388
	if (ctx.cr6.eq) goto loc_829D7388;
	// lwz r9,1424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829d7320
	if (ctx.cr6.lt) goto loc_829D7320;
loc_829D7340:
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d7388
	if (!ctx.cr6.eq) goto loc_829D7388;
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d7388
	if (!ctx.cr6.eq) goto loc_829D7388;
	// lwz r5,1540(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x829d7378
	if (!ctx.cr6.gt) goto loc_829D7378;
	// lwz r4,1544(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// lwz r3,1508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// bl 0x82a4ea80
	ctx.lr = 0x829D7370;
	sub_82A4EA80(ctx, base);
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// stw r11,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r11.u32);
loc_829D7378:
	// li r4,1
	ctx.r4.s64 = 1;
loc_829D737C:
	// stw r30,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d6b58
	ctx.lr = 0x829D7388;
	sub_829D6B58(ctx, base);
loc_829D7388:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D7390"))) PPC_WEAK_FUNC(sub_829D7390);
PPC_FUNC_IMPL(__imp__sub_829D7390) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x829d7398
	sub_829D7398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D7398"))) PPC_WEAK_FUNC(sub_829D7398);
PPC_FUNC_IMPL(__imp__sub_829D7398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d6860
	ctx.lr = 0x829D73B8;
	sub_829D6860(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829d73c8
	if (ctx.cr0.eq) goto loc_829D73C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x829D73C8;
	sub_82332DB8(ctx, base);
loc_829D73C8:
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

__attribute__((alias("__imp__sub_829D73E8"))) PPC_WEAK_FUNC(sub_829D73E8);
PPC_FUNC_IMPL(__imp__sub_829D73E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x829d7398
	sub_829D7398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D73F0"))) PPC_WEAK_FUNC(sub_829D73F0);
PPC_FUNC_IMPL(__imp__sub_829D73F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x829d73f8
	sub_829D73F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D73F8"))) PPC_WEAK_FUNC(sub_829D73F8);
PPC_FUNC_IMPL(__imp__sub_829D73F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d7458
	ctx.lr = 0x829D7418;
	sub_829D7458(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829d7428
	if (!ctx.cr6.eq) goto loc_829D7428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x829d7440
	goto loc_829D7440;
loc_829D7428:
	// bl 0x82338750
	ctx.lr = 0x829D742C;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829d7440
	if (ctx.cr6.eq) goto loc_829D7440;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x829D7440;
	sub_82338858(ctx, base);
loc_829D7440:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D7458"))) PPC_WEAK_FUNC(sub_829D7458);
PPC_FUNC_IMPL(__imp__sub_829D7458) {
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
	// addi r31,r11,19520
	ctx.r31.s64 = ctx.r11.s64 + 19520;
	// lwz r11,19524(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19524);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d74a0
	if (!ctx.cr0.eq) goto loc_829D74A0;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-8732
	ctx.r9.s64 = ctx.r9.s64 + -8732;
	// stw r11,19524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19524, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-9928
	ctx.r3.s64 = ctx.r11.s64 + -9928;
	// bl 0x82a4c758
	ctx.lr = 0x829D74A0;
	sub_82A4C758(ctx, base);
loc_829D74A0:
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

__attribute__((alias("__imp__sub_829D74B8"))) PPC_WEAK_FUNC(sub_829D74B8);
PPC_FUNC_IMPL(__imp__sub_829D74B8) {
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
	// li r3,1600
	ctx.r3.s64 = 1600;
	// bl 0x82833108
	ctx.lr = 0x829D74CC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d74dc
	if (ctx.cr0.eq) goto loc_829D74DC;
	// bl 0x829d66f0
	ctx.lr = 0x829D74D8;
	sub_829D66F0(ctx, base);
	// b 0x829d74e0
	goto loc_829D74E0;
loc_829D74DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D74E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D74F0"))) PPC_WEAK_FUNC(sub_829D74F0);
PPC_FUNC_IMPL(__imp__sub_829D74F0) {
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
	// lwz r11,-27684(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27684);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d7530
	if (!ctx.cr0.eq) goto loc_829D7530;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27684, ctx.r11.u32);
	// addi r3,r9,-9836
	ctx.r3.s64 = ctx.r9.s64 + -9836;
	// bl 0x82816528
	ctx.lr = 0x829D7528;
	sub_82816528(ctx, base);
	// stw r3,-27688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27688, ctx.r3.u32);
	// b 0x829d7534
	goto loc_829D7534;
loc_829D7530:
	// lwz r3,-27688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27688);
loc_829D7534:
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

__attribute__((alias("__imp__sub_829D7548"))) PPC_WEAK_FUNC(sub_829D7548);
PPC_FUNC_IMPL(__imp__sub_829D7548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d7458
	ctx.lr = 0x829D7568;
	sub_829D7458(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D757C;
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

__attribute__((alias("__imp__sub_829D7598"))) PPC_WEAK_FUNC(sub_829D7598);
PPC_FUNC_IMPL(__imp__sub_829D7598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829d75d0
	if (ctx.cr6.eq) goto loc_829D75D0;
	// bl 0x829d7458
	ctx.lr = 0x829D75C0;
	sub_829D7458(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829d75d0
	if (!ctx.cr6.eq) goto loc_829D75D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829d75dc
	goto loc_829D75DC;
loc_829D75D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x829D75DC;
	sub_82338A28(ctx, base);
loc_829D75DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D75F8"))) PPC_WEAK_FUNC(sub_829D75F8);
PPC_FUNC_IMPL(__imp__sub_829D75F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829d7458
	sub_829D7458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D7600"))) PPC_WEAK_FUNC(sub_829D7600);
PPC_FUNC_IMPL(__imp__sub_829D7600) {
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
	// li r3,1600
	ctx.r3.s64 = 1600;
	// bl 0x82833108
	ctx.lr = 0x829D761C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d7630
	if (ctx.cr0.eq) goto loc_829D7630;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829d7648
	ctx.lr = 0x829D762C;
	sub_829D7648(ctx, base);
	// b 0x829d7634
	goto loc_829D7634;
loc_829D7630:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D7634:
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

__attribute__((alias("__imp__sub_829D7648"))) PPC_WEAK_FUNC(sub_829D7648);
PPC_FUNC_IMPL(__imp__sub_829D7648) {
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
	// bl 0x82338b88
	ctx.lr = 0x829D7668;
	sub_82338B88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r11,r11,-9816
	ctx.r11.s64 = ctx.r11.s64 + -9816;
	// addi r10,r10,-8808
	ctx.r10.s64 = ctx.r10.s64 + -8808;
	// addi r9,r9,-8756
	ctx.r9.s64 = ctx.r9.s64 + -8756;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r4,r30,1408
	ctx.r4.s64 = ctx.r30.s64 + 1408;
	// bl 0x828584c0
	ctx.lr = 0x829D7698;
	sub_828584C0(ctx, base);
	// lwz r11,1432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1432);
	// addi r3,r31,1456
	ctx.r3.s64 = ctx.r31.s64 + 1456;
	// addi r4,r30,1456
	ctx.r4.s64 = ctx.r30.s64 + 1456;
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// lwz r11,1436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// stw r11,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r11.u32);
	// lwz r11,1440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// lwz r11,1444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// stw r11,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r11.u32);
	// lbz r11,1448(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1448);
	// stb r11,1448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1448, ctx.r11.u8);
	// lbz r11,1449(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1449);
	// stb r11,1449(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1449, ctx.r11.u8);
	// lbz r11,1450(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1450);
	// stb r11,1450(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1450, ctx.r11.u8);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x829D76E4;
	sub_823339B8(ctx, base);
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
	// addi r4,r30,1480
	ctx.r4.s64 = ctx.r30.s64 + 1480;
	// bl 0x823339b8
	ctx.lr = 0x829D76F0;
	sub_823339B8(ctx, base);
	// ld r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1504);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,1504(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1504, ctx.r11.u64);
	// ld r11,1512(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1512);
	// std r11,1512(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1512, ctx.r11.u64);
	// lwz r11,1520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1520);
	// stw r11,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r11.u32);
	// lwz r11,1524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	// stw r11,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r11.u32);
	// lwz r11,1528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	// stw r11,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r11.u32);
	// lwz r11,1532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1532);
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
	// lwz r11,1536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1536);
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
	// lwz r11,1540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// lwz r11,1544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1544);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// lfs f0,1548(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1548, temp.u32);
	// lfs f0,1552(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// lfs f0,1556(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1556, temp.u32);
	// lfs f0,1560(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1560, temp.u32);
	// lfs f0,1564(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1564);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
	// lwz r11,1568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1568);
	// stw r11,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r11.u32);
	// lwz r11,1572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1572);
	// stw r11,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r11.u32);
	// lbz r11,1576(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1576);
	// stb r11,1576(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1576, ctx.r11.u8);
	// lwz r11,1580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// stw r11,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r11.u32);
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D77A8"))) PPC_WEAK_FUNC(sub_829D77A8);
PPC_FUNC_IMPL(__imp__sub_829D77A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-9836
	ctx.r3.s64 = ctx.r11.s64 + -9836;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D77B8"))) PPC_WEAK_FUNC(sub_829D77B8);
PPC_FUNC_IMPL(__imp__sub_829D77B8) {
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
	ctx.lr = 0x829D77D0;
	sub_82833180(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-8632
	ctx.r10.s64 = ctx.r10.s64 + -8632;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
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
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r8,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r8.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r10,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r10.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// bl 0x829d80e0
	ctx.lr = 0x829D786C;
	sub_829D80E0(ctx, base);
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

__attribute__((alias("__imp__sub_829D7888"))) PPC_WEAK_FUNC(sub_829D7888);
PPC_FUNC_IMPL(__imp__sub_829D7888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829D7890;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bne cr6,0x829d7944
	if (!ctx.cr6.eq) goto loc_829D7944;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r3,13016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829d78e0
	if (!ctx.cr6.eq) goto loc_829D78E0;
	// bl 0x828223f0
	ctx.lr = 0x829D78DC;
	sub_828223F0(ctx, base);
	// lwz r3,13016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
loc_829D78E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// lis r4,32
	ctx.r4.s64 = 2097152;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D78F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,32
	ctx.r5.s64 = 2097152;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x829D7908;
	sub_82A4EFB0(ctx, base);
	// lwz r3,13016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829d791c
	if (!ctx.cr6.eq) goto loc_829D791C;
	// bl 0x828223f0
	ctx.lr = 0x829D7918;
	sub_828223F0(ctx, base);
	// lwz r3,13016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
loc_829D791C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// lis r4,32
	ctx.r4.s64 = 2097152;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D7934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,32
	ctx.r5.s64 = 2097152;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x829D7944;
	sub_82A4EFB0(ctx, base);
loc_829D7944:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-8712
	ctx.r4.s64 = ctx.r10.s64 + -8712;
	// bl 0x824099b8
	ctx.lr = 0x829D795C;
	sub_824099B8(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d7978
	if (ctx.cr6.eq) goto loc_829D7978;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x829d797c
	goto loc_829D797C;
loc_829D7978:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_829D797C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824193a8
	ctx.lr = 0x829D7984;
	sub_824193A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x82400b48
	ctx.lr = 0x829D7990;
	sub_82400B48(ctx, base);
	// stb r29,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r29.u8);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82333900
	ctx.lr = 0x829D799C;
	sub_82333900(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// bne cr6,0x829d79e0
	if (!ctx.cr6.eq) goto loc_829D79E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_829D79E0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82409058
	ctx.lr = 0x829D79E8;
	sub_82409058(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// lwz r30,132(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829d7a0c
	if (ctx.cr6.eq) goto loc_829D7A0C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d7a0c
	if (ctx.cr6.eq) goto loc_829D7A0C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x829D7A0C;
	sub_82332DB8(ctx, base);
loc_829D7A0C:
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82333900
	ctx.lr = 0x829D7A14;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d7a48
	if (ctx.cr0.eq) goto loc_829D7A48;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lis r7,-32098
	ctx.r7.s64 = -2103574528;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r7,r7,-31896
	ctx.r7.s64 = ctx.r7.s64 + -31896;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82766a70
	ctx.lr = 0x829D7A44;
	sub_82766A70(ctx, base);
	// b 0x829d7a4c
	goto loc_829D7A4C;
loc_829D7A48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_829D7A4C:
	// stw r3,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d82e8
	ctx.lr = 0x829D7A5C;
	sub_829D82E8(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d7a88
	if (ctx.cr6.eq) goto loc_829D7A88;
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d7a88
	if (ctx.cr6.eq) goto loc_829D7A88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d8680
	ctx.lr = 0x829D7A88;
	sub_829D8680(ctx, base);
loc_829D7A88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x829D7A90;
	sub_82333960(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D7A98"))) PPC_WEAK_FUNC(sub_829D7A98);
PPC_FUNC_IMPL(__imp__sub_829D7A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829D7AA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d7af0
	if (!ctx.cr6.gt) goto loc_829D7AF0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_829D7AC4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D7ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829d7ac4
	if (ctx.cr6.lt) goto loc_829D7AC4;
loc_829D7AF0:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d7b0c
	if (ctx.cr6.eq) goto loc_829D7B0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D7B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829D7B0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D7B18"))) PPC_WEAK_FUNC(sub_829D7B18);
PPC_FUNC_IMPL(__imp__sub_829D7B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d7b58
	if (!ctx.cr6.gt) goto loc_829D7B58;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829D7B38:
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x829d7b38
	if (ctx.cr6.lt) goto loc_829D7B38;
loc_829D7B58:
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d7b68
	if (ctx.cr6.eq) goto loc_829D7B68;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_829D7B68:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13032);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// stw r10,13028(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13028, ctx.r10.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,1984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1984, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D7B98"))) PPC_WEAK_FUNC(sub_829D7B98);
PPC_FUNC_IMPL(__imp__sub_829D7B98) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x829d7c28
	if (!ctx.cr6.gt) goto loc_829D7C28;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_829D7BD8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829d7c08
	if (ctx.cr6.eq) goto loc_829D7C08;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lis r7,22605
	ctx.r7.s64 = 1481441280;
	// ori r7,r7,16672
	ctx.r7.u64 = ctx.r7.u64 | 16672;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x829d7c08
	if (!ctx.cr6.eq) goto loc_829D7C08;
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x829d7c20
	if (ctx.cr6.eq) goto loc_829D7C20;
loc_829D7C08:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829d7bd8
	if (ctx.cr6.lt) goto loc_829D7BD8;
	// b 0x829d7c28
	goto loc_829D7C28;
loc_829D7C20:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
loc_829D7C28:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f13,160(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lwz r11,13028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13028);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d7c60
	if (ctx.cr6.eq) goto loc_829D7C60;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f0,-28788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28788);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x829d7cc0
	goto loc_829D7CC0;
loc_829D7C60:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d7ca4
	if (ctx.cr6.eq) goto loc_829D7CA4;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d7ca4
	if (!ctx.cr6.eq) goto loc_829D7CA4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x829d9548
	ctx.lr = 0x829D7C7C;
	sub_829D9548(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x829d7cc4
	if (!ctx.cr6.gt) goto loc_829D7CC4;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,-28788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28788);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-27300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// b 0x829d7cc0
	goto loc_829D7CC0;
loc_829D7CA4:
	// fadds f12,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stfs f12,148(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f0,-28788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28788);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
loc_829D7CC0:
	// stfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
loc_829D7CC4:
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

__attribute__((alias("__imp__sub_829D7CE0"))) PPC_WEAK_FUNC(sub_829D7CE0);
PPC_FUNC_IMPL(__imp__sub_829D7CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829D7CE8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r27,1
	ctx.r27.s64 = 1;
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x829d7d58
	if (!ctx.cr0.eq) goto loc_829D7D58;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x829d7d4c
	if (ctx.cr6.eq) goto loc_829D7D4C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d7d4c
	if (!ctx.cr6.eq) goto loc_829D7D4C;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x82767008
	ctx.lr = 0x829D7D34;
	sub_82767008(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d7d4c
	if (ctx.cr0.eq) goto loc_829D7D4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x829d89a8
	ctx.lr = 0x829D7D48;
	sub_829D89A8(ctx, base);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
loc_829D7D4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d7fc0
	ctx.lr = 0x829D7D54;
	sub_829D7FC0(ctx, base);
	// b 0x829d7d68
	goto loc_829D7D68;
loc_829D7D58:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d7d68
	if (!ctx.cr6.eq) goto loc_829D7D68;
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
loc_829D7D68:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x829d7f7c
	if (!ctx.cr0.eq) goto loc_829D7F7C;
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829d7f7c
	if (ctx.cr0.eq) goto loc_829D7F7C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,13032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13032);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d7e20
	if (ctx.cr6.eq) goto loc_829D7E20;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,13028(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13028, ctx.r11.u32);
	// beq cr6,0x829d7db4
	if (ctx.cr6.eq) goto loc_829D7DB4;
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// b 0x829d7dbc
	goto loc_829D7DBC;
loc_829D7DB4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_829D7DBC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82409058
	ctx.lr = 0x829D7DC4;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a4e530
	ctx.lr = 0x829D7DD8;
	sub_82A4E530(ctx, base);
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// stb r28,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r28.u8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x829d7df8
	if (ctx.cr6.eq) goto loc_829D7DF8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d7df8
	if (ctx.cr6.eq) goto loc_829D7DF8;
	// bl 0x82332db8
	ctx.lr = 0x829D7DF8;
	sub_82332DB8(ctx, base);
loc_829D7DF8:
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a4ca90
	ctx.lr = 0x829D7E04;
	sub_82A4CA90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d7e10
	if (ctx.cr0.eq) goto loc_829D7E10;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
loc_829D7E10:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r28,1984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1984, ctx.r28.u32);
loc_829D7E20:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x829d7e60
	if (ctx.cr6.eq) goto loc_829D7E60;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d7e60
	if (!ctx.cr6.eq) goto loc_829D7E60;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x82767008
	ctx.lr = 0x829D7E48;
	sub_82767008(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d7e60
	if (ctx.cr0.eq) goto loc_829D7E60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x829d89a8
	ctx.lr = 0x829D7E5C;
	sub_829D89A8(ctx, base);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
loc_829D7E60:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d7ea4
	if (!ctx.cr6.gt) goto loc_829D7EA4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_829D7E74:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D7E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829d7e74
	if (ctx.cr6.lt) goto loc_829D7E74;
loc_829D7EA4:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d7ef4
	if (ctx.cr6.eq) goto loc_829D7EF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D7EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d7ef4
	if (ctx.cr6.eq) goto loc_829D7EF4;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d7ef0
	if (ctx.cr0.eq) goto loc_829D7EF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D7EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829D7EF0:
	// stw r28,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r28.u32);
loc_829D7EF4:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d7f64
	if (!ctx.cr6.eq) goto loc_829D7F64;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x829d7f64
	if (!ctx.cr6.eq) goto loc_829D7F64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d7f4c
	if (!ctx.cr6.gt) goto loc_829D7F4C;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_829D7F24:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,60(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x829d7f38
	if (!ctx.cr6.eq) goto loc_829D7F38;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_829D7F38:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x829d7f24
	if (!ctx.cr0.eq) goto loc_829D7F24;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x829d7f64
	if (!ctx.cr6.eq) goto loc_829D7F64;
loc_829D7F4C:
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// bl 0x829d7b18
	ctx.lr = 0x829D7F5C;
	sub_829D7B18(ctx, base);
	// stw r27,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r27.u32);
	// b 0x829d7fb0
	goto loc_829D7FB0;
loc_829D7F64:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d7fb0
	if (!ctx.cr6.eq) goto loc_829D7FB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d7fc0
	ctx.lr = 0x829D7F78;
	sub_829D7FC0(ctx, base);
	// b 0x829d7fb0
	goto loc_829D7FB0;
loc_829D7F7C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// lwz r11,13032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13032);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d7fb0
	if (ctx.cr6.eq) goto loc_829D7FB0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// stw r10,13028(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13028, ctx.r10.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r28,1984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1984, ctx.r28.u32);
loc_829D7FB0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D7FC0"))) PPC_WEAK_FUNC(sub_829D7FC0);
PPC_FUNC_IMPL(__imp__sub_829D7FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x829d8010
	if (!ctx.cr6.gt) goto loc_829D8010;
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
loc_829D7FF0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x829d8050
	if (ctx.cr6.eq) goto loc_829D8050;
	// lwz r8,196(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x829d7ff0
	if (ctx.cr6.lt) goto loc_829D7FF0;
loc_829D8010:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d8050
	if (!ctx.cr6.eq) goto loc_829D8050;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d8050
	if (!ctx.cr6.eq) goto loc_829D8050;
	// lwz r5,212(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x829d8048
	if (!ctx.cr6.gt) goto loc_829D8048;
	// lwz r4,216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82a4ea80
	ctx.lr = 0x829D8040;
	sub_82A4EA80(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
loc_829D8048:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x829d80bc
	goto loc_829D80BC;
loc_829D8050:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x829d8080
	if (!ctx.cr6.gt) goto loc_829D8080;
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
loc_829D8060:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x829d80c8
	if (ctx.cr6.eq) goto loc_829D80C8;
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829d8060
	if (ctx.cr6.lt) goto loc_829D8060;
loc_829D8080:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d80c8
	if (!ctx.cr6.eq) goto loc_829D80C8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d80c8
	if (!ctx.cr6.eq) goto loc_829D80C8;
	// lwz r5,212(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x829d80b8
	if (!ctx.cr6.gt) goto loc_829D80B8;
	// lwz r4,216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82a4ea80
	ctx.lr = 0x829D80B0;
	sub_82A4EA80(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
loc_829D80B8:
	// li r4,1
	ctx.r4.s64 = 1;
loc_829D80BC:
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d82e8
	ctx.lr = 0x829D80C8;
	sub_829D82E8(ctx, base);
loc_829D80C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D80E0"))) PPC_WEAK_FUNC(sub_829D80E0);
PPC_FUNC_IMPL(__imp__sub_829D80E0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// beq cr6,0x829d8130
	if (ctx.cr6.eq) goto loc_829D8130;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x829D8130;
	sub_82332C38(ctx, base);
loc_829D8130:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stb r30,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r30.u8);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// beq cr6,0x829d81b0
	if (ctx.cr6.eq) goto loc_829D81B0;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82332c38
	ctx.lr = 0x829D81B0;
	sub_82332C38(ctx, base);
loc_829D81B0:
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D81E0"))) PPC_WEAK_FUNC(sub_829D81E0);
PPC_FUNC_IMPL(__imp__sub_829D81E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829D81E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d829c
	if (ctx.cr6.eq) goto loc_829D829C;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d8218
	if (!ctx.cr6.eq) goto loc_829D8218;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d8244
	if (ctx.cr6.eq) goto loc_829D8244;
loc_829D8218:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x82767008
	ctx.lr = 0x829D8228;
	sub_82767008(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x829d8244
	if (!ctx.cr0.eq) goto loc_829D8244;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x828243b0
	ctx.lr = 0x829D8238;
	sub_828243B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82766940
	ctx.lr = 0x829D8240;
	sub_82766940(ctx, base);
	// b 0x829d8218
	goto loc_829D8218;
loc_829D8244:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r3,272
	ctx.r3.s64 = 272;
	// addi r30,r11,92
	ctx.r30.s64 = ctx.r11.s64 + 92;
	// bl 0x82333900
	ctx.lr = 0x829D8254;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d826c
	if (ctx.cr0.eq) goto loc_829D826C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82766b70
	ctx.lr = 0x829D8264;
	sub_82766B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829d8270
	goto loc_829D8270;
loc_829D826C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_829D8270:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-18688
	ctx.r11.s64 = ctx.r11.s64 + -18688;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8281abd8
	ctx.lr = 0x829D8284;
	sub_8281ABD8(ctx, base);
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d8298
	if (ctx.cr6.eq) goto loc_829D8298;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824345e8
	ctx.lr = 0x829D8298;
	sub_824345E8(ctx, base);
loc_829D8298:
	// stw r29,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r29.u32);
loc_829D829C:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d82b0
	if (ctx.cr6.eq) goto loc_829D82B0;
	// bl 0x82332db8
	ctx.lr = 0x829D82AC;
	sub_82332DB8(ctx, base);
	// stw r29,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r29.u32);
loc_829D82B0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13032);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d82dc
	if (ctx.cr6.eq) goto loc_829D82DC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// stw r10,13028(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13028, ctx.r10.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r29,1984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1984, ctx.r29.u32);
loc_829D82DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D82E8"))) PPC_WEAK_FUNC(sub_829D82E8);
PPC_FUNC_IMPL(__imp__sub_829D82E8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,51
	ctx.r11.s64 = ctx.r4.s64 + 51;
	// addi r10,r4,55
	ctx.r10.s64 = ctx.r4.s64 + 55;
	// addi r9,r4,33
	ctx.r9.s64 = ctx.r4.s64 + 33;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// stwx r11,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// subf r8,r11,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r10,232(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 256, ctx.r11.u32);
	// lwz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// stw r8,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r8.u32);
	// lwz r3,232(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// b 0x82766cd0
	sub_82766CD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D8368"))) PPC_WEAK_FUNC(sub_829D8368);
PPC_FUNC_IMPL(__imp__sub_829D8368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829D8370;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x829D8398;
	sub_82A4EA80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne cr6,0x829d83fc
	if (!ctx.cr6.eq) goto loc_829D83FC;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,55
	ctx.r11.s64 = ctx.r11.s64 + 55;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r11.u32);
	// stw r8,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r8.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_829D83FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D8408"))) PPC_WEAK_FUNC(sub_829D8408);
PPC_FUNC_IMPL(__imp__sub_829D8408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x829D8410;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r10,22089
	ctx.r10.s64 = 1447624704;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r28,r10,17491
	ctx.r28.u64 = ctx.r10.u64 | 17491;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x829d8524
	if (ctx.cr6.eq) goto loc_829D8524;
	// lis r10,22605
	ctx.r10.s64 = 1481441280;
	// ori r31,r10,16672
	ctx.r31.u64 = ctx.r10.u64 | 16672;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x829d8678
	if (!ctx.cr6.eq) goto loc_829D8678;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d849c
	if (!ctx.cr6.gt) goto loc_829D849C;
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_829D845C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d8488
	if (ctx.cr6.eq) goto loc_829D8488;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x829d8488
	if (!ctx.cr6.eq) goto loc_829D8488;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r7,20(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x829d8514
	if (ctx.cr6.eq) goto loc_829D8514;
loc_829D8488:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x829d845c
	if (ctx.cr6.lt) goto loc_829D845C;
loc_829D849C:
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82833108
	ctx.lr = 0x829D84A4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d84bc
	if (ctx.cr0.eq) goto loc_829D84BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,20(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// bl 0x829d9430
	ctx.lr = 0x829D84B8;
	sub_829D9430(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_829D84BC:
	// stw r30,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// lwz r10,228(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// stw r10,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r10.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D84E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// bl 0x82332d50
	ctx.lr = 0x829D84FC;
	sub_82332D50(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829d8678
	if (ctx.cr0.eq) goto loc_829D8678;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// b 0x829d8678
	goto loc_829D8678;
loc_829D8514:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// b 0x829d8678
	goto loc_829D8678;
loc_829D8524:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d857c
	if (!ctx.cr6.gt) goto loc_829D857C;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
loc_829D853C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d8568
	if (ctx.cr6.eq) goto loc_829D8568;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x829d8568
	if (!ctx.cr6.eq) goto loc_829D8568;
	// lwz r8,20(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x829d8678
	if (ctx.cr6.eq) goto loc_829D8678;
loc_829D8568:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x829d853c
	if (ctx.cr6.lt) goto loc_829D853C;
loc_829D857C:
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82833108
	ctx.lr = 0x829D8584;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r27,1
	ctx.r27.s64 = 1;
	// beq 0x829d8624
	if (ctx.cr0.eq) goto loc_829D8624;
	// lwz r25,20(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x829d9048
	ctx.lr = 0x829D85A4;
	sub_829D9048(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-11504
	ctx.r11.s64 = ctx.r11.s64 + -11504;
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r25,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r25.u32);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// stb r27,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r27.u8);
loc_829D8624:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// lwz r10,228(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// stw r10,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r10.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D8644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// bl 0x82332d50
	ctx.lr = 0x829D8660;
	sub_82332D50(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829d8674
	if (ctx.cr0.eq) goto loc_829D8674;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_829D8674:
	// stb r27,9(r29)
	PPC_STORE_U8(ctx.r29.u32 + 9, ctx.r27.u8);
loc_829D8678:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D8680"))) PPC_WEAK_FUNC(sub_829D8680);
PPC_FUNC_IMPL(__imp__sub_829D8680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829D8688;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r9,17217
	ctx.r9.s64 = 1128333312;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// ori r27,r9,20512
	ctx.r27.u64 = ctx.r9.u64 | 20512;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// ble cr6,0x829d8720
	if (!ctx.cr6.gt) goto loc_829D8720;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
loc_829D86FC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x829d884c
	if (ctx.cr6.eq) goto loc_829D884C;
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829d86fc
	if (ctx.cr6.lt) goto loc_829D86FC;
loc_829D8720:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-12748
	ctx.r4.s64 = ctx.r11.s64 + -12748;
	// bl 0x82414568
	ctx.lr = 0x829D8730;
	sub_82414568(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r29,244
	ctx.r3.s64 = ctx.r29.s64 + 244;
	// bl 0x8249d5a0
	ctx.lr = 0x829D8748;
	sub_8249D5A0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x829D8750;
	sub_82333960(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-8668
	ctx.r4.s64 = ctx.r11.s64 + -8668;
	// bl 0x824099b8
	ctx.lr = 0x829D8760;
	sub_824099B8(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d877c
	if (!ctx.cr6.eq) goto loc_829D877C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_829D877C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d8790
	if (!ctx.cr6.eq) goto loc_829D8790;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_829D8790:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r28,r11,-29792
	ctx.r28.s64 = ctx.r11.s64 + -29792;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x828db5e0
	ctx.lr = 0x829D87AC;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82400b48
	ctx.lr = 0x829D87B8;
	sub_82400B48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x829D87C0;
	sub_82333960(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d87d4
	if (!ctx.cr6.eq) goto loc_829D87D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_829D87D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x829D87DC;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829d884c
	if (ctx.cr0.eq) goto loc_829D884C;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x82833108
	ctx.lr = 0x829D87EC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d8808
	if (ctx.cr0.eq) goto loc_829D8808;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x829da088
	ctx.lr = 0x829D8800;
	sub_829DA088(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x829d880c
	goto loc_829D880C;
loc_829D8808:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_829D880C:
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// addi r3,r30,148
	ctx.r3.s64 = ctx.r30.s64 + 148;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// bl 0x82400b48
	ctx.lr = 0x829D8828;
	sub_82400B48(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82414568
	ctx.lr = 0x829D8834;
	sub_82414568(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r30,172
	ctx.r3.s64 = ctx.r30.s64 + 172;
	// bl 0x82400b48
	ctx.lr = 0x829D8840;
	sub_82400B48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x829D8848;
	sub_82333960(ctx, base);
	// stw r30,240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 240, ctx.r30.u32);
loc_829D884C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x829D8854;
	sub_82333960(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x829D885C;
	sub_82333960(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x829D8864;
	sub_82333960(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D8870"))) PPC_WEAK_FUNC(sub_829D8870);
PPC_FUNC_IMPL(__imp__sub_829D8870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829D8878;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d88dc
	if (!ctx.cr6.gt) goto loc_829D88DC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_829D8898:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d88c8
	if (ctx.cr6.eq) goto loc_829D88C8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d88c8
	if (ctx.cr6.eq) goto loc_829D88C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D88C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829D88C8:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829d8898
	if (ctx.cr6.lt) goto loc_829D8898;
loc_829D88DC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d8900
	if (ctx.cr6.eq) goto loc_829D8900;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x829D8900;
	sub_82332C38(ctx, base);
loc_829D8900:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d8958
	if (!ctx.cr6.gt) goto loc_829D8958;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_829D8914:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d8944
	if (ctx.cr6.eq) goto loc_829D8944;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d8944
	if (ctx.cr6.eq) goto loc_829D8944;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D8944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829D8944:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829d8914
	if (ctx.cr6.lt) goto loc_829D8914;
loc_829D8958:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d897c
	if (ctx.cr6.eq) goto loc_829D897C;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x829D897C;
	sub_82332C38(ctx, base);
loc_829D897C:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d899c
	if (ctx.cr6.eq) goto loc_829D899C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D899C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829D899C:
	// stw r28,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D89A8"))) PPC_WEAK_FUNC(sub_829D89A8);
PPC_FUNC_IMPL(__imp__sub_829D89A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x829D89B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r27,33
	ctx.r11.s64 = ctx.r27.s64 + 33;
	// addi r10,r27,51
	ctx.r10.s64 = ctx.r27.s64 + 51;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r26,32
	ctx.r26.s64 = 2097152;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lwzx r29,r11,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stwx r25,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r25.u32);
	// stw r25,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r25.u32);
loc_829D89E4:
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x829d8b6c
	if (ctx.cr6.gt) goto loc_829D8B6C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x829d8b6c
	if (ctx.cr6.gt) goto loc_829D8B6C;
	// lis r11,21332
	ctx.r11.s64 = 1398013952;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,20291
	ctx.r11.u64 = ctx.r11.u64 | 20291;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x829d8a38
	if (!ctx.cr6.eq) goto loc_829D8A38;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829d8a38
	if (!ctx.cr0.eq) goto loc_829D8A38;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d8408
	ctx.lr = 0x829D8A34;
	sub_829D8408(ctx, base);
	// b 0x829d8ad4
	goto loc_829D8AD4;
loc_829D8A38:
	// lis r11,21332
	ctx.r11.s64 = 1398013952;
	// ori r11,r11,16725
	ctx.r11.u64 = ctx.r11.u64 | 16725;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x829d8a5c
	if (!ctx.cr6.eq) goto loc_829D8A5C;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829d8a5c
	if (!ctx.cr0.eq) goto loc_829D8A5C;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// b 0x829d8ad0
	goto loc_829D8AD0;
loc_829D8A5C:
	// lis r11,21332
	ctx.r11.s64 = 1398013952;
	// ori r11,r11,17732
	ctx.r11.u64 = ctx.r11.u64 | 17732;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x829d8b60
	if (ctx.cr6.eq) goto loc_829D8B60;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// clrlwi. r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829d8ad4
	if (!ctx.cr0.eq) goto loc_829D8AD4;
	// rlwinm. r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829d8ad4
	if (!ctx.cr0.eq) goto loc_829D8AD4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d8ac8
	if (!ctx.cr6.gt) goto loc_829D8AC8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_829D8A94:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x829d8ab4
	if (!ctx.cr6.eq) goto loc_829D8AB4;
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x829d8aec
	if (ctx.cr6.eq) goto loc_829D8AEC;
loc_829D8AB4:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x829d8a94
	if (ctx.cr6.lt) goto loc_829D8A94;
loc_829D8AC8:
	// oris r11,r8,512
	ctx.r11.u64 = ctx.r8.u64 | 33554432;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_829D8AD0:
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_829D8AD4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x829d89e4
	if (!ctx.cr6.gt) goto loc_829D89E4;
	// b 0x829d8b78
	goto loc_829D8B78;
loc_829D8AEC:
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x829D8B00;
	sub_82332D50(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mulli r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 * 20;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a455d0
	ctx.lr = 0x829D8B18;
	sub_82A455D0(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// stwx r27,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// b 0x829d8ad4
	goto loc_829D8AD4;
loc_829D8B60:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x829d8b78
	goto loc_829D8B78;
loc_829D8B6C:
	// subf r11,r28,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r28.s64;
	// stw r29,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r29.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_829D8B78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D8B80"))) PPC_WEAK_FUNC(sub_829D8B80);
PPC_FUNC_IMPL(__imp__sub_829D8B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829D8B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,-8632
	ctx.r11.s64 = ctx.r11.s64 + -8632;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829d81e0
	ctx.lr = 0x829D8BA4;
	sub_829D81E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d8870
	ctx.lr = 0x829D8BAC;
	sub_829D8870(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d8bc4
	if (ctx.cr6.eq) goto loc_829D8BC4;
	// bl 0x82332db8
	ctx.lr = 0x829D8BC0;
	sub_82332DB8(ctx, base);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
loc_829D8BC4:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d8bd8
	if (ctx.cr6.eq) goto loc_829D8BD8;
	// bl 0x82332db8
	ctx.lr = 0x829D8BD4;
	sub_82332DB8(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
loc_829D8BD8:
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x82333960
	ctx.lr = 0x829D8BE0;
	sub_82333960(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x828585a0
	ctx.lr = 0x829D8BE8;
	sub_828585A0(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82333960
	ctx.lr = 0x829D8BF0;
	sub_82333960(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8239d768
	ctx.lr = 0x829D8BF8;
	sub_8239D768(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8239d768
	ctx.lr = 0x829D8C00;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x829D8C08;
	sub_82833238(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829d8c18
	if (ctx.cr0.eq) goto loc_829D8C18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x829D8C18;
	sub_82332DB8(ctx, base);
loc_829D8C18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D8C28"))) PPC_WEAK_FUNC(sub_829D8C28);
PPC_FUNC_IMPL(__imp__sub_829D8C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d8c88
	ctx.lr = 0x829D8C48;
	sub_829D8C88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829d8c58
	if (!ctx.cr6.eq) goto loc_829D8C58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x829d8c6c
	goto loc_829D8C6C;
loc_829D8C58:
	// bl 0x82333d20
	ctx.lr = 0x829D8C5C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829d8c6c
	if (ctx.cr6.eq) goto loc_829D8C6C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D8C6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D8C88"))) PPC_WEAK_FUNC(sub_829D8C88);
PPC_FUNC_IMPL(__imp__sub_829D8C88) {
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
	// addi r31,r11,20260
	ctx.r31.s64 = ctx.r11.s64 + 20260;
	// lwz r11,-27692(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27692);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d8cd0
	if (!ctx.cr0.eq) goto loc_829D8CD0;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-8560
	ctx.r9.s64 = ctx.r9.s64 + -8560;
	// stw r11,-27692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27692, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-9904
	ctx.r3.s64 = ctx.r11.s64 + -9904;
	// bl 0x82a4c758
	ctx.lr = 0x829D8CD0;
	sub_82A4C758(ctx, base);
loc_829D8CD0:
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

__attribute__((alias("__imp__sub_829D8CE8"))) PPC_WEAK_FUNC(sub_829D8CE8);
PPC_FUNC_IMPL(__imp__sub_829D8CE8) {
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
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82833108
	ctx.lr = 0x829D8CFC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d8d0c
	if (ctx.cr0.eq) goto loc_829D8D0C;
	// bl 0x829d77b8
	ctx.lr = 0x829D8D08;
	sub_829D77B8(ctx, base);
	// b 0x829d8d10
	goto loc_829D8D10;
loc_829D8D0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D8D10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D8D20"))) PPC_WEAK_FUNC(sub_829D8D20);
PPC_FUNC_IMPL(__imp__sub_829D8D20) {
	PPC_FUNC_PROLOGUE();
	// li r3,272
	ctx.r3.s64 = 272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D8D28"))) PPC_WEAK_FUNC(sub_829D8D28);
PPC_FUNC_IMPL(__imp__sub_829D8D28) {
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
	// lwz r11,-27696(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27696);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d8d68
	if (!ctx.cr0.eq) goto loc_829D8D68;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27696, ctx.r11.u32);
	// addi r3,r9,-8648
	ctx.r3.s64 = ctx.r9.s64 + -8648;
	// bl 0x82816528
	ctx.lr = 0x829D8D60;
	sub_82816528(ctx, base);
	// stw r3,-27700(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27700, ctx.r3.u32);
	// b 0x829d8d6c
	goto loc_829D8D6C;
loc_829D8D68:
	// lwz r3,-27700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27700);
loc_829D8D6C:
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

__attribute__((alias("__imp__sub_829D8D80"))) PPC_WEAK_FUNC(sub_829D8D80);
PPC_FUNC_IMPL(__imp__sub_829D8D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d8c88
	ctx.lr = 0x829D8DA0;
	sub_829D8C88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D8DB4;
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

__attribute__((alias("__imp__sub_829D8DD0"))) PPC_WEAK_FUNC(sub_829D8DD0);
PPC_FUNC_IMPL(__imp__sub_829D8DD0) {
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
	// beq cr6,0x829d8e10
	if (ctx.cr6.eq) goto loc_829D8E10;
	// bl 0x829d8c88
	ctx.lr = 0x829D8DF0;
	sub_829D8C88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829d8e00
	if (!ctx.cr6.eq) goto loc_829D8E00;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829d8e14
	goto loc_829D8E14;
loc_829D8E00:
	// bl 0x82333d20
	ctx.lr = 0x829D8E04;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x829d8e14
	if (ctx.cr6.eq) goto loc_829D8E14;
loc_829D8E10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D8E14:
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

__attribute__((alias("__imp__sub_829D8E28"))) PPC_WEAK_FUNC(sub_829D8E28);
PPC_FUNC_IMPL(__imp__sub_829D8E28) {
	PPC_FUNC_PROLOGUE();
	// b 0x829d8c88
	sub_829D8C88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D8E30"))) PPC_WEAK_FUNC(sub_829D8E30);
PPC_FUNC_IMPL(__imp__sub_829D8E30) {
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
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82833108
	ctx.lr = 0x829D8E4C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d8e60
	if (ctx.cr0.eq) goto loc_829D8E60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829d8e78
	ctx.lr = 0x829D8E5C;
	sub_829D8E78(ctx, base);
	// b 0x829d8e64
	goto loc_829D8E64;
loc_829D8E60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D8E64:
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

__attribute__((alias("__imp__sub_829D8E78"))) PPC_WEAK_FUNC(sub_829D8E78);
PPC_FUNC_IMPL(__imp__sub_829D8E78) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,-8632
	ctx.r10.s64 = ctx.r10.s64 + -8632;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// bl 0x82873b58
	ctx.lr = 0x829D8ED0;
	sub_82873B58(ctx, base);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82873b58
	ctx.lr = 0x829D8EDC;
	sub_82873B58(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x829D8F48;
	sub_823339B8(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lfs f0,148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
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
	// lfs f0,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lfs f0,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// bl 0x828584c0
	ctx.lr = 0x829D8FB4;
	sub_828584C0(ctx, base);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// addi r4,r30,244
	ctx.r4.s64 = ctx.r30.s64 + 244;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lwz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x829D9010;
	sub_823339B8(ctx, base);
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D9038"))) PPC_WEAK_FUNC(sub_829D9038);
PPC_FUNC_IMPL(__imp__sub_829D9038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-8648
	ctx.r3.s64 = ctx.r11.s64 + -8648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D9048"))) PPC_WEAK_FUNC(sub_829D9048);
PPC_FUNC_IMPL(__imp__sub_829D9048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829D9050;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82833180
	ctx.lr = 0x829D9064;
	sub_82833180(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-11616
	ctx.r9.s64 = ctx.r9.s64 + -11616;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D90C0"))) PPC_WEAK_FUNC(sub_829D90C0);
PPC_FUNC_IMPL(__imp__sub_829D90C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D90D0"))) PPC_WEAK_FUNC(sub_829D90D0);
PPC_FUNC_IMPL(__imp__sub_829D90D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D90E0"))) PPC_WEAK_FUNC(sub_829D90E0);
PPC_FUNC_IMPL(__imp__sub_829D90E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d90fc
	if (ctx.cr6.eq) goto loc_829D90FC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_829D90FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D9108"))) PPC_WEAK_FUNC(sub_829D9108);
PPC_FUNC_IMPL(__imp__sub_829D9108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-8540
	ctx.r3.s64 = ctx.r11.s64 + -8540;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D9118"))) PPC_WEAK_FUNC(sub_829D9118);
PPC_FUNC_IMPL(__imp__sub_829D9118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829d9150
	if (ctx.cr6.eq) goto loc_829D9150;
	// bl 0x829d9d18
	ctx.lr = 0x829D9140;
	sub_829D9D18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829d9150
	if (!ctx.cr6.eq) goto loc_829D9150;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829d915c
	goto loc_829D915C;
loc_829D9150:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829cbd68
	ctx.lr = 0x829D915C;
	sub_829CBD68(ctx, base);
loc_829D915C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D9178"))) PPC_WEAK_FUNC(sub_829D9178);
PPC_FUNC_IMPL(__imp__sub_829D9178) {
	PPC_FUNC_PROLOGUE();
	// b 0x829d9d18
	sub_829D9D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D9180"))) PPC_WEAK_FUNC(sub_829D9180);
PPC_FUNC_IMPL(__imp__sub_829D9180) {
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
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82833108
	ctx.lr = 0x829D919C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d91b0
	if (ctx.cr0.eq) goto loc_829D91B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829d9218
	ctx.lr = 0x829D91AC;
	sub_829D9218(ctx, base);
	// b 0x829d91b4
	goto loc_829D91B4;
loc_829D91B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D91B4:
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

__attribute__((alias("__imp__sub_829D91C8"))) PPC_WEAK_FUNC(sub_829D91C8);
PPC_FUNC_IMPL(__imp__sub_829D91C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d9d18
	ctx.lr = 0x829D91E8;
	sub_829D9D18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829d91fc
	if (ctx.cr6.eq) goto loc_829D91FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829cbe10
	ctx.lr = 0x829D91FC;
	sub_829CBE10(ctx, base);
loc_829D91FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D9218"))) PPC_WEAK_FUNC(sub_829D9218);
PPC_FUNC_IMPL(__imp__sub_829D9218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829D9220;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829cbe70
	ctx.lr = 0x829D9230;
	sub_829CBE70(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-8528
	ctx.r11.s64 = ctx.r11.s64 + -8528;
	// addi r31,r28,84
	ctx.r31.s64 = ctx.r28.s64 + 84;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r27,r30,84
	ctx.r27.s64 = ctx.r30.s64 + 84;
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r10,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r10.u32);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r10,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r10.u32);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r10,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r10.u32);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r10,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r10.u32);
	// stw r11,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r11.u32);
	// stw r29,92(r28)
	PPC_STORE_U32(ctx.r28.u32 + 92, ctx.r29.u32);
	// stw r29,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r29.u32);
	// stw r29,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r29.u32);
	// stw r29,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r29.u32);
	// stw r29,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r29.u32);
	// beq cr6,0x829d9320
	if (ctx.cr6.eq) goto loc_829D9320;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d9320
	if (!ctx.cr6.gt) goto loc_829D9320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829d92b8
	if (ctx.cr0.eq) goto loc_829D92B8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x829D92B8;
	sub_82332C38(ctx, base);
loc_829D92B8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d9320
	if (!ctx.cr6.gt) goto loc_829D9320;
loc_829D92C8:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x829D92DC;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829d930c
	if (ctx.cr0.eq) goto loc_829D930C;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
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
loc_829D930C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829d92c8
	if (ctx.cr6.lt) goto loc_829D92C8;
loc_829D9320:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D9330"))) PPC_WEAK_FUNC(sub_829D9330);
PPC_FUNC_IMPL(__imp__sub_829D9330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829D9338;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-8528
	ctx.r11.s64 = ctx.r11.s64 + -8528;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x829d93a4
	if (!ctx.cr6.gt) goto loc_829D93A4;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_829D9368:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D9390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829d9368
	if (ctx.cr6.lt) goto loc_829D9368;
loc_829D93A4:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r30,r31,84
	ctx.r30.s64 = ctx.r31.s64 + 84;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d93cc
	if (ctx.cr6.eq) goto loc_829D93CC;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x829D93CC;
	sub_82332C38(ctx, base);
loc_829D93CC:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x829D93E4;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d93f4
	if (ctx.cr6.eq) goto loc_829D93F4;
	// bl 0x82332db8
	ctx.lr = 0x829D93F4;
	sub_82332DB8(ctx, base);
loc_829D93F4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-11616
	ctx.r11.s64 = ctx.r11.s64 + -11616;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82833238
	ctx.lr = 0x829D9414;
	sub_82833238(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829d9424
	if (ctx.cr0.eq) goto loc_829D9424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x829D9424;
	sub_82332DB8(ctx, base);
loc_829D9424:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D9430"))) PPC_WEAK_FUNC(sub_829D9430);
PPC_FUNC_IMPL(__imp__sub_829D9430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829D9438;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,22605
	ctx.r4.s64 = 1481441280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,16672
	ctx.r4.u64 = ctx.r4.u64 | 16672;
	// bl 0x829d9048
	ctx.lr = 0x829D944C;
	sub_829D9048(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r10,r10,-8528
	ctx.r10.s64 = ctx.r10.s64 + -8528;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-14712
	ctx.r11.s64 = ctx.r11.s64 + -14712;
	// li r10,12
	ctx.r10.s64 = 12;
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x829d94bc
	if (ctx.cr6.eq) goto loc_829D94BC;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x829d94c4
	goto loc_829D94C4;
loc_829D94BC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_829D94C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824099b8
	ctx.lr = 0x829D94CC;
	sub_824099B8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lwz r29,900(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 900);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x829d952c
	if (ctx.cr6.eq) goto loc_829D952C;
	// bl 0x82772e48
	ctx.lr = 0x829D9508;
	sub_82772E48(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D9520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829d952c
	if (ctx.cr0.eq) goto loc_829D952C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_829D952C:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x829D9538;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D9548"))) PPC_WEAK_FUNC(sub_829D9548);
PPC_FUNC_IMPL(__imp__sub_829D9548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829D9550;
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D9588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x829d95c4
	if (!ctx.cr6.gt) goto loc_829D95C4;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
loc_829D95A4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x829d9630
	if (ctx.cr6.eq) goto loc_829D9630;
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x829d95a4
	if (ctx.cr6.lt) goto loc_829D95A4;
loc_829D95C4:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d9620
	if (!ctx.cr6.gt) goto loc_829D9620;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_829D95D4:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D95F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829d960c
	if (ctx.cr0.eq) goto loc_829D960C;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x829d966c
	if (ctx.cr6.gt) goto loc_829D966C;
loc_829D960C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829d95d4
	if (ctx.cr6.lt) goto loc_829D95D4;
loc_829D9620:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D9624:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_829D9630:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r8,288(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829D9658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829d95c4
	if (ctx.cr0.eq) goto loc_829D95C4;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x829d95c4
	if (!ctx.cr6.gt) goto loc_829D95C4;
loc_829D966C:
	// stfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829d9624
	goto loc_829D9624;
}

__attribute__((alias("__imp__sub_829D9678"))) PPC_WEAK_FUNC(sub_829D9678);
PPC_FUNC_IMPL(__imp__sub_829D9678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829D9680;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d9788
	if (ctx.cr6.eq) goto loc_829D9788;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x829d96d8
	if (ctx.cr6.eq) goto loc_829D96D8;
	// lis r10,109
	ctx.r10.s64 = 7143424;
	// ori r10,r10,26466
	ctx.r10.u64 = ctx.r10.u64 | 26466;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x829d96d8
	if (ctx.cr6.eq) goto loc_829D96D8;
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// ori r10,r10,26213
	ctx.r10.u64 = ctx.r10.u64 | 26213;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x829d96d8
	if (ctx.cr6.eq) goto loc_829D96D8;
	// lis r10,109
	ctx.r10.s64 = 7143424;
	// ori r10,r10,29811
	ctx.r10.u64 = ctx.r10.u64 | 29811;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x829d9788
	if (!ctx.cr6.eq) goto loc_829D9788;
loc_829D96D8:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x829D96EC;
	sub_82332D50(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mulli r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 * 12;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a455d0
	ctx.lr = 0x829D9704;
	sub_82A455D0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r11,256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D9750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x829d977c
	if (!ctx.cr6.eq) goto loc_829D977C;
	// lwz r11,268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// b 0x829d9780
	goto loc_829D9780;
loc_829D977C:
	// lwz r11,272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
loc_829D9780:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D9788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829D9788:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D97A0"))) PPC_WEAK_FUNC(sub_829D97A0);
PPC_FUNC_IMPL(__imp__sub_829D97A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r6,100(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r7,24(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_829D97CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x829d9824
	if (!ctx.cr6.eq) goto loc_829D9824;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x829d9824
	if (!ctx.cr6.eq) goto loc_829D9824;
	// lwz r4,68(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x829d9838
	if (ctx.cr6.eq) goto loc_829D9838;
	// lis r4,109
	ctx.r4.s64 = 7143424;
	// ori r4,r4,26466
	ctx.r4.u64 = ctx.r4.u64 | 26466;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x829d9838
	if (ctx.cr6.eq) goto loc_829D9838;
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// ori r4,r4,26213
	ctx.r4.u64 = ctx.r4.u64 | 26213;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x829d9838
	if (ctx.cr6.eq) goto loc_829D9838;
	// lis r4,109
	ctx.r4.s64 = 7143424;
	// ori r4,r4,29811
	ctx.r4.u64 = ctx.r4.u64 | 29811;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x829d9838
	if (ctx.cr6.eq) goto loc_829D9838;
loc_829D9824:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x829d97cc
	if (ctx.cr6.lt) goto loc_829D97CC;
	// blr 
	return;
loc_829D9838:
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mulli r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 * 12;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,276(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_829D9858"))) PPC_WEAK_FUNC(sub_829D9858);
PPC_FUNC_IMPL(__imp__sub_829D9858) {
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
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d9890
	if (ctx.cr6.eq) goto loc_829D9890;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d9890
	if (!ctx.cr6.eq) goto loc_829D9890;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x829d9ad4
	goto loc_829D9AD4;
loc_829D9890:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f13,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x829d9a8c
	if (ctx.cr6.gt) goto loc_829D9A8C;
loc_829D98AC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x829d9a8c
	if (!ctx.cr6.eq) goto loc_829D9A8C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r8,196(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x829d98f8
	if (!ctx.cr6.gt) goto loc_829D98F8;
	// lwz r9,192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_829D98DC:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x829d9950
	if (ctx.cr6.eq) goto loc_829D9950;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x829d98dc
	if (ctx.cr6.lt) goto loc_829D98DC;
loc_829D98F8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829D98FC:
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x829d9a8c
	if (ctx.cr6.eq) goto loc_829D9A8C;
	// lwa r11,8(r4)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 8));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829d99ec
	if (ctx.cr6.eq) goto loc_829D99EC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829d9944
	if (ctx.cr6.eq) goto loc_829D9944;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x829d9960
	if (ctx.cr6.eq) goto loc_829D9960;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x829d99f4
	if (!ctx.cr6.eq) goto loc_829D99F4;
loc_829D9944:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d97a0
	ctx.lr = 0x829D994C;
	sub_829D97A0(ctx, base);
	// b 0x829d99f4
	goto loc_829D99F4;
loc_829D9950:
	// mulli r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x829d98fc
	goto loc_829D98FC;
loc_829D9960:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d99c4
	if (ctx.cr6.eq) goto loc_829D99C4;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d99c4
	if (!ctx.cr6.gt) goto loc_829D99C4;
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
loc_829D9984:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x829d99a0
	if (!ctx.cr6.eq) goto loc_829D99A0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x829d99b8
	if (ctx.cr6.eq) goto loc_829D99B8;
loc_829D99A0:
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x829d9984
	if (ctx.cr6.lt) goto loc_829D9984;
	// b 0x829d99c4
	goto loc_829D99C4;
loc_829D99B8:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_829D99C4:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d99f4
	if (!ctx.cr6.eq) goto loc_829D99F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D99E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x829d99f4
	goto loc_829D99F4;
loc_829D99EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d9678
	ctx.lr = 0x829D99F4;
	sub_829D9678(ctx, base);
loc_829D99F4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x829d9a68
	if (!ctx.cr6.eq) goto loc_829D9A68;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x829d9a68
	if (ctx.cr6.eq) goto loc_829D9A68;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,196(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x829d9a68
	if (!ctx.cr6.gt) goto loc_829D9A68;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_829D9A28:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x829d9a48
	if (ctx.cr6.eq) goto loc_829D9A48;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829d9a28
	if (ctx.cr6.lt) goto loc_829D9A28;
	// b 0x829d9a68
	goto loc_829D9A68;
loc_829D9A48:
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,20
	ctx.r6.s64 = 20;
	// rlwimi r10,r30,25,6,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 25) & 0x3000000) | (ctx.r10.u64 & 0xFFFFFFFFFCFFFFFF);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// addi r3,r11,180
	ctx.r3.s64 = ctx.r11.s64 + 180;
	// bl 0x82332ca8
	ctx.lr = 0x829D9A68;
	sub_82332CA8(ctx, base);
loc_829D9A68:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lwa r11,8(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 8));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x829d98ac
	if (!ctx.cr6.gt) goto loc_829D98AC;
loc_829D9A8C:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829d9ad0
	if (!ctx.cr6.eq) goto loc_829D9AD0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d9ad0
	if (ctx.cr6.eq) goto loc_829D9AD0;
	// lwa r11,24(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 24));
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x829d9ad0
	if (ctx.cr6.gt) goto loc_829D9AD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// b 0x829d9ad4
	goto loc_829D9AD4;
loc_829D9AD0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_829D9AD4:
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

__attribute__((alias("__imp__sub_829D9AF0"))) PPC_WEAK_FUNC(sub_829D9AF0);
PPC_FUNC_IMPL(__imp__sub_829D9AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829D9AF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d9b4c
	if (!ctx.cr6.gt) goto loc_829D9B4C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_829D9B18:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D9B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829d9b18
	if (ctx.cr6.lt) goto loc_829D9B18;
loc_829D9B4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D9B58"))) PPC_WEAK_FUNC(sub_829D9B58);
PPC_FUNC_IMPL(__imp__sub_829D9B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829D9B60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829d9bb8
	if (!ctx.cr6.gt) goto loc_829D9BB8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_829D9B84:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D9BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829d9b84
	if (ctx.cr6.lt) goto loc_829D9B84;
loc_829D9BB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D9BC0"))) PPC_WEAK_FUNC(sub_829D9BC0);
PPC_FUNC_IMPL(__imp__sub_829D9BC0) {
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
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82833108
	ctx.lr = 0x829D9BD8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829d9c58
	if (ctx.cr0.eq) goto loc_829D9C58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x829D9BE8;
	sub_82833180(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-8528
	ctx.r9.s64 = ctx.r9.s64 + -8528;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x829d9c5c
	goto loc_829D9C5C;
loc_829D9C58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D9C5C:
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

__attribute__((alias("__imp__sub_829D9C70"))) PPC_WEAK_FUNC(sub_829D9C70);
PPC_FUNC_IMPL(__imp__sub_829D9C70) {
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
	// lwz r11,-27704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27704);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d9cb0
	if (!ctx.cr0.eq) goto loc_829D9CB0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27704, ctx.r11.u32);
	// addi r3,r9,-8540
	ctx.r3.s64 = ctx.r9.s64 + -8540;
	// bl 0x82816528
	ctx.lr = 0x829D9CA8;
	sub_82816528(ctx, base);
	// stw r3,-27708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27708, ctx.r3.u32);
	// b 0x829d9cb4
	goto loc_829D9CB4;
loc_829D9CB0:
	// lwz r3,-27708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27708);
loc_829D9CB4:
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

__attribute__((alias("__imp__sub_829D9CC8"))) PPC_WEAK_FUNC(sub_829D9CC8);
PPC_FUNC_IMPL(__imp__sub_829D9CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829d9d18
	ctx.lr = 0x829D9CE8;
	sub_829D9D18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D9CFC;
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

__attribute__((alias("__imp__sub_829D9D18"))) PPC_WEAK_FUNC(sub_829D9D18);
PPC_FUNC_IMPL(__imp__sub_829D9D18) {
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
	// addi r31,r11,20252
	ctx.r31.s64 = ctx.r11.s64 + 20252;
	// lwz r11,20256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20256);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829d9d60
	if (!ctx.cr0.eq) goto loc_829D9D60;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-8440
	ctx.r9.s64 = ctx.r9.s64 + -8440;
	// stw r11,20256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20256, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-9880
	ctx.r3.s64 = ctx.r11.s64 + -9880;
	// bl 0x82a4c758
	ctx.lr = 0x829D9D60;
	sub_82A4C758(ctx, base);
loc_829D9D60:
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

__attribute__((alias("__imp__sub_829D9D78"))) PPC_WEAK_FUNC(sub_829D9D78);
PPC_FUNC_IMPL(__imp__sub_829D9D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-8420
	ctx.r3.s64 = ctx.r11.s64 + -8420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D9D88"))) PPC_WEAK_FUNC(sub_829D9D88);
PPC_FUNC_IMPL(__imp__sub_829D9D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829d9dc0
	if (ctx.cr6.eq) goto loc_829D9DC0;
	// bl 0x829daac8
	ctx.lr = 0x829D9DB0;
	sub_829DAAC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829d9dc0
	if (!ctx.cr6.eq) goto loc_829D9DC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829d9dcc
	goto loc_829D9DCC;
loc_829D9DC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829cbd68
	ctx.lr = 0x829D9DCC;
	sub_829CBD68(ctx, base);
loc_829D9DCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D9DE8"))) PPC_WEAK_FUNC(sub_829D9DE8);
PPC_FUNC_IMPL(__imp__sub_829D9DE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829daac8
	sub_829DAAC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D9DF0"))) PPC_WEAK_FUNC(sub_829D9DF0);
PPC_FUNC_IMPL(__imp__sub_829D9DF0) {
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
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x82833108
	ctx.lr = 0x829D9E0C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829d9e20
	if (ctx.cr0.eq) goto loc_829D9E20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829d9e88
	ctx.lr = 0x829D9E1C;
	sub_829D9E88(ctx, base);
	// b 0x829d9e24
	goto loc_829D9E24;
loc_829D9E20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829D9E24:
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

__attribute__((alias("__imp__sub_829D9E38"))) PPC_WEAK_FUNC(sub_829D9E38);
PPC_FUNC_IMPL(__imp__sub_829D9E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829daac8
	ctx.lr = 0x829D9E58;
	sub_829DAAC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829d9e6c
	if (ctx.cr6.eq) goto loc_829D9E6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829cbe10
	ctx.lr = 0x829D9E6C;
	sub_829CBE10(ctx, base);
loc_829D9E6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829D9E88"))) PPC_WEAK_FUNC(sub_829D9E88);
PPC_FUNC_IMPL(__imp__sub_829D9E88) {
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
	// bl 0x829cbe70
	ctx.lr = 0x829D9EA8;
	sub_829CBE70(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// addi r9,r10,-8184
	ctx.r9.s64 = ctx.r10.s64 + -8184;
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// bl 0x823339b8
	ctx.lr = 0x829D9ED8;
	sub_823339B8(ctx, base);
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// addi r10,r30,108
	ctx.r10.s64 = ctx.r30.s64 + 108;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lfs f0,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f0,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// bl 0x823339b8
	ctx.lr = 0x829D9F0C;
	sub_823339B8(ctx, base);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// addi r4,r30,148
	ctx.r4.s64 = ctx.r30.s64 + 148;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x829D9F28;
	sub_823339B8(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// addi r4,r30,172
	ctx.r4.s64 = ctx.r30.s64 + 172;
	// bl 0x823339b8
	ctx.lr = 0x829D9F34;
	sub_823339B8(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// addi r4,r30,196
	ctx.r4.s64 = ctx.r30.s64 + 196;
	// bl 0x823339b8
	ctx.lr = 0x829D9F40;
	sub_823339B8(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// addi r4,r30,232
	ctx.r4.s64 = ctx.r30.s64 + 232;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x829D9F64;
	sub_823339B8(ctx, base);
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// addi r4,r30,260
	ctx.r4.s64 = ctx.r30.s64 + 260;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x829D9F78;
	sub_823339B8(ctx, base);
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

__attribute__((alias("__imp__sub_829D9F98"))) PPC_WEAK_FUNC(sub_829D9F98);
PPC_FUNC_IMPL(__imp__sub_829D9F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829D9FA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r10,-8184
	ctx.r10.s64 = ctx.r10.s64 + -8184;
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82414568
	ctx.lr = 0x829D9FCC;
	sub_82414568(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da018
	if (ctx.cr6.eq) goto loc_829DA018;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x829D9FE4;
	sub_82414568(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r30,1388(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	// addi r3,r30,396
	ctx.r3.s64 = ctx.r30.s64 + 396;
	// bl 0x82400b48
	ctx.lr = 0x829D9FFC;
	sub_82400B48(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 420, ctx.r10.u32);
	// lwz r11,-13004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13004);
	// stw r11,424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 424, ctx.r11.u32);
	// bl 0x82333960
	ctx.lr = 0x829DA018;
	sub_82333960(ctx, base);
loc_829DA018:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x829DA020;
	sub_82333960(ctx, base);
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// bl 0x82333960
	ctx.lr = 0x829DA028;
	sub_82333960(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82333960
	ctx.lr = 0x829DA030;
	sub_82333960(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x82333960
	ctx.lr = 0x829DA038;
	sub_82333960(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x82333960
	ctx.lr = 0x829DA040;
	sub_82333960(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x82333960
	ctx.lr = 0x829DA048;
	sub_82333960(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x82333960
	ctx.lr = 0x829DA050;
	sub_82333960(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82333960
	ctx.lr = 0x829DA058;
	sub_82333960(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-11616
	ctx.r11.s64 = ctx.r11.s64 + -11616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82833238
	ctx.lr = 0x829DA06C;
	sub_82833238(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829da07c
	if (ctx.cr0.eq) goto loc_829DA07C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x829DA07C;
	sub_82332DB8(ctx, base);
loc_829DA07C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829DA088"))) PPC_WEAK_FUNC(sub_829DA088);
PPC_FUNC_IMPL(__imp__sub_829DA088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829DA090;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,17217
	ctx.r4.s64 = 1128333312;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,20512
	ctx.r4.u64 = ctx.r4.u64 | 20512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829d9048
	ctx.lr = 0x829DA0A8;
	sub_829D9048(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-8184
	ctx.r11.s64 = ctx.r11.s64 + -8184;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r10,r31,108
	ctx.r10.s64 = ctx.r31.s64 + 108;
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// addi r29,r31,232
	ctx.r29.s64 = ctx.r31.s64 + 232;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// addi r26,r11,7896
	ctx.r26.s64 = ctx.r11.s64 + 7896;
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// bl 0x824099b8
	ctx.lr = 0x829DA1B8;
	sub_824099B8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r11,-8408
	ctx.r4.s64 = ctx.r11.s64 + -8408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828168a0
	ctx.lr = 0x829DA1CC;
	sub_828168A0(ctx, base);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r11,r11,-29248
	ctx.r11.s64 = ctx.r11.s64 + -29248;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x829da1e8
	if (ctx.cr6.eq) goto loc_829DA1E8;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x829da1ec
	goto loc_829DA1EC;
loc_829DA1E8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_829DA1EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a4cdb8
	ctx.lr = 0x829DA1F4;
	sub_82A4CDB8(ctx, base);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r28,r11,25640
	ctx.r28.s64 = ctx.r11.s64 + 25640;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826b2ba8
	ctx.lr = 0x829DA220;
	sub_826B2BA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829da24c
	if (!ctx.cr0.eq) goto loc_829DA24C;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r10,-8352
	ctx.r4.s64 = ctx.r10.s64 + -8352;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826b2ba8
	ctx.lr = 0x829DA24C;
	sub_826B2BA8(ctx, base);
loc_829DA24C:
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da264
	if (ctx.cr6.eq) goto loc_829DA264;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x829da268
	goto loc_829DA268;
loc_829DA264:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_829DA268:
	// bl 0x828165a8
	ctx.lr = 0x829DA26C;
	sub_828165A8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82975348
	ctx.lr = 0x829DA278;
	sub_82975348(ctx, base);
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829DA288"))) PPC_WEAK_FUNC(sub_829DA288);
PPC_FUNC_IMPL(__imp__sub_829DA288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x829DA290;
	__savegprlr_23(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// addi r26,r11,7896
	ctx.r26.s64 = ctx.r11.s64 + 7896;
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// bne cr6,0x829da38c
	if (!ctx.cr6.eq) goto loc_829DA38C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-8288
	ctx.r4.s64 = ctx.r11.s64 + -8288;
	// bl 0x82414568
	ctx.lr = 0x829DA2E4;
	sub_82414568(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da2f8
	if (ctx.cr6.eq) goto loc_829DA2F8;
	// lwz r6,184(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// b 0x829da2fc
	goto loc_829DA2FC;
loc_829DA2F8:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_829DA2FC:
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829da310
	if (!ctx.cr6.eq) goto loc_829DA310;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_829DA310:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da324
	if (ctx.cr6.eq) goto loc_829DA324;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// b 0x829da328
	goto loc_829DA328;
loc_829DA324:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_829DA328:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x828db5e0
	ctx.lr = 0x829DA338;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400b48
	ctx.lr = 0x829DA344;
	sub_82400B48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x829DA34C;
	sub_82333960(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829da360
	if (!ctx.cr6.eq) goto loc_829DA360;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_829DA360:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r11,-8264
	ctx.r4.s64 = ctx.r11.s64 + -8264;
	// bl 0x82a4cc80
	ctx.lr = 0x829DA36C;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829da384
	if (!ctx.cr0.eq) goto loc_829DA384;
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// stw r27,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r27.u32);
	// lwz r11,1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	// stw r27,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r27.u32);
loc_829DA384:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x829DA38C;
	sub_82333960(ctx, base);
loc_829DA38C:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da3c0
	if (ctx.cr6.eq) goto loc_829DA3C0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r5,220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-8252
	ctx.r4.s64 = ctx.r11.s64 + -8252;
	// bl 0x82816c30
	ctx.lr = 0x829DA3AC;
	sub_82816C30(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// bl 0x82400b48
	ctx.lr = 0x829DA3B8;
	sub_82400B48(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x829DA3C0;
	sub_82333960(ctx, base);
loc_829DA3C0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r5,220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-8228
	ctx.r4.s64 = ctx.r11.s64 + -8228;
	// bl 0x82816c30
	ctx.lr = 0x829DA3D4;
	sub_82816C30(ctx, base);
	// addi r30,r31,196
	ctx.r30.s64 = ctx.r31.s64 + 196;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x829DA3E4;
	sub_82400B48(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x829DA3EC;
	sub_82333960(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da40c
	if (ctx.cr6.eq) goto loc_829DA40C;
	// lwz r6,184(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// b 0x829da410
	goto loc_829DA410;
loc_829DA40C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_829DA410:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da424
	if (ctx.cr6.eq) goto loc_829DA424;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x829da428
	goto loc_829DA428;
loc_829DA424:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_829DA428:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da43c
	if (ctx.cr6.eq) goto loc_829DA43C;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// b 0x829da440
	goto loc_829DA440;
loc_829DA43C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_829DA440:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x828db5e0
	ctx.lr = 0x829DA450;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400b48
	ctx.lr = 0x829DA45C;
	sub_82400B48(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x829DA464;
	sub_82333960(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829da478
	if (!ctx.cr6.eq) goto loc_829DA478;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_829DA478:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x829DA480;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829da804
	if (ctx.cr0.eq) goto loc_829DA804;
	// li r24,24
	ctx.r24.s64 = 24;
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r28.u32);
	// addi r25,r11,252
	ctx.r25.s64 = ctx.r11.s64 + 252;
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816e00
	ctx.lr = 0x829DA4C0;
	sub_82816E00(ctx, base);
	// lwz r30,208(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x829da7fc
	if (!ctx.cr6.gt) goto loc_829DA7FC;
	// lwz r29,204(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da4e4
	if (ctx.cr6.eq) goto loc_829DA4E4;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x829da4e8
	goto loc_829DA4E8;
loc_829DA4E4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_829DA4E8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r11,-8208
	ctx.r4.s64 = ctx.r11.s64 + -8208;
	// bl 0x82a4cc80
	ctx.lr = 0x829DA4F4;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829da700
	if (!ctx.cr0.eq) goto loc_829DA700;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x829da700
	if (!ctx.cr6.eq) goto loc_829DA700;
	// stw r27,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r27.u32);
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// lfs f0,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// bl 0x82400b48
	ctx.lr = 0x829DA52C;
	sub_82400B48(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da550
	if (ctx.cr6.eq) goto loc_829DA550;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// b 0x829da554
	goto loc_829DA554;
loc_829DA550:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_829DA554:
	// bl 0x82a4cad0
	ctx.lr = 0x829DA558;
	sub_82A4CAD0(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da584
	if (ctx.cr6.eq) goto loc_829DA584;
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// b 0x829da588
	goto loc_829DA588;
loc_829DA584:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_829DA588:
	// bl 0x82a4cad0
	ctx.lr = 0x829DA58C;
	sub_82A4CAD0(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// addi r27,r31,116
	ctx.r27.s64 = ctx.r31.s64 + 116;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// addi r4,r29,72
	ctx.r4.s64 = ctx.r29.s64 + 72;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// bl 0x82400b48
	ctx.lr = 0x829DA5B4;
	sub_82400B48(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da6d4
	if (ctx.cr6.eq) goto loc_829DA6D4;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da5d4
	if (ctx.cr6.eq) goto loc_829DA5D4;
	// lwz r6,184(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// b 0x829da5d8
	goto loc_829DA5D8;
loc_829DA5D4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_829DA5D8:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da5ec
	if (ctx.cr6.eq) goto loc_829DA5EC;
	// lwz r5,272(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// b 0x829da5f0
	goto loc_829DA5F0;
loc_829DA5EC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_829DA5F0:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da604
	if (ctx.cr6.eq) goto loc_829DA604;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// b 0x829da608
	goto loc_829DA608;
loc_829DA604:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_829DA608:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x828db5e0
	ctx.lr = 0x829DA618;
	sub_828DB5E0(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829da62c
	if (!ctx.cr6.eq) goto loc_829DA62C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_829DA62C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x829DA634;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829da6cc
	if (ctx.cr0.eq) goto loc_829DA6CC;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// bl 0x82816e00
	ctx.lr = 0x829DA668;
	sub_82816E00(ctx, base);
	// lwz r30,172(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da680
	if (ctx.cr6.eq) goto loc_829DA680;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x829da684
	goto loc_829DA684;
loc_829DA680:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_829DA684:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,2220
	ctx.r4.s64 = ctx.r11.s64 + 2220;
	// bl 0x82a4cc80
	ctx.lr = 0x829DA690;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829da6c4
	if (!ctx.cr0.eq) goto loc_829DA6C4;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x829da6c4
	if (!ctx.cr6.eq) goto loc_829DA6C4;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da6b8
	if (ctx.cr6.eq) goto loc_829DA6B8;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// b 0x829da6bc
	goto loc_829DA6BC;
loc_829DA6B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_829DA6BC:
	// bl 0x82a4cad0
	ctx.lr = 0x829DA6C0;
	sub_82A4CAD0(ctx, base);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
loc_829DA6C4:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82400988
	ctx.lr = 0x829DA6CC;
	sub_82400988(ctx, base);
loc_829DA6CC:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x829DA6D4;
	sub_82333960(ctx, base);
loc_829DA6D4:
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829da7fc
	if (ctx.cr6.eq) goto loc_829DA7FC;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da6f4
	if (ctx.cr6.eq) goto loc_829DA6F4;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// b 0x829da6f8
	goto loc_829DA6F8;
loc_829DA6F4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_829DA6F8:
	// bl 0x826d2c98
	ctx.lr = 0x829DA6FC;
	sub_826D2C98(ctx, base);
	// b 0x829da7fc
	goto loc_829DA7FC;
loc_829DA700:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da714
	if (ctx.cr6.eq) goto loc_829DA714;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x829da718
	goto loc_829DA718;
loc_829DA714:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_829DA718:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r11,-8200
	ctx.r4.s64 = ctx.r11.s64 + -8200;
	// bl 0x82a4cc80
	ctx.lr = 0x829DA724;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829da7fc
	if (ctx.cr0.eq) goto loc_829DA7FC;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da740
	if (ctx.cr6.eq) goto loc_829DA740;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x829da744
	goto loc_829DA744;
loc_829DA740:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_829DA744:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r11,-8192
	ctx.r4.s64 = ctx.r11.s64 + -8192;
	// bl 0x82a4cc80
	ctx.lr = 0x829DA750;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829da7fc
	if (!ctx.cr0.eq) goto loc_829DA7FC;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x829da7fc
	if (!ctx.cr6.eq) goto loc_829DA7FC;
	// stw r27,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r27.u32);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// bl 0x82400b48
	ctx.lr = 0x829DA788;
	sub_82400B48(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// bl 0x824099b8
	ctx.lr = 0x829DA7B0;
	sub_824099B8(ctx, base);
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwz r10,1388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	// stw r28,452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 452, ctx.r28.u32);
	// lwz r11,1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	// stw r28,448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 448, ctx.r28.u32);
	// stw r28,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r28.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da7dc
	if (ctx.cr6.eq) goto loc_829DA7DC;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// b 0x829da7e0
	goto loc_829DA7E0;
loc_829DA7DC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_829DA7E0:
	// bl 0x82a4cad0
	ctx.lr = 0x829DA7E4;
	sub_82A4CAD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829DA7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829DA7FC:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82400988
	ctx.lr = 0x829DA804;
	sub_82400988(ctx, base);
loc_829DA804:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x829DA80C;
	sub_82333960(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829DA818"))) PPC_WEAK_FUNC(sub_829DA818);
PPC_FUNC_IMPL(__imp__sub_829DA818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829DA820;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82414568
	ctx.lr = 0x829DA83C;
	sub_82414568(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da868
	if (ctx.cr6.eq) goto loc_829DA868;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829da868
	if (!ctx.cr6.eq) goto loc_829DA868;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x829DA85C;
	sub_82333960(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_829DA860:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_829DA868:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// beq cr6,0x829da900
	if (ctx.cr6.eq) goto loc_829DA900;
	// lwa r11,24(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 24));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x829da900
	if (ctx.cr6.gt) goto loc_829DA900;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da8e8
	if (ctx.cr6.eq) goto loc_829DA8E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82414568
	ctx.lr = 0x829DA8B8;
	sub_82414568(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r30,1388(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	// addi r3,r30,396
	ctx.r3.s64 = ctx.r30.s64 + 396;
	// bl 0x82400b48
	ctx.lr = 0x829DA8D0;
	sub_82400B48(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r29,420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 420, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,-13004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13004);
	// stw r11,424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 424, ctx.r11.u32);
	// bl 0x82333960
	ctx.lr = 0x829DA8E8;
	sub_82333960(ctx, base);
loc_829DA8E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_829DA8F0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x829DA8F8;
	sub_82333960(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x829da860
	goto loc_829DA860;
loc_829DA900:
	// lfs f13,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x829da930
	if (!ctx.cr6.lt) goto loc_829DA930;
loc_829DA90C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829da930
	if (!ctx.cr6.eq) goto loc_829DA930;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829da288
	ctx.lr = 0x829DA920;
	sub_829DA288(ctx, base);
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x829da90c
	if (ctx.cr6.lt) goto loc_829DA90C;
loc_829DA930:
	// lfs f13,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x829da9b0
	if (ctx.cr6.gt) goto loc_829DA9B0;
	// lfs f12,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x829da9b0
	if (ctx.cr6.lt) goto loc_829DA9B0;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829da9b0
	if (ctx.cr6.eq) goto loc_829DA9B0;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// beq cr6,0x829daa14
	if (ctx.cr6.eq) goto loc_829DAA14;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r9,1388(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	// stw r10,448(r9)
	PPC_STORE_U32(ctx.r9.u32 + 448, ctx.r10.u32);
	// lwz r30,1388(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	// addi r3,r30,396
	ctx.r3.s64 = ctx.r30.s64 + 396;
	// lwz r31,228(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82400b48
	ctx.lr = 0x829DA99C;
	sub_82400B48(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r31,420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 420, ctx.r31.u32);
	// lwz r11,-13004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13004);
	// stw r11,424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 424, ctx.r11.u32);
	// b 0x829daa14
	goto loc_829DAA14;
loc_829DA9B0:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x829da9c4
	if (ctx.cr6.gt) goto loc_829DA9C4;
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x829daa14
	if (!ctx.cr6.lt) goto loc_829DAA14;
loc_829DA9C4:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829daa14
	if (ctx.cr6.eq) goto loc_829DAA14;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82414568
	ctx.lr = 0x829DA9E4;
	sub_82414568(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r31,1388(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	// addi r3,r31,396
	ctx.r3.s64 = ctx.r31.s64 + 396;
	// bl 0x82400b48
	ctx.lr = 0x829DA9FC;
	sub_82400B48(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r29,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,-13004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13004);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// bl 0x82333960
	ctx.lr = 0x829DAA14;
	sub_82333960(ctx, base);
loc_829DAA14:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x829da8f0
	goto loc_829DA8F0;
}

__attribute__((alias("__imp__sub_829DAA20"))) PPC_WEAK_FUNC(sub_829DAA20);
PPC_FUNC_IMPL(__imp__sub_829DAA20) {
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
	// lwz r11,-27712(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27712);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829daa60
	if (!ctx.cr0.eq) goto loc_829DAA60;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27712, ctx.r11.u32);
	// addi r3,r9,-8420
	ctx.r3.s64 = ctx.r9.s64 + -8420;
	// bl 0x82816528
	ctx.lr = 0x829DAA58;
	sub_82816528(ctx, base);
	// stw r3,-27716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27716, ctx.r3.u32);
	// b 0x829daa64
	goto loc_829DAA64;
loc_829DAA60:
	// lwz r3,-27716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27716);
loc_829DAA64:
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

__attribute__((alias("__imp__sub_829DAA78"))) PPC_WEAK_FUNC(sub_829DAA78);
PPC_FUNC_IMPL(__imp__sub_829DAA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829daac8
	ctx.lr = 0x829DAA98;
	sub_829DAAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829DAAAC;
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

__attribute__((alias("__imp__sub_829DAAC8"))) PPC_WEAK_FUNC(sub_829DAAC8);
PPC_FUNC_IMPL(__imp__sub_829DAAC8) {
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
	// addi r31,r11,20244
	ctx.r31.s64 = ctx.r11.s64 + 20244;
	// lwz r11,20248(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20248);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829dab10
	if (!ctx.cr0.eq) goto loc_829DAB10;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-8096
	ctx.r9.s64 = ctx.r9.s64 + -8096;
	// stw r11,20248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20248, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-9856
	ctx.r3.s64 = ctx.r11.s64 + -9856;
	// bl 0x82a4c758
	ctx.lr = 0x829DAB10;
	sub_82A4C758(ctx, base);
loc_829DAB10:
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

__attribute__((alias("__imp__sub_829DAB28"))) PPC_WEAK_FUNC(sub_829DAB28);
PPC_FUNC_IMPL(__imp__sub_829DAB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-8076
	ctx.r3.s64 = ctx.r11.s64 + -8076;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829DAB38"))) PPC_WEAK_FUNC(sub_829DAB38);
PPC_FUNC_IMPL(__imp__sub_829DAB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829dab70
	if (ctx.cr6.eq) goto loc_829DAB70;
	// bl 0x829db470
	ctx.lr = 0x829DAB60;
	sub_829DB470(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829dab70
	if (!ctx.cr6.eq) goto loc_829DAB70;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829dab7c
	goto loc_829DAB7C;
loc_829DAB70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a88
	ctx.lr = 0x829DAB7C;
	sub_82338A88(ctx, base);
loc_829DAB7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829DAB98"))) PPC_WEAK_FUNC(sub_829DAB98);
PPC_FUNC_IMPL(__imp__sub_829DAB98) {
	PPC_FUNC_PROLOGUE();
	// b 0x829db470
	sub_829DB470(ctx, base);
	return;
}

