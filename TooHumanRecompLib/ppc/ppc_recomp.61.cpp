#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82520EA8"))) PPC_WEAK_FUNC(sub_82520EA8);
PPC_FUNC_IMPL(__imp__sub_82520EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82520EB0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r10,23404
	ctx.r3.s64 = ctx.r10.s64 + 23404;
	// lwz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lfs f31,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82816528
	ctx.lr = 0x82520ED8;
	sub_82816528(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82520f58
	if (ctx.cr6.eq) goto loc_82520F58;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r11,23436
	ctx.r3.s64 = ctx.r11.s64 + 23436;
	// bl 0x82816528
	ctx.lr = 0x82520EF0;
	sub_82816528(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82520f58
	if (ctx.cr6.eq) goto loc_82520F58;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r11,23472
	ctx.r3.s64 = ctx.r11.s64 + 23472;
	// bl 0x82816528
	ctx.lr = 0x82520F08;
	sub_82816528(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82520f58
	if (ctx.cr6.eq) goto loc_82520F58;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r11,23508
	ctx.r3.s64 = ctx.r11.s64 + 23508;
	// bl 0x82816528
	ctx.lr = 0x82520F20;
	sub_82816528(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82520f34
	if (!ctx.cr6.eq) goto loc_82520F34;
	// lwz r11,3424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3424);
	// lfs f31,156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82520f60
	goto loc_82520F60;
loc_82520F34:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r11,23544
	ctx.r3.s64 = ctx.r11.s64 + 23544;
	// bl 0x82816528
	ctx.lr = 0x82520F44;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82520f60
	if (!ctx.cr6.eq) goto loc_82520F60;
	// lwz r11,3424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3424);
	// lfs f31,100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82520f60
	goto loc_82520F60;
loc_82520F58:
	// lwz r11,3424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3424);
	// lfs f31,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f31.f64 = double(temp.f32);
loc_82520F60:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82520F70"))) PPC_WEAK_FUNC(sub_82520F70);
PPC_FUNC_IMPL(__imp__sub_82520F70) {
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
	// lwz r11,6872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82520fd8
	if (!ctx.cr6.eq) goto loc_82520FD8;
	// lwz r11,6864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82520fd8
	if (ctx.cr6.eq) goto loc_82520FD8;
	// lwz r4,6856(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6856);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82520fd8
	if (ctx.cr6.eq) goto loc_82520FD8;
	// bl 0x82520ea8
	ctx.lr = 0x82520FAC;
	sub_82520EA8(ctx, base);
	// lwz r11,3800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3800);
	// stfs f1,5412(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82520fd0
	if (!ctx.cr6.eq) goto loc_82520FD0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,6884(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6884);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,6884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6884, temp.u32);
loc_82520FD0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6868, ctx.r11.u32);
loc_82520FD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82520FF0"))) PPC_WEAK_FUNC(sub_82520FF0);
PPC_FUNC_IMPL(__imp__sub_82520FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82520FF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,1608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1608);
	// bl 0x8251e8e8
	ctx.lr = 0x8252100C;
	sub_8251E8E8(ctx, base);
	// lwz r11,5848(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5848);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82521024
	if (ctx.cr6.eq) goto loc_82521024;
	// stw r25,5848(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5848, ctx.r25.u32);
loc_82521024:
	// lwz r11,960(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82521064
	if (!ctx.cr6.eq) goto loc_82521064;
	// lwz r11,956(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82521064
	if (ctx.cr6.eq) goto loc_82521064;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82521064
	if (!ctx.cr6.eq) goto loc_82521064;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r31,64(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r11,23508
	ctx.r3.s64 = ctx.r11.s64 + 23508;
	// bl 0x82816528
	ctx.lr = 0x82521054;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8252131c
	if (!ctx.cr6.eq) goto loc_8252131C;
	// stw r25,6832(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6832, ctx.r25.u32);
	// b 0x8252131c
	goto loc_8252131C;
loc_82521064:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r29,64(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r31,r11,23404
	ctx.r31.s64 = ctx.r11.s64 + 23404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82816528
	ctx.lr = 0x82521078;
	sub_82816528(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// addi r29,r11,23436
	ctx.r29.s64 = ctx.r11.s64 + 23436;
	// addi r26,r10,23508
	ctx.r26.s64 = ctx.r10.s64 + 23508;
	// beq cr6,0x825211c0
	if (ctx.cr6.eq) goto loc_825211C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r24,64(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82816528
	ctx.lr = 0x8252109C;
	sub_82816528(ctx, base);
	// cmplw cr6,r24,r3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825211c0
	if (ctx.cr6.eq) goto loc_825211C0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r24,64(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r11,23472
	ctx.r3.s64 = ctx.r11.s64 + 23472;
	// bl 0x82816528
	ctx.lr = 0x825210B4;
	sub_82816528(ctx, base);
	// cmplw cr6,r24,r3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825211c0
	if (ctx.cr6.eq) goto loc_825211C0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r24,64(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r11,23544
	ctx.r3.s64 = ctx.r11.s64 + 23544;
	// bl 0x82816528
	ctx.lr = 0x825210CC;
	sub_82816528(ctx, base);
	// cmplw cr6,r24,r3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825211c0
	if (ctx.cr6.eq) goto loc_825211C0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r24,64(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82816528
	ctx.lr = 0x825210E0;
	sub_82816528(ctx, base);
	// cmplw cr6,r24,r3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825211c0
	if (ctx.cr6.eq) goto loc_825211C0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r31,64(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r11,23580
	ctx.r3.s64 = ctx.r11.s64 + 23580;
	// bl 0x82816528
	ctx.lr = 0x825210F8;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825211b4
	if (ctx.cr6.eq) goto loc_825211B4;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r31,64(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r11,23612
	ctx.r3.s64 = ctx.r11.s64 + 23612;
	// bl 0x82816528
	ctx.lr = 0x82521110;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825211b4
	if (ctx.cr6.eq) goto loc_825211B4;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r31,64(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r11,23644
	ctx.r3.s64 = ctx.r11.s64 + 23644;
	// bl 0x82816528
	ctx.lr = 0x82521128;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825211b4
	if (ctx.cr6.eq) goto loc_825211B4;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r31,64(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r11,23676
	ctx.r3.s64 = ctx.r11.s64 + 23676;
	// bl 0x82816528
	ctx.lr = 0x82521140;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825211b4
	if (ctx.cr6.eq) goto loc_825211B4;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r31,64(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r11,23708
	ctx.r3.s64 = ctx.r11.s64 + 23708;
	// bl 0x82816528
	ctx.lr = 0x82521158;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82521190
	if (ctx.cr6.eq) goto loc_82521190;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r31,64(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r11,23740
	ctx.r3.s64 = ctx.r11.s64 + 23740;
	// bl 0x82816528
	ctx.lr = 0x82521170;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82521190
	if (ctx.cr6.eq) goto loc_82521190;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r31,64(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r11,23772
	ctx.r3.s64 = ctx.r11.s64 + 23772;
	// bl 0x82816528
	ctx.lr = 0x82521188;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x825212b0
	if (!ctx.cr6.eq) goto loc_825212B0;
loc_82521190:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x825212b0
	if (ctx.cr6.eq) goto loc_825212B0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x829c2168
	ctx.lr = 0x825211B0;
	sub_829C2168(ctx, base);
	// b 0x825212b0
	goto loc_825212B0;
loc_825211B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,5332(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5332, ctx.r11.u32);
	// b 0x82521190
	goto loc_82521190;
loc_825211C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,64(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82816528
	ctx.lr = 0x825211CC;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825211e8
	if (ctx.cr6.eq) goto loc_825211E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,64(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82816528
	ctx.lr = 0x825211E0;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82521244
	if (!ctx.cr6.eq) goto loc_82521244;
loc_825211E8:
	// lwz r11,3800(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3800);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82521244
	if (!ctx.cr6.eq) goto loc_82521244;
	// lwz r11,6872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82521210
	if (ctx.cr6.eq) goto loc_82521210;
	// lwz r11,6908(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6908);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6908(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6908, ctx.r11.u32);
	// b 0x82521244
	goto loc_82521244;
loc_82521210:
	// lwz r11,6808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6808);
	// stw r25,6908(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6908, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252122c
	if (ctx.cr6.eq) goto loc_8252122C;
	// lwz r10,6816(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6816);
	// stw r25,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r25.u32);
	// stw r10,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r10.u32);
loc_8252122C:
	// lwz r11,6812(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82521244
	if (ctx.cr6.eq) goto loc_82521244;
	// lwz r10,6816(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6816);
	// stw r25,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r25.u32);
	// stw r10,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r10.u32);
loc_82521244:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82521290
	if (ctx.cr6.eq) goto loc_82521290;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x82521264;
	sub_829C1F08(ctx, base);
	// bl 0x824d3cd0
	ctx.lr = 0x82521268;
	sub_824D3CD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252127c
	if (ctx.cr0.eq) goto loc_8252127C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x82521288
	goto loc_82521288;
loc_8252127C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1472);
loc_82521288:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82521290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82521290:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82522380
	ctx.lr = 0x82521298;
	sub_82522380(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r31,64(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82816528
	ctx.lr = 0x825212A4;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x825212b0
	if (!ctx.cr6.eq) goto loc_825212B0;
	// stw r25,6832(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6832, ctx.r25.u32);
loc_825212B0:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r11,-13496
	ctx.r3.s64 = ctx.r11.s64 + -13496;
	// bl 0x82816528
	ctx.lr = 0x825212C0;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825212e0
	if (ctx.cr6.eq) goto loc_825212E0;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r11,-13464
	ctx.r3.s64 = ctx.r11.s64 + -13464;
	// bl 0x82816528
	ctx.lr = 0x825212D8;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82521310
	if (!ctx.cr6.eq) goto loc_82521310;
loc_825212E0:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r31,64(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r11,23804
	ctx.r3.s64 = ctx.r11.s64 + 23804;
	// bl 0x82816528
	ctx.lr = 0x825212F0;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82521310
	if (!ctx.cr6.eq) goto loc_82521310;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82521310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82521310:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824e8298
	ctx.lr = 0x8252131C;
	sub_824E8298(ctx, base);
loc_8252131C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82521328"))) PPC_WEAK_FUNC(sub_82521328);
PPC_FUNC_IMPL(__imp__sub_82521328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82521330;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,23404
	ctx.r3.s64 = ctx.r11.s64 + 23404;
	// lwz r30,64(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// bl 0x82816528
	ctx.lr = 0x8252134C;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82521378
	if (!ctx.cr6.eq) goto loc_82521378;
	// lwz r3,6892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6892);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82521370
	if (ctx.cr6.eq) goto loc_82521370;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82521370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82521370:
	// lwz r3,6896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6896);
	// b 0x825213b0
	goto loc_825213B0;
loc_82521378:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r30,64(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r3,r11,23436
	ctx.r3.s64 = ctx.r11.s64 + 23436;
	// bl 0x82816528
	ctx.lr = 0x82521388;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x825213ec
	if (!ctx.cr6.eq) goto loc_825213EC;
	// lwz r3,6900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825213ac
	if (ctx.cr6.eq) goto loc_825213AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825213AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825213AC:
	// lwz r3,6904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6904);
loc_825213B0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825213c8
	if (ctx.cr6.eq) goto loc_825213C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825213C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825213C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,6872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6872, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825213E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825214e0
	goto loc_825214E0;
loc_825213EC:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r30,64(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r3,r11,23472
	ctx.r3.s64 = ctx.r11.s64 + 23472;
	// bl 0x82816528
	ctx.lr = 0x825213FC;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8252144c
	if (ctx.cr6.eq) goto loc_8252144C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r30,64(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r3,r11,23544
	ctx.r3.s64 = ctx.r11.s64 + 23544;
	// bl 0x82816528
	ctx.lr = 0x82521414;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8252144c
	if (ctx.cr6.eq) goto loc_8252144C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r30,64(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r3,r11,23840
	ctx.r3.s64 = ctx.r11.s64 + 23840;
	// bl 0x828165a8
	ctx.lr = 0x8252142C;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x825214e0
	if (!ctx.cr6.eq) goto loc_825214E0;
	// lwz r10,6808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6808);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r11,460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 460, ctx.r11.u32);
	// lwz r10,6812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6812);
	// stw r11,460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 460, ctx.r11.u32);
	// b 0x825214bc
	goto loc_825214BC;
loc_8252144C:
	// lwz r3,6892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6892);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82521468
	if (ctx.cr6.eq) goto loc_82521468;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82521468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82521468:
	// lwz r3,6896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6896);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82521484
	if (ctx.cr6.eq) goto loc_82521484;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82521484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82521484:
	// lwz r3,6900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825214a0
	if (ctx.cr6.eq) goto loc_825214A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825214A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825214A0:
	// lwz r3,6904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825214bc
	if (ctx.cr6.eq) goto loc_825214BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825214BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825214BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,6872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6872, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,2480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825214DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,6908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6908, ctx.r30.u32);
loc_825214E0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5416, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825214F8"))) PPC_WEAK_FUNC(sub_825214F8);
PPC_FUNC_IMPL(__imp__sub_825214F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6832, ctx.r11.u32);
	// b 0x824e76b0
	sub_824E76B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82521508"))) PPC_WEAK_FUNC(sub_82521508);
PPC_FUNC_IMPL(__imp__sub_82521508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,23908
	ctx.r3.s64 = ctx.r11.s64 + 23908;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828165a8
	ctx.lr = 0x82521530;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82521544
	if (!ctx.cr6.eq) goto loc_82521544;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2472);
	// b 0x825215a0
	goto loc_825215A0;
loc_82521544:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,23940
	ctx.r3.s64 = ctx.r11.s64 + 23940;
	// bl 0x828165a8
	ctx.lr = 0x82521550;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82521564
	if (!ctx.cr6.eq) goto loc_82521564;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2476);
	// b 0x825215a0
	goto loc_825215A0;
loc_82521564:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,23964
	ctx.r3.s64 = ctx.r11.s64 + 23964;
	// bl 0x828165a8
	ctx.lr = 0x82521570;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82521584
	if (!ctx.cr6.eq) goto loc_82521584;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2464);
	// b 0x825215a0
	goto loc_825215A0;
loc_82521584:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,23992
	ctx.r3.s64 = ctx.r11.s64 + 23992;
	// bl 0x828165a8
	ctx.lr = 0x82521590;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x825215b0
	if (!ctx.cr6.eq) goto loc_825215B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2468);
loc_825215A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825215AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825215bc
	goto loc_825215BC;
loc_825215B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82523700
	ctx.lr = 0x825215BC;
	sub_82523700(ctx, base);
loc_825215BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825215D8"))) PPC_WEAK_FUNC(sub_825215D8);
PPC_FUNC_IMPL(__imp__sub_825215D8) {
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
	ctx.lr = 0x825215E8;
	sub_824EA480(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lfs f0,-23832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23832);
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

__attribute__((alias("__imp__sub_82521608"))) PPC_WEAK_FUNC(sub_82521608);
PPC_FUNC_IMPL(__imp__sub_82521608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lfs f1,-23720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23720);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521618"))) PPC_WEAK_FUNC(sub_82521618);
PPC_FUNC_IMPL(__imp__sub_82521618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82521620;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825238a8
	ctx.lr = 0x8252162C;
	sub_825238A8(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8252172c
	if (!ctx.cr6.eq) goto loc_8252172C;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252172c
	if (!ctx.cr6.eq) goto loc_8252172C;
	// addi r11,r31,6836
	ctx.r11.s64 = ctx.r31.s64 + 6836;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82521660;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6832
	ctx.r10.s64 = ctx.r31.s64 + 6832;
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
	ctx.lr = 0x82521680;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6844
	ctx.r10.s64 = ctx.r31.s64 + 6844;
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
	ctx.lr = 0x825216A0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6848
	ctx.r10.s64 = ctx.r31.s64 + 6848;
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
	ctx.lr = 0x825216C0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6860
	ctx.r10.s64 = ctx.r31.s64 + 6860;
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
	ctx.lr = 0x825216E0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6868
	ctx.r10.s64 = ctx.r31.s64 + 6868;
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
	ctx.lr = 0x82521700;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6872
	ctx.r10.s64 = ctx.r31.s64 + 6872;
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
	ctx.lr = 0x82521720;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_8252172C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82521738"))) PPC_WEAK_FUNC(sub_82521738);
PPC_FUNC_IMPL(__imp__sub_82521738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82521740;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82523928
	ctx.lr = 0x82521750;
	sub_82523928(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82521a80
	if (!ctx.cr6.eq) goto loc_82521A80;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82521a80
	if (!ctx.cr6.eq) goto loc_82521A80;
	// addi r27,r31,6836
	ctx.r27.s64 = ctx.r31.s64 + 6836;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82521784;
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
	ctx.lr = 0x825217A8;
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
	ctx.lr = 0x825217BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825217e0
	if (!ctx.cr0.eq) goto loc_825217E0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825217D4;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_825217E0:
	// addi r27,r31,6832
	ctx.r27.s64 = ctx.r31.s64 + 6832;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825217F4;
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
	ctx.lr = 0x82521818;
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
	ctx.lr = 0x8252182C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82521850
	if (!ctx.cr0.eq) goto loc_82521850;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82521844;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82521850:
	// addi r27,r31,6844
	ctx.r27.s64 = ctx.r31.s64 + 6844;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82521864;
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
	ctx.lr = 0x82521888;
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
	ctx.lr = 0x8252189C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825218c0
	if (!ctx.cr0.eq) goto loc_825218C0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825218B4;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_825218C0:
	// addi r27,r31,6848
	ctx.r27.s64 = ctx.r31.s64 + 6848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825218D4;
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
	ctx.lr = 0x825218F8;
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
	ctx.lr = 0x8252190C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82521930
	if (!ctx.cr0.eq) goto loc_82521930;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82521924;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82521930:
	// addi r27,r31,6860
	ctx.r27.s64 = ctx.r31.s64 + 6860;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82521944;
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
	ctx.lr = 0x82521968;
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
	ctx.lr = 0x8252197C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825219a0
	if (!ctx.cr0.eq) goto loc_825219A0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82521994;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_825219A0:
	// addi r27,r31,6868
	ctx.r27.s64 = ctx.r31.s64 + 6868;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825219B4;
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
	ctx.lr = 0x825219D8;
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
	ctx.lr = 0x825219EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82521a10
	if (!ctx.cr0.eq) goto loc_82521A10;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82521A04;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82521A10:
	// addi r27,r31,6872
	ctx.r27.s64 = ctx.r31.s64 + 6872;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82521A24;
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
	ctx.lr = 0x82521A48;
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
	ctx.lr = 0x82521A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82521a80
	if (!ctx.cr0.eq) goto loc_82521A80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82521A74;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82521A80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82521A90"))) PPC_WEAK_FUNC(sub_82521A90);
PPC_FUNC_IMPL(__imp__sub_82521A90) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,3424(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3424);
	// mulli r8,r4,56
	ctx.r8.s64 = ctx.r4.s64 * 56;
	// lwz r9,6816(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6816);
	// lwz r11,6808(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6808);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x82521ac0
	if (ctx.cr6.eq) goto loc_82521AC0;
	// stw r10,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r10.u32);
	// stw r7,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r7.u32);
loc_82521AC0:
	// lwz r11,6812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r10,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r10.u32);
	// stw r7,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521AD8"))) PPC_WEAK_FUNC(sub_82521AD8);
PPC_FUNC_IMPL(__imp__sub_82521AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82521AE0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82523800
	ctx.lr = 0x82521AF8;
	sub_82523800(ctx, base);
	// lwz r11,5728(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82521b0c
	if (ctx.cr6.eq) goto loc_82521B0C;
	// lwz r4,5724(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5724);
	// b 0x82521b14
	goto loc_82521B14;
loc_82521B0C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82521B14:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82409058
	ctx.lr = 0x82521B1C;
	sub_82409058(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82521b40
	if (ctx.cr6.eq) goto loc_82521B40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82521b40
	if (ctx.cr6.eq) goto loc_82521B40;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x82521B40;
	sub_82332DB8(ctx, base);
loc_82521B40:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82521eac
	if (ctx.cr6.eq) goto loc_82521EAC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82521eac
	if (ctx.cr6.eq) goto loc_82521EAC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82507af0
	ctx.lr = 0x82521B5C;
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
	ctx.lr = 0x82521B7C;
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
	ctx.lr = 0x82521BA4;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,15872
	ctx.r4.s64 = ctx.r11.s64 + 15872;
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
	ctx.lr = 0x82521BCC;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addi r4,r11,15436
	ctx.r4.s64 = ctx.r11.s64 + 15436;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82521BF0;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r11,15456
	ctx.r4.s64 = ctx.r11.s64 + 15456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82521C0C;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r11,11960
	ctx.r4.s64 = ctx.r11.s64 + 11960;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82521C28;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r11,15396
	ctx.r4.s64 = ctx.r11.s64 + 15396;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82521C44;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,15416
	ctx.r4.s64 = ctx.r11.s64 + 15416;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x82521C6C;
	sub_829E6978(ctx, base);
	// stfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r29,r28,3412
	ctx.r29.s64 = ctx.r28.s64 + 3412;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82507928
	ctx.lr = 0x82521C80;
	sub_82507928(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stfs f30,1696(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1696, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,15888
	ctx.r4.s64 = ctx.r11.s64 + 15888;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82521C9C;
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
	ctx.lr = 0x82521CC4;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,24012
	ctx.r4.s64 = ctx.r11.s64 + 24012;
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
	ctx.lr = 0x82521CEC;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r4,r11,18628
	ctx.r4.s64 = ctx.r11.s64 + 18628;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82521D0C;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r11,18648
	ctx.r4.s64 = ctx.r11.s64 + 18648;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82521D28;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r11,15904
	ctx.r4.s64 = ctx.r11.s64 + 15904;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82521D44;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r11,18588
	ctx.r4.s64 = ctx.r11.s64 + 18588;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82521D60;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,18608
	ctx.r4.s64 = ctx.r11.s64 + 18608;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x82521D88;
	sub_829E6978(ctx, base);
	// stfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82507928
	ctx.lr = 0x82521D98;
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
	ctx.lr = 0x82521DB0;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,15936
	ctx.r4.s64 = ctx.r11.s64 + 15936;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82521DD8;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,24028
	ctx.r4.s64 = ctx.r11.s64 + 24028;
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
	ctx.lr = 0x82521E00;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r4,r11,18816
	ctx.r4.s64 = ctx.r11.s64 + 18816;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82521E20;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r11,18836
	ctx.r4.s64 = ctx.r11.s64 + 18836;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82521E3C;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r11,24044
	ctx.r4.s64 = ctx.r11.s64 + 24044;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82521E58;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r11,18776
	ctx.r4.s64 = ctx.r11.s64 + 18776;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82521E74;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,18796
	ctx.r4.s64 = ctx.r11.s64 + 18796;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82521E9C;
	sub_829E6978(ctx, base);
	// stfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82507928
	ctx.lr = 0x82521EAC;
	sub_82507928(ctx, base);
loc_82521EAC:
	// lwz r11,3424(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3424);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82521eec
	if (ctx.cr6.eq) goto loc_82521EEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r28,3436
	ctx.r31.s64 = ctx.r28.s64 + 3436;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82522580
	ctx.lr = 0x82521ED8;
	sub_82522580(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82522580
	ctx.lr = 0x82521EEC;
	sub_82522580(ctx, base);
loc_82521EEC:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82521F00"))) PPC_WEAK_FUNC(sub_82521F00);
PPC_FUNC_IMPL(__imp__sub_82521F00) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,5480(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5480);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82521f3c
	if (ctx.cr6.eq) goto loc_82521F3C;
	// lwz r11,3452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82521f3c
	if (ctx.cr6.eq) goto loc_82521F3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824df020
	ctx.lr = 0x82521F38;
	sub_824DF020(ctx, base);
	// b 0x82521f4c
	goto loc_82521F4C;
loc_82521F3C:
	// lwz r11,6832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6832);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82521f4c
	if (!ctx.cr6.eq) goto loc_82521F4C;
	// li r3,2
	ctx.r3.s64 = 2;
loc_82521F4C:
	// lwz r10,3424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	// mulli r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82521fec
	if (ctx.cr6.eq) goto loc_82521FEC;
	// lwz r10,3528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3528);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82521fec
	if (!ctx.cr6.gt) goto loc_82521FEC;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
loc_82521F98:
	// lwz r9,3524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3524);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r4,460(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 460);
	// stfs f0,492(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 492, temp.u32);
	// stw r8,488(r9)
	PPC_STORE_U32(ctx.r9.u32 + 488, ctx.r8.u32);
	// stfs f0,496(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 496, temp.u32);
	// ori r8,r4,2
	ctx.r8.u64 = ctx.r4.u64 | 2;
	// stfs f13,500(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 500, temp.u32);
	// stw r7,476(r9)
	PPC_STORE_U32(ctx.r9.u32 + 476, ctx.r7.u32);
	// stw r8,460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 460, ctx.r8.u32);
	// stw r6,480(r9)
	PPC_STORE_U32(ctx.r9.u32 + 480, ctx.r6.u32);
	// stw r5,484(r9)
	PPC_STORE_U32(ctx.r9.u32 + 484, ctx.r5.u32);
	// lwz r9,3528(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3528);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82521f98
	if (ctx.cr6.lt) goto loc_82521F98;
loc_82521FEC:
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

__attribute__((alias("__imp__sub_82522000"))) PPC_WEAK_FUNC(sub_82522000);
PPC_FUNC_IMPL(__imp__sub_82522000) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,5480(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5480);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8252203c
	if (ctx.cr6.eq) goto loc_8252203C;
	// lwz r11,3452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252203c
	if (ctx.cr6.eq) goto loc_8252203C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824df020
	ctx.lr = 0x82522038;
	sub_824DF020(ctx, base);
	// b 0x8252204c
	goto loc_8252204C;
loc_8252203C:
	// lwz r11,6832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6832);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8252204c
	if (!ctx.cr6.eq) goto loc_8252204C;
	// li r3,2
	ctx.r3.s64 = 2;
loc_8252204C:
	// lwz r11,3424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5416, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82522078"))) PPC_WEAK_FUNC(sub_82522078);
PPC_FUNC_IMPL(__imp__sub_82522078) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,5480(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5480);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x825220b4
	if (ctx.cr6.eq) goto loc_825220B4;
	// lwz r11,3452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825220b4
	if (ctx.cr6.eq) goto loc_825220B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824df020
	ctx.lr = 0x825220B0;
	sub_824DF020(ctx, base);
	// b 0x825220c4
	goto loc_825220C4;
loc_825220B4:
	// lwz r11,6832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6832);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825220c4
	if (!ctx.cr6.eq) goto loc_825220C4;
	// li r3,2
	ctx.r3.s64 = 2;
loc_825220C4:
	// lwz r11,3424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5416, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825220F0"))) PPC_WEAK_FUNC(sub_825220F0);
PPC_FUNC_IMPL(__imp__sub_825220F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825220F8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lis r5,-11460
	ctx.r5.s64 = -751042560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// ori r5,r5,62725
	ctx.r5.u64 = ctx.r5.u64 | 62725;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82522138;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
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
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x824091a0
	ctx.lr = 0x8252215C;
	sub_824091A0(ctx, base);
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x82522164;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82522178
	if (ctx.cr0.eq) goto loc_82522178;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829146b0
	ctx.lr = 0x82522174;
	sub_829146B0(ctx, base);
	// b 0x8252217c
	goto loc_8252217C;
loc_82522178:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8252217C:
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lwz r28,144(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lis r11,-23232
	ctx.r11.s64 = -1522532352;
	// lwz r27,148(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lis r10,-32559
	ctx.r10.s64 = -2133786624;
	// stw r3,6892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6892, ctx.r3.u32);
	// ori r7,r11,54991
	ctx.r7.u64 = ctx.r11.u64 | 54991;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// li r29,128
	ctx.r29.s64 = 128;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// lfs f31,30996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30996);
	ctx.f31.f64 = double(temp.f32);
	// li r26,5
	ctx.r26.s64 = 5;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// ori r10,r10,10823
	ctx.r10.u64 = ctx.r10.u64 | 10823;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82914788
	ctx.lr = 0x825221DC;
	sub_82914788(ctx, base);
	// lwz r3,6892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6892);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825221F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x825221FC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82522210
	if (ctx.cr0.eq) goto loc_82522210;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829146b0
	ctx.lr = 0x8252220C;
	sub_829146B0(ctx, base);
	// b 0x82522214
	goto loc_82522214;
loc_82522210:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82522214:
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// lis r11,-6513
	ctx.r11.s64 = -426835968;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lis r10,-8800
	ctx.r10.s64 = -576716800;
	// stw r3,6896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6896, ctx.r3.u32);
	// ori r7,r11,29950
	ctx.r7.u64 = ctx.r11.u64 | 29950;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// ori r10,r10,3253
	ctx.r10.u64 = ctx.r10.u64 | 3253;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82914788
	ctx.lr = 0x8252225C;
	sub_82914788(ctx, base);
	// lwz r3,6896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6896);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82522274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x8252227C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82522290
	if (ctx.cr0.eq) goto loc_82522290;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829146b0
	ctx.lr = 0x8252228C;
	sub_829146B0(ctx, base);
	// b 0x82522294
	goto loc_82522294;
loc_82522290:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82522294:
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// lis r11,16787
	ctx.r11.s64 = 1100152832;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// lis r10,2016
	ctx.r10.s64 = 132120576;
	// ori r7,r11,19302
	ctx.r7.u64 = ctx.r11.u64 | 19302;
	// stw r3,6900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6900, ctx.r3.u32);
	// ori r10,r10,19703
	ctx.r10.u64 = ctx.r10.u64 | 19703;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82914788
	ctx.lr = 0x825222DC;
	sub_82914788(ctx, base);
	// lwz r3,6900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6900);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825222F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x825222FC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82522310
	if (ctx.cr0.eq) goto loc_82522310;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829146b0
	ctx.lr = 0x8252230C;
	sub_829146B0(ctx, base);
	// b 0x82522314
	goto loc_82522314;
loc_82522310:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82522314:
	// stw r3,6904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6904, ctx.r3.u32);
	// lis r11,28277
	ctx.r11.s64 = 1853161472;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// lis r10,28235
	ctx.r10.s64 = 1850408960;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// ori r7,r11,29645
	ctx.r7.u64 = ctx.r11.u64 | 29645;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// ori r10,r10,55530
	ctx.r10.u64 = ctx.r10.u64 | 55530;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82914788
	ctx.lr = 0x8252235C;
	sub_82914788(ctx, base);
	// lwz r3,6904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6904);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82522374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82522380"))) PPC_WEAK_FUNC(sub_82522380);
PPC_FUNC_IMPL(__imp__sub_82522380) {
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
	// lwz r3,6892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6892);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825223a4
	if (ctx.cr6.eq) goto loc_825223A4;
	// bl 0x82978ed0
	ctx.lr = 0x825223A4;
	sub_82978ED0(ctx, base);
loc_825223A4:
	// lwz r3,6896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6896);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825223b4
	if (ctx.cr6.eq) goto loc_825223B4;
	// bl 0x82978ed0
	ctx.lr = 0x825223B4;
	sub_82978ED0(ctx, base);
loc_825223B4:
	// lwz r3,6900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825223c4
	if (ctx.cr6.eq) goto loc_825223C4;
	// bl 0x82978ed0
	ctx.lr = 0x825223C4;
	sub_82978ED0(ctx, base);
loc_825223C4:
	// lwz r3,6904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825223d4
	if (ctx.cr6.eq) goto loc_825223D4;
	// bl 0x82978ed0
	ctx.lr = 0x825223D4;
	sub_82978ED0(ctx, base);
loc_825223D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825223E8"))) PPC_WEAK_FUNC(sub_825223E8);
PPC_FUNC_IMPL(__imp__sub_825223E8) {
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
	ctx.lr = 0x82522404;
	sub_82332928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252241c
	if (ctx.cr0.eq) goto loc_8252241C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252241C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252241C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82522380
	ctx.lr = 0x82522424;
	sub_82522380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82522438"))) PPC_WEAK_FUNC(sub_82522438);
PPC_FUNC_IMPL(__imp__sub_82522438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,24060
	ctx.r3.s64 = ctx.r11.s64 + 24060;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82522448"))) PPC_WEAK_FUNC(sub_82522448);
PPC_FUNC_IMPL(__imp__sub_82522448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,23804
	ctx.r3.s64 = ctx.r11.s64 + 23804;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82522458"))) PPC_WEAK_FUNC(sub_82522458);
PPC_FUNC_IMPL(__imp__sub_82522458) {
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
	// bl 0x829c2520
	ctx.lr = 0x8252246C;
	sub_829C2520(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825224c0
	if (ctx.cr0.eq) goto loc_825224C0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,24092
	ctx.r3.s64 = ctx.r11.s64 + 24092;
	// bl 0x82816528
	ctx.lr = 0x82522480;
	sub_82816528(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825224a8
	if (ctx.cr6.eq) goto loc_825224A8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825224A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825224ac
	goto loc_825224AC;
loc_825224A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825224AC:
	// bl 0x825225f0
	ctx.lr = 0x825224B0;
	sub_825225F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825224c0
	if (ctx.cr0.eq) goto loc_825224C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
loc_825224C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825224D8"))) PPC_WEAK_FUNC(sub_825224D8);
PPC_FUNC_IMPL(__imp__sub_825224D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2464);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82522504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,6856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6856, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82522520"))) PPC_WEAK_FUNC(sub_82522520);
PPC_FUNC_IMPL(__imp__sub_82522520) {
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
	// bl 0x824e2e98
	ctx.lr = 0x82522538;
	sub_824E2E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6832, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82522558"))) PPC_WEAK_FUNC(sub_82522558);
PPC_FUNC_IMPL(__imp__sub_82522558) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6832);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6832, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82522580"))) PPC_WEAK_FUNC(sub_82522580);
PPC_FUNC_IMPL(__imp__sub_82522580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82332d50
	ctx.lr = 0x825225AC;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825225cc
	if (ctx.cr0.eq) goto loc_825225CC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_825225CC:
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

__attribute__((alias("__imp__sub_825225F0"))) PPC_WEAK_FUNC(sub_825225F0);
PPC_FUNC_IMPL(__imp__sub_825225F0) {
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
	// beq cr6,0x82522634
	if (ctx.cr6.eq) goto loc_82522634;
	// bl 0x8248be68
	ctx.lr = 0x82522610;
	sub_8248BE68(ctx, base);
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
	ctx.lr = 0x82522628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82522638
	if (!ctx.cr0.eq) goto loc_82522638;
loc_82522634:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82522638:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82522650"))) PPC_WEAK_FUNC(sub_82522650);
PPC_FUNC_IMPL(__imp__sub_82522650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x82522658;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82502288
	ctx.lr = 0x82522664;
	sub_82502288(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r7,r11,-11424
	ctx.r7.s64 = ctx.r11.s64 + -11424;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lfs f12,-11424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11424);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r10,15088
	ctx.r11.s64 = ctx.r10.s64 + 15088;
	// addi r10,r9,17552
	ctx.r10.s64 = ctx.r9.s64 + 17552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r8,17604
	ctx.r9.s64 = ctx.r8.s64 + 17604;
	// lis r6,-31963
	ctx.r6.s64 = -2094727168;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,-17868(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -17868);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,6768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6768, ctx.r11.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r29,6772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6772, ctx.r29.u32);
	// stw r29,6776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6776, ctx.r29.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r29,6780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6780, ctx.r29.u32);
	// lfs f13,-13220(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -13220);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,6784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6784, ctx.r29.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r29,6764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6764, ctx.r29.u32);
	// stfs f0,1700(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1700, temp.u32);
	// stfs f13,1704(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
	// stw r30,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r30.u32);
	// stw r30,3180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3180, ctx.r30.u32);
	// lfs f0,16800(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16800);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,1492(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f0,52(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 52, temp.u32);
	// lwz r8,1492(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lfs f0,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 72, temp.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lfs f0,20528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20528);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f0,1696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f0,16432(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16432);
	ctx.f0.f64 = double(temp.f32);
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
	// stfs f0,80(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stw r30,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,1492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lfs f0,20524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20524);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,88(r9)
	PPC_STORE_U32(ctx.r9.u32 + 88, ctx.r30.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r9,1492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f12,84(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// lwz r9,1492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f0,64(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 64, temp.u32);
	// lwz r9,1492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lfs f0,912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r30.u32);
	// li r9,500
	ctx.r9.s64 = 500;
	// lwz r8,1492(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r30,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r30.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r29,6736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6736, ctx.r29.u32);
	// addi r21,r11,20416
	ctx.r21.s64 = ctx.r11.s64 + 20416;
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// addi r28,r31,3900
	ctx.r28.s64 = ctx.r31.s64 + 3900;
	// stw r30,120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 120, ctx.r30.u32);
	// addi r20,r31,3924
	ctx.r20.s64 = ctx.r31.s64 + 3924;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// stw r30,6712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6712, ctx.r30.u32);
	// stw r9,3924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3924, ctx.r9.u32);
	// stw r10,3900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3900, ctx.r10.u32);
	// lfs f0,15832(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 15832);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stfs f0,6716(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6716, temp.u32);
	// lfs f13,17820(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 17820);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,6704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6704, ctx.r29.u32);
	// lfs f0,24088(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24088);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,6720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6720, ctx.r30.u32);
	// stfs f13,4160(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4160, temp.u32);
	// stw r29,6708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6708, ctx.r29.u32);
	// stfs f0,3788(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3788, temp.u32);
	// stw r30,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r30.u32);
	// stw r30,5528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5528, ctx.r30.u32);
	// addi r26,r10,-27908
	ctx.r26.s64 = ctx.r10.s64 + -27908;
	// stw r30,3784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3784, ctx.r30.u32);
	// stw r29,3800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3800, ctx.r29.u32);
	// stw r7,3904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3904, ctx.r7.u32);
	// stw r6,3908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3908, ctx.r6.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825228a0
	if (ctx.cr6.eq) goto loc_825228A0;
	// rotlwi r27,r10,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r24,r11,24116
	ctx.r24.s64 = ctx.r11.s64 + 24116;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r23,12(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252284C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82522880
	if (ctx.cr0.eq) goto loc_82522880;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82522868
	if (ctx.cr6.eq) goto loc_82522868;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82522870
	goto loc_82522870;
loc_82522868:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82522870:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828c5d40
	ctx.lr = 0x8252287C;
	sub_828C5D40(ctx, base);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82522880:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82522888;
	sub_82333960(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x825228a0
	if (!ctx.cr6.eq) goto loc_825228A0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x828c5800
	ctx.lr = 0x825228A0;
	sub_828C5800(ctx, base);
loc_825228A0:
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825228d0
	if (ctx.cr6.eq) goto loc_825228D0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,24152
	ctx.r5.s64 = ctx.r11.s64 + 24152;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5680
	ctx.lr = 0x825228D0;
	sub_828C5680(ctx, base);
loc_825228D0:
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82522900
	if (ctx.cr6.eq) goto loc_82522900;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,24188
	ctx.r5.s64 = ctx.r11.s64 + 24188;
	// addi r6,r31,3616
	ctx.r6.s64 = ctx.r31.s64 + 3616;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5680
	ctx.lr = 0x82522900;
	sub_828C5680(ctx, base);
loc_82522900:
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82522930
	if (ctx.cr6.eq) goto loc_82522930;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,24232
	ctx.r5.s64 = ctx.r11.s64 + 24232;
	// addi r6,r31,3620
	ctx.r6.s64 = ctx.r31.s64 + 3620;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5680
	ctx.lr = 0x82522930;
	sub_828C5680(ctx, base);
loc_82522930:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r3,r10,24276
	ctx.r3.s64 = ctx.r10.s64 + 24276;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r10,2224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2224);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r10,2228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2228);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwz r10,2232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2232);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// lwz r10,2220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2220);
	// stw r10,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r10.u32);
	// lwz r10,2196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2196);
	// stw r10,3620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3620, ctx.r10.u32);
	// lwz r11,2192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2192);
	// stw r11,3616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3616, ctx.r11.u32);
	// stw r29,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r29.u32);
	// stw r30,5336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5336, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x8252297C;
	sub_82816528(ctx, base);
	// stw r3,6804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6804, ctx.r3.u32);
	// stw r30,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r30.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,24288
	ctx.r3.s64 = ctx.r11.s64 + 24288;
	// bl 0x828165a8
	ctx.lr = 0x82522990;
	sub_828165A8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,7266
	ctx.r9.s64 = 476184576;
	// stfs f0,3184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3184, temp.u32);
	// stw r3,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r3.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// ori r9,r9,9415
	ctx.r9.u64 = ctx.r9.u64 | 9415;
	// stw r30,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r30.u32);
	// lfs f0,17664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17664);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r30.u32);
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,2600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2600, ctx.r9.u32);
	// stfs f0,3188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3188, temp.u32);
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// stfs f13,3192(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3192, temp.u32);
	// addi r3,r8,24336
	ctx.r3.s64 = ctx.r8.s64 + 24336;
	// addi r30,r11,1268
	ctx.r30.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x825229DC;
	sub_82816528(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r31,1740
	ctx.r4.s64 = ctx.r31.s64 + 1740;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82509750
	ctx.lr = 0x825229F4;
	sub_82509750(ctx, base);
	// lis r11,32659
	ctx.r11.s64 = 2140340224;
	// lis r10,6186
	ctx.r10.s64 = 405405696;
	// lis r9,10395
	ctx.r9.s64 = 681246720;
	// ori r11,r11,10987
	ctx.r11.u64 = ctx.r11.u64 | 10987;
	// ori r10,r10,39834
	ctx.r10.u64 = ctx.r10.u64 | 39834;
	// ori r9,r9,9417
	ctx.r9.u64 = ctx.r9.u64 | 9417;
	// stw r11,3644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3644, ctx.r11.u32);
	// lis r8,5716
	ctx.r8.s64 = 374603776;
	// stw r10,2612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2612, ctx.r10.u32);
	// lis r7,9361
	ctx.r7.s64 = 613482496;
	// stw r9,2616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2616, ctx.r9.u32);
	// lis r6,14498
	ctx.r6.s64 = 950140928;
	// ori r11,r8,7996
	ctx.r11.u64 = ctx.r8.u64 | 7996;
	// ori r10,r7,4501
	ctx.r10.u64 = ctx.r7.u64 | 4501;
	// ori r9,r6,38985
	ctx.r9.u64 = ctx.r6.u64 | 38985;
	// stw r11,2604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2604, ctx.r11.u32);
	// stw r10,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,5776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5776, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82522A48"))) PPC_WEAK_FUNC(sub_82522A48);
PPC_FUNC_IMPL(__imp__sub_82522A48) {
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
	// bl 0x82502f00
	ctx.lr = 0x82522A60;
	sub_82502F00(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r31,6332
	ctx.r4.s64 = ctx.r31.s64 + 6332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,24372
	ctx.r6.s64 = ctx.r11.s64 + 24372;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x824f9a90
	ctx.lr = 0x82522A80;
	sub_824F9A90(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r31,6336
	ctx.r4.s64 = ctx.r31.s64 + 6336;
	// addi r5,r11,24400
	ctx.r5.s64 = ctx.r11.s64 + 24400;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416240
	ctx.lr = 0x82522A9C;
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

__attribute__((alias("__imp__sub_82522AB0"))) PPC_WEAK_FUNC(sub_82522AB0);
PPC_FUNC_IMPL(__imp__sub_82522AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82522AD0;
	sub_824DD3F8(ctx, base);
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// stw r11,6712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6712, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82522AF0"))) PPC_WEAK_FUNC(sub_82522AF0);
PPC_FUNC_IMPL(__imp__sub_82522AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82522AF8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61730
	ctx.lr = 0x82522B00;
	__savefpr_22(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824df418
	ctx.lr = 0x82522B0C;
	sub_824DF418(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,5352(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82522B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,5352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82522b38
	if (ctx.cr6.eq) goto loc_82522B38;
	// lwz r10,1740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
loc_82522B38:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,5352(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lfs f0,16360(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16360);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-6866
	ctx.r10.s64 = -449970176;
	// lfs f13,19888(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19888);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r11,-5628
	ctx.r3.s64 = ctx.r11.s64 + -5628;
	// lfs f12,19784(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19784);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,19792(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19792);
	ctx.f11.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f10,19704(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19704);
	ctx.f10.f64 = double(temp.f32);
	// ori r28,r10,31988
	ctx.r28.u64 = ctx.r10.u64 | 31988;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82522BA8;
	sub_82816528(ctx, base);
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,136(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x82522BEC;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r10,5356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5356, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,5356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82522C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f0,19884(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19884);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lfs f25,-12104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12104);
	ctx.f25.f64 = double(temp.f32);
	// lfs f13,17676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17676);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r11,9748
	ctx.r3.s64 = ctx.r11.s64 + 9748;
	// lfs f29,18204(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18204);
	ctx.f29.f64 = double(temp.f32);
	// lfs f12,19880(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19880);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,19856(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19856);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f25,132(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f29,144(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r29,5352(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82522C78;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,9760
	ctx.r3.s64 = ctx.r11.s64 + 9760;
	// bl 0x82816528
	ctx.lr = 0x82522C88;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,136(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r26,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x82522CCC;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82522CEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r10,r29,-32456
	ctx.r10.s64 = ctx.r29.s64 + -32456;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f30,18116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18116);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lfs f26,-76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -76);
	ctx.f26.f64 = double(temp.f32);
	// lis r10,22763
	ctx.r10.s64 = 1491795968;
	// lfs f24,17684(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17684);
	ctx.f24.f64 = double(temp.f32);
	// addi r3,r11,9772
	ctx.r3.s64 = ctx.r11.s64 + 9772;
	// lfs f27,17668(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17668);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,19860(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19860);
	ctx.f28.f64 = double(temp.f32);
	// ori r28,r10,37495
	ctx.r28.u64 = ctx.r10.u64 | 37495;
	// lfs f0,19876(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19876);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f26,132(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f24,136(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r27,5352(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82522D5C;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x82522DA0;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82522DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r27,5352(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r9,-19521
	ctx.r9.s64 = -1279328256;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r10,9784
	ctx.r3.s64 = ctx.r10.s64 + 9784;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ori r28,r9,23324
	ctx.r28.u64 = ctx.r9.u64 | 23324;
	// lfs f0,-11456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f26,132(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82522E04;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r26,168(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x82522E48;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82522E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// stfs f25,132(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lis r6,16364
	ctx.r6.s64 = 1072431104;
	// lfs f23,19864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19864);
	ctx.f23.f64 = double(temp.f32);
	// addi r3,r7,9796
	ctx.r3.s64 = ctx.r7.s64 + 9796;
	// lfs f30,17688(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17688);
	ctx.f30.f64 = double(temp.f32);
	// lfs f26,19872(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19872);
	ctx.f26.f64 = double(temp.f32);
	// ori r28,r6,28383
	ctx.r28.u64 = ctx.r6.u64 | 28383;
	// lfs f22,18368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18368);
	ctx.f22.f64 = double(temp.f32);
	// stfs f23,128(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f26,144(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f22,148(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r27,5352(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82522EC4;
	sub_82816528(ctx, base);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,136(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// rldicr r9,r28,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x824e5590
	ctx.lr = 0x82522F08;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82522F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lfs f0,-32456(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -32456);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,599
	ctx.r9.s64 = 39256064;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r3,r10,9808
	ctx.r3.s64 = ctx.r10.s64 + 9808;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r29,r9,14532
	ctx.r29.u64 = ctx.r9.u64 | 14532;
	// lfs f27,19848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19848);
	ctx.f27.f64 = double(temp.f32);
	// stfs f23,128(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f25,132(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f26,144(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f22,148(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r28,5352(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82522F70;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x82522FB4;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82522FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r9,30100
	ctx.r9.s64 = 1972633600;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r10,9820
	ctx.r3.s64 = ctx.r10.s64 + 9820;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ori r29,r9,42004
	ctx.r29.u64 = ctx.r9.u64 | 42004;
	// lfs f25,16580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16580);
	ctx.f25.f64 = double(temp.f32);
	// stfs f25,128(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r28,5352(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82523018;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,136(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// rldicr r9,r29,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x824e5590
	ctx.lr = 0x8252305C;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252307C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-13035
	ctx.r10.s64 = -854261760;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r3,r11,9836
	ctx.r3.s64 = ctx.r11.s64 + 9836;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r29,r10,53749
	ctx.r29.u64 = ctx.r10.u64 | 53749;
	// stfs f25,128(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r28,5352(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x825230B8;
	sub_82816528(ctx, base);
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x825230FC;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252311C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r9,-11265
	ctx.r9.s64 = -738263040;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r10,9852
	ctx.r3.s64 = ctx.r10.s64 + 9852;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ori r29,r9,44068
	ctx.r29.u64 = ctx.r9.u64 | 44068;
	// lfs f27,16568(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16568);
	ctx.f27.f64 = double(temp.f32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f24,136(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f26,144(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r28,5352(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82523160;
	sub_82816528(ctx, base);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x825231A4;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825231C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,24284
	ctx.r10.s64 = 1591476224;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r3,r11,9868
	ctx.r3.s64 = ctx.r11.s64 + 9868;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r29,r10,32798
	ctx.r29.u64 = ctx.r10.u64 | 32798;
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f24,136(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f26,144(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r28,5352(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82523200;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x82523244;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82523264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a6177c
	ctx.lr = 0x82523270;
	__restfpr_22(ctx, base);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523278"))) PPC_WEAK_FUNC(sub_82523278);
PPC_FUNC_IMPL(__imp__sub_82523278) {
	PPC_FUNC_PROLOGUE();
	// b 0x82502ca8
	sub_82502CA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523280"))) PPC_WEAK_FUNC(sub_82523280);
PPC_FUNC_IMPL(__imp__sub_82523280) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6812(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6812);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523294"))) PPC_WEAK_FUNC(sub_82523294);
PPC_FUNC_IMPL(__imp__sub_82523294) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523298"))) PPC_WEAK_FUNC(sub_82523298);
PPC_FUNC_IMPL(__imp__sub_82523298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,6812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6812);
	// lfs f13,620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// lfs f12,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,612(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// lfs f0,616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,600(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 600);
	// stfs f0,492(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 492, temp.u32);
	// lwz r6,608(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// stfs f12,500(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// lwz r7,604(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// stfs f13,496(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// stw r8,476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 476, ctx.r8.u32);
	// stw r7,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r7.u32);
	// stw r6,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r6.u32);
	// stw r9,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523300"))) PPC_WEAK_FUNC(sub_82523300);
PPC_FUNC_IMPL(__imp__sub_82523300) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6808(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6808);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523314"))) PPC_WEAK_FUNC(sub_82523314);
PPC_FUNC_IMPL(__imp__sub_82523314) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523318"))) PPC_WEAK_FUNC(sub_82523318);
PPC_FUNC_IMPL(__imp__sub_82523318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,6808(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6808);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6808(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6808);
	// lfs f13,620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// lfs f12,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,612(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// lfs f0,616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,600(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 600);
	// stfs f0,492(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 492, temp.u32);
	// lwz r6,608(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// stfs f12,500(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// lwz r7,604(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// stfs f13,496(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// stw r8,476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 476, ctx.r8.u32);
	// stw r7,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r7.u32);
	// stw r6,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r6.u32);
	// stw r9,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523380"))) PPC_WEAK_FUNC(sub_82523380);
PPC_FUNC_IMPL(__imp__sub_82523380) {
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
	// lwz r11,2436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2436);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825233A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2428);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825233B8;
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

__attribute__((alias("__imp__sub_825233D0"))) PPC_WEAK_FUNC(sub_825233D0);
PPC_FUNC_IMPL(__imp__sub_825233D0) {
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
	// lwz r11,2440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2440);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825233F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2432);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82523408;
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

__attribute__((alias("__imp__sub_82523420"))) PPC_WEAK_FUNC(sub_82523420);
PPC_FUNC_IMPL(__imp__sub_82523420) {
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
	ctx.lr = 0x8252343C;
	sub_82332928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82523458
	if (ctx.cr0.eq) goto loc_82523458;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,1624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82523458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82523458:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252346C;
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

__attribute__((alias("__imp__sub_82523480"))) PPC_WEAK_FUNC(sub_82523480);
PPC_FUNC_IMPL(__imp__sub_82523480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r4,6712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6712, ctx.r4.u32);
	// stw r5,6704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6704, ctx.r5.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x825234a8
	if (!ctx.cr6.eq) goto loc_825234A8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,-29288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6716(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6716, temp.u32);
	// blr 
	return;
loc_825234A8:
	// stfs f1,6716(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6716, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825234B0"))) PPC_WEAK_FUNC(sub_825234B0);
PPC_FUNC_IMPL(__imp__sub_825234B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825234B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82523614
	if (ctx.cr6.eq) goto loc_82523614;
	// lwz r31,1408(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82523614
	if (ctx.cr6.eq) goto loc_82523614;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825234F0;
	sub_829B9720(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8252351c
	if (!ctx.cr6.gt) goto loc_8252351C;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82523518;
	sub_829B9720(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8252351C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8252354c
	if (ctx.cr6.eq) goto loc_8252354C;
	// bl 0x8249e918
	ctx.lr = 0x82523528;
	sub_8249E918(ctx, base);
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
	ctx.lr = 0x82523540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne 0x82523550
	if (!ctx.cr0.eq) goto loc_82523550;
loc_8252354C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82523550:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252360c
	if (!ctx.cr6.eq) goto loc_8252360C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82523588
	if (ctx.cr6.eq) goto loc_82523588;
	// bl 0x8248d470
	ctx.lr = 0x82523564;
	sub_8248D470(ctx, base);
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
	ctx.lr = 0x8252357C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne 0x8252358c
	if (!ctx.cr0.eq) goto loc_8252358C;
loc_82523588:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252358C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252360c
	if (!ctx.cr6.eq) goto loc_8252360C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x825235c4
	if (ctx.cr6.eq) goto loc_825235C4;
	// bl 0x8249e918
	ctx.lr = 0x825235A0;
	sub_8249E918(ctx, base);
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
	ctx.lr = 0x825235B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x825235c8
	if (!ctx.cr0.eq) goto loc_825235C8;
loc_825235C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825235C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252360c
	if (!ctx.cr6.eq) goto loc_8252360C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82523600
	if (ctx.cr6.eq) goto loc_82523600;
	// bl 0x8248d470
	ctx.lr = 0x825235DC;
	sub_8248D470(ctx, base);
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
	ctx.lr = 0x825235F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x82523604
	if (!ctx.cr0.eq) goto loc_82523604;
loc_82523600:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82523604:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82523614
	if (ctx.cr6.eq) goto loc_82523614;
loc_8252360C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82523618
	goto loc_82523618;
loc_82523614:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82523618:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523620"))) PPC_WEAK_FUNC(sub_82523620);
PPC_FUNC_IMPL(__imp__sub_82523620) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,6676(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6676);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfd f0,19208(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 19208);
	// fadd f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 + ctx.f0.f64;
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,6676(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6676, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82523660
	if (!ctx.cr6.gt) goto loc_82523660;
	// stfs f0,6676(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6676, temp.u32);
loc_82523660:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lwz r31,1428(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1428);
	// lfs f31,6676(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6676);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r11,5608
	ctx.r3.s64 = ctx.r11.s64 + 5608;
	// bl 0x82816528
	ctx.lr = 0x82523674;
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
	ctx.lr = 0x82523688;
	sub_82965458(ctx, base);
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

__attribute__((alias("__imp__sub_825236A0"))) PPC_WEAK_FUNC(sub_825236A0);
PPC_FUNC_IMPL(__imp__sub_825236A0) {
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
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// addi r3,r9,5608
	ctx.r3.s64 = ctx.r9.s64 + 5608;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,6676(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6676, temp.u32);
	// lwz r31,1428(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1428);
	// bl 0x82816528
	ctx.lr = 0x825236D4;
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
	ctx.lr = 0x825236E8;
	sub_82965458(ctx, base);
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

__attribute__((alias("__imp__sub_82523700"))) PPC_WEAK_FUNC(sub_82523700);
PPC_FUNC_IMPL(__imp__sub_82523700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,24424
	ctx.r3.s64 = ctx.r11.s64 + 24424;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828165a8
	ctx.lr = 0x82523728;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8252373c
	if (!ctx.cr6.eq) goto loc_8252373C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2428);
	// b 0x825237d8
	goto loc_825237D8;
loc_8252373C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,24452
	ctx.r3.s64 = ctx.r11.s64 + 24452;
	// bl 0x828165a8
	ctx.lr = 0x82523748;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8252375c
	if (!ctx.cr6.eq) goto loc_8252375C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2432);
	// b 0x825237d8
	goto loc_825237D8;
loc_8252375C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,24484
	ctx.r3.s64 = ctx.r11.s64 + 24484;
	// bl 0x828165a8
	ctx.lr = 0x82523768;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8252377c
	if (!ctx.cr6.eq) goto loc_8252377C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2440);
	// b 0x825237d8
	goto loc_825237D8;
loc_8252377C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,24512
	ctx.r3.s64 = ctx.r11.s64 + 24512;
	// bl 0x828165a8
	ctx.lr = 0x82523788;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8252379c
	if (!ctx.cr6.eq) goto loc_8252379C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2436);
	// b 0x825237d8
	goto loc_825237D8;
loc_8252379C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,24540
	ctx.r3.s64 = ctx.r11.s64 + 24540;
	// bl 0x828165a8
	ctx.lr = 0x825237A8;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x825237bc
	if (!ctx.cr6.eq) goto loc_825237BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2444);
	// b 0x825237d8
	goto loc_825237D8;
loc_825237BC:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,24576
	ctx.r3.s64 = ctx.r11.s64 + 24576;
	// bl 0x828165a8
	ctx.lr = 0x825237C8;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x825237e4
	if (!ctx.cr6.eq) goto loc_825237E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2448);
loc_825237D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825237E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825237E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523800"))) PPC_WEAK_FUNC(sub_82523800);
PPC_FUNC_IMPL(__imp__sub_82523800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82523808;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82503ca8
	ctx.lr = 0x82523818;
	sub_82503CA8(ctx, base);
	// lwz r11,5728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252382c
	if (ctx.cr6.eq) goto loc_8252382C;
	// lwz r4,5724(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5724);
	// b 0x82523834
	goto loc_82523834;
loc_8252382C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82523834:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409058
	ctx.lr = 0x8252383C;
	sub_82409058(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82523860
	if (ctx.cr6.eq) goto loc_82523860;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82523860
	if (ctx.cr6.eq) goto loc_82523860;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x82523860;
	sub_82332DB8(ctx, base);
loc_82523860:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252389c
	if (ctx.cr6.eq) goto loc_8252389C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252389c
	if (ctx.cr6.eq) goto loc_8252389C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,-14132
	ctx.r4.s64 = ctx.r10.s64 + -14132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829e6978
	ctx.lr = 0x82523890;
	sub_829E6978(ctx, base);
	// li r11,6816
	ctx.r11.s64 = 6816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.f0.u32);
loc_8252389C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825238A8"))) PPC_WEAK_FUNC(sub_825238A8);
PPC_FUNC_IMPL(__imp__sub_825238A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825238B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82503038
	ctx.lr = 0x825238BC;
	sub_82503038(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8252391c
	if (!ctx.cr6.eq) goto loc_8252391C;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252391c
	if (!ctx.cr6.eq) goto loc_8252391C;
	// addi r11,r31,6728
	ctx.r11.s64 = ctx.r31.s64 + 6728;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825238F0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6732
	ctx.r10.s64 = ctx.r31.s64 + 6732;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x82523910;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_8252391C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523928"))) PPC_WEAK_FUNC(sub_82523928);
PPC_FUNC_IMPL(__imp__sub_82523928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82523930;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x825031a0
	ctx.lr = 0x82523940;
	sub_825031A0(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82523a40
	if (!ctx.cr6.eq) goto loc_82523A40;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82523a40
	if (!ctx.cr6.eq) goto loc_82523A40;
	// addi r28,r31,6728
	ctx.r28.s64 = ctx.r31.s64 + 6728;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82523974;
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
	ctx.lr = 0x82523998;
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
	ctx.lr = 0x825239AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825239d0
	if (!ctx.cr0.eq) goto loc_825239D0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825239C4;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_825239D0:
	// addi r28,r31,6732
	ctx.r28.s64 = ctx.r31.s64 + 6732;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825239E4;
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
	ctx.lr = 0x82523A08;
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
	ctx.lr = 0x82523A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82523a40
	if (!ctx.cr0.eq) goto loc_82523A40;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82523A34;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82523A40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523A50"))) PPC_WEAK_FUNC(sub_82523A50);
PPC_FUNC_IMPL(__imp__sub_82523A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82523A58;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82523b34
	if (ctx.cr6.eq) goto loc_82523B34;
	// lis r5,-10630
	ctx.r5.s64 = -696647680;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ori r5,r5,28534
	ctx.r5.u64 = ctx.r5.u64 | 28534;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82523AA4;
	sub_823CF190(ctx, base);
	// bl 0x82a4cd78
	ctx.lr = 0x82523AA8;
	sub_82A4CD78(ctx, base);
	// lwz r11,3876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3876);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82523b34
	if (ctx.cr6.eq) goto loc_82523B34;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82523b34
	if (ctx.cr6.eq) goto loc_82523B34;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x82523ACC;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82523b24
	if (ctx.cr0.eq) goto loc_82523B24;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82523af8
	if (ctx.cr6.eq) goto loc_82523AF8;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82523AEC;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82523AF0;
	sub_82409C40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82523afc
	goto loc_82523AFC;
loc_82523AF8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82523AFC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e8098
	ctx.lr = 0x82523B08;
	sub_827E8098(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,-24712
	ctx.r11.s64 = ctx.r11.s64 + -24712;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82523b28
	goto loc_82523B28;
loc_82523B24:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82523B28:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82523B34;
	sub_82833A30(ctx, base);
loc_82523B34:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,2424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82523B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824e16a8
	ctx.lr = 0x82523B60;
	sub_824E16A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523B68"))) PPC_WEAK_FUNC(sub_82523B68);
PPC_FUNC_IMPL(__imp__sub_82523B68) {
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
	// lwz r11,-60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// bl 0x824cf588
	ctx.lr = 0x82523B90;
	sub_824CF588(ctx, base);
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82523c78
	if (ctx.cr6.eq) goto loc_82523C78;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,6824(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6824);
	// lwz r11,6532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6532);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82523c78
	if (ctx.cr6.lt) goto loc_82523C78;
	// lwz r11,-60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// lwz r11,-60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -60);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82523BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82523c78
	if (ctx.cr0.eq) goto loc_82523C78;
	// addic. r11,r31,-64
	ctx.xer.ca = ctx.r31.u32 > 63;
	ctx.r11.s64 = ctx.r31.s64 + -64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82523be8
	if (!ctx.cr0.eq) goto loc_82523BE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82523bf8
	goto loc_82523BF8;
loc_82523BE8:
	// lwz r11,-60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
loc_82523BF8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1672);
	// bl 0x824d77f8
	ctx.lr = 0x82523C0C;
	sub_824D77F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82523c78
	if (ctx.cr0.eq) goto loc_82523C78;
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lfs f0,624(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,628(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,620(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
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
	// lfs f11,6520(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6520);
	ctx.f11.f64 = double(temp.f32);
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
	// bgt cr6,0x82523c78
	if (ctx.cr6.gt) goto loc_82523C78;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,6824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6824, ctx.r10.u32);
	// lwz r3,-28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82523C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82523C78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523C90"))) PPC_WEAK_FUNC(sub_82523C90);
PPC_FUNC_IMPL(__imp__sub_82523C90) {
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
	// lwz r11,-60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// bl 0x824cf588
	ctx.lr = 0x82523CB8;
	sub_824CF588(ctx, base);
	// lwz r11,-60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,1524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82523da0
	if (ctx.cr6.eq) goto loc_82523DA0;
	// lwz r11,-60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// lwz r11,-60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -60);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82523CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82523da0
	if (ctx.cr0.eq) goto loc_82523DA0;
	// addic. r11,r31,-64
	ctx.xer.ca = ctx.r31.u32 > 63;
	ctx.r11.s64 = ctx.r31.s64 + -64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82523d08
	if (!ctx.cr0.eq) goto loc_82523D08;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82523d18
	goto loc_82523D18;
loc_82523D08:
	// lwz r11,-60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
loc_82523D18:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1672);
	// bl 0x824d77f8
	ctx.lr = 0x82523D2C;
	sub_824D77F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82523da0
	if (ctx.cr0.eq) goto loc_82523DA0;
	// lwz r11,-60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f13,620(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,628(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,624(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,16816(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16816);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,1352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1352);
	// lfs f10,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f10,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f10,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82523da0
	if (ctx.cr6.gt) goto loc_82523DA0;
	// lwz r3,1524(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1524);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1876);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82523DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82523DA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523DB8"))) PPC_WEAK_FUNC(sub_82523DB8);
PPC_FUNC_IMPL(__imp__sub_82523DB8) {
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
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x824cf588
	ctx.lr = 0x82523DE0;
	sub_824CF588(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,1552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82523ec8
	if (ctx.cr6.eq) goto loc_82523EC8;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// lwz r11,-32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82523E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82523ec8
	if (ctx.cr0.eq) goto loc_82523EC8;
	// addic. r11,r31,-32
	ctx.xer.ca = ctx.r31.u32 > 31;
	ctx.r11.s64 = ctx.r31.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82523e30
	if (!ctx.cr0.eq) goto loc_82523E30;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82523e40
	goto loc_82523E40;
loc_82523E30:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
loc_82523E40:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1672);
	// bl 0x824d77f8
	ctx.lr = 0x82523E54;
	sub_824D77F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82523ec8
	if (ctx.cr0.eq) goto loc_82523EC8;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f13,620(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,628(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,624(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,16816(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16816);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,1380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1380);
	// lfs f10,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f10,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f10,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82523ec8
	if (ctx.cr6.gt) goto loc_82523EC8;
	// lwz r3,1552(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1552);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1876);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82523EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82523EC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523EE0"))) PPC_WEAK_FUNC(sub_82523EE0);
PPC_FUNC_IMPL(__imp__sub_82523EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-23604
	ctx.r3.s64 = ctx.r11.s64 + -23604;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523EF0"))) PPC_WEAK_FUNC(sub_82523EF0);
PPC_FUNC_IMPL(__imp__sub_82523EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82523f28
	if (ctx.cr6.eq) goto loc_82523F28;
	// bl 0x823a2830
	ctx.lr = 0x82523F18;
	sub_823A2830(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82523f28
	if (!ctx.cr6.eq) goto loc_82523F28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82523f34
	goto loc_82523F34;
loc_82523F28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82353018
	ctx.lr = 0x82523F34;
	sub_82353018(ctx, base);
loc_82523F34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523F50"))) PPC_WEAK_FUNC(sub_82523F50);
PPC_FUNC_IMPL(__imp__sub_82523F50) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a2830
	sub_823A2830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523F58"))) PPC_WEAK_FUNC(sub_82523F58);
PPC_FUNC_IMPL(__imp__sub_82523F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,6912
	ctx.r3.s64 = 6912;
	// bl 0x82833108
	ctx.lr = 0x82523F78;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82523fb8
	if (ctx.cr0.eq) goto loc_82523FB8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82353160
	ctx.lr = 0x82523F8C;
	sub_82353160(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r11,r11,25224
	ctx.r11.s64 = ctx.r11.s64 + 25224;
	// addi r10,r10,27708
	ctx.r10.s64 = ctx.r10.s64 + 27708;
	// addi r9,r9,-32704
	ctx.r9.s64 = ctx.r9.s64 + -32704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82523fbc
	goto loc_82523FBC;
loc_82523FB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82523FBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523FD8"))) PPC_WEAK_FUNC(sub_82523FD8);
PPC_FUNC_IMPL(__imp__sub_82523FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a2830
	ctx.lr = 0x82523FF8;
	sub_823A2830(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82524008
	if (!ctx.cr6.eq) goto loc_82524008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82524020
	goto loc_82524020;
loc_82524008:
	// bl 0x8239fb50
	ctx.lr = 0x8252400C;
	sub_8239FB50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82524020
	if (ctx.cr6.eq) goto loc_82524020;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82352b10
	ctx.lr = 0x82524020;
	sub_82352B10(ctx, base);
loc_82524020:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524038"))) PPC_WEAK_FUNC(sub_82524038);
PPC_FUNC_IMPL(__imp__sub_82524038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,24616
	ctx.r3.s64 = ctx.r11.s64 + 24616;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524048"))) PPC_WEAK_FUNC(sub_82524048);
PPC_FUNC_IMPL(__imp__sub_82524048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-23244
	ctx.r3.s64 = ctx.r11.s64 + -23244;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524058"))) PPC_WEAK_FUNC(sub_82524058);
PPC_FUNC_IMPL(__imp__sub_82524058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82524090
	if (ctx.cr6.eq) goto loc_82524090;
	// bl 0x823a2e38
	ctx.lr = 0x82524080;
	sub_823A2E38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82524090
	if (!ctx.cr6.eq) goto loc_82524090;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8252409c
	goto loc_8252409C;
loc_82524090:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82353018
	ctx.lr = 0x8252409C;
	sub_82353018(ctx, base);
loc_8252409C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825240B8"))) PPC_WEAK_FUNC(sub_825240B8);
PPC_FUNC_IMPL(__imp__sub_825240B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a2e38
	sub_823A2E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825240C0"))) PPC_WEAK_FUNC(sub_825240C0);
PPC_FUNC_IMPL(__imp__sub_825240C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,6912
	ctx.r3.s64 = 6912;
	// bl 0x82833108
	ctx.lr = 0x825240E0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82524120
	if (ctx.cr0.eq) goto loc_82524120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82353160
	ctx.lr = 0x825240F4;
	sub_82353160(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r11,r11,27760
	ctx.r11.s64 = ctx.r11.s64 + 27760;
	// addi r10,r10,30244
	ctx.r10.s64 = ctx.r10.s64 + 30244;
	// addi r9,r9,-32704
	ctx.r9.s64 = ctx.r9.s64 + -32704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82524124
	goto loc_82524124;
loc_82524120:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82524124:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524140"))) PPC_WEAK_FUNC(sub_82524140);
PPC_FUNC_IMPL(__imp__sub_82524140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a2e38
	ctx.lr = 0x82524160;
	sub_823A2E38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82524170
	if (!ctx.cr6.eq) goto loc_82524170;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82524188
	goto loc_82524188;
loc_82524170:
	// bl 0x8239fb50
	ctx.lr = 0x82524174;
	sub_8239FB50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82524188
	if (ctx.cr6.eq) goto loc_82524188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82352b10
	ctx.lr = 0x82524188;
	sub_82352B10(ctx, base);
loc_82524188:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825241A0"))) PPC_WEAK_FUNC(sub_825241A0);
PPC_FUNC_IMPL(__imp__sub_825241A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,24688
	ctx.r3.s64 = ctx.r11.s64 + 24688;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825241B0"))) PPC_WEAK_FUNC(sub_825241B0);
PPC_FUNC_IMPL(__imp__sub_825241B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-23096
	ctx.r3.s64 = ctx.r11.s64 + -23096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825241C0"))) PPC_WEAK_FUNC(sub_825241C0);
PPC_FUNC_IMPL(__imp__sub_825241C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825241f8
	if (ctx.cr6.eq) goto loc_825241F8;
	// bl 0x823a2fd0
	ctx.lr = 0x825241E8;
	sub_823A2FD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825241f8
	if (!ctx.cr6.eq) goto loc_825241F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82524204
	goto loc_82524204;
loc_825241F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82353018
	ctx.lr = 0x82524204;
	sub_82353018(ctx, base);
loc_82524204:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524220"))) PPC_WEAK_FUNC(sub_82524220);
PPC_FUNC_IMPL(__imp__sub_82524220) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a2fd0
	sub_823A2FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524228"))) PPC_WEAK_FUNC(sub_82524228);
PPC_FUNC_IMPL(__imp__sub_82524228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,6912
	ctx.r3.s64 = 6912;
	// bl 0x82833108
	ctx.lr = 0x82524248;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82524288
	if (ctx.cr0.eq) goto loc_82524288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82353160
	ctx.lr = 0x8252425C;
	sub_82353160(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r11,r11,30296
	ctx.r11.s64 = ctx.r11.s64 + 30296;
	// addi r10,r10,-32756
	ctx.r10.s64 = ctx.r10.s64 + -32756;
	// addi r9,r9,-32704
	ctx.r9.s64 = ctx.r9.s64 + -32704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8252428c
	goto loc_8252428C;
loc_82524288:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8252428C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825242A8"))) PPC_WEAK_FUNC(sub_825242A8);
PPC_FUNC_IMPL(__imp__sub_825242A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a2fd0
	ctx.lr = 0x825242C8;
	sub_823A2FD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825242d8
	if (!ctx.cr6.eq) goto loc_825242D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825242f0
	goto loc_825242F0;
loc_825242D8:
	// bl 0x8239fb50
	ctx.lr = 0x825242DC;
	sub_8239FB50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825242f0
	if (ctx.cr6.eq) goto loc_825242F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82352b10
	ctx.lr = 0x825242F0;
	sub_82352B10(ctx, base);
loc_825242F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524308"))) PPC_WEAK_FUNC(sub_82524308);
PPC_FUNC_IMPL(__imp__sub_82524308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,24768
	ctx.r3.s64 = ctx.r11.s64 + 24768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524318"))) PPC_WEAK_FUNC(sub_82524318);
PPC_FUNC_IMPL(__imp__sub_82524318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-22956
	ctx.r3.s64 = ctx.r11.s64 + -22956;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524328"))) PPC_WEAK_FUNC(sub_82524328);
PPC_FUNC_IMPL(__imp__sub_82524328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82524360
	if (ctx.cr6.eq) goto loc_82524360;
	// bl 0x823a32e0
	ctx.lr = 0x82524350;
	sub_823A32E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82524360
	if (!ctx.cr6.eq) goto loc_82524360;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8252436c
	goto loc_8252436C;
loc_82524360:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82353018
	ctx.lr = 0x8252436C;
	sub_82353018(ctx, base);
loc_8252436C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524388"))) PPC_WEAK_FUNC(sub_82524388);
PPC_FUNC_IMPL(__imp__sub_82524388) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a32e0
	sub_823A32E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524390"))) PPC_WEAK_FUNC(sub_82524390);
PPC_FUNC_IMPL(__imp__sub_82524390) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239fb50
	sub_8239FB50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524398"))) PPC_WEAK_FUNC(sub_82524398);
PPC_FUNC_IMPL(__imp__sub_82524398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,6912
	ctx.r3.s64 = 6912;
	// bl 0x82833108
	ctx.lr = 0x825243B8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825243f8
	if (ctx.cr0.eq) goto loc_825243F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82353160
	ctx.lr = 0x825243CC;
	sub_82353160(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r11,r11,-32680
	ctx.r11.s64 = ctx.r11.s64 + -32680;
	// addi r10,r10,-30196
	ctx.r10.s64 = ctx.r10.s64 + -30196;
	// addi r9,r9,-32704
	ctx.r9.s64 = ctx.r9.s64 + -32704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825243fc
	goto loc_825243FC;
loc_825243F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825243FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524418"))) PPC_WEAK_FUNC(sub_82524418);
PPC_FUNC_IMPL(__imp__sub_82524418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a32e0
	ctx.lr = 0x82524438;
	sub_823A32E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82524448
	if (!ctx.cr6.eq) goto loc_82524448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82524460
	goto loc_82524460;
loc_82524448:
	// bl 0x8239fb50
	ctx.lr = 0x8252444C;
	sub_8239FB50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82524460
	if (ctx.cr6.eq) goto loc_82524460;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82352b10
	ctx.lr = 0x82524460;
	sub_82352B10(ctx, base);
loc_82524460:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524478"))) PPC_WEAK_FUNC(sub_82524478);
PPC_FUNC_IMPL(__imp__sub_82524478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,24832
	ctx.r3.s64 = ctx.r11.s64 + 24832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524488"))) PPC_WEAK_FUNC(sub_82524488);
PPC_FUNC_IMPL(__imp__sub_82524488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-22924
	ctx.r3.s64 = ctx.r11.s64 + -22924;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524498"))) PPC_WEAK_FUNC(sub_82524498);
PPC_FUNC_IMPL(__imp__sub_82524498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825244d0
	if (ctx.cr6.eq) goto loc_825244D0;
	// bl 0x823a3460
	ctx.lr = 0x825244C0;
	sub_823A3460(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825244d0
	if (!ctx.cr6.eq) goto loc_825244D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825244dc
	goto loc_825244DC;
loc_825244D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357268
	ctx.lr = 0x825244DC;
	sub_82357268(ctx, base);
loc_825244DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825244F8"))) PPC_WEAK_FUNC(sub_825244F8);
PPC_FUNC_IMPL(__imp__sub_825244F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a3460
	sub_823A3460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524500"))) PPC_WEAK_FUNC(sub_82524500);
PPC_FUNC_IMPL(__imp__sub_82524500) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a1238
	sub_823A1238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524508"))) PPC_WEAK_FUNC(sub_82524508);
PPC_FUNC_IMPL(__imp__sub_82524508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,6880
	ctx.r3.s64 = 6880;
	// bl 0x82833108
	ctx.lr = 0x82524528;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82524568
	if (ctx.cr0.eq) goto loc_82524568;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823573a0
	ctx.lr = 0x8252453C;
	sub_823573A0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r11,r11,-30144
	ctx.r11.s64 = ctx.r11.s64 + -30144;
	// addi r10,r10,-27680
	ctx.r10.s64 = ctx.r10.s64 + -27680;
	// addi r9,r9,3716
	ctx.r9.s64 = ctx.r9.s64 + 3716;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8252456c
	goto loc_8252456C;
loc_82524568:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8252456C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524588"))) PPC_WEAK_FUNC(sub_82524588);
PPC_FUNC_IMPL(__imp__sub_82524588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a3460
	ctx.lr = 0x825245A8;
	sub_823A3460(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825245b8
	if (!ctx.cr6.eq) goto loc_825245B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825245d0
	goto loc_825245D0;
loc_825245B8:
	// bl 0x823a1238
	ctx.lr = 0x825245BC;
	sub_823A1238(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825245d0
	if (ctx.cr6.eq) goto loc_825245D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82352b10
	ctx.lr = 0x825245D0;
	sub_82352B10(ctx, base);
loc_825245D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825245E8"))) PPC_WEAK_FUNC(sub_825245E8);
PPC_FUNC_IMPL(__imp__sub_825245E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,24912
	ctx.r3.s64 = ctx.r11.s64 + 24912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825245F8"))) PPC_WEAK_FUNC(sub_825245F8);
PPC_FUNC_IMPL(__imp__sub_825245F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-22552
	ctx.r3.s64 = ctx.r11.s64 + -22552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524608"))) PPC_WEAK_FUNC(sub_82524608);
PPC_FUNC_IMPL(__imp__sub_82524608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82524640
	if (ctx.cr6.eq) goto loc_82524640;
	// bl 0x823a3a78
	ctx.lr = 0x82524630;
	sub_823A3A78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82524640
	if (!ctx.cr6.eq) goto loc_82524640;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8252464c
	goto loc_8252464C;
loc_82524640:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357268
	ctx.lr = 0x8252464C;
	sub_82357268(ctx, base);
loc_8252464C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524668"))) PPC_WEAK_FUNC(sub_82524668);
PPC_FUNC_IMPL(__imp__sub_82524668) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a3a78
	sub_823A3A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524670"))) PPC_WEAK_FUNC(sub_82524670);
PPC_FUNC_IMPL(__imp__sub_82524670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,6880
	ctx.r3.s64 = 6880;
	// bl 0x82833108
	ctx.lr = 0x82524690;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825246d0
	if (ctx.cr0.eq) goto loc_825246D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823573a0
	ctx.lr = 0x825246A4;
	sub_823573A0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r11,r11,-27624
	ctx.r11.s64 = ctx.r11.s64 + -27624;
	// addi r10,r10,-25160
	ctx.r10.s64 = ctx.r10.s64 + -25160;
	// addi r9,r9,3716
	ctx.r9.s64 = ctx.r9.s64 + 3716;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825246d4
	goto loc_825246D4;
loc_825246D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825246D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825246F0"))) PPC_WEAK_FUNC(sub_825246F0);
PPC_FUNC_IMPL(__imp__sub_825246F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a3a78
	ctx.lr = 0x82524710;
	sub_823A3A78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82524720
	if (!ctx.cr6.eq) goto loc_82524720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82524738
	goto loc_82524738;
loc_82524720:
	// bl 0x823a1238
	ctx.lr = 0x82524724;
	sub_823A1238(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82524738
	if (ctx.cr6.eq) goto loc_82524738;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82352b10
	ctx.lr = 0x82524738;
	sub_82352B10(ctx, base);
loc_82524738:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524750"))) PPC_WEAK_FUNC(sub_82524750);
PPC_FUNC_IMPL(__imp__sub_82524750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,24992
	ctx.r3.s64 = ctx.r11.s64 + 24992;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524760"))) PPC_WEAK_FUNC(sub_82524760);
PPC_FUNC_IMPL(__imp__sub_82524760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-22520
	ctx.r3.s64 = ctx.r11.s64 + -22520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524770"))) PPC_WEAK_FUNC(sub_82524770);
PPC_FUNC_IMPL(__imp__sub_82524770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825247a8
	if (ctx.cr6.eq) goto loc_825247A8;
	// bl 0x823a3c10
	ctx.lr = 0x82524798;
	sub_823A3C10(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825247a8
	if (!ctx.cr6.eq) goto loc_825247A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825247b4
	goto loc_825247B4;
loc_825247A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357268
	ctx.lr = 0x825247B4;
	sub_82357268(ctx, base);
loc_825247B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825247D0"))) PPC_WEAK_FUNC(sub_825247D0);
PPC_FUNC_IMPL(__imp__sub_825247D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a3c10
	sub_823A3C10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825247D8"))) PPC_WEAK_FUNC(sub_825247D8);
PPC_FUNC_IMPL(__imp__sub_825247D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,6880
	ctx.r3.s64 = 6880;
	// bl 0x82833108
	ctx.lr = 0x825247F8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82524838
	if (ctx.cr0.eq) goto loc_82524838;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823573a0
	ctx.lr = 0x8252480C;
	sub_823573A0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r11,r11,-25104
	ctx.r11.s64 = ctx.r11.s64 + -25104;
	// addi r10,r10,-22640
	ctx.r10.s64 = ctx.r10.s64 + -22640;
	// addi r9,r9,3716
	ctx.r9.s64 = ctx.r9.s64 + 3716;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8252483c
	goto loc_8252483C;
loc_82524838:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8252483C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524858"))) PPC_WEAK_FUNC(sub_82524858);
PPC_FUNC_IMPL(__imp__sub_82524858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a3c10
	ctx.lr = 0x82524878;
	sub_823A3C10(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82524888
	if (!ctx.cr6.eq) goto loc_82524888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825248a0
	goto loc_825248A0;
loc_82524888:
	// bl 0x823a1238
	ctx.lr = 0x8252488C;
	sub_823A1238(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825248a0
	if (ctx.cr6.eq) goto loc_825248A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82352b10
	ctx.lr = 0x825248A0;
	sub_82352B10(ctx, base);
loc_825248A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825248B8"))) PPC_WEAK_FUNC(sub_825248B8);
PPC_FUNC_IMPL(__imp__sub_825248B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,25072
	ctx.r3.s64 = ctx.r11.s64 + 25072;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825248C8"))) PPC_WEAK_FUNC(sub_825248C8);
PPC_FUNC_IMPL(__imp__sub_825248C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-22492
	ctx.r3.s64 = ctx.r11.s64 + -22492;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825248D8"))) PPC_WEAK_FUNC(sub_825248D8);
PPC_FUNC_IMPL(__imp__sub_825248D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82524910
	if (ctx.cr6.eq) goto loc_82524910;
	// bl 0x823a3d90
	ctx.lr = 0x82524900;
	sub_823A3D90(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82524910
	if (!ctx.cr6.eq) goto loc_82524910;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8252491c
	goto loc_8252491C;
loc_82524910:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357268
	ctx.lr = 0x8252491C;
	sub_82357268(ctx, base);
loc_8252491C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524938"))) PPC_WEAK_FUNC(sub_82524938);
PPC_FUNC_IMPL(__imp__sub_82524938) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a3d90
	sub_823A3D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524940"))) PPC_WEAK_FUNC(sub_82524940);
PPC_FUNC_IMPL(__imp__sub_82524940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,6880
	ctx.r3.s64 = 6880;
	// bl 0x82833108
	ctx.lr = 0x82524960;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825249a0
	if (ctx.cr0.eq) goto loc_825249A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823573a0
	ctx.lr = 0x82524974;
	sub_823573A0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r11,r11,-22584
	ctx.r11.s64 = ctx.r11.s64 + -22584;
	// addi r10,r10,-20120
	ctx.r10.s64 = ctx.r10.s64 + -20120;
	// addi r9,r9,3716
	ctx.r9.s64 = ctx.r9.s64 + 3716;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825249a4
	goto loc_825249A4;
loc_825249A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825249A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825249C0"))) PPC_WEAK_FUNC(sub_825249C0);
PPC_FUNC_IMPL(__imp__sub_825249C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a3d90
	ctx.lr = 0x825249E0;
	sub_823A3D90(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825249f0
	if (!ctx.cr6.eq) goto loc_825249F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82524a08
	goto loc_82524A08;
loc_825249F0:
	// bl 0x823a1238
	ctx.lr = 0x825249F4;
	sub_823A1238(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82524a08
	if (ctx.cr6.eq) goto loc_82524A08;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82352b10
	ctx.lr = 0x82524A08;
	sub_82352B10(ctx, base);
loc_82524A08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524A20"))) PPC_WEAK_FUNC(sub_82524A20);
PPC_FUNC_IMPL(__imp__sub_82524A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,25144
	ctx.r3.s64 = ctx.r11.s64 + 25144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524A30"))) PPC_WEAK_FUNC(sub_82524A30);
PPC_FUNC_IMPL(__imp__sub_82524A30) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,6640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6640);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82524a5c
	if (!ctx.cr6.eq) goto loc_82524A5C;
	// lwz r10,6664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6664);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82524a64
	if (!ctx.cr6.eq) goto loc_82524A64;
loc_82524A5C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82524ac8
	if (!ctx.cr6.eq) goto loc_82524AC8;
loc_82524A64:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// ld r7,620(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 620);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r3,-31949
	ctx.r3.s64 = -2093809664;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,-904(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -904);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r10,r11,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,10548(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// bl 0x8242f058
	ctx.lr = 0x82524AA4;
	sub_8242F058(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82524AB4;
	sub_8233A258(ctx, base);
	// lis r4,13368
	ctx.r4.s64 = 876085248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,39156
	ctx.r4.u64 = ctx.r4.u64 | 39156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82524AC8;
	sub_829C3740(ctx, base);
loc_82524AC8:
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

__attribute__((alias("__imp__sub_82524AE0"))) PPC_WEAK_FUNC(sub_82524AE0);
PPC_FUNC_IMPL(__imp__sub_82524AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82524AE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6640);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82524b08
	if (!ctx.cr6.eq) goto loc_82524B08;
	// lwz r10,6664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6664);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82524b10
	if (!ctx.cr6.eq) goto loc_82524B10;
loc_82524B08:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82524b8c
	if (!ctx.cr6.eq) goto loc_82524B8C;
loc_82524B10:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r10,-18036
	ctx.r3.s64 = ctx.r10.s64 + -18036;
	// lwz r29,628(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x82816528
	ctx.lr = 0x82524B3C;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rldicr r8,r29,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r10,r30,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x8242f058
	ctx.lr = 0x82524B68;
	sub_8242F058(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82524B78;
	sub_8233A258(ctx, base);
	// lis r4,13368
	ctx.r4.s64 = 876085248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,39156
	ctx.r4.u64 = ctx.r4.u64 | 39156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82524B8C;
	sub_829C3740(ctx, base);
loc_82524B8C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524B98"))) PPC_WEAK_FUNC(sub_82524B98);
PPC_FUNC_IMPL(__imp__sub_82524B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,6640(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 6640);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82524bc0
	if (!ctx.cr6.eq) goto loc_82524BC0;
	// lwz r10,6664(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 6664);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82524bc8
	if (!ctx.cr6.eq) goto loc_82524BC8;
loc_82524BC0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82524c04
	if (!ctx.cr6.eq) goto loc_82524C04;
loc_82524BC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,628(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 628);
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// ld r7,620(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 620);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r3,-31949
	ctx.r3.s64 = -2093809664;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,-892(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -892);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r10,r11,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,10548(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// bl 0x8242f058
	ctx.lr = 0x82524C04;
	sub_8242F058(ctx, base);
loc_82524C04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524C18"))) PPC_WEAK_FUNC(sub_82524C18);
PPC_FUNC_IMPL(__imp__sub_82524C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82524C20;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6640);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82524c40
	if (!ctx.cr6.eq) goto loc_82524C40;
	// lwz r10,6664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6664);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82524c48
	if (!ctx.cr6.eq) goto loc_82524C48;
loc_82524C40:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82524cc4
	if (!ctx.cr6.eq) goto loc_82524CC4;
loc_82524C48:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r10,-23980
	ctx.r3.s64 = ctx.r10.s64 + -23980;
	// lwz r29,628(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x82816528
	ctx.lr = 0x82524C74;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rldicr r8,r29,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r10,r30,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x8242f058
	ctx.lr = 0x82524CA0;
	sub_8242F058(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82524CB0;
	sub_8233A258(ctx, base);
	// lis r4,13368
	ctx.r4.s64 = 876085248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,39156
	ctx.r4.u64 = ctx.r4.u64 | 39156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82524CC4;
	sub_829C3740(ctx, base);
loc_82524CC4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524CD0"))) PPC_WEAK_FUNC(sub_82524CD0);
PPC_FUNC_IMPL(__imp__sub_82524CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82524CD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6640);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82524cf8
	if (!ctx.cr6.eq) goto loc_82524CF8;
	// lwz r10,6664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6664);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82524d00
	if (!ctx.cr6.eq) goto loc_82524D00;
loc_82524CF8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82524d58
	if (!ctx.cr6.eq) goto loc_82524D58;
loc_82524D00:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r10,-23132
	ctx.r3.s64 = ctx.r10.s64 + -23132;
	// lwz r29,628(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x82816528
	ctx.lr = 0x82524D2C;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rldicr r8,r29,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r10,r30,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x8242f058
	ctx.lr = 0x82524D58;
	sub_8242F058(ctx, base);
loc_82524D58:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524D60"))) PPC_WEAK_FUNC(sub_82524D60);
PPC_FUNC_IMPL(__imp__sub_82524D60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825249c0
	sub_825249C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524D68"))) PPC_WEAK_FUNC(sub_82524D68);
PPC_FUNC_IMPL(__imp__sub_82524D68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82524858
	sub_82524858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524D70"))) PPC_WEAK_FUNC(sub_82524D70);
PPC_FUNC_IMPL(__imp__sub_82524D70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825246f0
	sub_825246F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524D78"))) PPC_WEAK_FUNC(sub_82524D78);
PPC_FUNC_IMPL(__imp__sub_82524D78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82524418
	sub_82524418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524D80"))) PPC_WEAK_FUNC(sub_82524D80);
PPC_FUNC_IMPL(__imp__sub_82524D80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82524588
	sub_82524588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524D88"))) PPC_WEAK_FUNC(sub_82524D88);
PPC_FUNC_IMPL(__imp__sub_82524D88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82524140
	sub_82524140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524D90"))) PPC_WEAK_FUNC(sub_82524D90);
PPC_FUNC_IMPL(__imp__sub_82524D90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82523fd8
	sub_82523FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524D98"))) PPC_WEAK_FUNC(sub_82524D98);
PPC_FUNC_IMPL(__imp__sub_82524D98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825242a8
	sub_825242A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524DA0"))) PPC_WEAK_FUNC(sub_82524DA0);
PPC_FUNC_IMPL(__imp__sub_82524DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-20068
	ctx.r3.s64 = ctx.r11.s64 + -20068;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524DB0"))) PPC_WEAK_FUNC(sub_82524DB0);
PPC_FUNC_IMPL(__imp__sub_82524DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82524de8
	if (ctx.cr6.eq) goto loc_82524DE8;
	// bl 0x82525190
	ctx.lr = 0x82524DD8;
	sub_82525190(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82524de8
	if (!ctx.cr6.eq) goto loc_82524DE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82524dfc
	goto loc_82524DFC;
loc_82524DE8:
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823510a0
	ctx.lr = 0x82524DFC;
	sub_823510A0(ctx, base);
loc_82524DFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524E18"))) PPC_WEAK_FUNC(sub_82524E18);
PPC_FUNC_IMPL(__imp__sub_82524E18) {
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
	// li r3,2016
	ctx.r3.s64 = 2016;
	// bl 0x82833108
	ctx.lr = 0x82524E34;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82524e4c
	if (ctx.cr0.eq) goto loc_82524E4C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82524ed8
	ctx.lr = 0x82524E48;
	sub_82524ED8(ctx, base);
	// b 0x82524e50
	goto loc_82524E50;
loc_82524E4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82524E50:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82524e64
	if (ctx.cr6.eq) goto loc_82524E64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82524E64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524E78"))) PPC_WEAK_FUNC(sub_82524E78);
PPC_FUNC_IMPL(__imp__sub_82524E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82525190
	ctx.lr = 0x82524E98;
	sub_82525190(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82524ea8
	if (!ctx.cr6.eq) goto loc_82524EA8;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// b 0x82524ebc
	goto loc_82524EBC;
loc_82524EA8:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82351168
	ctx.lr = 0x82524EBC;
	sub_82351168(ctx, base);
loc_82524EBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524ED8"))) PPC_WEAK_FUNC(sub_82524ED8);
PPC_FUNC_IMPL(__imp__sub_82524ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82524EE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82524f60
	if (ctx.cr6.eq) goto loc_82524F60;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-18416
	ctx.r11.s64 = ctx.r11.s64 + -18416;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r29,r31,2000
	ctx.r29.s64 = ctx.r31.s64 + 2000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// bne cr6,0x82524f24
	if (!ctx.cr6.eq) goto loc_82524F24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82524f30
	goto loc_82524F30;
loc_82524F24:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82524F30:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823ff1a0
	ctx.lr = 0x82524F38;
	sub_823FF1A0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82524f48
	if (!ctx.cr6.eq) goto loc_82524F48;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82524f54
	goto loc_82524F54;
loc_82524F48:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82524F54:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823511c8
	ctx.lr = 0x82524F60;
	sub_823511C8(ctx, base);
loc_82524F60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r10,r10,-20040
	ctx.r10.s64 = ctx.r10.s64 + -20040;
	// addi r9,r9,-18468
	ctx.r9.s64 = ctx.r9.s64 + -18468;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r8,19272
	ctx.r8.s64 = ctx.r8.s64 + 19272;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524FC0"))) PPC_WEAK_FUNC(sub_82524FC0);
PPC_FUNC_IMPL(__imp__sub_82524FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82524FC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8252500c
	if (ctx.cr6.eq) goto loc_8252500C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-18416
	ctx.r11.s64 = ctx.r11.s64 + -18416;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// addi r29,r31,2000
	ctx.r29.s64 = ctx.r31.s64 + 2000;
	// bl 0x824cbb48
	ctx.lr = 0x82525000;
	sub_824CBB48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82501770
	ctx.lr = 0x8252500C;
	sub_82501770(ctx, base);
loc_8252500C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r10,r10,-20040
	ctx.r10.s64 = ctx.r10.s64 + -20040;
	// addi r9,r9,-18468
	ctx.r9.s64 = ctx.r9.s64 + -18468;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r8,19272
	ctx.r8.s64 = ctx.r8.s64 + 19272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,1760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1760, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,1764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1764, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525098"))) PPC_WEAK_FUNC(sub_82525098);
PPC_FUNC_IMPL(__imp__sub_82525098) {
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
	// li r3,2016
	ctx.r3.s64 = 2016;
	// bl 0x82833108
	ctx.lr = 0x825250AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825250c0
	if (ctx.cr0.eq) goto loc_825250C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82524fc0
	ctx.lr = 0x825250BC;
	sub_82524FC0(ctx, base);
	// b 0x825250c4
	goto loc_825250C4;
loc_825250C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825250C4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825250d8
	if (ctx.cr6.eq) goto loc_825250D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_825250D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825250E8"))) PPC_WEAK_FUNC(sub_825250E8);
PPC_FUNC_IMPL(__imp__sub_825250E8) {
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
	// lwz r11,25936(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25936);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82525128
	if (!ctx.cr0.eq) goto loc_82525128;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r11,25936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25936, ctx.r11.u32);
	// addi r3,r9,-20068
	ctx.r3.s64 = ctx.r9.s64 + -20068;
	// bl 0x82816528
	ctx.lr = 0x82525120;
	sub_82816528(ctx, base);
	// stw r3,25932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25932, ctx.r3.u32);
	// b 0x8252512c
	goto loc_8252512C;
loc_82525128:
	// lwz r3,25932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25932);
loc_8252512C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525140"))) PPC_WEAK_FUNC(sub_82525140);
PPC_FUNC_IMPL(__imp__sub_82525140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82525190
	ctx.lr = 0x82525160;
	sub_82525190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82525174;
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

__attribute__((alias("__imp__sub_82525190"))) PPC_WEAK_FUNC(sub_82525190);
PPC_FUNC_IMPL(__imp__sub_82525190) {
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
	// addi r31,r11,12048
	ctx.r31.s64 = ctx.r11.s64 + 12048;
	// lwz r11,12044(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12044);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825251d8
	if (!ctx.cr0.eq) goto loc_825251D8;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-18404
	ctx.r9.s64 = ctx.r9.s64 + -18404;
	// stw r11,12044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12044, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,19008
	ctx.r3.s64 = ctx.r11.s64 + 19008;
	// bl 0x82a4c758
	ctx.lr = 0x825251D8;
	sub_82A4C758(ctx, base);
loc_825251D8:
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

__attribute__((alias("__imp__sub_825251F0"))) PPC_WEAK_FUNC(sub_825251F0);
PPC_FUNC_IMPL(__imp__sub_825251F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82524e78
	sub_82524E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525200"))) PPC_WEAK_FUNC(sub_82525200);
PPC_FUNC_IMPL(__imp__sub_82525200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82524e18
	sub_82524E18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525210"))) PPC_WEAK_FUNC(sub_82525210);
PPC_FUNC_IMPL(__imp__sub_82525210) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82524e78
	sub_82524E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525220"))) PPC_WEAK_FUNC(sub_82525220);
PPC_FUNC_IMPL(__imp__sub_82525220) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82524da0
	sub_82524DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525230"))) PPC_WEAK_FUNC(sub_82525230);
PPC_FUNC_IMPL(__imp__sub_82525230) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82524db0
	sub_82524DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525240"))) PPC_WEAK_FUNC(sub_82525240);
PPC_FUNC_IMPL(__imp__sub_82525240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-21304
	ctx.r3.s64 = ctx.r11.s64 + -21304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525250"))) PPC_WEAK_FUNC(sub_82525250);
PPC_FUNC_IMPL(__imp__sub_82525250) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a5588
	sub_823A5588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525258"))) PPC_WEAK_FUNC(sub_82525258);
PPC_FUNC_IMPL(__imp__sub_82525258) {
	PPC_FUNC_PROLOGUE();
	// b 0x82525190
	sub_82525190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525260"))) PPC_WEAK_FUNC(sub_82525260);
PPC_FUNC_IMPL(__imp__sub_82525260) {
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
	// li r3,2112
	ctx.r3.s64 = 2112;
	// bl 0x82833108
	ctx.lr = 0x8252527C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82525294
	if (ctx.cr0.eq) goto loc_82525294;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82525400
	ctx.lr = 0x82525290;
	sub_82525400(ctx, base);
	// b 0x82525298
	goto loc_82525298;
loc_82525294:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82525298:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825252ac
	if (ctx.cr6.eq) goto loc_825252AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_825252AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825252C0"))) PPC_WEAK_FUNC(sub_825252C0);
PPC_FUNC_IMPL(__imp__sub_825252C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825252f0
	if (ctx.cr6.eq) goto loc_825252F0;
	// bl 0x823a5588
	ctx.lr = 0x825252E8;
	sub_823A5588(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8252534c
	if (ctx.cr6.eq) goto loc_8252534C;
loc_825252F0:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82524db0
	ctx.lr = 0x82525304;
	sub_82524DB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8252534c
	if (!ctx.cr0.eq) goto loc_8252534C;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346e08
	ctx.lr = 0x82525320;
	sub_82346E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8252534c
	if (!ctx.cr0.eq) goto loc_8252534C;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8234b850
	ctx.lr = 0x82525340;
	sub_8234B850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82525350
	if (ctx.cr0.eq) goto loc_82525350;
loc_8252534C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82525350:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525368"))) PPC_WEAK_FUNC(sub_82525368);
PPC_FUNC_IMPL(__imp__sub_82525368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a5588
	ctx.lr = 0x82525388;
	sub_823A5588(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82525398
	if (!ctx.cr6.eq) goto loc_82525398;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// b 0x825253e8
	goto loc_825253E8;
loc_82525398:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82524e78
	ctx.lr = 0x825253AC;
	sub_82524E78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825253e8
	if (!ctx.cr0.eq) goto loc_825253E8;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346ed0
	ctx.lr = 0x825253C8;
	sub_82346ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825253e8
	if (!ctx.cr0.eq) goto loc_825253E8;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8234b8c8
	ctx.lr = 0x825253E8;
	sub_8234B8C8(ctx, base);
loc_825253E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525400"))) PPC_WEAK_FUNC(sub_82525400);
PPC_FUNC_IMPL(__imp__sub_82525400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82525408;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-16708
	ctx.r11.s64 = ctx.r11.s64 + -16708;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r9,r9,-16684
	ctx.r9.s64 = ctx.r9.s64 + -16684;
	// addi r11,r8,-16672
	ctx.r11.s64 = ctx.r8.s64 + -16672;
	// addi r10,r7,-12364
	ctx.r10.s64 = ctx.r7.s64 + -12364;
	// stw r9,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r9.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// addi r27,r31,2000
	ctx.r27.s64 = ctx.r31.s64 + 2000;
	// stw r10,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r10.u32);
	// addi r30,r31,2016
	ctx.r30.s64 = ctx.r31.s64 + 2016;
	// addi r26,r31,2032
	ctx.r26.s64 = ctx.r31.s64 + 2032;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82525470
	if (!ctx.cr6.eq) goto loc_82525470;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8252547c
	goto loc_8252547C;
loc_82525470:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8252547C:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823ff1a0
	ctx.lr = 0x82525484;
	sub_823FF1A0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82525494
	if (!ctx.cr6.eq) goto loc_82525494;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825254a0
	goto loc_825254A0;
loc_82525494:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_825254A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823511c8
	ctx.lr = 0x825254AC;
	sub_823511C8(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-20040
	ctx.r11.s64 = ctx.r11.s64 + -20040;
	// addi r10,r10,-18468
	ctx.r10.s64 = ctx.r10.s64 + -18468;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r9,r9,19272
	ctx.r9.s64 = ctx.r9.s64 + 19272;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r11,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// bne cr6,0x82525510
	if (!ctx.cr6.eq) goto loc_82525510;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8252551c
	goto loc_8252551C;
loc_82525510:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8252551C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82346f30
	ctx.lr = 0x82525528;
	sub_82346F30(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82525538
	if (!ctx.cr6.eq) goto loc_82525538;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82525544
	goto loc_82525544;
loc_82525538:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82525544:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,2064
	ctx.r3.s64 = ctx.r31.s64 + 2064;
	// bl 0x8234c128
	ctx.lr = 0x82525550;
	sub_8234C128(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-18384
	ctx.r11.s64 = ctx.r11.s64 + -18384;
	// addi r10,r10,-16812
	ctx.r10.s64 = ctx.r10.s64 + -16812;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r9,r9,-16760
	ctx.r9.s64 = ctx.r9.s64 + -16760;
	// addi r8,r8,-16736
	ctx.r8.s64 = ctx.r8.s64 + -16736;
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
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825255E0"))) PPC_WEAK_FUNC(sub_825255E0);
PPC_FUNC_IMPL(__imp__sub_825255E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r10,r10,-18384
	ctx.r10.s64 = ctx.r10.s64 + -18384;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r9,r9,-16812
	ctx.r9.s64 = ctx.r9.s64 + -16812;
	// addi r8,r8,-16760
	ctx.r8.s64 = ctx.r8.s64 + -16760;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r7,-16736
	ctx.r7.s64 = ctx.r7.s64 + -16736;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r7,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,-36(r10)
	PPC_STORE_U32(ctx.r10.u32 + -36, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-2064
	ctx.r11.s64 = ctx.r11.s64 + -2064;
	// stw r11,-36(r10)
	PPC_STORE_U32(ctx.r10.u32 + -36, ctx.r11.u32);
	// bl 0x823ff098
	ctx.lr = 0x8252568C;
	sub_823FF098(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252569c
	if (ctx.cr0.eq) goto loc_8252569C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8252569C;
	sub_82332DB8(ctx, base);
loc_8252569C:
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

__attribute__((alias("__imp__sub_825256B8"))) PPC_WEAK_FUNC(sub_825256B8);
PPC_FUNC_IMPL(__imp__sub_825256B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825256C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-16708
	ctx.r11.s64 = ctx.r11.s64 + -16708;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r11,r8,-16672
	ctx.r11.s64 = ctx.r8.s64 + -16672;
	// addi r9,r9,-16684
	ctx.r9.s64 = ctx.r9.s64 + -16684;
	// addi r10,r7,-12364
	ctx.r10.s64 = ctx.r7.s64 + -12364;
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// stw r9,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r9.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r10,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r10.u32);
	// addi r30,r31,2000
	ctx.r30.s64 = ctx.r31.s64 + 2000;
	// addi r29,r31,2016
	ctx.r29.s64 = ctx.r31.s64 + 2016;
	// addi r28,r31,2032
	ctx.r28.s64 = ctx.r31.s64 + 2032;
	// bl 0x824cbb48
	ctx.lr = 0x82525718;
	sub_824CBB48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82501770
	ctx.lr = 0x82525724;
	sub_82501770(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82524fc0
	ctx.lr = 0x82525730;
	sub_82524FC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ba650
	ctx.lr = 0x8252573C;
	sub_825BA650(ctx, base);
	// addi r3,r31,2064
	ctx.r3.s64 = ctx.r31.s64 + 2064;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824d8ef8
	ctx.lr = 0x82525748;
	sub_824D8EF8(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r7,-18212
	ctx.r3.s64 = ctx.r7.s64 + -18212;
	// addi r11,r11,-18384
	ctx.r11.s64 = ctx.r11.s64 + -18384;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r10,r10,-16812
	ctx.r10.s64 = ctx.r10.s64 + -16812;
	// addi r9,r9,-16760
	ctx.r9.s64 = ctx.r9.s64 + -16760;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r8,r8,-16736
	ctx.r8.s64 = ctx.r8.s64 + -16736;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-2064
	ctx.r11.s64 = ctx.r11.s64 + -2064;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x825257D4;
	sub_82816528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,100
	ctx.r9.s64 = 100;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525818"))) PPC_WEAK_FUNC(sub_82525818);
PPC_FUNC_IMPL(__imp__sub_82525818) {
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
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba700
	ctx.lr = 0x8252583C;
	sub_825BA700(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x824d8f88
	ctx.lr = 0x82525850;
	sub_824D8F88(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82501810
	ctx.lr = 0x82525860;
	sub_82501810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525878"))) PPC_WEAK_FUNC(sub_82525878);
PPC_FUNC_IMPL(__imp__sub_82525878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x824ce338
	ctx.lr = 0x825258A8;
	sub_824CE338(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825258d8
	if (ctx.cr6.eq) goto loc_825258D8;
	// bl 0x823a5430
	ctx.lr = 0x825258B4;
	sub_823A5430(ctx, base);
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
	ctx.lr = 0x825258CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x825258dc
	if (!ctx.cr0.eq) goto loc_825258DC;
loc_825258D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825258DC:
	// stw r11,-28(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825258F8"))) PPC_WEAK_FUNC(sub_825258F8);
PPC_FUNC_IMPL(__imp__sub_825258F8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-2064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2064);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,-2060(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2060);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-2064
	ctx.r3.s64 = ctx.r11.s64 + -2064;
	// bl 0x824d90c0
	ctx.lr = 0x82525930;
	sub_824D90C0(ctx, base);
	// lwz r9,3424(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3424);
	// lwz r11,3340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,3472(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3472);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,1108(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1108);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f31,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// lfs f30,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82525974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,1516(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1516, temp.u32);
	// stfs f30,1504(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
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

__attribute__((alias("__imp__sub_825259A0"))) PPC_WEAK_FUNC(sub_825259A0);
PPC_FUNC_IMPL(__imp__sub_825259A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,-2060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2060);
	// lwz r11,3424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3424);
	// lfs f1,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825259B0"))) PPC_WEAK_FUNC(sub_825259B0);
PPC_FUNC_IMPL(__imp__sub_825259B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825252c0
	sub_825252C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825259C0"))) PPC_WEAK_FUNC(sub_825259C0);
PPC_FUNC_IMPL(__imp__sub_825259C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82525818
	sub_82525818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825259D0"))) PPC_WEAK_FUNC(sub_825259D0);
PPC_FUNC_IMPL(__imp__sub_825259D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -400);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x825255e0
	sub_825255E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825259E0"))) PPC_WEAK_FUNC(sub_825259E0);
PPC_FUNC_IMPL(__imp__sub_825259E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825255e0
	sub_825255E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825259F0"))) PPC_WEAK_FUNC(sub_825259F0);
PPC_FUNC_IMPL(__imp__sub_825259F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825255e0
	sub_825255E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525A00"))) PPC_WEAK_FUNC(sub_82525A00);
PPC_FUNC_IMPL(__imp__sub_82525A00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82525240
	sub_82525240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525A10"))) PPC_WEAK_FUNC(sub_82525A10);
PPC_FUNC_IMPL(__imp__sub_82525A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82525250
	sub_82525250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525A20"))) PPC_WEAK_FUNC(sub_82525A20);
PPC_FUNC_IMPL(__imp__sub_82525A20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82525368
	sub_82525368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525A30"))) PPC_WEAK_FUNC(sub_82525A30);
PPC_FUNC_IMPL(__imp__sub_82525A30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82525368
	sub_82525368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525A40"))) PPC_WEAK_FUNC(sub_82525A40);
PPC_FUNC_IMPL(__imp__sub_82525A40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825258f8
	sub_825258F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525A50"))) PPC_WEAK_FUNC(sub_82525A50);
PPC_FUNC_IMPL(__imp__sub_82525A50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82525878
	sub_82525878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525A60"))) PPC_WEAK_FUNC(sub_82525A60);
PPC_FUNC_IMPL(__imp__sub_82525A60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82525258
	sub_82525258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525A70"))) PPC_WEAK_FUNC(sub_82525A70);
PPC_FUNC_IMPL(__imp__sub_82525A70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82525260
	sub_82525260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525A80"))) PPC_WEAK_FUNC(sub_82525A80);
PPC_FUNC_IMPL(__imp__sub_82525A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82525A88;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82528b90
	ctx.lr = 0x82525A94;
	sub_82528B90(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r11,r11,24776
	ctx.r11.s64 = ctx.r11.s64 + 24776;
	// addi r10,r10,27220
	ctx.r10.s64 = ctx.r10.s64 + 27220;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-21304
	ctx.r3.s64 = ctx.r11.s64 + -21304;
	// bl 0x82816528
	ctx.lr = 0x82525AC4;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r27,r10,-5704
	ctx.r27.s64 = ctx.r10.s64 + -5704;
	// lfs f0,16772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16772);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,3108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3108, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82525AE4;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2768
	ctx.r3.s64 = ctx.r31.s64 + 2768;
	// bl 0x82410060
	ctx.lr = 0x82525AF4;
	sub_82410060(ctx, base);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r9,8192
	ctx.r9.s64 = 8192;
	// stw r11,6576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6576, ctx.r11.u32);
	// stw r29,2748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2748, ctx.r29.u32);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lfs f0,24020(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24020);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,3812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3812, ctx.r9.u32);
	// stfs f0,3112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3112, temp.u32);
	// stw r29,6572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6572, ctx.r29.u32);
	// addi r3,r8,-16664
	ctx.r3.s64 = ctx.r8.s64 + -16664;
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// stw r11,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x82525B3C;
	sub_82816528(ctx, base);
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-16644
	ctx.r3.s64 = ctx.r11.s64 + -16644;
	// bl 0x82816528
	ctx.lr = 0x82525B4C;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,2388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2388, ctx.r3.u32);
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r29,3956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3956, ctx.r29.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lfs f0,18368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18368);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r11,6764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6764, ctx.r11.u32);
	// lfs f0,19660(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19660);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,-12104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,6760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6760, ctx.r11.u32);
	// lfs f13,-24644(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24644);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,6768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6768, ctx.r6.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,6776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6776, ctx.r11.u32);
	// addi r3,r7,-16616
	ctx.r3.s64 = ctx.r7.s64 + -16616;
	// stw r9,6772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6772, ctx.r9.u32);
	// stw r10,6780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6780, ctx.r10.u32);
	// bl 0x828165a8
	ctx.lr = 0x82525BC8;
	sub_828165A8(ctx, base);
	// stw r3,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r3.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r10,-16564
	ctx.r3.s64 = ctx.r10.s64 + -16564;
	// addi r28,r11,1268
	ctx.r28.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x82525BE4;
	sub_82816528(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r31,3368
	ctx.r4.s64 = ctx.r31.s64 + 3368;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x823cf190
	ctx.lr = 0x82525C00;
	sub_823CF190(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x82525C08;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r3,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r3.u32);
	// stw r29,5496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5496, ctx.r29.u32);
	// addi r3,r10,9712
	ctx.r3.s64 = ctx.r10.s64 + 9712;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,3380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3380, ctx.r11.u32);
	// stw r9,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r9.u32);
	// stw r10,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r10.u32);
	// bl 0x82816528
	ctx.lr = 0x82525C48;
	sub_82816528(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,3748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3748, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r30.u32);
	// stw r11,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525C68"))) PPC_WEAK_FUNC(sub_82525C68);
PPC_FUNC_IMPL(__imp__sub_82525C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82525C70;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-16508
	ctx.r3.s64 = ctx.r11.s64 + -16508;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r28,r11,1268
	ctx.r28.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x82525CA0;
	sub_82816528(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823cf190
	ctx.lr = 0x82525CBC;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r6,-1408
	ctx.r6.s64 = -92274688;
	// lis r5,-26012
	ctx.r5.s64 = -1704722432;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// ori r6,r6,17377
	ctx.r6.u64 = ctx.r6.u64 | 17377;
	// ori r5,r5,62775
	ctx.r5.u64 = ctx.r5.u64 | 62775;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x824091a0
	ctx.lr = 0x82525CE0;
	sub_824091A0(ctx, base);
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x82525CE8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82525cfc
	if (ctx.cr0.eq) goto loc_82525CFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829146b0
	ctx.lr = 0x82525CF8;
	sub_829146B0(ctx, base);
	// b 0x82525d00
	goto loc_82525D00;
loc_82525CFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82525D00:
	// stw r3,6784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6784, ctx.r3.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-16480
	ctx.r3.s64 = ctx.r11.s64 + -16480;
	// bl 0x82816528
	ctx.lr = 0x82525D10;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r28,r11,-16472
	ctx.r28.s64 = ctx.r11.s64 + -16472;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x82525D24;
	sub_82816528(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x82525D30;
	sub_82816528(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r27,144(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r29,128
	ctx.r29.s64 = 128;
	// lwz r26,148(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r25,2
	ctx.r25.s64 = 2;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,6784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// lfs f31,30356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30356);
	ctx.f31.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// bl 0x82914788
	ctx.lr = 0x82525D88;
	sub_82914788(ctx, base);
	// lwz r3,6784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82525DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x82525DA8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82525dbc
	if (ctx.cr0.eq) goto loc_82525DBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829146b0
	ctx.lr = 0x82525DB8;
	sub_829146B0(ctx, base);
	// b 0x82525dc0
	goto loc_82525DC0;
loc_82525DBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82525DC0:
	// stw r3,6788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6788, ctx.r3.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-16464
	ctx.r3.s64 = ctx.r11.s64 + -16464;
	// bl 0x82816528
	ctx.lr = 0x82525DD0;
	sub_82816528(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x82525DDC;
	sub_82816528(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x82525DE8;
	sub_82816528(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,6788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6788);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// bl 0x82914788
	ctx.lr = 0x82525E28;
	sub_82914788(ctx, base);
	// lwz r3,6788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6788);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82525E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x82525E48;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82525e5c
	if (ctx.cr0.eq) goto loc_82525E5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829146b0
	ctx.lr = 0x82525E58;
	sub_829146B0(ctx, base);
	// b 0x82525e60
	goto loc_82525E60;
loc_82525E5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82525E60:
	// stw r3,6792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6792, ctx.r3.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-16456
	ctx.r3.s64 = ctx.r11.s64 + -16456;
	// bl 0x82816528
	ctx.lr = 0x82525E70;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r28,r11,-16448
	ctx.r28.s64 = ctx.r11.s64 + -16448;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x82525E84;
	sub_82816528(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x82525E90;
	sub_82816528(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,6792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// bl 0x82914788
	ctx.lr = 0x82525ED0;
	sub_82914788(ctx, base);
	// lwz r3,6792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82525EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x82525EF0;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82525f04
	if (ctx.cr0.eq) goto loc_82525F04;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829146b0
	ctx.lr = 0x82525F00;
	sub_829146B0(ctx, base);
	// b 0x82525f08
	goto loc_82525F08;
loc_82525F04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82525F08:
	// stw r3,6796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6796, ctx.r3.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-16440
	ctx.r3.s64 = ctx.r11.s64 + -16440;
	// bl 0x82816528
	ctx.lr = 0x82525F18;
	sub_82816528(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x82525F24;
	sub_82816528(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x82525F30;
	sub_82816528(ctx, base);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,6796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6796);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// bl 0x82914788
	ctx.lr = 0x82525F70;
	sub_82914788(ctx, base);
	// lwz r3,6796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6796);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82525F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82502d10
	ctx.lr = 0x82525F90;
	sub_82502D10(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525FA0"))) PPC_WEAK_FUNC(sub_82525FA0);
PPC_FUNC_IMPL(__imp__sub_82525FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-16344
	ctx.r3.s64 = ctx.r11.s64 + -16344;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525FB0"))) PPC_WEAK_FUNC(sub_82525FB0);
PPC_FUNC_IMPL(__imp__sub_82525FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-16312
	ctx.r3.s64 = ctx.r11.s64 + -16312;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525FC0"))) PPC_WEAK_FUNC(sub_82525FC0);
PPC_FUNC_IMPL(__imp__sub_82525FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,16628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24644(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24644);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r11,2380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82526004
	if (ctx.cr6.eq) goto loc_82526004;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2384(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,2384(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82526004:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526010"))) PPC_WEAK_FUNC(sub_82526010);
PPC_FUNC_IMPL(__imp__sub_82526010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82526018;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82503ca8
	ctx.lr = 0x8252602C;
	sub_82503CA8(ctx, base);
	// lwz r11,5728(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82526040
	if (ctx.cr6.eq) goto loc_82526040;
	// lwz r4,5724(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5724);
	// b 0x82526048
	goto loc_82526048;
loc_82526040:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82526048:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82409058
	ctx.lr = 0x82526050;
	sub_82409058(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82526074
	if (ctx.cr6.eq) goto loc_82526074;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82526074
	if (ctx.cr6.eq) goto loc_82526074;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x82526074;
	sub_82332DB8(ctx, base);
loc_82526074:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82526378
	if (ctx.cr6.eq) goto loc_82526378;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82526378
	if (ctx.cr6.eq) goto loc_82526378;
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
	// stfs f31,1696(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1696, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825260AC;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82526260
	if (ctx.cr6.eq) goto loc_82526260;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82333900
	ctx.lr = 0x825260C8;
	sub_82333900(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825260f0
	if (ctx.cr0.eq) goto loc_825260F0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-16276
	ctx.r3.s64 = ctx.r11.s64 + -16276;
	// bl 0x828165a8
	ctx.lr = 0x825260DC;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8250d2d0
	ctx.lr = 0x825260E8;
	sub_8250D2D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x825260f4
	goto loc_825260F4;
loc_825260F0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825260F4:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,9896
	ctx.r4.s64 = ctx.r11.s64 + 9896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8252610C;
	sub_829E6978(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,15316
	ctx.r4.s64 = ctx.r10.s64 + 15316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f0,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x82526130;
	sub_829E6978(ctx, base);
	// stfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15332
	ctx.r4.s64 = ctx.r11.s64 + 15332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8252614C;
	sub_829E6978(ctx, base);
	// stfs f1,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15368
	ctx.r4.s64 = ctx.r11.s64 + 15368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82526168;
	sub_829E6978(ctx, base);
	// stfs f1,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 56, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15380
	ctx.r4.s64 = ctx.r11.s64 + 15380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82526184;
	sub_829E6978(ctx, base);
	// stfs f1,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15396
	ctx.r4.s64 = ctx.r11.s64 + 15396;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825261A0;
	sub_829E6978(ctx, base);
	// li r11,100
	ctx.r11.s64 = 100;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,15416
	ctx.r4.s64 = ctx.r10.s64 + 15416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f0,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x825261C4;
	sub_829E6978(ctx, base);
	// stfs f1,104(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 104, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15436
	ctx.r4.s64 = ctx.r11.s64 + 15436;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825261E0;
	sub_829E6978(ctx, base);
	// stfs f1,88(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 88, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15456
	ctx.r4.s64 = ctx.r11.s64 + 15456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825261FC;
	sub_829E6978(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,15
	ctx.r10.s64 = 15;
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,92(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 92, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f0,1696(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1696, temp.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r27,r29,60
	ctx.r27.s64 = ctx.r29.s64 + 60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82610248
	ctx.lr = 0x82526228;
	sub_82610248(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82610248
	ctx.lr = 0x8252623C;
	sub_82610248(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82610248
	ctx.lr = 0x82526250;
	sub_82610248(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,3484
	ctx.r3.s64 = ctx.r28.s64 + 3484;
	// bl 0x82410060
	ctx.lr = 0x82526260;
	sub_82410060(ctx, base);
loc_82526260:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82507af0
	ctx.lr = 0x82526268;
	sub_82507AF0(ctx, base);
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
	ctx.lr = 0x82526280;
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
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x829e6978
	ctx.lr = 0x825262A8;
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
	// addi r4,r11,15956
	ctx.r4.s64 = ctx.r11.s64 + 15956;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825262D0;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r11,18760
	ctx.r4.s64 = ctx.r11.s64 + 18760;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825262EC;
	sub_829E6978(ctx, base);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r28,3412
	ctx.r3.s64 = ctx.r28.s64 + 3412;
	// bl 0x82507928
	ctx.lr = 0x825262FC;
	sub_82507928(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-16256
	ctx.r4.s64 = ctx.r11.s64 + -16256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82526314;
	sub_829E6978(ctx, base);
	// lwz r11,2784(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2784);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ble cr6,0x82526334
	if (!ctx.cr6.gt) goto loc_82526334;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82526334:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-16240
	ctx.r4.s64 = ctx.r11.s64 + -16240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8252634C;
	sub_829E6978(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,3460
	ctx.r3.s64 = ctx.r28.s64 + 3460;
	// bl 0x82516c70
	ctx.lr = 0x8252635C;
	sub_82516C70(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-16228
	ctx.r4.s64 = ctx.r11.s64 + -16228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82526374;
	sub_829E6978(ctx, base);
	// stfs f1,4032(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4032, temp.u32);
loc_82526378:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526388"))) PPC_WEAK_FUNC(sub_82526388);
PPC_FUNC_IMPL(__imp__sub_82526388) {
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
	ctx.lr = 0x82526398;
	sub_824EA480(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23832
	ctx.r11.s64 = ctx.r11.s64 + -23832;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
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

__attribute__((alias("__imp__sub_825263B8"))) PPC_WEAK_FUNC(sub_825263B8);
PPC_FUNC_IMPL(__imp__sub_825263B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23720
	ctx.r11.s64 = ctx.r11.s64 + -23720;
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825263C8"))) PPC_WEAK_FUNC(sub_825263C8);
PPC_FUNC_IMPL(__imp__sub_825263C8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824dd148
	sub_824DD148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825263D0"))) PPC_WEAK_FUNC(sub_825263D0);
PPC_FUNC_IMPL(__imp__sub_825263D0) {
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
	// lwz r3,6784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825263F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6788);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252640C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6756);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252642c
	if (ctx.cr6.eq) goto loc_8252642C;
	// lis r11,7523
	ctx.r11.s64 = 493027328;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r11,r11,55268
	ctx.r11.u64 = ctx.r11.u64 | 55268;
	// stw r11,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r11.u32);
	// bl 0x8281d650
	ctx.lr = 0x8252642C;
	sub_8281D650(ctx, base);
loc_8252642C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526440"))) PPC_WEAK_FUNC(sub_82526440);
PPC_FUNC_IMPL(__imp__sub_82526440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,6784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// bl 0x82978ed0
	ctx.lr = 0x82526464;
	sub_82978ED0(ctx, base);
	// lwz r3,6788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6788);
	// bl 0x82978ed0
	ctx.lr = 0x8252646C;
	sub_82978ED0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82529030
	ctx.lr = 0x82526478;
	sub_82529030(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526490"))) PPC_WEAK_FUNC(sub_82526490);
PPC_FUNC_IMPL(__imp__sub_82526490) {
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
	// lwz r3,6792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825264B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6796);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825264CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6752);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825264ec
	if (ctx.cr6.eq) goto loc_825264EC;
	// lis r11,7724
	ctx.r11.s64 = 506200064;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r11,r11,43020
	ctx.r11.u64 = ctx.r11.u64 | 43020;
	// stw r11,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r11.u32);
	// bl 0x8281d650
	ctx.lr = 0x825264EC;
	sub_8281D650(ctx, base);
loc_825264EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526500"))) PPC_WEAK_FUNC(sub_82526500);
PPC_FUNC_IMPL(__imp__sub_82526500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,6792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// bl 0x82978ed0
	ctx.lr = 0x82526524;
	sub_82978ED0(ctx, base);
	// lwz r3,6796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6796);
	// bl 0x82978ed0
	ctx.lr = 0x8252652C;
	sub_82978ED0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825290c0
	ctx.lr = 0x82526538;
	sub_825290C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526550"))) PPC_WEAK_FUNC(sub_82526550);
PPC_FUNC_IMPL(__imp__sub_82526550) {
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
	ctx.lr = 0x8252656C;
	sub_82332928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82526584
	if (ctx.cr0.eq) goto loc_82526584;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82526584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82526584:
	// lwz r3,6784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// bl 0x82978ed0
	ctx.lr = 0x8252658C;
	sub_82978ED0(ctx, base);
	// lwz r3,6788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6788);
	// bl 0x82978ed0
	ctx.lr = 0x82526594;
	sub_82978ED0(ctx, base);
	// lwz r3,6792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// bl 0x82978ed0
	ctx.lr = 0x8252659C;
	sub_82978ED0(ctx, base);
	// lwz r3,6796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6796);
	// bl 0x82978ed0
	ctx.lr = 0x825265A4;
	sub_82978ED0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825265B8"))) PPC_WEAK_FUNC(sub_825265B8);
PPC_FUNC_IMPL(__imp__sub_825265B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-21544
	ctx.r3.s64 = ctx.r11.s64 + -21544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825265C8"))) PPC_WEAK_FUNC(sub_825265C8);
PPC_FUNC_IMPL(__imp__sub_825265C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a5040
	sub_823A5040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825265D0"))) PPC_WEAK_FUNC(sub_825265D0);
PPC_FUNC_IMPL(__imp__sub_825265D0) {
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
	// li r3,2112
	ctx.r3.s64 = 2112;
	// bl 0x82833108
	ctx.lr = 0x825265EC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82526604
	if (ctx.cr0.eq) goto loc_82526604;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82526780
	ctx.lr = 0x82526600;
	sub_82526780(ctx, base);
	// b 0x82526608
	goto loc_82526608;
loc_82526604:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82526608:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252661c
	if (ctx.cr6.eq) goto loc_8252661C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8252661C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526630"))) PPC_WEAK_FUNC(sub_82526630);
PPC_FUNC_IMPL(__imp__sub_82526630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82526660
	if (ctx.cr6.eq) goto loc_82526660;
	// bl 0x823a5040
	ctx.lr = 0x82526658;
	sub_823A5040(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825266bc
	if (ctx.cr6.eq) goto loc_825266BC;
loc_82526660:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82524db0
	ctx.lr = 0x82526674;
	sub_82524DB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825266bc
	if (!ctx.cr0.eq) goto loc_825266BC;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346e08
	ctx.lr = 0x82526690;
	sub_82346E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825266bc
	if (!ctx.cr0.eq) goto loc_825266BC;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8234b850
	ctx.lr = 0x825266B0;
	sub_8234B850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x825266c0
	if (ctx.cr0.eq) goto loc_825266C0;
loc_825266BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825266C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825266D8"))) PPC_WEAK_FUNC(sub_825266D8);
PPC_FUNC_IMPL(__imp__sub_825266D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a5040
	ctx.lr = 0x825266F8;
	sub_823A5040(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82526708
	if (!ctx.cr6.eq) goto loc_82526708;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// b 0x82526758
	goto loc_82526758;
loc_82526708:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82524e78
	ctx.lr = 0x8252671C;
	sub_82524E78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82526758
	if (!ctx.cr0.eq) goto loc_82526758;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346ed0
	ctx.lr = 0x82526738;
	sub_82346ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82526758
	if (!ctx.cr0.eq) goto loc_82526758;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8234b8c8
	ctx.lr = 0x82526758;
	sub_8234B8C8(ctx, base);
loc_82526758:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526770"))) PPC_WEAK_FUNC(sub_82526770);
PPC_FUNC_IMPL(__imp__sub_82526770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,-2060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2060);
	// lwz r11,3424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3424);
	// lfs f1,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526780"))) PPC_WEAK_FUNC(sub_82526780);
PPC_FUNC_IMPL(__imp__sub_82526780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82526788;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-16708
	ctx.r11.s64 = ctx.r11.s64 + -16708;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r9,r9,-16684
	ctx.r9.s64 = ctx.r9.s64 + -16684;
	// addi r11,r8,-16672
	ctx.r11.s64 = ctx.r8.s64 + -16672;
	// addi r10,r7,-12364
	ctx.r10.s64 = ctx.r7.s64 + -12364;
	// stw r9,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r9.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// addi r27,r31,2000
	ctx.r27.s64 = ctx.r31.s64 + 2000;
	// stw r10,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r10.u32);
	// addi r30,r31,2016
	ctx.r30.s64 = ctx.r31.s64 + 2016;
	// addi r26,r31,2032
	ctx.r26.s64 = ctx.r31.s64 + 2032;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x825267f0
	if (!ctx.cr6.eq) goto loc_825267F0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825267fc
	goto loc_825267FC;
loc_825267F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_825267FC:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823ff1a0
	ctx.lr = 0x82526804;
	sub_823FF1A0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82526814
	if (!ctx.cr6.eq) goto loc_82526814;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82526820
	goto loc_82526820;
loc_82526814:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82526820:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823511c8
	ctx.lr = 0x8252682C;
	sub_823511C8(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-20040
	ctx.r11.s64 = ctx.r11.s64 + -20040;
	// addi r10,r10,-18468
	ctx.r10.s64 = ctx.r10.s64 + -18468;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r9,r9,19272
	ctx.r9.s64 = ctx.r9.s64 + 19272;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r11,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// bne cr6,0x82526890
	if (!ctx.cr6.eq) goto loc_82526890;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8252689c
	goto loc_8252689C;
loc_82526890:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8252689C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82346f30
	ctx.lr = 0x825268A8;
	sub_82346F30(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x825268b8
	if (!ctx.cr6.eq) goto loc_825268B8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825268c4
	goto loc_825268C4;
loc_825268B8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_825268C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,2064
	ctx.r3.s64 = ctx.r31.s64 + 2064;
	// bl 0x8234c128
	ctx.lr = 0x825268D0;
	sub_8234C128(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-16208
	ctx.r11.s64 = ctx.r11.s64 + -16208;
	// addi r10,r10,-14636
	ctx.r10.s64 = ctx.r10.s64 + -14636;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r9,r9,19272
	ctx.r9.s64 = ctx.r9.s64 + 19272;
	// addi r8,r8,-14584
	ctx.r8.s64 = ctx.r8.s64 + -14584;
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
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526960"))) PPC_WEAK_FUNC(sub_82526960);
PPC_FUNC_IMPL(__imp__sub_82526960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82526968;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-16708
	ctx.r11.s64 = ctx.r11.s64 + -16708;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r11,r8,-16672
	ctx.r11.s64 = ctx.r8.s64 + -16672;
	// addi r9,r9,-16684
	ctx.r9.s64 = ctx.r9.s64 + -16684;
	// addi r10,r7,-12364
	ctx.r10.s64 = ctx.r7.s64 + -12364;
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// stw r9,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r9.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r10,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r10.u32);
	// addi r30,r31,2000
	ctx.r30.s64 = ctx.r31.s64 + 2000;
	// addi r29,r31,2016
	ctx.r29.s64 = ctx.r31.s64 + 2016;
	// addi r28,r31,2032
	ctx.r28.s64 = ctx.r31.s64 + 2032;
	// bl 0x824cbb48
	ctx.lr = 0x825269C0;
	sub_824CBB48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82501770
	ctx.lr = 0x825269CC;
	sub_82501770(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82524fc0
	ctx.lr = 0x825269D8;
	sub_82524FC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ba650
	ctx.lr = 0x825269E4;
	sub_825BA650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2064
	ctx.r3.s64 = ctx.r31.s64 + 2064;
	// bl 0x824d8ef8
	ctx.lr = 0x825269F0;
	sub_824D8EF8(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r7,-5612
	ctx.r3.s64 = ctx.r7.s64 + -5612;
	// addi r11,r11,-16208
	ctx.r11.s64 = ctx.r11.s64 + -16208;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r10,r10,-14636
	ctx.r10.s64 = ctx.r10.s64 + -14636;
	// addi r9,r9,19272
	ctx.r9.s64 = ctx.r9.s64 + 19272;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r8,r8,-14584
	ctx.r8.s64 = ctx.r8.s64 + -14584;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-2064
	ctx.r11.s64 = ctx.r11.s64 + -2064;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x82526A7C;
	sub_82816528(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f0,912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r3,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stfs f0,1656(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1656, temp.u32);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,1668(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1668, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526AE0"))) PPC_WEAK_FUNC(sub_82526AE0);
PPC_FUNC_IMPL(__imp__sub_82526AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba700
	ctx.lr = 0x82526B08;
	sub_825BA700(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x824d8f88
	ctx.lr = 0x82526B1C;
	sub_824D8F88(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82501810
	ctx.lr = 0x82526B2C;
	sub_82501810(ctx, base);
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
	// beq 0x82526b58
	if (ctx.cr0.eq) goto loc_82526B58;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82526b58
	if (ctx.cr6.eq) goto loc_82526B58;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82526b5c
	goto loc_82526B5C;
loc_82526B58:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82526B5C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-21472
	ctx.r3.s64 = ctx.r11.s64 + -21472;
	// bl 0x82816528
	ctx.lr = 0x82526B68;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-17724
	ctx.r3.s64 = ctx.r11.s64 + -17724;
	// bl 0x82816528
	ctx.lr = 0x82526B78;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x828d0cb0
	ctx.lr = 0x82526B88;
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

__attribute__((alias("__imp__sub_82526BA0"))) PPC_WEAK_FUNC(sub_82526BA0);
PPC_FUNC_IMPL(__imp__sub_82526BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x824ce338
	ctx.lr = 0x82526BD0;
	sub_824CE338(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82526c00
	if (ctx.cr6.eq) goto loc_82526C00;
	// bl 0x823a4ee8
	ctx.lr = 0x82526BDC;
	sub_823A4EE8(ctx, base);
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
	ctx.lr = 0x82526BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x82526c04
	if (!ctx.cr0.eq) goto loc_82526C04;
loc_82526C00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82526C04:
	// stw r11,-28(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526C20"))) PPC_WEAK_FUNC(sub_82526C20);
PPC_FUNC_IMPL(__imp__sub_82526C20) {
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
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba7d0
	ctx.lr = 0x82526C44;
	sub_825BA7D0(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x824cc238
	ctx.lr = 0x82526C58;
	sub_824CC238(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x824d9028
	ctx.lr = 0x82526C6C;
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

__attribute__((alias("__imp__sub_82526C80"))) PPC_WEAK_FUNC(sub_82526C80);
PPC_FUNC_IMPL(__imp__sub_82526C80) {
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
	// lwz r11,-2064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2064);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,-2060(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2060);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-2064
	ctx.r3.s64 = ctx.r11.s64 + -2064;
	// bl 0x824d90c0
	ctx.lr = 0x82526CB0;
	sub_824D90C0(ctx, base);
	// lwz r11,3424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3424);
	// lwz r10,3340(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,1108(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1108);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82526CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3424);
	// lfs f0,92(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1516, temp.u32);
	// lwz r11,3472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3472);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526D18"))) PPC_WEAK_FUNC(sub_82526D18);
PPC_FUNC_IMPL(__imp__sub_82526D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82526d5c
	if (ctx.cr6.eq) goto loc_82526D5C;
	// bl 0x823a5040
	ctx.lr = 0x82526D40;
	sub_823A5040(ctx, base);
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
	ctx.lr = 0x82526D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82526d60
	goto loc_82526D60;
loc_82526D5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82526D60:
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

__attribute__((alias("__imp__sub_82526D80"))) PPC_WEAK_FUNC(sub_82526D80);
PPC_FUNC_IMPL(__imp__sub_82526D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82527a68
	ctx.lr = 0x82526DB4;
	sub_82527A68(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x824d96a0
	ctx.lr = 0x82526DCC;
	sub_824D96A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526DE8"))) PPC_WEAK_FUNC(sub_82526DE8);
PPC_FUNC_IMPL(__imp__sub_82526DE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82526ae0
	sub_82526AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526DF8"))) PPC_WEAK_FUNC(sub_82526DF8);
PPC_FUNC_IMPL(__imp__sub_82526DF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82526c80
	sub_82526C80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526E08"))) PPC_WEAK_FUNC(sub_82526E08);
PPC_FUNC_IMPL(__imp__sub_82526E08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825265d0
	sub_825265D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526E18"))) PPC_WEAK_FUNC(sub_82526E18);
PPC_FUNC_IMPL(__imp__sub_82526E18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82526630
	sub_82526630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526E28"))) PPC_WEAK_FUNC(sub_82526E28);
PPC_FUNC_IMPL(__imp__sub_82526E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82526ba0
	sub_82526BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526E38"))) PPC_WEAK_FUNC(sub_82526E38);
PPC_FUNC_IMPL(__imp__sub_82526E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825265b8
	sub_825265B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526E48"))) PPC_WEAK_FUNC(sub_82526E48);
PPC_FUNC_IMPL(__imp__sub_82526E48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82526c20
	sub_82526C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526E58"))) PPC_WEAK_FUNC(sub_82526E58);
PPC_FUNC_IMPL(__imp__sub_82526E58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82526770
	sub_82526770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526E68"))) PPC_WEAK_FUNC(sub_82526E68);
PPC_FUNC_IMPL(__imp__sub_82526E68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825266d8
	sub_825266D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526E78"))) PPC_WEAK_FUNC(sub_82526E78);
PPC_FUNC_IMPL(__imp__sub_82526E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825265c8
	sub_825265C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526E88"))) PPC_WEAK_FUNC(sub_82526E88);
PPC_FUNC_IMPL(__imp__sub_82526E88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825266d8
	sub_825266D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526E98"))) PPC_WEAK_FUNC(sub_82526E98);
PPC_FUNC_IMPL(__imp__sub_82526E98) {
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
	// addi r31,r11,-22152
	ctx.r31.s64 = ctx.r11.s64 + -22152;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x82526ED0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82526efc
	if (ctx.cr0.eq) goto loc_82526EFC;
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
loc_82526EFC:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82526f20
	if (ctx.cr6.eq) goto loc_82526F20;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x82526F20;
	sub_82332C38(ctx, base);
loc_82526F20:
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

__attribute__((alias("__imp__sub_82526F38"))) PPC_WEAK_FUNC(sub_82526F38);
PPC_FUNC_IMPL(__imp__sub_82526F38) {
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
	// addi r11,r11,-22152
	ctx.r11.s64 = ctx.r11.s64 + -22152;
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
	// ble cr6,0x82526fa4
	if (!ctx.cr6.gt) goto loc_82526FA4;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82526F74:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82526f94
	if (ctx.cr6.eq) goto loc_82526F94;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82526f74
	if (ctx.cr6.lt) goto loc_82526F74;
	// b 0x82526fa4
	goto loc_82526FA4;
loc_82526F94:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82526FA4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82526fcc
	if (ctx.cr6.eq) goto loc_82526FCC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82526FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82526fd0
	goto loc_82526FD0;
loc_82526FCC:
	// bl 0x825289c0
	ctx.lr = 0x82526FD0;
	sub_825289C0(ctx, base);
loc_82526FD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526FE0"))) PPC_WEAK_FUNC(sub_82526FE0);
PPC_FUNC_IMPL(__imp__sub_82526FE0) {
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
	// addi r11,r11,-22152
	ctx.r11.s64 = ctx.r11.s64 + -22152;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82527040
	if (!ctx.cr6.gt) goto loc_82527040;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8252700C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8252702c
	if (ctx.cr6.eq) goto loc_8252702C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8252700c
	if (ctx.cr6.lt) goto loc_8252700C;
	// b 0x82527040
	goto loc_82527040;
loc_8252702C:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82527048
	if (!ctx.cr6.eq) goto loc_82527048;
loc_82527040:
	// bl 0x82528a68
	ctx.lr = 0x82527044;
	sub_82528A68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82527048:
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

__attribute__((alias("__imp__sub_82527060"))) PPC_WEAK_FUNC(sub_82527060);
PPC_FUNC_IMPL(__imp__sub_82527060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-22152
	ctx.r11.s64 = ctx.r11.s64 + -22152;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825270e0
	if (!ctx.cr6.gt) goto loc_825270E0;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8252709C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825270bc
	if (ctx.cr6.eq) goto loc_825270BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8252709c
	if (ctx.cr6.lt) goto loc_8252709C;
	// b 0x825270e0
	goto loc_825270E0;
loc_825270BC:
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
	ctx.lr = 0x825270D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825270ec
	if (!ctx.cr0.eq) goto loc_825270EC;
loc_825270E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82528ae8
	ctx.lr = 0x825270EC;
	sub_82528AE8(ctx, base);
loc_825270EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82527108"))) PPC_WEAK_FUNC(sub_82527108);
PPC_FUNC_IMPL(__imp__sub_82527108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82527110;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82528b90
	ctx.lr = 0x8252711C;
	sub_82528B90(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r11,r11,21600
	ctx.r11.s64 = ctx.r11.s64 + 21600;
	// addi r10,r10,24044
	ctx.r10.s64 = ctx.r10.s64 + 24044;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-21544
	ctx.r3.s64 = ctx.r11.s64 + -21544;
	// bl 0x82816528
	ctx.lr = 0x8252714C;
	sub_82816528(ctx, base);
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-14436
	ctx.r3.s64 = ctx.r11.s64 + -14436;
	// bl 0x82816528
	ctx.lr = 0x8252715C;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2768
	ctx.r3.s64 = ctx.r31.s64 + 2768;
	// bl 0x82410060
	ctx.lr = 0x8252716C;
	sub_82410060(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r9,2852(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,25924
	ctx.r29.s64 = ctx.r11.s64 + 25924;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// lwz r11,25928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25928);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825271b0
	if (!ctx.cr0.eq) goto loc_825271B0;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-4112
	ctx.r9.s64 = ctx.r9.s64 + -4112;
	// stw r11,25928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25928, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r3,r11,19144
	ctx.r3.s64 = ctx.r11.s64 + 19144;
	// bl 0x82a4c758
	ctx.lr = 0x825271B0;
	sub_82A4C758(ctx, base);
loc_825271B0:
	// lwz r11,2852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lfs f13,16772(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16772);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,2852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// lfs f0,912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stfs f13,3108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3108, temp.u32);
	// stfs f0,1696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// stw r28,5448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5448, ctx.r28.u32);
	// stfs f0,3120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3120, temp.u32);
	// addi r3,r8,-14416
	ctx.r3.s64 = ctx.r8.s64 + -14416;
	// bl 0x82816528
	ctx.lr = 0x825271F0;
	sub_82816528(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r28,6180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6180, ctx.r28.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r30,3724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3724, ctx.r30.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stw r30,3172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3172, ctx.r30.u32);
	// lfs f0,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f12,19548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19548);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f11,16696(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16696);
	ctx.f11.f64 = double(temp.f32);
	// li r11,8192
	ctx.r11.s64 = 8192;
	// lfs f10,17676(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17676);
	ctx.f10.f64 = double(temp.f32);
	// li r9,16
	ctx.r9.s64 = 16;
	// lfs f9,18368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18368);
	ctx.f9.f64 = double(temp.f32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f13,904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r26,108(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f13,24020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24020);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,6168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6168, ctx.r9.u32);
	// stfs f13,6176(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6176, temp.u32);
	// stw r8,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r8.u32);
	// stfs f0,6804(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6804, temp.u32);
	// stw r30,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r30.u32);
	// stw r30,6604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6604, ctx.r30.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r30,2744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2744, ctx.r30.u32);
	// stw r28,2312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2312, ctx.r28.u32);
	// addi r3,r10,-14396
	ctx.r3.s64 = ctx.r10.s64 + -14396;
	// stw r6,3608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3608, ctx.r6.u32);
	// stw r11,3812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3812, ctx.r11.u32);
	// stw r11,3816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3816, ctx.r11.u32);
	// stw r26,6764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6764, ctx.r26.u32);
	// stw r7,6760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6760, ctx.r7.u32);
	// stw r5,6768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6768, ctx.r5.u32);
	// stw r4,6772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6772, ctx.r4.u32);
	// stw r29,6776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6776, ctx.r29.u32);
	// stw r27,6780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6780, ctx.r27.u32);
	// bl 0x82816528
	ctx.lr = 0x825272C8;
	sub_82816528(ctx, base);
	// lis r11,10597
	ctx.r11.s64 = 694484992;
	// lis r10,14541
	ctx.r10.s64 = 952958976;
	// stw r3,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r3.u32);
	// ori r11,r11,14112
	ctx.r11.u64 = ctx.r11.u64 | 14112;
	// ori r10,r10,14298
	ctx.r10.u64 = ctx.r10.u64 | 14298;
	// stw r11,5776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5776, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,2604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2604, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825272F0"))) PPC_WEAK_FUNC(sub_825272F0);
PPC_FUNC_IMPL(__imp__sub_825272F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825272F8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82503ca8
	ctx.lr = 0x8252730C;
	sub_82503CA8(ctx, base);
	// lwz r11,5728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82527320
	if (ctx.cr6.eq) goto loc_82527320;
	// lwz r4,5724(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5724);
	// b 0x82527328
	goto loc_82527328;
loc_82527320:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82527328:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82409058
	ctx.lr = 0x82527330;
	sub_82409058(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82527354
	if (ctx.cr6.eq) goto loc_82527354;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82527354
	if (ctx.cr6.eq) goto loc_82527354;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x82527354;
	sub_82332DB8(ctx, base);
loc_82527354:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825275b0
	if (ctx.cr6.eq) goto loc_825275B0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825275b0
	if (ctx.cr6.eq) goto loc_825275B0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82507af0
	ctx.lr = 0x82527370;
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
	ctx.lr = 0x82527390;
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
	ctx.lr = 0x825273B8;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,9916
	ctx.r4.s64 = ctx.r11.s64 + 9916;
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
	ctx.lr = 0x825273E0;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r11,15436
	ctx.r4.s64 = ctx.r11.s64 + 15436;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825273FC;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r11,15456
	ctx.r4.s64 = ctx.r11.s64 + 15456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82527418;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r11,11960
	ctx.r4.s64 = ctx.r11.s64 + 11960;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82527434;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r11,15396
	ctx.r4.s64 = ctx.r11.s64 + 15396;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82527450;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,15416
	ctx.r4.s64 = ctx.r11.s64 + 15416;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x82527478;
	sub_829E6978(ctx, base);
	// stfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r28,r29,3412
	ctx.r28.s64 = ctx.r29.s64 + 3412;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82507928
	ctx.lr = 0x8252748C;
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
	ctx.lr = 0x825274A4;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,32484
	ctx.r4.s64 = ctx.r11.s64 + 32484;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x829e6978
	ctx.lr = 0x825274CC;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,32504
	ctx.r4.s64 = ctx.r11.s64 + 32504;
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
	ctx.lr = 0x825274F4;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r11,15904
	ctx.r4.s64 = ctx.r11.s64 + 15904;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82527510;
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
	ctx.lr = 0x82527520;
	sub_82507928(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-16240
	ctx.r4.s64 = ctx.r11.s64 + -16240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82527538;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r4,r11,-16256
	ctx.r4.s64 = ctx.r11.s64 + -16256;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82527554;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r29,3460
	ctx.r3.s64 = ctx.r29.s64 + 3460;
	// bl 0x82516c70
	ctx.lr = 0x82527570;
	sub_82516C70(ctx, base);
	// lfs f0,6520(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 6520);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6176(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6176, temp.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-14344
	ctx.r4.s64 = ctx.r11.s64 + -14344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82527590;
	sub_829E6978(ctx, base);
	// stfs f1,6804(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6804, temp.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-16228
	ctx.r4.s64 = ctx.r11.s64 + -16228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825275AC;
	sub_829E6978(ctx, base);
	// stfs f1,4032(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4032, temp.u32);
loc_825275B0:
	// lwz r11,3424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3424);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825275d8
	if (ctx.cr6.eq) goto loc_825275D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r29,3436
	ctx.r3.s64 = ctx.r29.s64 + 3436;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82522580
	ctx.lr = 0x825275D8;
	sub_82522580(ctx, base);
loc_825275D8:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825275E8"))) PPC_WEAK_FUNC(sub_825275E8);
PPC_FUNC_IMPL(__imp__sub_825275E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r6,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r6.u64);
	// lfs f13,52(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// std r7,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r7.u64);
	// lfs f12,56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,3424(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3424);
	// lfs f0,48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82527620"))) PPC_WEAK_FUNC(sub_82527620);
PPC_FUNC_IMPL(__imp__sub_82527620) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,3424(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3424);
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// lwz r8,3332(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3332);
	// lwz r7,6752(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6752);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,592(r7)
	PPC_STORE_U32(ctx.r7.u32 + 592, ctx.r10.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,452(r7)
	PPC_STORE_U32(ctx.r7.u32 + 452, ctx.r11.u32);
	// lwz r9,6756(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6756);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// stw r10,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// lwz r9,6820(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6820);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// stw r10,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// lwz r9,6824(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6824);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// stw r10,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// lwz r9,6828(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6828);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// stw r10,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// lwz r9,6832(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6832);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// stw r10,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82527688"))) PPC_WEAK_FUNC(sub_82527688);
PPC_FUNC_IMPL(__imp__sub_82527688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82527690;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-14320
	ctx.r3.s64 = ctx.r11.s64 + -14320;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x825276AC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825276C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq 0x8252771c
	if (ctx.cr0.eq) goto loc_8252771C;
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x825276EC;
	sub_82A4EA80(ctx, base);
	// lfs f0,228(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f13,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f0,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_8252771C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f0,-32676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32676);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lfs f13,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// li r8,24710
	ctx.r8.s64 = 24710;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// lwz r28,120(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// bl 0x82825330
	ctx.lr = 0x82527804;
	sub_82825330(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r3,r10,-17204
	ctx.r3.s64 = ctx.r10.s64 + -17204;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// lfs f0,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8252782C;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r10,r31,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x8242f058
	ctx.lr = 0x8252785C;
	sub_8242F058(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825278a8
	if (ctx.cr0.eq) goto loc_825278A8;
	// lwz r11,1460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1460);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,1452(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1452);
	// lwz r8,1456(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// stw r8,1456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1456, ctx.r8.u32);
	// stw r9,1452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1452, ctx.r9.u32);
	// lfs f0,912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,1460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1460, ctx.r11.u32);
	// lwz r11,3424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3424);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825278a8
	if (ctx.cr6.eq) goto loc_825278A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1468, ctx.r11.u32);
loc_825278A8:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x825278B8;
	sub_8233A258(ctx, base);
	// lis r4,13368
	ctx.r4.s64 = 876085248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,39156
	ctx.r4.u64 = ctx.r4.u64 | 39156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c3740
	ctx.lr = 0x825278CC;
	sub_829C3740(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825278D8"))) PPC_WEAK_FUNC(sub_825278D8);
PPC_FUNC_IMPL(__imp__sub_825278D8) {
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
	// bl 0x824f4228
	ctx.lr = 0x825278F4;
	sub_824F4228(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,6784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82527924
	if (ctx.cr6.eq) goto loc_82527924;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,2592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2592);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1640);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82527924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82527924:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,27704
	ctx.r11.s64 = ctx.r11.s64 + 27704;
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
	// bl 0x824d6a48
	ctx.lr = 0x82527950;
	sub_824D6A48(ctx, base);
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

__attribute__((alias("__imp__sub_82527968"))) PPC_WEAK_FUNC(sub_82527968);
PPC_FUNC_IMPL(__imp__sub_82527968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824dd5b0
	ctx.lr = 0x82527984;
	sub_824DD5B0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,10548(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// addi r3,r31,2332
	ctx.r3.s64 = ctx.r31.s64 + 2332;
	// bl 0x82332d50
	ctx.lr = 0x825279A0;
	sub_82332D50(ctx, base);
	// lwz r11,2344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825279b4
	if (ctx.cr0.eq) goto loc_825279B4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_825279B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825279D0"))) PPC_WEAK_FUNC(sub_825279D0);
PPC_FUNC_IMPL(__imp__sub_825279D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82502d10
	sub_82502D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825279D8"))) PPC_WEAK_FUNC(sub_825279D8);
PPC_FUNC_IMPL(__imp__sub_825279D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825279E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// addi r29,r11,2332
	ctx.r29.s64 = ctx.r11.s64 + 2332;
	// lwz r11,2348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82527a4c
	if (!ctx.cr6.gt) goto loc_82527A4C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82527A08:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82527a38
	if (!ctx.cr6.eq) goto loc_82527A38;
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
	ctx.lr = 0x82527A30;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82527A38:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82527a08
	if (ctx.cr6.lt) goto loc_82527A08;
loc_82527A4C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82527a68
	ctx.lr = 0x82527A54;
	sub_82527A68(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82502450
	ctx.lr = 0x82527A5C;
	sub_82502450(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527A68"))) PPC_WEAK_FUNC(sub_82527A68);
PPC_FUNC_IMPL(__imp__sub_82527A68) {
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
	// lwz r11,6784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82527ae0
	if (ctx.cr6.eq) goto loc_82527AE0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82527A90;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82527ac4
	if (ctx.cr0.eq) goto loc_82527AC4;
	// lwz r11,6784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82527aac
	if (ctx.cr6.eq) goto loc_82527AAC;
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82527ab0
	goto loc_82527AB0;
loc_82527AAC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82527AB0:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x824f7c50
	ctx.lr = 0x82527ABC;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82527ac8
	goto loc_82527AC8;
loc_82527AC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82527AC8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82527AD8;
	sub_82833A30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6784, ctx.r11.u32);
loc_82527AE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82527AF8"))) PPC_WEAK_FUNC(sub_82527AF8);
PPC_FUNC_IMPL(__imp__sub_82527AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-14308
	ctx.r3.s64 = ctx.r11.s64 + -14308;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527B08"))) PPC_WEAK_FUNC(sub_82527B08);
PPC_FUNC_IMPL(__imp__sub_82527B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-14276
	ctx.r3.s64 = ctx.r11.s64 + -14276;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527B18"))) PPC_WEAK_FUNC(sub_82527B18);
PPC_FUNC_IMPL(__imp__sub_82527B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,16612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16612);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24644(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24644);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r11,2380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82527b5c
	if (ctx.cr6.eq) goto loc_82527B5C;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2384(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,2384(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82527B5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82527B68"))) PPC_WEAK_FUNC(sub_82527B68);
PPC_FUNC_IMPL(__imp__sub_82527B68) {
	PPC_FUNC_PROLOGUE();
	// b 0x82527a68
	sub_82527A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527B70"))) PPC_WEAK_FUNC(sub_82527B70);
PPC_FUNC_IMPL(__imp__sub_82527B70) {
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
	// beq cr6,0x82527bbc
	if (ctx.cr6.eq) goto loc_82527BBC;
	// bl 0x823c56f8
	ctx.lr = 0x82527B98;
	sub_823C56F8(ctx, base);
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
	ctx.lr = 0x82527BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x82527bc0
	if (!ctx.cr0.eq) goto loc_82527BC0;
loc_82527BBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82527BC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82527bf0
	if (ctx.cr6.eq) goto loc_82527BF0;
	// lwz r10,3284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3284);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82527bf0
	if (ctx.cr6.eq) goto loc_82527BF0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82527BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82527BF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82527a68
	ctx.lr = 0x82527BF8;
	sub_82527A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82527C10"))) PPC_WEAK_FUNC(sub_82527C10);
PPC_FUNC_IMPL(__imp__sub_82527C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82527C18;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-14240
	ctx.r3.s64 = ctx.r11.s64 + -14240;
	// lwz r31,1428(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1428);
	// bl 0x82816528
	ctx.lr = 0x82527C34;
	sub_82816528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82527C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82527c60
	if (ctx.cr0.eq) goto loc_82527C60;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82965960
	ctx.lr = 0x82527C60;
	sub_82965960(ctx, base);
loc_82527C60:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r3,r10,-5580
	ctx.r3.s64 = ctx.r10.s64 + -5580;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82527C98;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x82527CD4;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82527d04
	if (ctx.cr0.eq) goto loc_82527D04;
	// bl 0x823c59b8
	ctx.lr = 0x82527CE0;
	sub_823C59B8(ctx, base);
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
	ctx.lr = 0x82527CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x82527d08
	if (!ctx.cr0.eq) goto loc_82527D08;
loc_82527D04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82527D08:
	// stw r3,6784(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6784, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82527d58
	if (ctx.cr6.eq) goto loc_82527D58;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r5,9749
	ctx.r5.s64 = 638910464;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r10,1436(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1436);
	// ori r5,r5,17317
	ctx.r5.u64 = ctx.r5.u64 | 17317;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rldicr r9,r31,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82527D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82527D58:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527D68"))) PPC_WEAK_FUNC(sub_82527D68);
PPC_FUNC_IMPL(__imp__sub_82527D68) {
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
	// lwz r31,1780(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1780);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82527da8
	if (ctx.cr6.eq) goto loc_82527DA8;
	// bl 0x823c56f8
	ctx.lr = 0x82527D88;
	sub_823C56F8(ctx, base);
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
	ctx.lr = 0x82527DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82527dac
	if (!ctx.cr0.eq) goto loc_82527DAC;
loc_82527DA8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82527DAC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82527de4
	if (ctx.cr6.eq) goto loc_82527DE4;
	// lwz r11,3280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82527de4
	if (ctx.cr6.eq) goto loc_82527DE4;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-9792
	ctx.r3.s64 = ctx.r11.s64 + -9792;
	// bl 0x82816528
	ctx.lr = 0x82527DCC;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,18140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18140);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828a2470
	ctx.lr = 0x82527DE4;
	sub_828A2470(ctx, base);
loc_82527DE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82527DF8"))) PPC_WEAK_FUNC(sub_82527DF8);
PPC_FUNC_IMPL(__imp__sub_82527DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,6784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82527e50
	if (ctx.cr6.eq) goto loc_82527E50;
	// bl 0x828a2998
	ctx.lr = 0x82527E20;
	sub_828A2998(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-14224
	ctx.r3.s64 = ctx.r11.s64 + -14224;
	// lwz r11,6784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x82527E34;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,6784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// lwz r11,1440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82527E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82527E50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82527E68"))) PPC_WEAK_FUNC(sub_82527E68);
PPC_FUNC_IMPL(__imp__sub_82527E68) {
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
	// lwz r31,1780(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1780);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82527eac
	if (ctx.cr6.eq) goto loc_82527EAC;
	// bl 0x823c56f8
	ctx.lr = 0x82527E88;
	sub_823C56F8(ctx, base);
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
	ctx.lr = 0x82527EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x82527eb0
	if (!ctx.cr0.eq) goto loc_82527EB0;
loc_82527EAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82527EB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82527ee0
	if (ctx.cr6.eq) goto loc_82527EE0;
	// lwz r10,3284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3284);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82527ee0
	if (ctx.cr6.eq) goto loc_82527EE0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82527EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82527EE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82527EF8"))) PPC_WEAK_FUNC(sub_82527EF8);
PPC_FUNC_IMPL(__imp__sub_82527EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82527F00;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a6173c
	ctx.lr = 0x82527F08;
	__savefpr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82528e28
	ctx.lr = 0x82527F14;
	sub_82528E28(ctx, base);
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
	// addi r7,r30,-29292
	ctx.r7.s64 = ctx.r30.s64 + -29292;
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
	// lfs f30,4652(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4652);
	ctx.f30.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f0,17116(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17116);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-6866
	ctx.r10.s64 = -449970176;
	// lfs f13,17120(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17120);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lfs f26,19548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19548);
	ctx.f26.f64 = double(temp.f32);
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
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ori r10,r10,31988
	ctx.r10.u64 = ctx.r10.u64 | 31988;
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f26,164(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r9,5352(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// ori r4,r4,62193
	ctx.r4.u64 = ctx.r4.u64 | 62193;
	// rldicr r9,r28,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rldicr r7,r27,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e5590
	ctx.lr = 0x82527FC8;
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
	ctx.lr = 0x82527FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f30,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r8,9748
	ctx.r3.s64 = ctx.r8.s64 + 9748;
	// lfs f30,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,17060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17060);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,18368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18368);
	ctx.f29.f64 = double(temp.f32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r28,5352(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8252803C;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// ld r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lis r4,-3736
	ctx.r4.s64 = -244842496;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// ori r4,r4,3838
	ctx.r4.u64 = ctx.r4.u64 | 3838;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x824e5590
	ctx.lr = 0x82528084;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// stw r3,5360(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5360, ctx.r3.u32);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,5360(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5360);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825280A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f12,-29292(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -29292);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// lfs f0,17840(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,19648(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19648);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r6,11908
	ctx.r3.s64 = ctx.r6.s64 + 11908;
	// lfs f11,18524(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18524);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,19792(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19792);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,17960(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17960);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r30,5352(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82528108;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-16352
	ctx.r3.s64 = ctx.r11.s64 + -16352;
	// bl 0x82816528
	ctx.lr = 0x82528118;
	sub_82816528(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r27,176(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r26,152(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r26,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r27,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r27.u64);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x8252815C;
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
	ctx.lr = 0x8252817C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// addi r3,r11,-16400
	ctx.r3.s64 = ctx.r11.s64 + -16400;
	// addi r11,r30,32716
	ctx.r11.s64 = ctx.r30.s64 + 32716;
	// lis r10,30100
	ctx.r10.s64 = 1972633600;
	// lwz r28,5352(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// lfs f25,204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f25.f64 = double(temp.f32);
	// ori r27,r10,42004
	ctx.r27.u64 = ctx.r10.u64 | 42004;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f25,144(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825281C4;
	sub_82816528(ctx, base);
	// lwz r26,184(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
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
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x824e5590
	ctx.lr = 0x82528208;
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
	ctx.lr = 0x82528228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-13035
	ctx.r10.s64 = -854261760;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r11,-16388
	ctx.r3.s64 = ctx.r11.s64 + -16388;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r28,r10,53749
	ctx.r28.u64 = ctx.r10.u64 | 53749;
	// stfs f25,144(r1)
	temp.f32 = float(ctx.f25.f64);
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
	// lwz r27,5352(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82528264;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r26,184(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825282A8;
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
	ctx.lr = 0x825282CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f27,32716(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32716);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-11265
	ctx.r10.s64 = -738263040;
	// addi r3,r11,-16376
	ctx.r3.s64 = ctx.r11.s64 + -16376;
	// lwz r28,5352(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// ori r30,r10,44068
	ctx.r30.u64 = ctx.r10.u64 | 44068;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f25,144(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f27,148(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
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
	// bl 0x82816528
	ctx.lr = 0x8252830C;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
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
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x824e5590
	ctx.lr = 0x82528350;
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
	ctx.lr = 0x82528370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,24284
	ctx.r10.s64 = 1591476224;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r11,-16364
	ctx.r3.s64 = ctx.r11.s64 + -16364;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r30,r10,32798
	ctx.r30.u64 = ctx.r10.u64 | 32798;
	// stfs f25,144(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f27,148(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
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
	// lwz r28,5352(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x825283AC;
	sub_82816528(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r28,184(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
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
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825283F0;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82528414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,5356(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5356);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,2088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252842C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r3,r10,-14204
	ctx.r3.s64 = ctx.r10.s64 + -14204;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f27,148(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f28,16696(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16696);
	ctx.f28.f64 = double(temp.f32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f26,168(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82528468;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-14192
	ctx.r3.s64 = ctx.r11.s64 + -14192;
	// bl 0x82816528
	ctx.lr = 0x82528478;
	sub_82816528(ctx, base);
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r26,152(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,136
	ctx.r5.s64 = 136;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// rldicr r10,r26,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x824e4120
	ctx.lr = 0x825284C0;
	sub_824E4120(ctx, base);
	// stw r3,6820(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6820, ctx.r3.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r3,r11,-14184
	ctx.r3.s64 = ctx.r11.s64 + -14184;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f27,148(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f26,168(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825284F4;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-14172
	ctx.r3.s64 = ctx.r11.s64 + -14172;
	// bl 0x82816528
	ctx.lr = 0x82528504;
	sub_82816528(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,136
	ctx.r5.s64 = 136;
	// lwz r26,152(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r10,r26,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x824e4120
	ctx.lr = 0x8252854C;
	sub_824E4120(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r3,6824(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6824, ctx.r3.u32);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r3,r11,-14164
	ctx.r3.s64 = ctx.r11.s64 + -14164;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f27,148(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f26,168(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82528580;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-14152
	ctx.r3.s64 = ctx.r11.s64 + -14152;
	// bl 0x82816528
	ctx.lr = 0x82528590;
	sub_82816528(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// ld r27,176(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r5,136
	ctx.r5.s64 = 136;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r27,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r27.u64);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x824e4120
	ctx.lr = 0x825285D8;
	sub_824E4120(ctx, base);
	// stw r3,6832(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6832, ctx.r3.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r3,r11,-14144
	ctx.r3.s64 = ctx.r11.s64 + -14144;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f27,148(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f26,168(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8252860C;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-14132
	ctx.r3.s64 = ctx.r11.s64 + -14132;
	// bl 0x82816528
	ctx.lr = 0x8252861C;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,136
	ctx.r5.s64 = 136;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r6,64
	ctx.r6.s64 = 64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r26,152(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r10,r26,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x824e4120
	ctx.lr = 0x82528664;
	sub_824E4120(ctx, base);
	// stfs f31,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r3,6828(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6828, ctx.r3.u32);
	// lfs f4,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,3332(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3332);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,6820(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6820);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x82331120
	ctx.lr = 0x825286C0;
	sub_82331120(ctx, base);
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,3332(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3332);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,6824(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6824);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82331120
	ctx.lr = 0x825286FC;
	sub_82331120(ctx, base);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,3332(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3332);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,6832(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6832);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82331120
	ctx.lr = 0x82528738;
	sub_82331120(ctx, base);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,3332(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3332);
	// lwz r3,6828(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6828);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bl 0x82331120
	ctx.lr = 0x82528774;
	sub_82331120(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61788
	ctx.lr = 0x82528780;
	__restfpr_25(ctx, base);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82528788"))) PPC_WEAK_FUNC(sub_82528788);
PPC_FUNC_IMPL(__imp__sub_82528788) {
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
	ctx.lr = 0x82528798;
	sub_824EA480(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23832
	ctx.r11.s64 = ctx.r11.s64 + -23832;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
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

__attribute__((alias("__imp__sub_825287B8"))) PPC_WEAK_FUNC(sub_825287B8);
PPC_FUNC_IMPL(__imp__sub_825287B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23720
	ctx.r11.s64 = ctx.r11.s64 + -23720;
	// lfs f1,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825287C8"))) PPC_WEAK_FUNC(sub_825287C8);
PPC_FUNC_IMPL(__imp__sub_825287C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82504bf8
	sub_82504BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825287D0"))) PPC_WEAK_FUNC(sub_825287D0);
PPC_FUNC_IMPL(__imp__sub_825287D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,6168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6168, ctx.r11.u32);
	// stw r11,2328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2328, ctx.r11.u32);
	// stw r11,2332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2332, ctx.r11.u32);
	// stw r11,2316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2316, ctx.r11.u32);
	// stw r10,2324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2324, ctx.r10.u32);
	// stw r10,2180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2180, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825287F8"))) PPC_WEAK_FUNC(sub_825287F8);
PPC_FUNC_IMPL(__imp__sub_825287F8) {
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
	// li r3,3296
	ctx.r3.s64 = 3296;
	// bl 0x82833108
	ctx.lr = 0x82528810;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82528860
	if (ctx.cr0.eq) goto loc_82528860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265c840
	ctx.lr = 0x82528820;
	sub_8265C840(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r11,r11,-8408
	ctx.r11.s64 = ctx.r11.s64 + -8408;
	// addi r10,r10,-6740
	ctx.r10.s64 = ctx.r10.s64 + -6740;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,16991
	ctx.r8.s64 = 1113522176;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r8,57115
	ctx.r10.u64 = ctx.r8.u64 | 57115;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// b 0x82528864
	goto loc_82528864;
loc_82528860:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82528864:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82528878"))) PPC_WEAK_FUNC(sub_82528878);
PPC_FUNC_IMPL(__imp__sub_82528878) {
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
	// lwz r11,-32748(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32748);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825288b8
	if (!ctx.cr0.eq) goto loc_825288B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-32748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32748, ctx.r11.u32);
	// addi r3,r9,-5640
	ctx.r3.s64 = ctx.r9.s64 + -5640;
	// bl 0x82816528
	ctx.lr = 0x825288B0;
	sub_82816528(ctx, base);
	// stw r3,-32752(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32752, ctx.r3.u32);
	// b 0x825288bc
	goto loc_825288BC;
loc_825288B8:
	// lwz r3,-32752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32752);
loc_825288BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825288D0"))) PPC_WEAK_FUNC(sub_825288D0);
PPC_FUNC_IMPL(__imp__sub_825288D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c56f8
	ctx.lr = 0x825288F0;
	sub_823C56F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82528904;
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

__attribute__((alias("__imp__sub_82528920"))) PPC_WEAK_FUNC(sub_82528920);
PPC_FUNC_IMPL(__imp__sub_82528920) {
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
	// addi r31,r11,-22128
	ctx.r31.s64 = ctx.r11.s64 + -22128;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x82528958;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82528984
	if (ctx.cr0.eq) goto loc_82528984;
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
loc_82528984:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825289a8
	if (ctx.cr6.eq) goto loc_825289A8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x825289A8;
	sub_82332C38(ctx, base);
loc_825289A8:
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

__attribute__((alias("__imp__sub_825289C0"))) PPC_WEAK_FUNC(sub_825289C0);
PPC_FUNC_IMPL(__imp__sub_825289C0) {
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
	// addi r11,r11,-22128
	ctx.r11.s64 = ctx.r11.s64 + -22128;
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
	// ble cr6,0x82528a2c
	if (!ctx.cr6.gt) goto loc_82528A2C;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_825289FC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82528a1c
	if (ctx.cr6.eq) goto loc_82528A1C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825289fc
	if (ctx.cr6.lt) goto loc_825289FC;
	// b 0x82528a2c
	goto loc_82528A2C;
loc_82528A1C:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82528A2C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82528a54
	if (ctx.cr6.eq) goto loc_82528A54;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82528A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82528a58
	goto loc_82528A58;
loc_82528A54:
	// bl 0x824daf88
	ctx.lr = 0x82528A58;
	sub_824DAF88(ctx, base);
loc_82528A58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82528A68"))) PPC_WEAK_FUNC(sub_82528A68);
PPC_FUNC_IMPL(__imp__sub_82528A68) {
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
	// addi r11,r11,-22128
	ctx.r11.s64 = ctx.r11.s64 + -22128;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82528ac8
	if (!ctx.cr6.gt) goto loc_82528AC8;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82528A94:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82528ab4
	if (ctx.cr6.eq) goto loc_82528AB4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82528a94
	if (ctx.cr6.lt) goto loc_82528A94;
	// b 0x82528ac8
	goto loc_82528AC8;
loc_82528AB4:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82528ad0
	if (!ctx.cr6.eq) goto loc_82528AD0;
loc_82528AC8:
	// bl 0x824db030
	ctx.lr = 0x82528ACC;
	sub_824DB030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82528AD0:
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

__attribute__((alias("__imp__sub_82528AE8"))) PPC_WEAK_FUNC(sub_82528AE8);
PPC_FUNC_IMPL(__imp__sub_82528AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-22128
	ctx.r11.s64 = ctx.r11.s64 + -22128;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82528b68
	if (!ctx.cr6.gt) goto loc_82528B68;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82528B24:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82528b44
	if (ctx.cr6.eq) goto loc_82528B44;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82528b24
	if (ctx.cr6.lt) goto loc_82528B24;
	// b 0x82528b68
	goto loc_82528B68;
loc_82528B44:
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
	ctx.lr = 0x82528B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82528b74
	if (!ctx.cr0.eq) goto loc_82528B74;
loc_82528B68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824db0b0
	ctx.lr = 0x82528B74;
	sub_824DB0B0(ctx, base);
loc_82528B74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82528B90"))) PPC_WEAK_FUNC(sub_82528B90);
PPC_FUNC_IMPL(__imp__sub_82528B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82528B98;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82502288
	ctx.lr = 0x82528BA4;
	sub_82502288(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r9,r11,-11456
	ctx.r9.s64 = ctx.r11.s64 + -11456;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lfs f11,-32516(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32516);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,-32516
	ctx.r10.s64 = ctx.r10.s64 + -32516;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lfs f6,-11456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11456);
	ctx.f6.f64 = double(temp.f32);
	// lis r5,-31963
	ctx.r5.s64 = -2094727168;
	// lfs f13,-13188(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13188);
	ctx.f13.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f13,1704(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
	// addi r8,r8,11416
	ctx.r8.s64 = ctx.r8.s64 + 11416;
	// lfs f12,-312(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -312);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r7,r7,13860
	ctx.r7.s64 = ctx.r7.s64 + 13860;
	// lfs f0,-17836(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17836);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r6,29808
	ctx.r6.s64 = ctx.r6.s64 + 29808;
	// stfs f0,1700(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1700, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lfs f0,16816(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16816);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f13,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r11.u32);
	// stw r6,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r6.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f10,-16348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16348);
	ctx.f10.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f7,-23724(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23724);
	ctx.f7.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lfs f9,20520(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20520);
	ctx.f9.f64 = double(temp.f32);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lfs f8,16432(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16432);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,52(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f12,56(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f13,72(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f11,84(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f10,64(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f9,1696(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// stfs f8,80(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stw r30,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r30.u32);
	// stw r30,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r30.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stw r30,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r30.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r30,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r30.u32);
	// stw r9,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r9.u32);
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// stw r30,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r30.u32);
	// stw r30,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r30.u32);
	// stfs f7,6704(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6704, temp.u32);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// stfs f0,3988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3988, temp.u32);
	// stfs f6,6736(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6736, temp.u32);
	// stw r30,2744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2744, ctx.r30.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82528ce0
	if (!ctx.cr6.eq) goto loc_82528CE0;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r10,400
	ctx.r10.s64 = 400;
	// stw r10,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r10.u32);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82528ce0
	if (!ctx.cr6.eq) goto loc_82528CE0;
	// lwz r11,1052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82528ce0
	if (!ctx.cr6.eq) goto loc_82528CE0;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
loc_82528CE0:
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// stfs f13,6720(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6720, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r28,20416
	ctx.r10.s64 = ctx.r28.s64 + 20416;
	// li r9,75
	ctx.r9.s64 = 75;
	// li r8,50
	ctx.r8.s64 = 50;
	// stw r9,6724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6724, ctx.r9.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lfs f12,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,6728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6728, ctx.r8.u32);
	// lfs f0,20040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20040);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r9,-14124
	ctx.r3.s64 = ctx.r9.s64 + -14124;
	// lfs f13,17820(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17820);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,6708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6708, temp.u32);
	// stfs f13,6712(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6712, temp.u32);
	// stfs f12,6716(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6716, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82528D24;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,20416(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20416);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f0,3184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3184, temp.u32);
	// li r11,500
	ctx.r11.s64 = 500;
	// li r8,450
	ctx.r8.s64 = 450;
	// stw r3,6748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6748, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,3616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3616, ctx.r11.u32);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// li r10,23
	ctx.r10.s64 = 23;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,17664(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17664);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,3620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3620, ctx.r11.u32);
	// stw r30,5336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5336, ctx.r30.u32);
	// stfs f13,3188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3188, temp.u32);
	// stfs f0,3192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3192, temp.u32);
	// stw r8,3924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3924, ctx.r8.u32);
	// stw r7,6732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6732, ctx.r7.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r10,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r10.u32);
	// stw r6,3904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3904, ctx.r6.u32);
	// addi r3,r11,-14112
	ctx.r3.s64 = ctx.r11.s64 + -14112;
	// stw r4,3908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3908, ctx.r4.u32);
	// stw r5,3900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3900, ctx.r5.u32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// addi r30,r11,1268
	ctx.r30.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x82528DA8;
	sub_82816528(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r31,1740
	ctx.r4.s64 = ctx.r31.s64 + 1740;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82509750
	ctx.lr = 0x82528DC0;
	sub_82509750(ctx, base);
	// lis r11,15386
	ctx.r11.s64 = 1008336896;
	// lis r10,7724
	ctx.r10.s64 = 506200064;
	// ori r11,r11,24133
	ctx.r11.u64 = ctx.r11.u64 | 24133;
	// ori r10,r10,43020
	ctx.r10.u64 = ctx.r10.u64 | 43020;
	// stw r11,2604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2604, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r10,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r10.u32);
	// addi r3,r11,-14076
	ctx.r3.s64 = ctx.r11.s64 + -14076;
	// bl 0x82816528
	ctx.lr = 0x82528DE4;
	sub_82816528(ctx, base);
	// lis r11,28141
	ctx.r11.s64 = 1844248576;
	// lis r10,14171
	ctx.r10.s64 = 928710656;
	// stw r3,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r3.u32);
	// ori r11,r11,24570
	ctx.r11.u64 = ctx.r11.u64 | 24570;
	// lis r9,-19565
	ctx.r9.s64 = -1282211840;
	// lis r8,13739
	ctx.r8.s64 = 900399104;
	// stw r11,3644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3644, ctx.r11.u32);
	// ori r10,r10,50012
	ctx.r10.u64 = ctx.r10.u64 | 50012;
	// ori r9,r9,4546
	ctx.r9.u64 = ctx.r9.u64 | 4546;
	// ori r11,r8,3401
	ctx.r11.u64 = ctx.r8.u64 | 3401;
	// stw r10,2612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2612, ctx.r10.u32);
	// stw r9,5776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5776, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2616, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82528E28"))) PPC_WEAK_FUNC(sub_82528E28);
PPC_FUNC_IMPL(__imp__sub_82528E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82528E30;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x824df418
	ctx.lr = 0x82528E40;
	sub_824DF418(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r8,6764(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6764);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,26669
	ctx.r9.s64 = 1747779584;
	// addi r3,r10,23244
	ctx.r3.s64 = ctx.r10.s64 + 23244;
	// ori r28,r9,58543
	ctx.r28.u64 = ctx.r9.u64 | 58543;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r30,2
	ctx.r30.s64 = 2;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,6772(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6772);
	// lwz r10,6776(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6776);
	// lwz r9,6760(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6760);
	// lwz r27,6780(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6780);
	// lwz r26,6768(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6768);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// bl 0x82816528
	ctx.lr = 0x82528E98;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r25,152(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,136
	ctx.r5.s64 = 136;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,64
	ctx.r6.s64 = 64;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r8,r26,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// rldicr r10,r27,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x824e4120
	ctx.lr = 0x82528ED8;
	sub_824E4120(ctx, base);
	// stw r3,6756(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6756, ctx.r3.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,23236
	ctx.r3.s64 = ctx.r11.s64 + 23236;
	// lwz r10,6772(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6772);
	// lwz r8,6776(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6776);
	// lis r9,9749
	ctx.r9.s64 = 638910464;
	// lwz r11,6760(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6760);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r7,6764(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6764);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r28,6780(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6780);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r27,6768(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6768);
	// ori r26,r9,17317
	ctx.r26.u64 = ctx.r9.u64 | 17317;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// bl 0x82816528
	ctx.lr = 0x82528F24;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r25,152(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,136
	ctx.r5.s64 = 136;
	// ld r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r6,64
	ctx.r6.s64 = 64;
	// ld r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r8,r27,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// rldicr r10,r28,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x824e4120
	ctx.lr = 0x82528F64;
	sub_824E4120(ctx, base);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r3,6752(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6752, ctx.r3.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f4,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,3332(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3332);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,6756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6756);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x82331120
	ctx.lr = 0x82528FC0;
	sub_82331120(ctx, base);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,3332(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3332);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,6752(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6752);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82331120
	ctx.lr = 0x82528FFC;
	sub_82331120(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82529008"))) PPC_WEAK_FUNC(sub_82529008);
PPC_FUNC_IMPL(__imp__sub_82529008) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,6756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6756);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,7523
	ctx.r10.s64 = 493027328;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r10,r10,55268
	ctx.r10.u64 = ctx.r10.u64 | 55268;
	// stw r10,2608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2608, ctx.r10.u32);
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252902C"))) PPC_WEAK_FUNC(sub_8252902C);
PPC_FUNC_IMPL(__imp__sub_8252902C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82529030"))) PPC_WEAK_FUNC(sub_82529030);
PPC_FUNC_IMPL(__imp__sub_82529030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,6756(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6756);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6756(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6756);
	// lfs f13,620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// lfs f12,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,612(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// lfs f0,616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,600(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 600);
	// stfs f0,492(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 492, temp.u32);
	// lwz r6,608(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// stfs f12,500(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// lwz r7,604(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// stfs f13,496(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// stw r8,476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 476, ctx.r8.u32);
	// stw r7,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r7.u32);
	// stw r6,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r6.u32);
	// stw r9,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82529098"))) PPC_WEAK_FUNC(sub_82529098);
PPC_FUNC_IMPL(__imp__sub_82529098) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,6752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6752);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,7724
	ctx.r10.s64 = 506200064;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r10,r10,43020
	ctx.r10.u64 = ctx.r10.u64 | 43020;
	// stw r10,2608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2608, ctx.r10.u32);
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825290BC"))) PPC_WEAK_FUNC(sub_825290BC);
PPC_FUNC_IMPL(__imp__sub_825290BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825290C0"))) PPC_WEAK_FUNC(sub_825290C0);
PPC_FUNC_IMPL(__imp__sub_825290C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,6752(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6752(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6752);
	// lfs f13,620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// lfs f12,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,612(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// lfs f0,616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,600(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 600);
	// stfs f0,492(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 492, temp.u32);
	// lwz r6,608(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// stfs f12,500(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// lwz r7,604(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// stfs f13,496(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// stw r8,476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 476, ctx.r8.u32);
	// stw r7,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r7.u32);
	// stw r6,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r6.u32);
	// stw r9,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82529128"))) PPC_WEAK_FUNC(sub_82529128);
PPC_FUNC_IMPL(__imp__sub_82529128) {
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
	ctx.lr = 0x82529144;
	sub_82332928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82529160
	if (ctx.cr0.eq) goto loc_82529160;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,1624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82529160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82529160:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2432);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82529178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82529190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2440);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825291A8;
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

__attribute__((alias("__imp__sub_825291C0"))) PPC_WEAK_FUNC(sub_825291C0);
PPC_FUNC_IMPL(__imp__sub_825291C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2428);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825291EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82529204;
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

__attribute__((alias("__imp__sub_82529220"))) PPC_WEAK_FUNC(sub_82529220);
PPC_FUNC_IMPL(__imp__sub_82529220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2432);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252924C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82529264;
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

__attribute__((alias("__imp__sub_82529280"))) PPC_WEAK_FUNC(sub_82529280);
PPC_FUNC_IMPL(__imp__sub_82529280) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2428(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 2428);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82529290"))) PPC_WEAK_FUNC(sub_82529290);
PPC_FUNC_IMPL(__imp__sub_82529290) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2432(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 2432);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825292A0"))) PPC_WEAK_FUNC(sub_825292A0);
PPC_FUNC_IMPL(__imp__sub_825292A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2420(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 2420);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825292B0"))) PPC_WEAK_FUNC(sub_825292B0);
PPC_FUNC_IMPL(__imp__sub_825292B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2424(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 2424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825292C0"))) PPC_WEAK_FUNC(sub_825292C0);
PPC_FUNC_IMPL(__imp__sub_825292C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2440(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 2440);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825292D0"))) PPC_WEAK_FUNC(sub_825292D0);
PPC_FUNC_IMPL(__imp__sub_825292D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-21928
	ctx.r3.s64 = ctx.r11.s64 + -21928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825292E0"))) PPC_WEAK_FUNC(sub_825292E0);
PPC_FUNC_IMPL(__imp__sub_825292E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a4860
	sub_823A4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825292E8"))) PPC_WEAK_FUNC(sub_825292E8);
PPC_FUNC_IMPL(__imp__sub_825292E8) {
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
	// li r3,2112
	ctx.r3.s64 = 2112;
	// bl 0x82833108
	ctx.lr = 0x82529304;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252931c
	if (ctx.cr0.eq) goto loc_8252931C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82529488
	ctx.lr = 0x82529318;
	sub_82529488(ctx, base);
	// b 0x82529320
	goto loc_82529320;
loc_8252931C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82529320:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82529334
	if (ctx.cr6.eq) goto loc_82529334;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82529334:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82529348"))) PPC_WEAK_FUNC(sub_82529348);
PPC_FUNC_IMPL(__imp__sub_82529348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82529378
	if (ctx.cr6.eq) goto loc_82529378;
	// bl 0x823a4860
	ctx.lr = 0x82529370;
	sub_823A4860(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825293d4
	if (ctx.cr6.eq) goto loc_825293D4;
loc_82529378:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82524db0
	ctx.lr = 0x8252938C;
	sub_82524DB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825293d4
	if (!ctx.cr0.eq) goto loc_825293D4;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346e08
	ctx.lr = 0x825293A8;
	sub_82346E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825293d4
	if (!ctx.cr0.eq) goto loc_825293D4;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8234b850
	ctx.lr = 0x825293C8;
	sub_8234B850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x825293d8
	if (ctx.cr0.eq) goto loc_825293D8;
loc_825293D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825293D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825293F0"))) PPC_WEAK_FUNC(sub_825293F0);
PPC_FUNC_IMPL(__imp__sub_825293F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a4860
	ctx.lr = 0x82529410;
	sub_823A4860(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82529420
	if (!ctx.cr6.eq) goto loc_82529420;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// b 0x82529470
	goto loc_82529470;
loc_82529420:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82524e78
	ctx.lr = 0x82529434;
	sub_82524E78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82529470
	if (!ctx.cr0.eq) goto loc_82529470;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346ed0
	ctx.lr = 0x82529450;
	sub_82346ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82529470
	if (!ctx.cr0.eq) goto loc_82529470;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8234b8c8
	ctx.lr = 0x82529470;
	sub_8234B8C8(ctx, base);
loc_82529470:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82529488"))) PPC_WEAK_FUNC(sub_82529488);
PPC_FUNC_IMPL(__imp__sub_82529488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82529490;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-16708
	ctx.r11.s64 = ctx.r11.s64 + -16708;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r9,r9,-16684
	ctx.r9.s64 = ctx.r9.s64 + -16684;
	// addi r11,r8,-16672
	ctx.r11.s64 = ctx.r8.s64 + -16672;
	// addi r10,r7,-12364
	ctx.r10.s64 = ctx.r7.s64 + -12364;
	// stw r9,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r9.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// addi r27,r31,2000
	ctx.r27.s64 = ctx.r31.s64 + 2000;
	// stw r10,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r10.u32);
	// addi r30,r31,2016
	ctx.r30.s64 = ctx.r31.s64 + 2016;
	// addi r26,r31,2032
	ctx.r26.s64 = ctx.r31.s64 + 2032;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x825294f8
	if (!ctx.cr6.eq) goto loc_825294F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82529504
	goto loc_82529504;
loc_825294F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82529504:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823ff1a0
	ctx.lr = 0x8252950C;
	sub_823FF1A0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8252951c
	if (!ctx.cr6.eq) goto loc_8252951C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82529528
	goto loc_82529528;
loc_8252951C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82529528:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823511c8
	ctx.lr = 0x82529534;
	sub_823511C8(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-20040
	ctx.r11.s64 = ctx.r11.s64 + -20040;
	// addi r10,r10,-18468
	ctx.r10.s64 = ctx.r10.s64 + -18468;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r9,r9,19272
	ctx.r9.s64 = ctx.r9.s64 + 19272;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r11,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// bne cr6,0x82529598
	if (!ctx.cr6.eq) goto loc_82529598;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825295a4
	goto loc_825295A4;
loc_82529598:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_825295A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82346f30
	ctx.lr = 0x825295B0;
	sub_82346F30(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x825295c0
	if (!ctx.cr6.eq) goto loc_825295C0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825295cc
	goto loc_825295CC;
loc_825295C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_825295CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,2064
	ctx.r3.s64 = ctx.r31.s64 + 2064;
	// bl 0x8234c128
	ctx.lr = 0x825295D8;
	sub_8234C128(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-14016
	ctx.r11.s64 = ctx.r11.s64 + -14016;
	// addi r10,r10,-12444
	ctx.r10.s64 = ctx.r10.s64 + -12444;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r9,r9,19272
	ctx.r9.s64 = ctx.r9.s64 + 19272;
	// addi r8,r8,-12392
	ctx.r8.s64 = ctx.r8.s64 + -12392;
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
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82529668"))) PPC_WEAK_FUNC(sub_82529668);
PPC_FUNC_IMPL(__imp__sub_82529668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82529670;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-16708
	ctx.r11.s64 = ctx.r11.s64 + -16708;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r11,r8,-16672
	ctx.r11.s64 = ctx.r8.s64 + -16672;
	// addi r9,r9,-16684
	ctx.r9.s64 = ctx.r9.s64 + -16684;
	// addi r10,r7,-12364
	ctx.r10.s64 = ctx.r7.s64 + -12364;
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// stw r9,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r9.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r10,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r10.u32);
	// addi r30,r31,2000
	ctx.r30.s64 = ctx.r31.s64 + 2000;
	// addi r29,r31,2016
	ctx.r29.s64 = ctx.r31.s64 + 2016;
	// addi r28,r31,2032
	ctx.r28.s64 = ctx.r31.s64 + 2032;
	// bl 0x824cbb48
	ctx.lr = 0x825296C8;
	sub_824CBB48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82501770
	ctx.lr = 0x825296D4;
	sub_82501770(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82524fc0
	ctx.lr = 0x825296E0;
	sub_82524FC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ba650
	ctx.lr = 0x825296EC;
	sub_825BA650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2064
	ctx.r3.s64 = ctx.r31.s64 + 2064;
	// bl 0x824d8ef8
	ctx.lr = 0x825296F8;
	sub_824D8EF8(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r7,-18240
	ctx.r3.s64 = ctx.r7.s64 + -18240;
	// addi r11,r11,-14016
	ctx.r11.s64 = ctx.r11.s64 + -14016;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r10,r10,-12444
	ctx.r10.s64 = ctx.r10.s64 + -12444;
	// addi r9,r9,19272
	ctx.r9.s64 = ctx.r9.s64 + 19272;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r8,r8,-12392
	ctx.r8.s64 = ctx.r8.s64 + -12392;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-2064
	ctx.r11.s64 = ctx.r11.s64 + -2064;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x82529784;
	sub_82816528(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r3,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r3.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lfs f0,17148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,16620(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16620);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stfs f0,1628(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1628, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stfs f13,1632(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1632, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,1956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1956, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82529808"))) PPC_WEAK_FUNC(sub_82529808);
PPC_FUNC_IMPL(__imp__sub_82529808) {
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
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba700
	ctx.lr = 0x8252982C;
	sub_825BA700(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x824d8f88
	ctx.lr = 0x82529840;
	sub_824D8F88(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82501810
	ctx.lr = 0x82529850;
	sub_82501810(ctx, base);
	// lwz r3,-28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// bl 0x82895f78
	ctx.lr = 0x82529858;
	sub_82895F78(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lfs f0,400(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f13,1624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1624);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,1632(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1632, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82529888"))) PPC_WEAK_FUNC(sub_82529888);
PPC_FUNC_IMPL(__imp__sub_82529888) {
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
	// lwz r11,-2064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2064);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,-2060(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2060);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-2064
	ctx.r3.s64 = ctx.r11.s64 + -2064;
	// bl 0x824d90c0
	ctx.lr = 0x825298B8;
	sub_824D90C0(ctx, base);
	// lwz r11,3424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3424);
	// lwz r10,3340(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,1108(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1108);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825298F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3472);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82529918"))) PPC_WEAK_FUNC(sub_82529918);
PPC_FUNC_IMPL(__imp__sub_82529918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x824ce338
	ctx.lr = 0x82529948;
	sub_824CE338(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82529978
	if (ctx.cr6.eq) goto loc_82529978;
	// bl 0x823a4708
	ctx.lr = 0x82529954;
	sub_823A4708(ctx, base);
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
	ctx.lr = 0x8252996C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x8252997c
	if (!ctx.cr0.eq) goto loc_8252997C;
loc_82529978:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252997C:
	// stw r11,-28(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

