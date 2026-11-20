#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8257F798"))) PPC_WEAK_FUNC(sub_8257F798);
PPC_FUNC_IMPL(__imp__sub_8257F798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1616
	ctx.r3.s64 = 1616;
	// bl 0x82833108
	ctx.lr = 0x8257F7B4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257f7c8
	if (ctx.cr0.eq) goto loc_8257F7C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8257f830
	ctx.lr = 0x8257F7C4;
	sub_8257F830(ctx, base);
	// b 0x8257f7cc
	goto loc_8257F7CC;
loc_8257F7C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257F7CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F7E0"))) PPC_WEAK_FUNC(sub_8257F7E0);
PPC_FUNC_IMPL(__imp__sub_8257F7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823bc488
	ctx.lr = 0x8257F800;
	sub_823BC488(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8257f814
	if (ctx.cr6.eq) goto loc_8257F814;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x8257F814;
	sub_825702D8(ctx, base);
loc_8257F814:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F830"))) PPC_WEAK_FUNC(sub_8257F830);
PPC_FUNC_IMPL(__imp__sub_8257F830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8257F838;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82571e20
	ctx.lr = 0x8257F848;
	sub_82571E20(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-26664
	ctx.r11.s64 = ctx.r11.s64 + -26664;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-25572
	ctx.r10.s64 = ctx.r10.s64 + -25572;
	// addi r9,r9,-25520
	ctx.r9.s64 = ctx.r9.s64 + -25520;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// addi r31,r28,1584
	ctx.r31.s64 = ctx.r28.s64 + 1584;
	// stw r9,396(r28)
	PPC_STORE_U32(ctx.r28.u32 + 396, ctx.r9.u32);
	// addi r29,r26,1584
	ctx.r29.s64 = ctx.r26.s64 + 1584;
	// stw r30,1592(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1592, ctx.r30.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r30,1596(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1596, ctx.r30.u32);
	// stw r30,1600(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1600, ctx.r30.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r11,1588(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1588, ctx.r11.u32);
	// stw r30,1604(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1604, ctx.r30.u32);
	// stw r30,1584(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1584, ctx.r30.u32);
	// beq cr6,0x8257f938
	if (ctx.cr6.eq) goto loc_8257F938;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257f938
	if (!ctx.cr6.gt) goto loc_8257F938;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257f8c8
	if (ctx.cr0.eq) goto loc_8257F8C8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8257F8C8;
	sub_82332C38(ctx, base);
loc_8257F8C8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257f938
	if (!ctx.cr6.gt) goto loc_8257F938;
loc_8257F8D8:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x8257F8EC;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257f924
	if (ctx.cr0.eq) goto loc_8257F924;
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
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_8257F924:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257f8d8
	if (ctx.cr6.lt) goto loc_8257F8D8;
loc_8257F938:
	// lwz r11,1608(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1608);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,1608(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1608, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F950"))) PPC_WEAK_FUNC(sub_8257F950);
PPC_FUNC_IMPL(__imp__sub_8257F950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8257F958;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,1584
	ctx.r31.s64 = ctx.r30.s64 + 1584;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1600(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8257F980;
	sub_82332CA8(ctx, base);
	// lwz r3,1596(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257f990
	if (ctx.cr6.eq) goto loc_8257F990;
	// bl 0x82332db8
	ctx.lr = 0x8257F990;
	sub_82332DB8(ctx, base);
loc_8257F990:
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
	// bl 0x82570708
	ctx.lr = 0x8257F9A8;
	sub_82570708(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257f9b8
	if (ctx.cr0.eq) goto loc_8257F9B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x8257F9B8;
	sub_82332DB8(ctx, base);
loc_8257F9B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F9C8"))) PPC_WEAK_FUNC(sub_8257F9C8);
PPC_FUNC_IMPL(__imp__sub_8257F9C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8257F9D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257F9F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,1584(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8257fb70
	if (ctx.cr0.eq) goto loc_8257FB70;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8257fb70
	if (ctx.cr6.eq) goto loc_8257FB70;
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f1,5636(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5636);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r5,620(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 620);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8257ff68
	ctx.lr = 0x8257FA24;
	sub_8257FF68(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82825ea0
	ctx.lr = 0x8257FA3C;
	sub_82825EA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8257fb70
	if (ctx.cr0.eq) goto loc_8257FB70;
	// lwz r11,1516(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257fb58
	if (ctx.cr6.eq) goto loc_8257FB58;
	// lfs f0,628(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f0,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,1664(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
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
	// ble cr6,0x8257fb58
	if (!ctx.cr6.gt) goto loc_8257FB58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r29,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257FABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8257fb38
	if (ctx.cr0.eq) goto loc_8257FB38;
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r29.u32);
	// stw r10,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r10.u32);
	// stw r9,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r9.u32);
	// stw r8,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r8.u32);
	// beq 0x8257fb00
	if (ctx.cr0.eq) goto loc_8257FB00;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8257fb00
	if (ctx.cr6.eq) goto loc_8257FB00;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8257fb04
	goto loc_8257FB04;
loc_8257FB00:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8257FB04:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r3,r10,-19628
	ctx.r3.s64 = ctx.r10.s64 + -19628;
	// lwz r30,-6056(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82816528
	ctx.lr = 0x8257FB18;
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
	// bl 0x829e4160
	ctx.lr = 0x8257FB34;
	sub_829E4160(ctx, base);
	// b 0x8257fb70
	goto loc_8257FB70;
loc_8257FB38:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r29.u32);
	// stw r11,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r11.u32);
	// stw r10,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r10.u32);
	// lwz r11,1504(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1504);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8257fb74
	goto loc_8257FB74;
loc_8257FB58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257FB70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257FB70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257FB74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257FB80"))) PPC_WEAK_FUNC(sub_8257FB80);
PPC_FUNC_IMPL(__imp__sub_8257FB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8257FB88;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r31,1584(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257fd94
	if (ctx.cr6.eq) goto loc_8257FD94;
	// bl 0x823aecd0
	ctx.lr = 0x8257FBA8;
	sub_823AECD0(ctx, base);
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
	ctx.lr = 0x8257FBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257fd94
	if (!ctx.cr0.eq) goto loc_8257FD94;
	// bl 0x82410cb0
	ctx.lr = 0x8257FBCC;
	sub_82410CB0(ctx, base);
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
	ctx.lr = 0x8257FBE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257fd94
	if (!ctx.cr0.eq) goto loc_8257FD94;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,2236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2236);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lfs f31,-24640(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24640);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8257fc10
	if (ctx.cr6.eq) goto loc_8257FC10;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8257fc68
	if (!ctx.cr6.eq) goto loc_8257FC68;
loc_8257FC10:
	// stfs f31,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,1928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f2,3108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3108);
	ctx.f2.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,3112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3112);
	ctx.f1.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x824d7b70
	ctx.lr = 0x8257FC60;
	sub_824D7B70(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x8257fcd4
	if (!ctx.cr0.eq) goto loc_8257FCD4;
loc_8257FC68:
	// lwz r11,2236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2236);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8257fc7c
	if (ctx.cr6.eq) goto loc_8257FC7C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257fcd4
	if (!ctx.cr6.eq) goto loc_8257FCD4;
loc_8257FC7C:
	// stfs f31,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,1928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f2,1820(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1820);
	ctx.f2.f64 = double(temp.f32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x824d7b70
	ctx.lr = 0x8257FCD0;
	sub_824D7B70(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8257FCD4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257FCE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8257fd94
	if (!ctx.cr6.eq) goto loc_8257FD94;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8257fd94
	if (ctx.cr6.eq) goto loc_8257FD94;
	// bl 0x824395b8
	ctx.lr = 0x8257FD00;
	sub_824395B8(ctx, base);
	// lwz r11,3072(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257fd94
	if (ctx.cr6.eq) goto loc_8257FD94;
	// lwz r11,628(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,5636(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5636);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ld r5,620(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 620);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8257ff68
	ctx.lr = 0x8257FD2C;
	sub_8257FF68(ctx, base);
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r28,44(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r29,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r29.u32);
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257fd60
	if (!ctx.cr6.eq) goto loc_8257FD60;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,408
	ctx.r3.s64 = ctx.r11.s64 + 408;
	// bl 0x82a51148
	ctx.lr = 0x8257FD58;
	sub_82A51148(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8257fd7c
	goto loc_8257FD7C;
loc_8257FD60:
	// lwz r3,1492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257FD7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257FD7C:
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// stw r28,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r28.u32);
	// b 0x8257fd98
	goto loc_8257FD98;
loc_8257FD94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257FD98:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257FDA8"))) PPC_WEAK_FUNC(sub_8257FDA8);
PPC_FUNC_IMPL(__imp__sub_8257FDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1492);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r3,r11,100
	ctx.r3.u64 = ctx.r11.u64 & 100;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257FDC0"))) PPC_WEAK_FUNC(sub_8257FDC0);
PPC_FUNC_IMPL(__imp__sub_8257FDC0) {
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
	// bl 0x8257a570
	ctx.lr = 0x8257FDD8;
	sub_8257A570(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,-1152
	ctx.r8.s64 = ctx.r11.s64 + -1152;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257fe18
	if (!ctx.cr6.gt) goto loc_8257FE18;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_8257FDFC:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8257fe20
	if (ctx.cr6.eq) goto loc_8257FE20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257fdfc
	if (ctx.cr6.lt) goto loc_8257FDFC;
loc_8257FE18:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8257FE20;
	sub_82410060(ctx, base);
loc_8257FE20:
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

__attribute__((alias("__imp__sub_8257FE38"))) PPC_WEAK_FUNC(sub_8257FE38);
PPC_FUNC_IMPL(__imp__sub_8257FE38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// stw r10,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r10.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r9,-600
	ctx.r4.s64 = ctx.r9.s64 + -600;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257FE60"))) PPC_WEAK_FUNC(sub_8257FE60);
PPC_FUNC_IMPL(__imp__sub_8257FE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8257FE68;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,1584
	ctx.r3.s64 = ctx.r31.s64 + 1584;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r30,1608(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// extsw r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,16448(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16448);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x823327e0
	ctx.lr = 0x8257FEC0;
	sub_823327E0(ctx, base);
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,1596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a455d0
	ctx.lr = 0x8257FED0;
	sub_82A455D0(ctx, base);
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257ff54
	if (!ctx.cr6.gt) goto loc_8257FF54;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
loc_8257FEE8:
	// fadds f31,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a4e118
	ctx.lr = 0x8257FEF8;
	sub_82A4E118(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a4e038
	ctx.lr = 0x8257FF08;
	sub_82A4E038(ctx, base);
	// lwz r11,1596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,1
	ctx.r6.s64 = 1;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r11,1596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257fee8
	if (ctx.cr6.lt) goto loc_8257FEE8;
loc_8257FF54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_8257FF68"))) PPC_WEAK_FUNC(sub_8257FF68);
PPC_FUNC_IMPL(__imp__sub_8257FF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8257FF70;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,1584(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1584);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x824defd8
	ctx.lr = 0x8257FFA0;
	sub_824DEFD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257ffb8
	if (ctx.cr0.eq) goto loc_8257FFB8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82567050
	ctx.lr = 0x8257FFB4;
	sub_82567050(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8257FFB8:
	// lwz r7,1608(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// rotlwi r11,r31,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// lwz r9,1596(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1596);
	// divw r8,r31,r7
	ctx.r8.s32 = ctx.r31.s32 / ctx.r7.s32;
	// lfs f13,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// divw r6,r31,r7
	ctx.r6.s32 = ctx.r31.s32 / ctx.r7.s32;
	// lfs f12,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// lfs f11,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lfs f0,-11424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11424);
	ctx.f0.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// subf r10,r6,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r6.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r10,r31,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// lfsx f10,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// andc r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ~ctx.r10.u64;
	// twllei r7,0
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// twllei r7,0
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// twlgei r6,-1
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// twlgei r10,-1
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// fmadds f0,f7,f0,f31
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580070"))) PPC_WEAK_FUNC(sub_82580070);
PPC_FUNC_IMPL(__imp__sub_82580070) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8257f950
	sub_8257F950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580078"))) PPC_WEAK_FUNC(sub_82580078);
PPC_FUNC_IMPL(__imp__sub_82580078) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8257f950
	sub_8257F950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580080"))) PPC_WEAK_FUNC(sub_82580080);
PPC_FUNC_IMPL(__imp__sub_82580080) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8257f7e0
	sub_8257F7E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580088"))) PPC_WEAK_FUNC(sub_82580088);
PPC_FUNC_IMPL(__imp__sub_82580088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,20612
	ctx.r3.s64 = ctx.r11.s64 + 20612;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580098"))) PPC_WEAK_FUNC(sub_82580098);
PPC_FUNC_IMPL(__imp__sub_82580098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825800d0
	if (ctx.cr6.eq) goto loc_825800D0;
	// bl 0x82437878
	ctx.lr = 0x825800C0;
	sub_82437878(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825800d0
	if (!ctx.cr6.eq) goto loc_825800D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825800e8
	goto loc_825800E8;
loc_825800D0:
	// lwz r11,-124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -124);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-124
	ctx.r3.s64 = ctx.r11.s64 + -124;
	// bl 0x82570278
	ctx.lr = 0x825800E8;
	sub_82570278(ctx, base);
loc_825800E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580100"))) PPC_WEAK_FUNC(sub_82580100);
PPC_FUNC_IMPL(__imp__sub_82580100) {
	PPC_FUNC_PROLOGUE();
	// b 0x82570208
	sub_82570208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580108"))) PPC_WEAK_FUNC(sub_82580108);
PPC_FUNC_IMPL(__imp__sub_82580108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82437878
	ctx.lr = 0x82580128;
	sub_82437878(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82580138
	if (!ctx.cr6.eq) goto loc_82580138;
	// addi r3,r31,-128
	ctx.r3.s64 = ctx.r31.s64 + -128;
	// b 0x82580150
	goto loc_82580150;
loc_82580138:
	// lwz r11,-124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -124);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-124
	ctx.r3.s64 = ctx.r11.s64 + -124;
	// bl 0x825702d8
	ctx.lr = 0x82580150;
	sub_825702D8(ctx, base);
loc_82580150:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580168"))) PPC_WEAK_FUNC(sub_82580168);
PPC_FUNC_IMPL(__imp__sub_82580168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82580170;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-25256
	ctx.r11.s64 = ctx.r11.s64 + -25256;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a4e530
	ctx.lr = 0x82580198;
	sub_82A4E530(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a4e530
	ctx.lr = 0x825801A8;
	sub_82A4E530(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82816528
	ctx.lr = 0x825801B0;
	sub_82816528(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825801C0"))) PPC_WEAK_FUNC(sub_825801C0);
PPC_FUNC_IMPL(__imp__sub_825801C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825801C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,6748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6748);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82580210
	if (!ctx.cr6.gt) goto loc_82580210;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82580210:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825802ac
	if (ctx.cr6.lt) goto loc_825802AC;
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8258026c
	if (ctx.cr6.eq) goto loc_8258026C;
	// subf. r29,r10,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x8258026c
	if (!ctx.cr0.gt) goto loc_8258026C;
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
	ctx.lr = 0x82580248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8289f1a8
	ctx.lr = 0x82580254;
	sub_8289F1A8(ctx, base);
	// lwz r11,6748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6748);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r11,6748(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6748, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8258026C:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x825802a4
	if (!ctx.cr6.gt) goto loc_825802A4;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8258029c
	if (!ctx.cr6.eq) goto loc_8258029C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825802a4
	if (ctx.cr6.eq) goto loc_825802A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825802a0
	goto loc_825802A0;
loc_8258029C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_825802A0:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_825802A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825802b0
	goto loc_825802B0;
loc_825802AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825802B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825802B8"))) PPC_WEAK_FUNC(sub_825802B8);
PPC_FUNC_IMPL(__imp__sub_825802B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6748(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6748);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825802C8"))) PPC_WEAK_FUNC(sub_825802C8);
PPC_FUNC_IMPL(__imp__sub_825802C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,6748(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6748);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// addic. r9,r8,1
	ctx.xer.ca = ctx.r8.u32 > 4294967294;
	ctx.r9.s64 = ctx.r8.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// ble 0x82580318
	if (!ctx.cr0.gt) goto loc_82580318;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825802EC:
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,6760(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6760);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,6760(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6760, ctx.r9.u32);
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825802ec
	if (ctx.cr6.lt) goto loc_825802EC;
loc_82580318:
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82580338
	if (!ctx.cr6.gt) goto loc_82580338;
	// lwz r10,6760(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6760);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82580338
	if (!ctx.cr6.gt) goto loc_82580338;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82580338:
	// stw r10,6752(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6752, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580340"))) PPC_WEAK_FUNC(sub_82580340);
PPC_FUNC_IMPL(__imp__sub_82580340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580368"))) PPC_WEAK_FUNC(sub_82580368);
PPC_FUNC_IMPL(__imp__sub_82580368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580378"))) PPC_WEAK_FUNC(sub_82580378);
PPC_FUNC_IMPL(__imp__sub_82580378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x825803A8;
	sub_829B98F8(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x825803AC;
	sub_82416348(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r6,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r6.u32);
	// bne 0x825803c0
	if (!ctx.cr0.eq) goto loc_825803C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825803ec
	goto loc_825803EC;
loc_825803C0:
	// lwz r3,1492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// addi r5,r6,620
	ctx.r5.s64 = ctx.r6.s64 + 620;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r31,620
	ctx.r4.s64 = ctx.r31.s64 + 620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825803E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_825803EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580408"))) PPC_WEAK_FUNC(sub_82580408);
PPC_FUNC_IMPL(__imp__sub_82580408) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8258042c
	if (ctx.cr6.eq) goto loc_8258042C;
	// lwz r11,6716(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258042c
	if (ctx.cr6.eq) goto loc_8258042C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,6716(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6716, ctx.r11.u32);
	// blr 
	return;
loc_8258042C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580438"))) PPC_WEAK_FUNC(sub_82580438);
PPC_FUNC_IMPL(__imp__sub_82580438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82580440;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82580490
	if (!ctx.cr6.gt) goto loc_82580490;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82580460:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258047C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82580460
	if (ctx.cr6.lt) goto loc_82580460;
loc_82580490:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580498"))) PPC_WEAK_FUNC(sub_82580498);
PPC_FUNC_IMPL(__imp__sub_82580498) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-25196
	ctx.r11.s64 = ctx.r11.s64 + -25196;
	// addi r9,r9,-25168
	ctx.r9.s64 = ctx.r9.s64 + -25168;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r8,r11,-24076
	ctx.r8.s64 = ctx.r11.s64 + -24076;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// addi r7,r9,-24024
	ctx.r7.s64 = ctx.r9.s64 + -24024;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r4,15834
	ctx.r4.s64 = ctx.r4.s64 + 15834;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r7,400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 400, ctx.r7.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r10,-124
	ctx.r8.s64 = ctx.r10.s64 + -124;
	// stwx r8,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r6,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r5,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// bl 0x8233a258
	ctx.lr = 0x82580588;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x82580594;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8258059C;
	sub_82333960(ctx, base);
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

__attribute__((alias("__imp__sub_825805B8"))) PPC_WEAK_FUNC(sub_825805B8);
PPC_FUNC_IMPL(__imp__sub_825805B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825805C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-128
	ctx.r30.s64 = ctx.r3.s64 + -128;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,128
	ctx.r31.s64 = ctx.r30.s64 + 128;
	// addi r3,r31,-64
	ctx.r3.s64 = ctx.r31.s64 + -64;
	// bl 0x8269b988
	ctx.lr = 0x825805D8;
	sub_8269B988(ctx, base);
	// addi r3,r31,-88
	ctx.r3.s64 = ctx.r31.s64 + -88;
	// bl 0x82333960
	ctx.lr = 0x825805E0;
	sub_82333960(ctx, base);
	// addi r3,r31,-112
	ctx.r3.s64 = ctx.r31.s64 + -112;
	// bl 0x82333960
	ctx.lr = 0x825805E8;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82570708
	ctx.lr = 0x825805F0;
	sub_82570708(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82580600
	if (ctx.cr0.eq) goto loc_82580600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x82580600;
	sub_82332DB8(ctx, base);
loc_82580600:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580610"))) PPC_WEAK_FUNC(sub_82580610);
PPC_FUNC_IMPL(__imp__sub_82580610) {
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
	// lwz r11,-124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -124);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-124
	ctx.r3.s64 = ctx.r11.s64 + -124;
	// bl 0x825708c8
	ctx.lr = 0x82580640;
	sub_825708C8(ctx, base);
	// addi r3,r31,-128
	ctx.r3.s64 = ctx.r31.s64 + -128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82581ab0
	ctx.lr = 0x8258064C;
	sub_82581AB0(ctx, base);
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

__attribute__((alias("__imp__sub_82580668"))) PPC_WEAK_FUNC(sub_82580668);
PPC_FUNC_IMPL(__imp__sub_82580668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -124);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-124
	ctx.r3.s64 = ctx.r11.s64 + -124;
	// bl 0x825707e0
	ctx.lr = 0x82580690;
	sub_825707E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,-128
	ctx.r3.s64 = ctx.r31.s64 + -128;
	// stw r11,-120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -120, ctx.r11.u32);
	// lwz r11,-128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -128);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825806AC;
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

__attribute__((alias("__imp__sub_825806C0"))) PPC_WEAK_FUNC(sub_825806C0);
PPC_FUNC_IMPL(__imp__sub_825806C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825806C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,10548(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// bl 0x82439c68
	ctx.lr = 0x825806E0;
	sub_82439C68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8239d768
	ctx.lr = 0x825806F0;
	sub_8239D768(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82580744
	if (ctx.cr6.eq) goto loc_82580744;
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,1740(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82580738
	if (!ctx.cr6.gt) goto loc_82580738;
	// lwz r11,1736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1736);
loc_82580710:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,2184(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2184);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82580724
	if (!ctx.cr6.gt) goto loc_82580724;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82580724:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82580710
	if (!ctx.cr0.eq) goto loc_82580710;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// ble cr6,0x82580744
	if (!ctx.cr6.gt) goto loc_82580744;
loc_82580738:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82580db8
	ctx.lr = 0x82580740;
	sub_82580DB8(ctx, base);
	// b 0x82580784
	goto loc_82580784;
loc_82580744:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r8,7992
	ctx.r6.s64 = ctx.r8.s64 + 7992;
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
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfs f1,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// bl 0x82581d80
	ctx.lr = 0x82580784;
	sub_82581D80(ctx, base);
loc_82580784:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580790"))) PPC_WEAK_FUNC(sub_82580790);
PPC_FUNC_IMPL(__imp__sub_82580790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82580798;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// rlwinm r30,r5,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x829e4e20
	ctx.lr = 0x825807D8;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233a258
	ctx.lr = 0x825807E4;
	sub_8233A258(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r23,r11,7896
	ctx.r23.s64 = ctx.r11.s64 + 7896;
	// lwz r26,112(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r25,108(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x82580804
	if (!ctx.cr6.eq) goto loc_82580804;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82580804:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-25432
	ctx.r4.s64 = ctx.r11.s64 + -25432;
	// bl 0x82a4cc80
	ctx.lr = 0x82580810;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8258096c
	if (!ctx.cr0.eq) goto loc_8258096C;
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x829e4e20
	ctx.lr = 0x82580830;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233a258
	ctx.lr = 0x8258083C;
	sub_8233A258(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x82580848;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82580850;
	sub_82333960(ctx, base);
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x829e4c90
	ctx.lr = 0x82580868;
	sub_829E4C90(ctx, base);
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x829e4c90
	ctx.lr = 0x82580884;
	sub_829E4C90(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
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
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq 0x825808c0
	if (ctx.cr0.eq) goto loc_825808C0;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_825808C0:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82333900
	ctx.lr = 0x825808C8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82580954
	if (ctx.cr0.eq) goto loc_82580954;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825808e8
	if (!ctx.cr6.eq) goto loc_825808E8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_825808E8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82409058
	ctx.lr = 0x825808F0;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r10,-25496
	ctx.r5.s64 = ctx.r10.s64 + -25496;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82580168
	ctx.lr = 0x8258090C;
	sub_82580168(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,-25244
	ctx.r11.s64 = ctx.r11.s64 + -25244;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
	// stw r24,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r24.u32);
	// stw r24,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r24.u32);
	// stw r24,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r24.u32);
	// stw r24,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r24.u32);
	// bl 0x82410060
	ctx.lr = 0x82580940;
	sub_82410060(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r24,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r24.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r24,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r24.u32);
	// b 0x82580958
	goto loc_82580958;
loc_82580954:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82580958:
	// clrlwi. r11,r22,31
	ctx.r11.u64 = ctx.r22.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82580c30
	if (ctx.cr0.eq) goto loc_82580C30;
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// b 0x82580c1c
	goto loc_82580C1C;
loc_8258096C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x8258097c
	if (!ctx.cr6.eq) goto loc_8258097C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8258097C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-25416
	ctx.r4.s64 = ctx.r11.s64 + -25416;
	// bl 0x82a4cc80
	ctx.lr = 0x82580988;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82580a5c
	if (!ctx.cr0.eq) goto loc_82580A5C;
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x829e4e20
	ctx.lr = 0x825809A8;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233a258
	ctx.lr = 0x825809B4;
	sub_8233A258(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x825809C0;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x825809C8;
	sub_82333960(ctx, base);
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x829e4d70
	ctx.lr = 0x825809E0;
	sub_829E4D70(ctx, base);
	// li r3,80
	ctx.r3.s64 = 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82333900
	ctx.lr = 0x825809EC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82580a44
	if (ctx.cr0.eq) goto loc_82580A44;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r22,2
	ctx.r22.s64 = 2;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82580a0c
	if (!ctx.cr6.eq) goto loc_82580A0C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_82580A0C:
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82409058
	ctx.lr = 0x82580A14;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r10,-25480
	ctx.r5.s64 = ctx.r10.s64 + -25480;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82580168
	ctx.lr = 0x82580A2C;
	sub_82580168(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stfs f31,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// addi r11,r11,-25232
	ctx.r11.s64 = ctx.r11.s64 + -25232;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82580a48
	goto loc_82580A48;
loc_82580A44:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82580A48:
	// rlwinm. r11,r22,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82580c30
	if (ctx.cr0.eq) goto loc_82580C30;
	// lwz r3,580(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// addi r11,r1,452
	ctx.r11.s64 = ctx.r1.s64 + 452;
	// b 0x82580c1c
	goto loc_82580C1C;
loc_82580A5C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x82580a6c
	if (!ctx.cr6.eq) goto loc_82580A6C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82580A6C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-25404
	ctx.r4.s64 = ctx.r11.s64 + -25404;
	// bl 0x82a4cc80
	ctx.lr = 0x82580A78;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82580b50
	if (!ctx.cr0.eq) goto loc_82580B50;
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x829e4e20
	ctx.lr = 0x82580A98;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233a258
	ctx.lr = 0x82580AA4;
	sub_8233A258(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x82580AB0;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82580AB8;
	sub_82333960(ctx, base);
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x829e4c90
	ctx.lr = 0x82580AD0;
	sub_829E4C90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82333900
	ctx.lr = 0x82580ADC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82580b38
	if (ctx.cr0.eq) goto loc_82580B38;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r22,4
	ctx.r22.s64 = 4;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82580afc
	if (!ctx.cr6.eq) goto loc_82580AFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_82580AFC:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82409058
	ctx.lr = 0x82580B04;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r10,-25464
	ctx.r5.s64 = ctx.r10.s64 + -25464;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82580168
	ctx.lr = 0x82580B1C;
	sub_82580168(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r24,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r24.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// addi r11,r11,-25220
	ctx.r11.s64 = ctx.r11.s64 + -25220;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82580b3c
	goto loc_82580B3C;
loc_82580B38:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82580B3C:
	// rlwinm. r11,r22,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82580c30
	if (ctx.cr0.eq) goto loc_82580C30;
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// addi r11,r1,308
	ctx.r11.s64 = ctx.r1.s64 + 308;
	// b 0x82580c1c
	goto loc_82580C1C;
loc_82580B50:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x82580b60
	if (!ctx.cr6.eq) goto loc_82580B60;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82580B60:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-25388
	ctx.r4.s64 = ctx.r11.s64 + -25388;
	// bl 0x82a4cc80
	ctx.lr = 0x82580B6C;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82580c30
	if (!ctx.cr0.eq) goto loc_82580C30;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x829e4e20
	ctx.lr = 0x82580B8C;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233a258
	ctx.lr = 0x82580B98;
	sub_8233A258(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x82580BA4;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82580BAC;
	sub_82333960(ctx, base);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82333900
	ctx.lr = 0x82580BB4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82580c08
	if (ctx.cr0.eq) goto loc_82580C08;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r22,8
	ctx.r22.s64 = 8;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82580bd4
	if (!ctx.cr6.eq) goto loc_82580BD4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_82580BD4:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82409058
	ctx.lr = 0x82580BDC;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r10,-25448
	ctx.r5.s64 = ctx.r10.s64 + -25448;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82580168
	ctx.lr = 0x82580BF4;
	sub_82580168(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// addi r11,r11,-25208
	ctx.r11.s64 = ctx.r11.s64 + -25208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82580c0c
	goto loc_82580C0C;
loc_82580C08:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82580C0C:
	// rlwinm. r11,r22,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82580c30
	if (ctx.cr0.eq) goto loc_82580C30;
	// lwz r3,724(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// addi r11,r1,596
	ctx.r11.s64 = ctx.r1.s64 + 596;
loc_82580C1C:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82580c30
	if (ctx.cr6.eq) goto loc_82580C30;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82580c30
	if (ctx.cr6.eq) goto loc_82580C30;
	// bl 0x82332db8
	ctx.lr = 0x82580C30;
	sub_82332DB8(ctx, base);
loc_82580C30:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82580C38;
	sub_82333960(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580C48"))) PPC_WEAK_FUNC(sub_82580C48);
PPC_FUNC_IMPL(__imp__sub_82580C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82580C50;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,15834
	ctx.r4.s64 = ctx.r10.s64 + 15834;
	// lfs f31,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8233a258
	ctx.lr = 0x82580C78;
	sub_8233A258(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824192e0
	ctx.lr = 0x82580C88;
	sub_824192E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82580C94;
	sub_82333960(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82580da4
	if (ctx.cr6.eq) goto loc_82580DA4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82580cb0
	if (ctx.cr6.eq) goto loc_82580CB0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82580cb8
	goto loc_82580CB8;
loc_82580CB0:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82580CB8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82409058
	ctx.lr = 0x82580CC0;
	sub_82409058(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82580ce4
	if (ctx.cr6.eq) goto loc_82580CE4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82580ce4
	if (ctx.cr6.eq) goto loc_82580CE4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x82580CE4;
	sub_82332DB8(ctx, base);
loc_82580CE4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82580da4
	if (ctx.cr6.eq) goto loc_82580DA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6d68
	ctx.lr = 0x82580CF4;
	sub_829E6D68(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82580da4
	if (ctx.cr0.eq) goto loc_82580DA4;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r31,r11,-25636
	ctx.r31.s64 = ctx.r11.s64 + -25636;
	// bl 0x829e4e20
	ctx.lr = 0x82580D0C;
	sub_829E4E20(ctx, base);
loc_82580D0C:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq 0x82580d30
	if (ctx.cr0.eq) goto loc_82580D30;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82580d0c
	if (ctx.cr6.eq) goto loc_82580D0C;
loc_82580D30:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82580da4
	if (!ctx.cr0.eq) goto loc_82580DA4;
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// addi r31,r11,-25212
	ctx.r31.s64 = ctx.r11.s64 + -25212;
	// bl 0x829e4e20
	ctx.lr = 0x82580D4C;
	sub_829E4E20(ctx, base);
loc_82580D4C:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq 0x82580d70
	if (ctx.cr0.eq) goto loc_82580D70;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82580d4c
	if (ctx.cr6.eq) goto loc_82580D4C;
loc_82580D70:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82580da4
	if (!ctx.cr0.eq) goto loc_82580DA4;
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x829e4d70
	ctx.lr = 0x82580D90;
	sub_829E4D70(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82580da4
	if (!ctx.cr6.gt) goto loc_82580DA4;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_82580DA4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580DB8"))) PPC_WEAK_FUNC(sub_82580DB8);
PPC_FUNC_IMPL(__imp__sub_82580DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x82580DC0;
	__savegprlr_14(ctx, base);
	// stwu r1,-1888(r1)
	ea = -1888 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r16,r11,7896
	ctx.r16.s64 = ctx.r11.s64 + 7896;
	// stw r29,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r29.u32);
	// lwz r10,32(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82580df0
	if (ctx.cr6.eq) goto loc_82580DF0;
	// lwz r4,28(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// b 0x82580df4
	goto loc_82580DF4;
loc_82580DF0:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_82580DF4:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82409058
	ctx.lr = 0x82580DFC;
	sub_82409058(ctx, base);
	// lwz r11,724(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// addi r10,r1,596
	ctx.r10.s64 = ctx.r1.s64 + 596;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82580e20
	if (ctx.cr6.eq) goto loc_82580E20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82580e20
	if (ctx.cr6.eq) goto loc_82580E20;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x82580E20;
	sub_82332DB8(ctx, base);
loc_82580E20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6d68
	ctx.lr = 0x82580E28;
	sub_829E6D68(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82580c48
	ctx.lr = 0x82580E38;
	sub_82580C48(ctx, base);
	// stfs f1,12(r21)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r21.u32 + 12, temp.u32);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x829e4e20
	ctx.lr = 0x82580E4C;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233a258
	ctx.lr = 0x82580E58;
	sub_8233A258(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r28,r11,1920
	ctx.r28.s64 = ctx.r11.s64 + 1920;
	// addi r27,r10,-25368
	ctx.r27.s64 = ctx.r10.s64 + -25368;
loc_82580E68:
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82580E6C:
	// lwz r24,128(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82580e80
	if (!ctx.cr6.eq) goto loc_82580E80;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_82580E80:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x82580E88;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x825817bc
	if (!ctx.cr6.eq) goto loc_825817BC;
	// beq 0x82580ef8
	if (ctx.cr0.eq) goto loc_82580EF8;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82580ea8
	if (!ctx.cr6.eq) goto loc_82580EA8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_82580EA8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x82580EB0;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82580ec0
	if (!ctx.cr0.eq) goto loc_82580EC0;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82580e6c
	goto loc_82580E6C;
loc_82580EC0:
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x829e4e20
	ctx.lr = 0x82580ED4;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8233a258
	ctx.lr = 0x82580EE0;
	sub_8233A258(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400b48
	ctx.lr = 0x82580EEC;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82580EF4;
	sub_82333960(ctx, base);
	// b 0x82580e6c
	goto loc_82580E6C;
loc_82580EF8:
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x829e4c90
	ctx.lr = 0x82580F0C;
	sub_829E4C90(ctx, base);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82580f4c
	if (!ctx.cr6.lt) goto loc_82580F4C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x829e4e20
	ctx.lr = 0x82580F28;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8233a258
	ctx.lr = 0x82580F34;
	sub_8233A258(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400b48
	ctx.lr = 0x82580F40;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82580F48;
	sub_82333960(ctx, base);
	// b 0x82580e68
	goto loc_82580E68;
loc_82580F4C:
	// addi r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x829e4e20
	ctx.lr = 0x82580F5C;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8233a258
	ctx.lr = 0x82580F68;
	sub_8233A258(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400b48
	ctx.lr = 0x82580F74;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82580F7C;
	sub_82333960(ctx, base);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// addi r9,r9,-25432
	ctx.r9.s64 = ctx.r9.s64 + -25432;
	// addi r8,r8,-25336
	ctx.r8.s64 = ctx.r8.s64 + -25336;
	// addi r7,r7,-25348
	ctx.r7.s64 = ctx.r7.s64 + -25348;
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// addi r15,r11,-25288
	ctx.r15.s64 = ctx.r11.s64 + -25288;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// addi r14,r10,-25304
	ctx.r14.s64 = ctx.r10.s64 + -25304;
	// addi r17,r6,-25372
	ctx.r17.s64 = ctx.r6.s64 + -25372;
loc_82580FBC:
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// rlwinm r31,r23,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x829e4e20
	ctx.lr = 0x82580FD0;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8233a258
	ctx.lr = 0x82580FDC;
	sub_8233A258(ctx, base);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x829e4e20
	ctx.lr = 0x82580FEC;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8233a258
	ctx.lr = 0x82580FF8;
	sub_8233A258(ctx, base);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x829e4c90
	ctx.lr = 0x82581008;
	sub_829E4C90(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x825810c4
	if (ctx.cr6.eq) goto loc_825810C4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82581028
	if (!ctx.cr6.eq) goto loc_82581028;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_82581028:
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82409058
	ctx.lr = 0x82581030;
	sub_82409058(ctx, base);
	// lwz r20,272(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r19,268(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bne cr6,0x8258104c
	if (!ctx.cr6.eq) goto loc_8258104C;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_8258104C:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82409058
	ctx.lr = 0x82581054;
	sub_82409058(ctx, base);
	// lwz r29,132(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x82581060;
	sub_82816528(ctx, base);
	// stw r3,96(r21)
	PPC_STORE_U32(ctx.r21.u32 + 96, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82816528
	ctx.lr = 0x8258106C;
	sub_82816528(ctx, base);
	// stw r3,100(r21)
	PPC_STORE_U32(ctx.r21.u32 + 100, ctx.r3.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825818c0
	ctx.lr = 0x82581084;
	sub_825818C0(ctx, base);
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// addi r11,r1,308
	ctx.r11.s64 = ctx.r1.s64 + 308;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825810a0
	if (ctx.cr6.eq) goto loc_825810A0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825810a0
	if (ctx.cr6.eq) goto loc_825810A0;
	// bl 0x82332db8
	ctx.lr = 0x825810A0;
	sub_82332DB8(ctx, base);
loc_825810A0:
	// lwz r3,1300(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r11,r1,1172
	ctx.r11.s64 = ctx.r1.s64 + 1172;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825810bc
	if (ctx.cr6.eq) goto loc_825810BC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825810bc
	if (ctx.cr6.eq) goto loc_825810BC;
	// bl 0x82332db8
	ctx.lr = 0x825810BC;
	sub_82332DB8(ctx, base);
loc_825810BC:
	// li r18,0
	ctx.r18.s64 = 0;
	// b 0x8258114c
	goto loc_8258114C;
loc_825810C4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825810d0
	if (!ctx.cr6.eq) goto loc_825810D0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_825810D0:
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82409058
	ctx.lr = 0x825810D8;
	sub_82409058(ctx, base);
	// lwz r20,272(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r19,268(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bne cr6,0x825810f4
	if (!ctx.cr6.eq) goto loc_825810F4;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_825810F4:
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82409058
	ctx.lr = 0x825810FC;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x825818c0
	ctx.lr = 0x82581114;
	sub_825818C0(ctx, base);
	// lwz r3,1012(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1012);
	// addi r11,r1,884
	ctx.r11.s64 = ctx.r1.s64 + 884;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82581130
	if (ctx.cr6.eq) goto loc_82581130;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82581130
	if (ctx.cr6.eq) goto loc_82581130;
	// bl 0x82332db8
	ctx.lr = 0x82581130;
	sub_82332DB8(ctx, base);
loc_82581130:
	// lwz r3,1588(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// addi r11,r1,1460
	ctx.r11.s64 = ctx.r1.s64 + 1460;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8258114c
	if (ctx.cr6.eq) goto loc_8258114C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258114c
	if (ctx.cr6.eq) goto loc_8258114C;
	// bl 0x82332db8
	ctx.lr = 0x8258114C;
	sub_82332DB8(ctx, base);
loc_8258114C:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// rlwinm r31,r23,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x829e4e20
	ctx.lr = 0x82581160;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x8258116C;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400b48
	ctx.lr = 0x82581178;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82581180;
	sub_82333960(ctx, base);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x829e4e20
	ctx.lr = 0x82581190;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8233a258
	ctx.lr = 0x8258119C;
	sub_8233A258(ctx, base);
loc_8258119C:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825811b0
	if (!ctx.cr6.eq) goto loc_825811B0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_825811B0:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x825811B8;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82581378
	if (!ctx.cr0.eq) goto loc_82581378;
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825811d4
	if (!ctx.cr6.eq) goto loc_825811D4;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_825811D4:
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x82a4cc80
	ctx.lr = 0x825811DC;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82581378
	if (!ctx.cr0.eq) goto loc_82581378;
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x829e4e20
	ctx.lr = 0x825811F4;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x82581200;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400b48
	ctx.lr = 0x8258120C;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82581214;
	sub_82333960(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82581228
	if (!ctx.cr6.eq) goto loc_82581228;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_82581228:
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x82a4cc80
	ctx.lr = 0x82581230;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8258127c
	if (!ctx.cr0.eq) goto loc_8258127C;
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x829e4c90
	ctx.lr = 0x82581248;
	sub_829E4C90(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lfs f0,12(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// std r10,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r10.u64);
	// lfd f13,280(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.f0.u64);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
loc_8258127C:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258129C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bne cr6,0x825812b0
	if (!ctx.cr6.eq) goto loc_825812B0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_825812B0:
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82409058
	ctx.lr = 0x825812B8;
	sub_82409058(ctx, base);
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x82816528
	ctx.lr = 0x825812C0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825819a0
	ctx.lr = 0x825812CC;
	sub_825819A0(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82332d50
	ctx.lr = 0x825812E0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825812f4
	if (ctx.cr0.eq) goto loc_825812F4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_825812F4:
	// lwz r3,580(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// addi r11,r1,452
	ctx.r11.s64 = ctx.r1.s64 + 452;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82581310
	if (ctx.cr6.eq) goto loc_82581310;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82581310
	if (ctx.cr6.eq) goto loc_82581310;
	// bl 0x82332db8
	ctx.lr = 0x82581310;
	sub_82332DB8(ctx, base);
loc_82581310:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// rlwinm r31,r23,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x829e4e20
	ctx.lr = 0x82581324;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x82581330;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400b48
	ctx.lr = 0x8258133C;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82581344;
	sub_82333960(ctx, base);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x829e4e20
	ctx.lr = 0x82581354;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x82581360;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82400b48
	ctx.lr = 0x8258136C;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82581374;
	sub_82333960(ctx, base);
	// b 0x8258119c
	goto loc_8258119C;
loc_82581378:
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// rlwinm r31,r23,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x829e4e20
	ctx.lr = 0x8258138C;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x82581398;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82400b48
	ctx.lr = 0x825813A4;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x825813AC;
	sub_82333960(ctx, base);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x829e4c90
	ctx.lr = 0x825813BC;
	sub_829E4C90(ctx, base);
	// lwz r24,208(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r22,204(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bne cr6,0x825813d8
	if (!ctx.cr6.eq) goto loc_825813D8;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_825813D8:
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82409058
	ctx.lr = 0x825813E0;
	sub_82409058(ctx, base);
	// lwz r28,132(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bne cr6,0x825813f4
	if (!ctx.cr6.eq) goto loc_825813F4;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_825813F4:
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82409058
	ctx.lr = 0x825813FC;
	sub_82409058(ctx, base);
	// lwz r29,132(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x82581408;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825819a0
	ctx.lr = 0x82581414;
	sub_825819A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82333900
	ctx.lr = 0x82581420;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82581470
	if (ctx.cr0.eq) goto loc_82581470;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a4e530
	ctx.lr = 0x8258145C;
	sub_82A4E530(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82816528
	ctx.lr = 0x82581464;
	sub_82816528(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// b 0x82581474
	goto loc_82581474;
loc_82581470:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82581474:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x8258147C;
	sub_82816528(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x82581484;
	sub_82816528(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r27,60
	ctx.r3.s64 = ctx.r27.s64 + 60;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x828d0cb0
	ctx.lr = 0x82581494;
	sub_828D0CB0(ctx, base);
	// lwz r3,868(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// addi r11,r1,740
	ctx.r11.s64 = ctx.r1.s64 + 740;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825814b0
	if (ctx.cr6.eq) goto loc_825814B0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825814b0
	if (ctx.cr6.eq) goto loc_825814B0;
	// bl 0x82332db8
	ctx.lr = 0x825814B0;
	sub_82332DB8(ctx, base);
loc_825814B0:
	// lwz r3,1156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
	// addi r11,r1,1028
	ctx.r11.s64 = ctx.r1.s64 + 1028;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825814cc
	if (ctx.cr6.eq) goto loc_825814CC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825814cc
	if (ctx.cr6.eq) goto loc_825814CC;
	// bl 0x82332db8
	ctx.lr = 0x825814CC;
	sub_82332DB8(ctx, base);
loc_825814CC:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// rlwinm r31,r23,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x829e4e20
	ctx.lr = 0x825814E0;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x825814EC;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400b48
	ctx.lr = 0x825814F8;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82581500;
	sub_82333960(ctx, base);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x829e4e20
	ctx.lr = 0x82581510;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x8258151C;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82400b48
	ctx.lr = 0x82581528;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82581530;
	sub_82333960(ctx, base);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x829e4e20
	ctx.lr = 0x82581540;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8233a258
	ctx.lr = 0x8258154C;
	sub_8233A258(ctx, base);
loc_8258154C:
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r28,124(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82581564
	if (!ctx.cr6.eq) goto loc_82581564;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_82581564:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x8258156C;
	sub_82A4CC80(ctx, base);
	// lwz r29,240(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r30,236(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8258173c
	if (!ctx.cr0.eq) goto loc_8258173C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8258158c
	if (!ctx.cr6.eq) goto loc_8258158C;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_8258158C:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x82581594;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8258173c
	if (!ctx.cr0.eq) goto loc_8258173C;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825815b0
	if (!ctx.cr6.eq) goto loc_825815B0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_825815B0:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x825815B8;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8258173c
	if (!ctx.cr0.eq) goto loc_8258173C;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825815E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bne cr6,0x825815f4
	if (!ctx.cr6.eq) goto loc_825815F4;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_825815F4:
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// bl 0x82409058
	ctx.lr = 0x825815FC;
	sub_82409058(ctx, base);
	// lwz r30,132(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bne cr6,0x82581610
	if (!ctx.cr6.eq) goto loc_82581610;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_82581610:
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82409058
	ctx.lr = 0x82581618;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82816528
	ctx.lr = 0x82581628;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82816528
	ctx.lr = 0x82581634;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82581a10
	ctx.lr = 0x82581644;
	sub_82581A10(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82332d50
	ctx.lr = 0x82581658;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258166c
	if (ctx.cr0.eq) goto loc_8258166C;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_8258166C:
	// lwz r3,1444(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// addi r11,r1,1316
	ctx.r11.s64 = ctx.r1.s64 + 1316;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82581688
	if (ctx.cr6.eq) goto loc_82581688;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82581688
	if (ctx.cr6.eq) goto loc_82581688;
	// bl 0x82332db8
	ctx.lr = 0x82581688;
	sub_82332DB8(ctx, base);
loc_82581688:
	// lwz r3,1732(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1732);
	// addi r11,r1,1604
	ctx.r11.s64 = ctx.r1.s64 + 1604;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825816a4
	if (ctx.cr6.eq) goto loc_825816A4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825816a4
	if (ctx.cr6.eq) goto loc_825816A4;
	// bl 0x82332db8
	ctx.lr = 0x825816A4;
	sub_82332DB8(ctx, base);
loc_825816A4:
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x829e4e20
	ctx.lr = 0x825816B8;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x825816C4;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400b48
	ctx.lr = 0x825816D0;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x825816D8;
	sub_82333960(ctx, base);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x829e4e20
	ctx.lr = 0x825816E8;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x825816F4;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82400b48
	ctx.lr = 0x82581700;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82581708;
	sub_82333960(ctx, base);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x829e4e20
	ctx.lr = 0x82581718;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x82581724;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82400b48
	ctx.lr = 0x82581730;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82581738;
	sub_82333960(ctx, base);
	// b 0x8258154c
	goto loc_8258154C;
loc_8258173C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82581744;
	sub_82333960(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82581754
	if (!ctx.cr6.eq) goto loc_82581754;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_82581754:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x8258175C;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82581784
	if (!ctx.cr0.eq) goto loc_82581784;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82581774
	if (!ctx.cr6.eq) goto loc_82581774;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_82581774:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x8258177C;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82581378
	if (ctx.cr0.eq) goto loc_82581378;
loc_82581784:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x8258178C;
	sub_82333960(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x82581794;
	sub_82333960(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82333960
	ctx.lr = 0x8258179C;
	sub_82333960(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x825817ac
	if (!ctx.cr6.eq) goto loc_825817AC;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_825817AC:
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82a4cc80
	ctx.lr = 0x825817B4;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82580fbc
	if (ctx.cr0.eq) goto loc_82580FBC;
loc_825817BC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,8(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// bl 0x82333960
	ctx.lr = 0x825817C8;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1888
	ctx.r1.s64 = ctx.r1.s64 + 1888;
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825817D8"))) PPC_WEAK_FUNC(sub_825817D8);
PPC_FUNC_IMPL(__imp__sub_825817D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825817E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82410cb0
	ctx.lr = 0x825817F0;
	sub_82410CB0(ctx, base);
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
	ctx.lr = 0x82581808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// bne 0x82581818
	if (!ctx.cr0.eq) goto loc_82581818;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82581818:
	// lwz r11,2180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2180);
	// addi r30,r31,-128
	ctx.r30.s64 = ctx.r31.s64 + -128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,2180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2180, ctx.r11.u32);
	// lwz r4,-32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// bl 0x825819a0
	ctx.lr = 0x82581834;
	sub_825819A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82580438
	ctx.lr = 0x8258183C;
	sub_82580438(ctx, base);
	// lwz r11,-128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -128);
	// lwz r4,-32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82581854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,-28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lwz r4,-32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// bl 0x82581a10
	ctx.lr = 0x82581864;
	sub_82581A10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82580438
	ctx.lr = 0x8258186C;
	sub_82580438(ctx, base);
	// lwz r11,-128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -128);
	// lwz r4,-28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82581884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,-120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -120);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x825818b8
	if (!ctx.cr6.gt) goto loc_825818B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8289f1a8
	ctx.lr = 0x82581898;
	sub_8289F1A8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825818AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824f45f0
	ctx.lr = 0x825818B8;
	sub_824F45F0(ctx, base);
loc_825818B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825818C0"))) PPC_WEAK_FUNC(sub_825818C0);
PPC_FUNC_IMPL(__imp__sub_825818C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825818C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82333900
	ctx.lr = 0x825818E4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258197c
	if (ctx.cr0.eq) goto loc_8258197C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x82a4e530
	ctx.lr = 0x82581920;
	sub_82A4E530(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x82581928;
	sub_82816528(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// bl 0x82a4e530
	ctx.lr = 0x8258196C;
	sub_82A4E530(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82816528
	ctx.lr = 0x82581974;
	sub_82816528(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// b 0x82581980
	goto loc_82581980;
loc_8258197C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82581980:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x82581988;
	sub_82816528(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r25,64
	ctx.r3.s64 = ctx.r25.s64 + 64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x828d0cb0
	ctx.lr = 0x82581998;
	sub_828D0CB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825819A0"))) PPC_WEAK_FUNC(sub_825819A0);
PPC_FUNC_IMPL(__imp__sub_825819A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825819f8
	if (ctx.cr6.eq) goto loc_825819F8;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825819f8
	if (!ctx.cr6.gt) goto loc_825819F8;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825819f8
	if (ctx.cr6.eq) goto loc_825819F8;
	// lwz r9,76(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
loc_825819D8:
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82581a00
	if (ctx.cr6.eq) goto loc_82581A00;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x825819d8
	if (!ctx.cr6.eq) goto loc_825819D8;
loc_825819F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82581A00:
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581A10"))) PPC_WEAK_FUNC(sub_82581A10);
PPC_FUNC_IMPL(__imp__sub_82581A10) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x825819a0
	ctx.lr = 0x82581A24;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581a8c
	if (ctx.cr0.eq) goto loc_82581A8C;
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82581a84
	if (ctx.cr6.eq) goto loc_82581A84;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82581a84
	if (!ctx.cr6.gt) goto loc_82581A84;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82581a84
	if (ctx.cr6.eq) goto loc_82581A84;
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
loc_82581A64:
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82581aa0
	if (ctx.cr6.eq) goto loc_82581AA0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82581a64
	if (!ctx.cr6.eq) goto loc_82581A64;
loc_82581A84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82581A88:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82581A8C:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82581AA0:
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82581a88
	goto loc_82581A88;
}

__attribute__((alias("__imp__sub_82581AB0"))) PPC_WEAK_FUNC(sub_82581AB0);
PPC_FUNC_IMPL(__imp__sub_82581AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82581AB8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82581ce8
	ctx.lr = 0x82581ACC;
	sub_82581CE8(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82581c6c
	if (ctx.cr0.eq) goto loc_82581C6C;
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x825819a0
	ctx.lr = 0x82581AE4;
	sub_825819A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82581a10
	ctx.lr = 0x82581AF4;
	sub_82581A10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82581b88
	if (ctx.cr6.eq) goto loc_82581B88;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82581b88
	if (!ctx.cr6.gt) goto loc_82581B88;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82581B14:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,60(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r29,r28,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// beq cr6,0x82581b68
	if (ctx.cr6.eq) goto loc_82581B68;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82581B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82581b74
	if (ctx.cr0.eq) goto loc_82581B74;
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82581be8
	if (ctx.cr6.eq) goto loc_82581BE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82581c60
	goto loc_82581C60;
loc_82581B68:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82581B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82581B74:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82581b14
	if (ctx.cr6.lt) goto loc_82581B14;
loc_82581B88:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82581c6c
	if (ctx.cr6.eq) goto loc_82581C6C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82581c6c
	if (!ctx.cr6.gt) goto loc_82581C6C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82581BA4:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82581BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82581c34
	if (!ctx.cr0.eq) goto loc_82581C34;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82581ba4
	if (ctx.cr6.lt) goto loc_82581BA4;
	// b 0x82581c6c
	goto loc_82581C6C;
loc_82581BE8:
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825819a0
	ctx.lr = 0x82581BF8;
	sub_825819A0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82580438
	ctx.lr = 0x82581C04;
	sub_82580438(ctx, base);
	// lwz r4,56(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82581C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825819a0
	ctx.lr = 0x82581C2C;
	sub_825819A0(ctx, base);
	// lwz r5,128(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// b 0x82581c38
	goto loc_82581C38;
loc_82581C34:
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82581C38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82581a10
	ctx.lr = 0x82581C44;
	sub_82581A10(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82580438
	ctx.lr = 0x82581C50;
	sub_82580438(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r4.u32);
loc_82581C60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82581C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82581C6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581C78"))) PPC_WEAK_FUNC(sub_82581C78);
PPC_FUNC_IMPL(__imp__sub_82581C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82581ce8
	ctx.lr = 0x82581C90;
	sub_82581CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581c9c
	if (ctx.cr0.eq) goto loc_82581C9C;
	// stw r31,6712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6712, ctx.r31.u32);
loc_82581C9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581CB0"))) PPC_WEAK_FUNC(sub_82581CB0);
PPC_FUNC_IMPL(__imp__sub_82581CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82581ce8
	ctx.lr = 0x82581CC8;
	sub_82581CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581cd4
	if (ctx.cr0.eq) goto loc_82581CD4;
	// stw r31,6708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6708, ctx.r31.u32);
loc_82581CD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581CE8"))) PPC_WEAK_FUNC(sub_82581CE8);
PPC_FUNC_IMPL(__imp__sub_82581CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,1460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82581d6c
	if (ctx.cr6.eq) goto loc_82581D6C;
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82581d6c
	if (ctx.cr6.eq) goto loc_82581D6C;
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82581d6c
	if (!ctx.cr6.gt) goto loc_82581D6C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82581d6c
	if (!ctx.cr0.eq) goto loc_82581D6C;
	// bl 0x82410cb0
	ctx.lr = 0x82581D44;
	sub_82410CB0(ctx, base);
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
	ctx.lr = 0x82581D5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82581d68
	if (!ctx.cr0.eq) goto loc_82581D68;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82581D68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82581D6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581D80"))) PPC_WEAK_FUNC(sub_82581D80);
PPC_FUNC_IMPL(__imp__sub_82581D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82581D88;
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
	ctx.lr = 0x82581DA4;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82581e3c
	if (!ctx.cr0.eq) goto loc_82581E3C;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82437878
	ctx.lr = 0x82581DB4;
	sub_82437878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82581DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82581DD4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82581e28
	if (ctx.cr0.eq) goto loc_82581E28;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// addi r7,r7,-17680
	ctx.r7.s64 = ctx.r7.s64 + -17680;
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
	// b 0x82581e2c
	goto loc_82581E2C;
loc_82581E28:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82581E2C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82581E38;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82581E3C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82581E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581E68"))) PPC_WEAK_FUNC(sub_82581E68);
PPC_FUNC_IMPL(__imp__sub_82581E68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82581E98"))) PPC_WEAK_FUNC(sub_82581E98);
PPC_FUNC_IMPL(__imp__sub_82581E98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -400);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x825805b8
	sub_825805B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581EA8"))) PPC_WEAK_FUNC(sub_82581EA8);
PPC_FUNC_IMPL(__imp__sub_82581EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82580108
	sub_82580108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581EB8"))) PPC_WEAK_FUNC(sub_82581EB8);
PPC_FUNC_IMPL(__imp__sub_82581EB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825805b8
	sub_825805B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581EC8"))) PPC_WEAK_FUNC(sub_82581EC8);
PPC_FUNC_IMPL(__imp__sub_82581EC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82580108
	sub_82580108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581ED8"))) PPC_WEAK_FUNC(sub_82581ED8);
PPC_FUNC_IMPL(__imp__sub_82581ED8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82580088
	sub_82580088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581EE8"))) PPC_WEAK_FUNC(sub_82581EE8);
PPC_FUNC_IMPL(__imp__sub_82581EE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825805b8
	sub_825805B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581EF8"))) PPC_WEAK_FUNC(sub_82581EF8);
PPC_FUNC_IMPL(__imp__sub_82581EF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82580098
	sub_82580098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581F08"))) PPC_WEAK_FUNC(sub_82581F08);
PPC_FUNC_IMPL(__imp__sub_82581F08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82580610
	sub_82580610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581F18"))) PPC_WEAK_FUNC(sub_82581F18);
PPC_FUNC_IMPL(__imp__sub_82581F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825817d8
	sub_825817D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581F28"))) PPC_WEAK_FUNC(sub_82581F28);
PPC_FUNC_IMPL(__imp__sub_82581F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x828b5948
	sub_828B5948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581F38"))) PPC_WEAK_FUNC(sub_82581F38);
PPC_FUNC_IMPL(__imp__sub_82581F38) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82581F48"))) PPC_WEAK_FUNC(sub_82581F48);
PPC_FUNC_IMPL(__imp__sub_82581F48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82580668
	sub_82580668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581F58"))) PPC_WEAK_FUNC(sub_82581F58);
PPC_FUNC_IMPL(__imp__sub_82581F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10032
	ctx.r3.s64 = ctx.r11.s64 + -10032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581F68"))) PPC_WEAK_FUNC(sub_82581F68);
PPC_FUNC_IMPL(__imp__sub_82581F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82581fa0
	if (ctx.cr6.eq) goto loc_82581FA0;
	// bl 0x823b9ab0
	ctx.lr = 0x82581F90;
	sub_823B9AB0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82581fa0
	if (!ctx.cr6.eq) goto loc_82581FA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82581fb8
	goto loc_82581FB8;
loc_82581FA0:
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82580098
	ctx.lr = 0x82581FB8;
	sub_82580098(ctx, base);
loc_82581FB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581FD0"))) PPC_WEAK_FUNC(sub_82581FD0);
PPC_FUNC_IMPL(__imp__sub_82581FD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b9ab0
	sub_823B9AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581FD8"))) PPC_WEAK_FUNC(sub_82581FD8);
PPC_FUNC_IMPL(__imp__sub_82581FD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82437878
	sub_82437878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581FE0"))) PPC_WEAK_FUNC(sub_82581FE0);
PPC_FUNC_IMPL(__imp__sub_82581FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1760
	ctx.r3.s64 = 1760;
	// bl 0x82833108
	ctx.lr = 0x82581FFC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582014
	if (ctx.cr0.eq) goto loc_82582014;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x825820a0
	ctx.lr = 0x82582010;
	sub_825820A0(ctx, base);
	// b 0x82582018
	goto loc_82582018;
loc_82582014:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82582018:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258202c
	if (ctx.cr6.eq) goto loc_8258202C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8258202C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82582040"))) PPC_WEAK_FUNC(sub_82582040);
PPC_FUNC_IMPL(__imp__sub_82582040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b9ab0
	ctx.lr = 0x82582060;
	sub_823B9AB0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82582070
	if (!ctx.cr6.eq) goto loc_82582070;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// b 0x82582088
	goto loc_82582088;
loc_82582070:
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82580108
	ctx.lr = 0x82582088;
	sub_82580108(ctx, base);
loc_82582088:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825820A0"))) PPC_WEAK_FUNC(sub_825820A0);
PPC_FUNC_IMPL(__imp__sub_825820A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825820A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r11,r11,-22728
	ctx.r11.s64 = ctx.r11.s64 + -22728;
	// addi r10,r10,-22716
	ctx.r10.s64 = ctx.r10.s64 + -22716;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r10,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r10.u32);
	// bne cr6,0x825820e0
	if (!ctx.cr6.eq) goto loc_825820E0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x825820ec
	goto loc_825820EC;
loc_825820E0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_825820EC:
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82571e20
	ctx.lr = 0x825820F4;
	sub_82571E20(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82582104
	if (!ctx.cr6.eq) goto loc_82582104;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82582110
	goto loc_82582110;
loc_82582104:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82582110:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// bl 0x82582280
	ctx.lr = 0x8258211C;
	sub_82582280(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-23920
	ctx.r11.s64 = ctx.r11.s64 + -23920;
	// addi r10,r10,-22828
	ctx.r10.s64 = ctx.r10.s64 + -22828;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r9,r9,-22776
	ctx.r9.s64 = ctx.r9.s64 + -22776;
	// addi r8,r8,-22752
	ctx.r8.s64 = ctx.r8.s64 + -22752;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r11,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r11.u32);
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r29.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// beq cr6,0x82582208
	if (ctx.cr6.eq) goto loc_82582208;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82582208
	if (!ctx.cr6.gt) goto loc_82582208;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825821ec
	if (ctx.cr0.eq) goto loc_825821EC;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x825821EC;
	sub_82332C38(ctx, base);
loc_825821EC:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82582200;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_82582208:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582220"))) PPC_WEAK_FUNC(sub_82582220);
PPC_FUNC_IMPL(__imp__sub_82582220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82582228;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-48
	ctx.r30.s64 = ctx.r3.s64 + -48;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82582660
	ctx.lr = 0x82582240;
	sub_82582660(ctx, base);
	// addi r31,r30,1776
	ctx.r31.s64 = ctx.r30.s64 + 1776;
	// addi r3,r31,-64
	ctx.r3.s64 = ctx.r31.s64 + -64;
	// bl 0x8269b988
	ctx.lr = 0x8258224C;
	sub_8269B988(ctx, base);
	// addi r3,r31,-88
	ctx.r3.s64 = ctx.r31.s64 + -88;
	// bl 0x82333960
	ctx.lr = 0x82582254;
	sub_82333960(ctx, base);
	// addi r3,r31,-112
	ctx.r3.s64 = ctx.r31.s64 + -112;
	// bl 0x82333960
	ctx.lr = 0x8258225C;
	sub_82333960(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82570708
	ctx.lr = 0x82582264;
	sub_82570708(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82582274
	if (ctx.cr0.eq) goto loc_82582274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x82582274;
	sub_82332DB8(ctx, base);
loc_82582274:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582280"))) PPC_WEAK_FUNC(sub_82582280);
PPC_FUNC_IMPL(__imp__sub_82582280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82582288;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-25196
	ctx.r11.s64 = ctx.r11.s64 + -25196;
	// addi r9,r9,-25168
	ctx.r9.s64 = ctx.r9.s64 + -25168;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r8,-24076
	ctx.r10.s64 = ctx.r8.s64 + -24076;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r9,r9,-24024
	ctx.r9.s64 = ctx.r9.s64 + -24024;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x823339b8
	ctx.lr = 0x82582314;
	sub_823339B8(ctx, base);
	// addi r4,r28,40
	ctx.r4.s64 = ctx.r28.s64 + 40;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x823339b8
	ctx.lr = 0x82582320;
	sub_823339B8(ctx, base);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// addi r27,r28,64
	ctx.r27.s64 = ctx.r28.s64 + 64;
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// beq cr6,0x82582394
	if (ctx.cr6.eq) goto loc_82582394;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82582394
	if (!ctx.cr6.gt) goto loc_82582394;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82582378
	if (ctx.cr0.eq) goto loc_82582378;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x82582378;
	sub_82332C38(ctx, base);
loc_82582378:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8258238C;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_82582394:
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// bl 0x823f6de0
	ctx.lr = 0x825823A8;
	sub_823F6DE0(ctx, base);
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825823C8"))) PPC_WEAK_FUNC(sub_825823C8);
PPC_FUNC_IMPL(__imp__sub_825823C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-24000
	ctx.r3.s64 = ctx.r11.s64 + -24000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825823D8"))) PPC_WEAK_FUNC(sub_825823D8);
PPC_FUNC_IMPL(__imp__sub_825823D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82582410
	if (ctx.cr6.eq) goto loc_82582410;
	// bl 0x82583788
	ctx.lr = 0x82582400;
	sub_82583788(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82582410
	if (!ctx.cr6.eq) goto loc_82582410;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8258241c
	goto loc_8258241C;
loc_82582410:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8258241C;
	sub_82333C70(ctx, base);
loc_8258241C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82582438"))) PPC_WEAK_FUNC(sub_82582438);
PPC_FUNC_IMPL(__imp__sub_82582438) {
	PPC_FUNC_PROLOGUE();
	// b 0x82583788
	sub_82583788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582440"))) PPC_WEAK_FUNC(sub_82582440);
PPC_FUNC_IMPL(__imp__sub_82582440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8258245C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825824b4
	if (ctx.cr0.eq) goto loc_825824B4;
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
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-22704
	ctx.r9.s64 = ctx.r9.s64 + -22704;
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
	// b 0x825824b8
	goto loc_825824B8;
loc_825824B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825824B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825824D0"))) PPC_WEAK_FUNC(sub_825824D0);
PPC_FUNC_IMPL(__imp__sub_825824D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82583788
	ctx.lr = 0x825824F0;
	sub_82583788(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82582504
	if (ctx.cr6.eq) goto loc_82582504;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x82582504;
	sub_82333B08(ctx, base);
loc_82582504:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82582520"))) PPC_WEAK_FUNC(sub_82582520);
PPC_FUNC_IMPL(__imp__sub_82582520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82582528;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-22728
	ctx.r11.s64 = ctx.r11.s64 + -22728;
	// addi r10,r10,-22716
	ctx.r10.s64 = ctx.r10.s64 + -22716;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r10,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x825705f8
	ctx.lr = 0x82582554;
	sub_825705F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// bl 0x82580498
	ctx.lr = 0x82582560;
	sub_82580498(ctx, base);
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r6,-23956
	ctx.r4.s64 = ctx.r6.s64 + -23956;
	// addi r11,r11,-23920
	ctx.r11.s64 = ctx.r11.s64 + -23920;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r10,r10,-22828
	ctx.r10.s64 = ctx.r10.s64 + -22828;
	// addi r9,r9,-22776
	ctx.r9.s64 = ctx.r9.s64 + -22776;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r8,r8,-22752
	ctx.r8.s64 = ctx.r8.s64 + -22752;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r11,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r11.u32);
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-1648
	ctx.r11.s64 = ctx.r11.s64 + -1648;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x824099b8
	ctx.lr = 0x82582618;
	sub_824099B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r28,r11,-44
	ctx.r28.s64 = ctx.r11.s64 + -44;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82582624:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1492
	ctx.r3.s64 = ctx.r11.s64 + 1492;
	// bl 0x82410060
	ctx.lr = 0x8258263C;
	sub_82410060(ctx, base);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82582624
	if (ctx.cr6.lt) goto loc_82582624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582660"))) PPC_WEAK_FUNC(sub_82582660);
PPC_FUNC_IMPL(__imp__sub_82582660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -48);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r10,r10,-23920
	ctx.r10.s64 = ctx.r10.s64 + -23920;
	// addi r9,r9,-22828
	ctx.r9.s64 = ctx.r9.s64 + -22828;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// addi r8,r8,-22776
	ctx.r8.s64 = ctx.r8.s64 + -22776;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r5,r7,-22752
	ctx.r5.s64 = ctx.r7.s64 + -22752;
	// addi r31,r3,-44
	ctx.r31.s64 = ctx.r3.s64 + -44;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r10,-48(r11)
	PPC_STORE_U32(ctx.r11.u32 + -48, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,-40(r11)
	PPC_STORE_U32(ctx.r11.u32 + -40, ctx.r9.u32);
	// lwz r11,-48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 348, ctx.r8.u32);
	// lwz r11,-48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -48);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,-48(r11)
	PPC_STORE_U32(ctx.r11.u32 + -48, ctx.r5.u32);
	// lwz r11,-48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// stw r11,-52(r10)
	PPC_STORE_U32(ctx.r10.u32 + -52, ctx.r11.u32);
	// lwz r11,-48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -48);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-1648
	ctx.r11.s64 = ctx.r11.s64 + -1648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-52(r10)
	PPC_STORE_U32(ctx.r10.u32 + -52, ctx.r11.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x82582714;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82582724
	if (ctx.cr6.eq) goto loc_82582724;
	// bl 0x82332db8
	ctx.lr = 0x82582724;
	sub_82332DB8(ctx, base);
loc_82582724:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82582748"))) PPC_WEAK_FUNC(sub_82582748);
PPC_FUNC_IMPL(__imp__sub_82582748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82582750;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r3,r11,7388
	ctx.r3.s64 = ctx.r11.s64 + 7388;
	// lwz r11,7388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7388);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82582778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x82919328
	ctx.lr = 0x82582784;
	sub_82919328(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r29,84(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825827fc
	if (ctx.cr6.eq) goto loc_825827FC;
loc_82582798:
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lwz r10,112(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825827ec
	if (!ctx.cr6.eq) goto loc_825827EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824ca6d0
	ctx.lr = 0x825827BC;
	sub_824CA6D0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x825827ec
	if (ctx.cr0.eq) goto loc_825827EC;
	// addi r3,r31,-44
	ctx.r3.s64 = ctx.r31.s64 + -44;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x825827D8;
	sub_82332D50(ctx, base);
	// lwz r10,-32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825827ec
	if (ctx.cr0.eq) goto loc_825827EC;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_825827EC:
	// lwz r29,1720(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1720);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82582798
	if (!ctx.cr6.eq) goto loc_82582798;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_825827FC:
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r3,r11,7388
	ctx.r3.s64 = ctx.r11.s64 + 7388;
	// lwz r11,7388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7388);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82582814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// bl 0x82570860
	ctx.lr = 0x82582828;
	sub_82570860(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582830"))) PPC_WEAK_FUNC(sub_82582830);
PPC_FUNC_IMPL(__imp__sub_82582830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82582838;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258285C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82582874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x82582880;
	sub_82414510(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582890
	if (ctx.cr0.eq) goto loc_82582890;
	// stw r27,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r27.u32);
loc_82582890:
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x82582898;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825828a8
	if (ctx.cr0.eq) goto loc_825828A8;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// stw r27,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r27.u32);
loc_825828A8:
	// lwz r11,-48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x825817d8
	ctx.lr = 0x825828C0;
	sub_825817D8(ctx, base);
	// lwz r11,2180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2180, ctx.r11.u32);
	// bl 0x8289f1a8
	ctx.lr = 0x825828D8;
	sub_8289F1A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824f45f0
	ctx.lr = 0x825828E0;
	sub_824F45F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825828E8"))) PPC_WEAK_FUNC(sub_825828E8);
PPC_FUNC_IMPL(__imp__sub_825828E8) {
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
	// lwz r11,-1648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1648);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-1648
	ctx.r3.s64 = ctx.r11.s64 + -1648;
	// bl 0x82581ce8
	ctx.lr = 0x82582908;
	sub_82581CE8(ctx, base);
	// bl 0x824f65f8
	ctx.lr = 0x8258290C;
	sub_824F65F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82582920"))) PPC_WEAK_FUNC(sub_82582920);
PPC_FUNC_IMPL(__imp__sub_82582920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82582928;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r24,44(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,7108(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 7108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8258297c
	if (!ctx.cr6.gt) goto loc_8258297C;
	// lwz r3,7100(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7100);
	// bl 0x829c35d8
	ctx.lr = 0x82582964;
	sub_829C35D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582978
	if (ctx.cr0.eq) goto loc_82582978;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82582e70
	if (ctx.cr0.eq) goto loc_82582E70;
loc_82582978:
	// stfs f30,7108(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 7108, temp.u32);
loc_8258297C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,1824
	ctx.r4.s64 = ctx.r11.s64 + 1824;
	// lwz r26,1928(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1928);
	// bl 0x823ffc38
	ctx.lr = 0x82582998;
	sub_823FFC38(ctx, base);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// beq cr6,0x825829cc
	if (ctx.cr6.eq) goto loc_825829CC;
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82332c38
	ctx.lr = 0x825829CC;
	sub_82332C38(ctx, base);
loc_825829CC:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825829f0
	if (ctx.cr6.eq) goto loc_825829F0;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82332c38
	ctx.lr = 0x825829F0;
	sub_82332C38(ctx, base);
loc_825829F0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82582a34
	if (ctx.cr6.eq) goto loc_82582A34;
	// lwz r11,7080(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82582a2c
	if (ctx.cr6.eq) goto loc_82582A2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26268
	ctx.r3.s64 = ctx.r11.s64 + -26268;
	// bl 0x82816528
	ctx.lr = 0x82582A10;
	sub_82816528(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82410060
	ctx.lr = 0x82582A20;
	sub_82410060(ctx, base);
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x82582c10
	goto loc_82582C10;
loc_82582A2C:
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// b 0x82582c20
	goto loc_82582C20;
loc_82582A34:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-27376
	ctx.r3.s64 = ctx.r11.s64 + -27376;
	// bl 0x82816528
	ctx.lr = 0x82582A40;
	sub_82816528(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82410060
	ctx.lr = 0x82582A50;
	sub_82410060(ctx, base);
	// li r29,100
	ctx.r29.s64 = 100;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82410060
	ctx.lr = 0x82582A64;
	sub_82410060(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-14124
	ctx.r3.s64 = ctx.r11.s64 + -14124;
	// bl 0x82816528
	ctx.lr = 0x82582A70;
	sub_82816528(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82410060
	ctx.lr = 0x82582A80;
	sub_82410060(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82410060
	ctx.lr = 0x82582A90;
	sub_82410060(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26268
	ctx.r3.s64 = ctx.r11.s64 + -26268;
	// bl 0x82816528
	ctx.lr = 0x82582A9C;
	sub_82816528(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82410060
	ctx.lr = 0x82582AAC;
	sub_82410060(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82410060
	ctx.lr = 0x82582ABC;
	sub_82410060(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13624
	ctx.r3.s64 = ctx.r11.s64 + 13624;
	// bl 0x82816528
	ctx.lr = 0x82582AC8;
	sub_82816528(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82410060
	ctx.lr = 0x82582AD8;
	sub_82410060(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82410060
	ctx.lr = 0x82582AE8;
	sub_82410060(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13648
	ctx.r3.s64 = ctx.r11.s64 + 13648;
	// bl 0x82816528
	ctx.lr = 0x82582AF4;
	sub_82816528(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82410060
	ctx.lr = 0x82582B04;
	sub_82410060(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82410060
	ctx.lr = 0x82582B14;
	sub_82410060(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13672
	ctx.r3.s64 = ctx.r11.s64 + 13672;
	// bl 0x82816528
	ctx.lr = 0x82582B20;
	sub_82816528(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82410060
	ctx.lr = 0x82582B30;
	sub_82410060(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82410060
	ctx.lr = 0x82582B40;
	sub_82410060(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// bl 0x82816528
	ctx.lr = 0x82582B4C;
	sub_82816528(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82410060
	ctx.lr = 0x82582B5C;
	sub_82410060(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82410060
	ctx.lr = 0x82582B6C;
	sub_82410060(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13720
	ctx.r3.s64 = ctx.r11.s64 + 13720;
	// bl 0x82816528
	ctx.lr = 0x82582B78;
	sub_82816528(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82410060
	ctx.lr = 0x82582B88;
	sub_82410060(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82410060
	ctx.lr = 0x82582B98;
	sub_82410060(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13748
	ctx.r3.s64 = ctx.r11.s64 + 13748;
	// bl 0x82816528
	ctx.lr = 0x82582BA4;
	sub_82816528(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82410060
	ctx.lr = 0x82582BB4;
	sub_82410060(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82410060
	ctx.lr = 0x82582BC4;
	sub_82410060(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13776
	ctx.r3.s64 = ctx.r11.s64 + 13776;
	// bl 0x82816528
	ctx.lr = 0x82582BD0;
	sub_82816528(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82410060
	ctx.lr = 0x82582BE0;
	sub_82410060(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82410060
	ctx.lr = 0x82582BF0;
	sub_82410060(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13800
	ctx.r3.s64 = ctx.r11.s64 + 13800;
	// bl 0x82816528
	ctx.lr = 0x82582BFC;
	sub_82816528(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82410060
	ctx.lr = 0x82582C0C;
	sub_82410060(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
loc_82582C10:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82410060
	ctx.lr = 0x82582C1C;
	sub_82410060(ctx, base);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
loc_82582C20:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823ffc38
	ctx.lr = 0x82582C2C;
	sub_823FFC38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824d5a80
	ctx.lr = 0x82582C40;
	sub_824D5A80(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lfs f31,-24640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f31.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,1588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1588, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824d7b70
	ctx.lr = 0x82582CB0;
	sub_824D7B70(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82582ce0
	if (ctx.cr0.eq) goto loc_82582CE0;
	// lwz r11,80(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// lwz r10,7100(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7100);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82582d04
	if (ctx.cr6.eq) goto loc_82582D04;
	// lwz r10,960(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 960);
	// stw r11,7100(r24)
	PPC_STORE_U32(ctx.r24.u32 + 7100, ctx.r11.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82582d00
	if (!ctx.cr6.eq) goto loc_82582D00;
	// stw r25,7104(r24)
	PPC_STORE_U32(ctx.r24.u32 + 7104, ctx.r25.u32);
	// b 0x82582d00
	goto loc_82582D00;
loc_82582CE0:
	// lwz r11,7100(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82582d04
	if (ctx.cr6.eq) goto loc_82582D04;
	// lwz r11,960(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 960);
	// stw r30,7100(r24)
	PPC_STORE_U32(ctx.r24.u32 + 7100, ctx.r30.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82582d00
	if (!ctx.cr6.eq) goto loc_82582D00;
	// stw r30,7104(r24)
	PPC_STORE_U32(ctx.r24.u32 + 7104, ctx.r30.u32);
loc_82582D00:
	// stfs f30,7096(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 7096, temp.u32);
loc_82582D04:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,7092(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 7092);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-32616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32616);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82582e4c
	if (ctx.cr6.lt) goto loc_82582E4C;
	// lfs f13,7096(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 7096);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82582e4c
	if (ctx.cr6.lt) goto loc_82582E4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r30,1588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1588, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824d7b70
	ctx.lr = 0x82582D8C;
	sub_824D7B70(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// addi r29,r11,-23916
	ctx.r29.s64 = ctx.r11.s64 + -23916;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8312e74c
	ctx.lr = 0x82582DAC;
	sub_8312E74C(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824d6ea8
	ctx.lr = 0x82582DB4;
	sub_824D6EA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582dc0
	if (ctx.cr0.eq) goto loc_82582DC0;
	// lwz r27,20(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_82582DC0:
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x82582DC8;
	sub_8312E73C(ctx, base);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// ble cr6,0x82582e4c
	if (!ctx.cr6.gt) goto loc_82582E4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824d77f8
	ctx.lr = 0x82582DE8;
	sub_824D77F8(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82582e08
	if (!ctx.cr6.eq) goto loc_82582E08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824d77f8
	ctx.lr = 0x82582E08;
	sub_824D77F8(ctx, base);
loc_82582E08:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82582e1c
	if (ctx.cr6.eq) goto loc_82582E1C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,7100(r24)
	PPC_STORE_U32(ctx.r24.u32 + 7100, ctx.r11.u32);
	// b 0x82582e20
	goto loc_82582E20;
loc_82582E1C:
	// stw r30,7100(r24)
	PPC_STORE_U32(ctx.r24.u32 + 7100, ctx.r30.u32);
loc_82582E20:
	// lwz r11,960(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82582e30
	if (!ctx.cr6.eq) goto loc_82582E30;
	// stw r3,7104(r24)
	PPC_STORE_U32(ctx.r24.u32 + 7104, ctx.r3.u32);
loc_82582E30:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stfs f30,7092(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 7092, temp.u32);
	// stfs f30,7096(r24)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 7096, temp.u32);
	// lfs f0,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7108(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 7108, temp.u32);
	// bl 0x824395b8
	ctx.lr = 0x82582E48;
	sub_824395B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82582E4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824cce58
	ctx.lr = 0x82582E5C;
	sub_824CCE58(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8239d768
	ctx.lr = 0x82582E64;
	sub_8239D768(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8239d768
	ctx.lr = 0x82582E6C;
	sub_8239D768(ctx, base);
	// b 0x82582e78
	goto loc_82582E78;
loc_82582E70:
	// bl 0x824395b8
	ctx.lr = 0x82582E74;
	sub_824395B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82582E78:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
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
}

__attribute__((alias("__imp__sub_82582E90"))) PPC_WEAK_FUNC(sub_82582E90);
PPC_FUNC_IMPL(__imp__sub_82582E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82582E98;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// beq cr6,0x82583274
	if (ctx.cr6.eq) goto loc_82583274;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82583274
	if (ctx.cr6.eq) goto loc_82583274;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82582f04
	if (!ctx.cr6.gt) goto loc_82582F04;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r10,7168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7168);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// stw r9,7168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7168, ctx.r9.u32);
	// stw r10,7164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7164, ctx.r10.u32);
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82583274
	goto loc_82583274;
loc_82582F04:
	// lwz r11,7492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82583274
	if (ctx.cr6.eq) goto loc_82583274;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// li r23,1
	ctx.r23.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82582f24
	if (ctx.cr6.eq) goto loc_82582F24;
	// stw r23,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r23.u32);
loc_82582F24:
	// lwz r10,7508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7508);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r24,r11,-44
	ctx.r24.s64 = ctx.r11.s64 + -44;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82582ff4
	if (ctx.cr6.eq) goto loc_82582FF4;
	// stw r25,7508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7508, ctx.r25.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82582920
	ctx.lr = 0x82582F54;
	sub_82582920(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82582ff4
	if (ctx.cr0.eq) goto loc_82582FF4;
	// lfs f13,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f0,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x82582F98;
	sub_82817280(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r9,660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r8,664(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x82819da0
	ctx.lr = 0x82582FC8;
	sub_82819DA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82582fd4
	if (!ctx.cr0.lt) goto loc_82582FD4;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_82582FD4:
	// cmpwi cr6,r3,8192
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8192, ctx.xer);
	// ble cr6,0x82582ff4
	if (!ctx.cr6.gt) goto loc_82582FF4;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r25,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r25.u32);
	// lwz r10,7168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7168);
	// stw r10,7164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7164, ctx.r10.u32);
	// stw r11,7168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7168, ctx.r11.u32);
	// b 0x82583144
	goto loc_82583144;
loc_82582FF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559868
	ctx.lr = 0x82582FFC;
	sub_82559868(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258314c
	if (ctx.cr0.eq) goto loc_8258314C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,-24640
	ctx.r27.s64 = ctx.r11.s64 + -24640;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,-3164(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -3164);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82582920
	ctx.lr = 0x82583024;
	sub_82582920(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825830a8
	if (ctx.cr0.eq) goto loc_825830A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,1340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82583050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825830a8
	if (ctx.cr0.eq) goto loc_825830A8;
	// stw r25,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r25.u32);
	// li r7,8192
	ctx.r7.s64 = 8192;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x825717c8
	ctx.lr = 0x82583084;
	sub_825717C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82583094
	if (ctx.cr0.eq) goto loc_82583094;
loc_8258308C:
	// lwz r26,8(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// b 0x825831c0
	goto loc_825831C0;
loc_82583094:
	// lwz r11,7168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7168);
	// stw r25,7168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7168, ctx.r25.u32);
	// stw r11,7164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7164, ctx.r11.u32);
	// lwz r26,0(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x825831c0
	goto loc_825831C0;
loc_825830A8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82582920
	ctx.lr = 0x825830C0;
	sub_82582920(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8258314c
	if (ctx.cr0.eq) goto loc_8258314C;
	// lwz r11,7136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82583104
	if (!ctx.cr6.eq) goto loc_82583104;
	// lfs f0,620(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7152);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,7156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7156);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8258314c
	if (ctx.cr6.lt) goto loc_8258314C;
loc_82583104:
	// stw r25,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r25.u32);
	// li r7,384
	ctx.r7.s64 = 384;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x825717c8
	ctx.lr = 0x82583130;
	sub_825717C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8258308c
	if (!ctx.cr0.eq) goto loc_8258308C;
	// lwz r11,7168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7168);
	// stw r23,7168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7168, ctx.r23.u32);
	// stw r11,7164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7164, ctx.r11.u32);
loc_82583144:
	// lwz r26,4(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// b 0x825831c0
	goto loc_825831C0;
loc_8258314C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82582920
	ctx.lr = 0x82583164;
	sub_82582920(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825831c0
	if (ctx.cr0.eq) goto loc_825831C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,1340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82583190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x825831b4
	if (ctx.cr0.eq) goto loc_825831B4;
	// stw r25,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r25.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82583288
	ctx.lr = 0x825831B0;
	sub_82583288(ctx, base);
	// b 0x825831bc
	goto loc_825831BC;
loc_825831B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82583398
	ctx.lr = 0x825831BC;
	sub_82583398(ctx, base);
loc_825831BC:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_825831C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824f6598
	ctx.lr = 0x825831C8;
	sub_824F6598(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82583274
	if (ctx.cr0.eq) goto loc_82583274;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82583274
	if (!ctx.cr6.eq) goto loc_82583274;
	// lwz r11,7168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7168);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82583274
	if (ctx.cr6.eq) goto loc_82583274;
	// lwz r11,7080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82583274
	if (ctx.cr6.eq) goto loc_82583274;
	// lwz r11,7084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7084);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82583274
	if (!ctx.cr6.eq) goto loc_82583274;
	// stw r23,7084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7084, ctx.r23.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x8258320C;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82583260
	if (ctx.cr0.eq) goto loc_82583260;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82583224
	if (ctx.cr6.eq) goto loc_82583224;
	// lwz r29,80(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// b 0x82583228
	goto loc_82583228;
loc_82583224:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82583228:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,80(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x82583234;
	sub_82833180(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r11,r11,-22704
	ctx.r11.s64 = ctx.r11.s64 + -22704;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r25,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r25.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// b 0x82583264
	goto loc_82583264;
loc_82583260:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82583264:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82583274;
	sub_82833A30(ctx, base);
loc_82583274:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583288"))) PPC_WEAK_FUNC(sub_82583288);
PPC_FUNC_IMPL(__imp__sub_82583288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82583290;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82a4cd78
	ctx.lr = 0x825832A4;
	sub_82A4CD78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,16388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16388);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82583384
	if (!ctx.cr6.gt) goto loc_82583384;
	// lfs f13,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x8258331C;
	sub_82817280(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r8,664(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82819da0
	ctx.lr = 0x8258334C;
	sub_82819DA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82583358
	if (!ctx.cr0.lt) goto loc_82583358;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_82583358:
	// cmpwi cr6,r3,8192
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8192, ctx.xer);
	// ble cr6,0x82583364
	if (!ctx.cr6.gt) goto loc_82583364;
	// li r29,5
	ctx.r29.s64 = 5;
loc_82583364:
	// lwz r10,7168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7168);
	// stw r29,7168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7168, ctx.r29.u32);
loc_8258336C:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r10,7164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7164, ctx.r10.u32);
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_82583384:
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r10,7168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7168);
	// stw r9,7168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7168, ctx.r9.u32);
	// b 0x8258336c
	goto loc_8258336C;
}

__attribute__((alias("__imp__sub_82583398"))) PPC_WEAK_FUNC(sub_82583398);
PPC_FUNC_IMPL(__imp__sub_82583398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825833A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82583514
	if (ctx.cr6.lt) goto loc_82583514;
	// beq cr6,0x825834f0
	if (ctx.cr6.eq) goto loc_825834F0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82583488
	if (ctx.cr6.lt) goto loc_82583488;
	// beq cr6,0x8258346c
	if (ctx.cr6.eq) goto loc_8258346C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82583430
	if (ctx.cr6.lt) goto loc_82583430;
	// bne cr6,0x82583460
	if (!ctx.cr6.eq) goto loc_82583460;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// lfs f13,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82583400
	if (ctx.cr6.gt) goto loc_82583400;
	// bl 0x82583398
	ctx.lr = 0x825833FC;
	sub_82583398(ctx, base);
	// b 0x82583460
	goto loc_82583460;
loc_82583400:
	// stw r27,6908(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6908, ctx.r27.u32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r11,r11,-24832
	ctx.r11.s64 = ctx.r11.s64 + -24832;
	// lfs f1,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82553890
	ctx.lr = 0x8258342C;
	sub_82553890(ctx, base);
	// b 0x82583460
	goto loc_82583460;
loc_82583430:
	// lwz r11,6904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82583460
	if (ctx.cr6.eq) goto loc_82583460;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_82583448:
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lwz r10,7168(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7168);
	// stw r11,7168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7168, ctx.r11.u32);
	// addi r11,r9,-44
	ctx.r11.s64 = ctx.r9.s64 + -44;
	// stw r10,7164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7164, ctx.r10.u32);
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82583460:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
loc_8258346C:
	// lwz r11,6904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82583460
	if (ctx.cr6.eq) goto loc_82583460;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// b 0x82583508
	goto loc_82583508;
loc_82583488:
	// lwz r11,6904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82583460
	if (ctx.cr6.eq) goto loc_82583460;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825834a4
	if (!ctx.cr6.eq) goto loc_825834A4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x825834b0
	goto loc_825834B0;
loc_825834A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825834B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,2048
	ctx.r7.s64 = 2048;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825717c8
	ctx.lr = 0x825834CC;
	sub_825717C8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// beq 0x825834e8
	if (ctx.cr0.eq) goto loc_825834E8;
	// li r10,3
	ctx.r10.s64 = 3;
loc_825834E0:
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8258350c
	goto loc_8258350C;
loc_825834E8:
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82583508
	goto loc_82583508;
loc_825834F0:
	// lwz r11,6904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82583460
	if (ctx.cr6.eq) goto loc_82583460;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
loc_82583504:
	// li r10,2
	ctx.r10.s64 = 2;
loc_82583508:
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_8258350C:
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// b 0x82583460
	goto loc_82583460;
loc_82583514:
	// bl 0x82a4cd78
	ctx.lr = 0x82583518;
	sub_82A4CD78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,7136(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7136);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,16388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16388);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bne cr6,0x82583578
	if (!ctx.cr6.eq) goto loc_82583578;
	// lfs f0,620(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,7152(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 7152);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,624(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,7156(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 7156);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,-24640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x825835cc
	if (ctx.cr6.lt) goto loc_825835CC;
loc_82583578:
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x825835cc
	if (ctx.cr6.gt) goto loc_825835CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,384
	ctx.r7.s64 = 384;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bl 0x825717c8
	ctx.lr = 0x825835AC;
	sub_825717C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825835c4
	if (ctx.cr0.eq) goto loc_825835C4;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82583460
	goto loc_82583460;
loc_825835C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82583448
	goto loc_82583448;
loc_825835CC:
	// lwz r11,6908(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82583460
	if (ctx.cr6.eq) goto loc_82583460;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825835e8
	if (!ctx.cr6.eq) goto loc_825835E8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x825835f4
	goto loc_825835F4;
loc_825835E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825835F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,2048
	ctx.r7.s64 = 2048;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825717c8
	ctx.lr = 0x82583610;
	sub_825717C8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// beq 0x82583504
	if (ctx.cr0.eq) goto loc_82583504;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x825834e0
	goto loc_825834E0;
}

__attribute__((alias("__imp__sub_82583628"))) PPC_WEAK_FUNC(sub_82583628);
PPC_FUNC_IMPL(__imp__sub_82583628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82583630;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// beq cr6,0x8258366c
	if (ctx.cr6.eq) goto loc_8258366C;
	// bl 0x8239f0b8
	ctx.lr = 0x8258364C;
	sub_8239F0B8(ctx, base);
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
	ctx.lr = 0x82583664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82583670
	goto loc_82583670;
loc_8258366C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82583670:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825836d0
	if (ctx.cr6.eq) goto loc_825836D0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825836d0
	if (ctx.cr6.eq) goto loc_825836D0;
	// lwz r11,-48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -48);
	// addi r6,r30,-48
	ctx.r6.s64 = ctx.r30.s64 + -48;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82581a10
	ctx.lr = 0x825836A4;
	sub_82581A10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825836d0
	if (ctx.cr0.eq) goto loc_825836D0;
	// lis r11,27729
	ctx.r11.s64 = 1817247744;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r11,r11,38877
	ctx.r11.u64 = ctx.r11.u64 | 38877;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825836d0
	if (!ctx.cr6.eq) goto loc_825836D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82582e90
	ctx.lr = 0x825836CC;
	sub_82582E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_825836D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825836E0"))) PPC_WEAK_FUNC(sub_825836E0);
PPC_FUNC_IMPL(__imp__sub_825836E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25592);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82583720
	if (!ctx.cr0.eq) goto loc_82583720;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,25592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25592, ctx.r11.u32);
	// addi r3,r9,-24000
	ctx.r3.s64 = ctx.r9.s64 + -24000;
	// bl 0x82816528
	ctx.lr = 0x82583718;
	sub_82816528(ctx, base);
	// stw r3,25588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25588, ctx.r3.u32);
	// b 0x82583724
	goto loc_82583724;
loc_82583720:
	// lwz r3,25588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25588);
loc_82583724:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82583738"))) PPC_WEAK_FUNC(sub_82583738);
PPC_FUNC_IMPL(__imp__sub_82583738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82583788
	ctx.lr = 0x82583758;
	sub_82583788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258376C;
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

__attribute__((alias("__imp__sub_82583788"))) PPC_WEAK_FUNC(sub_82583788);
PPC_FUNC_IMPL(__imp__sub_82583788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12304
	ctx.r31.s64 = ctx.r11.s64 + 12304;
	// lwz r11,12300(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12300);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825837d0
	if (!ctx.cr0.eq) goto loc_825837D0;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-22624
	ctx.r9.s64 = ctx.r9.s64 + -22624;
	// stw r11,12300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12300, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21784
	ctx.r3.s64 = ctx.r11.s64 + 21784;
	// bl 0x82a4c758
	ctx.lr = 0x825837D0;
	sub_82A4C758(ctx, base);
loc_825837D0:
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

__attribute__((alias("__imp__sub_825837E8"))) PPC_WEAK_FUNC(sub_825837E8);
PPC_FUNC_IMPL(__imp__sub_825837E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82581fd0
	sub_82581FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825837F8"))) PPC_WEAK_FUNC(sub_825837F8);
PPC_FUNC_IMPL(__imp__sub_825837F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82581fd8
	sub_82581FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583808"))) PPC_WEAK_FUNC(sub_82583808);
PPC_FUNC_IMPL(__imp__sub_82583808) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,1728
	ctx.r3.s64 = ctx.r3.s64 + 1728;
	// b 0x82580610
	sub_82580610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583818"))) PPC_WEAK_FUNC(sub_82583818);
PPC_FUNC_IMPL(__imp__sub_82583818) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82582830
	sub_82582830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583828"))) PPC_WEAK_FUNC(sub_82583828);
PPC_FUNC_IMPL(__imp__sub_82583828) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -400);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82582220
	sub_82582220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583838"))) PPC_WEAK_FUNC(sub_82583838);
PPC_FUNC_IMPL(__imp__sub_82583838) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82582220
	sub_82582220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583848"))) PPC_WEAK_FUNC(sub_82583848);
PPC_FUNC_IMPL(__imp__sub_82583848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82582220
	sub_82582220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583858"))) PPC_WEAK_FUNC(sub_82583858);
PPC_FUNC_IMPL(__imp__sub_82583858) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825828e8
	sub_825828E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583868"))) PPC_WEAK_FUNC(sub_82583868);
PPC_FUNC_IMPL(__imp__sub_82583868) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82581f68
	sub_82581F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583878"))) PPC_WEAK_FUNC(sub_82583878);
PPC_FUNC_IMPL(__imp__sub_82583878) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82581f58
	sub_82581F58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583888"))) PPC_WEAK_FUNC(sub_82583888);
PPC_FUNC_IMPL(__imp__sub_82583888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82582040
	sub_82582040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583898"))) PPC_WEAK_FUNC(sub_82583898);
PPC_FUNC_IMPL(__imp__sub_82583898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82582040
	sub_82582040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825838A8"))) PPC_WEAK_FUNC(sub_825838A8);
PPC_FUNC_IMPL(__imp__sub_825838A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82583628
	sub_82583628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825838B8"))) PPC_WEAK_FUNC(sub_825838B8);
PPC_FUNC_IMPL(__imp__sub_825838B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82581fe0
	sub_82581FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825838C8"))) PPC_WEAK_FUNC(sub_825838C8);
PPC_FUNC_IMPL(__imp__sub_825838C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,1728
	ctx.r3.s64 = ctx.r3.s64 + 1728;
	// b 0x82580668
	sub_82580668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825838D8"))) PPC_WEAK_FUNC(sub_825838D8);
PPC_FUNC_IMPL(__imp__sub_825838D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82582748
	sub_82582748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825838E8"))) PPC_WEAK_FUNC(sub_825838E8);
PPC_FUNC_IMPL(__imp__sub_825838E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10008
	ctx.r3.s64 = ctx.r11.s64 + -10008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825838F8"))) PPC_WEAK_FUNC(sub_825838F8);
PPC_FUNC_IMPL(__imp__sub_825838F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82583930
	if (ctx.cr6.eq) goto loc_82583930;
	// bl 0x823b9c18
	ctx.lr = 0x82583920;
	sub_823B9C18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82583930
	if (!ctx.cr6.eq) goto loc_82583930;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8258393c
	goto loc_8258393C;
loc_82583930:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-64
	ctx.r3.s64 = ctx.r30.s64 + -64;
	// bl 0x82580098
	ctx.lr = 0x8258393C;
	sub_82580098(ctx, base);
loc_8258393C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82583958"))) PPC_WEAK_FUNC(sub_82583958);
PPC_FUNC_IMPL(__imp__sub_82583958) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b9c18
	sub_823B9C18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583960"))) PPC_WEAK_FUNC(sub_82583960);
PPC_FUNC_IMPL(__imp__sub_82583960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1776
	ctx.r3.s64 = 1776;
	// bl 0x82833108
	ctx.lr = 0x8258397C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82583994
	if (ctx.cr0.eq) goto loc_82583994;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// bl 0x82583a20
	ctx.lr = 0x82583990;
	sub_82583A20(ctx, base);
	// b 0x82583998
	goto loc_82583998;
loc_82583994:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82583998:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825839b0
	if (ctx.cr6.eq) goto loc_825839B0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_825839B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825839C8"))) PPC_WEAK_FUNC(sub_825839C8);
PPC_FUNC_IMPL(__imp__sub_825839C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b9c18
	ctx.lr = 0x825839E8;
	sub_823B9C18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825839f8
	if (!ctx.cr6.eq) goto loc_825839F8;
	// addi r3,r30,-192
	ctx.r3.s64 = ctx.r30.s64 + -192;
	// b 0x82583a04
	goto loc_82583A04;
loc_825839F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-64
	ctx.r3.s64 = ctx.r30.s64 + -64;
	// bl 0x82580108
	ctx.lr = 0x82583A04;
	sub_82580108(ctx, base);
loc_82583A04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82583A20"))) PPC_WEAK_FUNC(sub_82583A20);
PPC_FUNC_IMPL(__imp__sub_82583A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82583A28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-21368
	ctx.r11.s64 = ctx.r11.s64 + -21368;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82583a54
	if (!ctx.cr6.eq) goto loc_82583A54;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82583a64
	goto loc_82583A64;
loc_82583A54:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_82583A64:
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x82571e20
	ctx.lr = 0x82583A6C;
	sub_82571E20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82582280
	ctx.lr = 0x82583A7C;
	sub_82582280(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-22564
	ctx.r11.s64 = ctx.r11.s64 + -22564;
	// addi r10,r10,-22536
	ctx.r10.s64 = ctx.r10.s64 + -22536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r8,r11,-21444
	ctx.r8.s64 = ctx.r11.s64 + -21444;
	// addi r9,r9,-21392
	ctx.r9.s64 = ctx.r9.s64 + -21392;
	// addi r4,r30,116
	ctx.r4.s64 = ctx.r30.s64 + 116;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x82583B00;
	sub_82873B58(ctx, base);
	// addi r4,r30,140
	ctx.r4.s64 = ctx.r30.s64 + 140;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x82873b58
	ctx.lr = 0x82583B0C;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583B18"))) PPC_WEAK_FUNC(sub_82583B18);
PPC_FUNC_IMPL(__imp__sub_82583B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82583B20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-192
	ctx.r29.s64 = ctx.r3.s64 + -192;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r29,192
	ctx.r31.s64 = ctx.r29.s64 + 192;
	// addi r3,r31,-52
	ctx.r3.s64 = ctx.r31.s64 + -52;
	// bl 0x8239d768
	ctx.lr = 0x82583B38;
	sub_8239D768(ctx, base);
	// addi r3,r31,-76
	ctx.r3.s64 = ctx.r31.s64 + -76;
	// bl 0x8239d768
	ctx.lr = 0x82583B40;
	sub_8239D768(ctx, base);
	// addi r30,r31,-64
	ctx.r30.s64 = ctx.r31.s64 + -64;
	// addi r3,r30,-64
	ctx.r3.s64 = ctx.r30.s64 + -64;
	// bl 0x8269b988
	ctx.lr = 0x82583B4C;
	sub_8269B988(ctx, base);
	// addi r3,r30,-88
	ctx.r3.s64 = ctx.r30.s64 + -88;
	// bl 0x82333960
	ctx.lr = 0x82583B54;
	sub_82333960(ctx, base);
	// addi r3,r30,-112
	ctx.r3.s64 = ctx.r30.s64 + -112;
	// bl 0x82333960
	ctx.lr = 0x82583B5C;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82570708
	ctx.lr = 0x82583B64;
	sub_82570708(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82583b74
	if (ctx.cr0.eq) goto loc_82583B74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332db8
	ctx.lr = 0x82583B74;
	sub_82332DB8(ctx, base);
loc_82583B74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583B80"))) PPC_WEAK_FUNC(sub_82583B80);
PPC_FUNC_IMPL(__imp__sub_82583B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82583B88;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r11,r11,-21368
	ctx.r11.s64 = ctx.r11.s64 + -21368;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x825705f8
	ctx.lr = 0x82583BA8;
	sub_825705F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82580498
	ctx.lr = 0x82583BB4;
	sub_82580498(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-22564
	ctx.r11.s64 = ctx.r11.s64 + -22564;
	// addi r9,r10,-22536
	ctx.r9.s64 = ctx.r10.s64 + -22536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r8,r11,-21444
	ctx.r8.s64 = ctx.r11.s64 + -21444;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r7,r10,-21392
	ctx.r7.s64 = ctx.r10.s64 + -21392;
	// addi r4,r11,-22604
	ctx.r4.s64 = ctx.r11.s64 + -22604;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r31,116
	ctx.r29.s64 = ctx.r31.s64 + 116;
	// addi r28,r31,140
	ctx.r28.s64 = ctx.r31.s64 + 140;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r11,-188
	ctx.r9.s64 = ctx.r11.s64 + -188;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
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
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// bl 0x8233a258
	ctx.lr = 0x82583C64;
	sub_8233A258(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82400b48
	ctx.lr = 0x82583C70;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82583C78;
	sub_82333960(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22584
	ctx.r4.s64 = ctx.r11.s64 + -22584;
	// bl 0x8233a258
	ctx.lr = 0x82583C88;
	sub_8233A258(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82400b48
	ctx.lr = 0x82583C94;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82583C9C;
	sub_82333960(ctx, base);
	// lis r11,9385
	ctx.r11.s64 = 615055360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,21604
	ctx.r11.u64 = ctx.r11.u64 | 21604;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x82410060
	ctx.lr = 0x82583CC0;
	sub_82410060(ctx, base);
	// lis r11,14112
	ctx.r11.s64 = 924844032;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,53358
	ctx.r11.u64 = ctx.r11.u64 | 53358;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x82410060
	ctx.lr = 0x82583CE4;
	sub_82410060(ctx, base);
	// lis r11,30312
	ctx.r11.s64 = 1986527232;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,31343
	ctx.r11.u64 = ctx.r11.u64 | 31343;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x82410060
	ctx.lr = 0x82583D08;
	sub_82410060(ctx, base);
	// lis r11,-29704
	ctx.r11.s64 = -1946681344;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,16239
	ctx.r11.u64 = ctx.r11.u64 | 16239;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x82410060
	ctx.lr = 0x82583D2C;
	sub_82410060(ctx, base);
	// lis r11,30179
	ctx.r11.s64 = 1977810944;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,1459
	ctx.r11.u64 = ctx.r11.u64 | 1459;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x82410060
	ctx.lr = 0x82583D50;
	sub_82410060(ctx, base);
	// lis r11,-9190
	ctx.r11.s64 = -602275840;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,35575
	ctx.r11.u64 = ctx.r11.u64 | 35575;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x82410060
	ctx.lr = 0x82583D74;
	sub_82410060(ctx, base);
	// lis r11,-21759
	ctx.r11.s64 = -1425997824;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,53956
	ctx.r11.u64 = ctx.r11.u64 | 53956;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x82410060
	ctx.lr = 0x82583D98;
	sub_82410060(ctx, base);
	// lis r11,895
	ctx.r11.s64 = 58654720;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,49282
	ctx.r11.u64 = ctx.r11.u64 | 49282;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x82410060
	ctx.lr = 0x82583DBC;
	sub_82410060(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// lwz r11,1512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1512);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82583dec
	if (ctx.cr6.eq) goto loc_82583DEC;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x82583DEC;
	sub_82332C38(ctx, base);
loc_82583DEC:
	// lis r11,5160
	ctx.r11.s64 = 338165760;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,32251
	ctx.r11.u64 = ctx.r11.u64 | 32251;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82583E04;
	sub_82410060(ctx, base);
	// lis r11,3258
	ctx.r11.s64 = 213516288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,27010
	ctx.r11.u64 = ctx.r11.u64 | 27010;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82583E1C;
	sub_82410060(ctx, base);
	// lis r11,-8633
	ctx.r11.s64 = -565772288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,15825
	ctx.r11.u64 = ctx.r11.u64 | 15825;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82583E34;
	sub_82410060(ctx, base);
	// lis r11,-26644
	ctx.r11.s64 = -1746141184;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,56022
	ctx.r11.u64 = ctx.r11.u64 | 56022;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82583E4C;
	sub_82410060(ctx, base);
	// lis r11,-28957
	ctx.r11.s64 = -1897725952;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,4717
	ctx.r11.u64 = ctx.r11.u64 | 4717;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82583E64;
	sub_82410060(ctx, base);
	// lis r11,-29159
	ctx.r11.s64 = -1910964224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,55713
	ctx.r11.u64 = ctx.r11.u64 | 55713;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82583E7C;
	sub_82410060(ctx, base);
	// lis r11,16533
	ctx.r11.s64 = 1083506688;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,43075
	ctx.r11.u64 = ctx.r11.u64 | 43075;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82583E94;
	sub_82410060(ctx, base);
	// lis r11,-17327
	ctx.r11.s64 = -1135542272;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,46780
	ctx.r11.u64 = ctx.r11.u64 | 46780;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82583EAC;
	sub_82410060(ctx, base);
	// lis r11,-26879
	ctx.r11.s64 = -1761542144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,41181
	ctx.r11.u64 = ctx.r11.u64 | 41181;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82583EC4;
	sub_82410060(ctx, base);
	// lis r11,-12176
	ctx.r11.s64 = -797966336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,55021
	ctx.r11.u64 = ctx.r11.u64 | 55021;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82583EDC;
	sub_82410060(ctx, base);
	// lis r11,-17014
	ctx.r11.s64 = -1115029504;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,57980
	ctx.r11.u64 = ctx.r11.u64 | 57980;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82583EF4;
	sub_82410060(ctx, base);
	// lis r11,-26352
	ctx.r11.s64 = -1727004672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,45382
	ctx.r11.u64 = ctx.r11.u64 | 45382;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82583F0C;
	sub_82410060(ctx, base);
	// lis r11,7139
	ctx.r11.s64 = 467861504;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,26657
	ctx.r11.u64 = ctx.r11.u64 | 26657;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82583F24;
	sub_82410060(ctx, base);
	// lis r11,1094
	ctx.r11.s64 = 71696384;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,64804
	ctx.r11.u64 = ctx.r11.u64 | 64804;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410060
	ctx.lr = 0x82583F3C;
	sub_82410060(ctx, base);
	// lis r11,-2506
	ctx.r11.s64 = -164233216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,51484
	ctx.r11.u64 = ctx.r11.u64 | 51484;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82583F54;
	sub_82410060(ctx, base);
	// lis r11,2877
	ctx.r11.s64 = 188547072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,24310
	ctx.r11.u64 = ctx.r11.u64 | 24310;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82583F6C;
	sub_82410060(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82583f90
	if (ctx.cr6.eq) goto loc_82583F90;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x82583F90;
	sub_82332C38(ctx, base);
loc_82583F90:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82583fb4
	if (ctx.cr6.eq) goto loc_82583FB4;
	// stw r30,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82583FB4;
	sub_82332C38(ctx, base);
loc_82583FB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583FC0"))) PPC_WEAK_FUNC(sub_82583FC0);
PPC_FUNC_IMPL(__imp__sub_82583FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82583FC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8258400c
	if (ctx.cr6.eq) goto loc_8258400C;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x82583FE8;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82583ff4
	if (ctx.cr0.eq) goto loc_82583FF4;
	// stw r30,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r30.u32);
loc_82583FF4:
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x82583FFC;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258400c
	if (ctx.cr0.eq) goto loc_8258400C;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// stw r30,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r30.u32);
loc_8258400C:
	// bl 0x82410cb0
	ctx.lr = 0x82584010;
	sub_82410CB0(ctx, base);
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
	ctx.lr = 0x82584028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x82584038
	if (!ctx.cr0.eq) goto loc_82584038;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82584038:
	// lwz r10,6756(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6756);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,-64
	ctx.r3.s64 = ctx.r29.s64 + -64;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,6756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6756, ctx.r10.u32);
	// bl 0x825817d8
	ctx.lr = 0x82584050;
	sub_825817D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584058"))) PPC_WEAK_FUNC(sub_82584058);
PPC_FUNC_IMPL(__imp__sub_82584058) {
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
	// bl 0x82581ce8
	ctx.lr = 0x82584068;
	sub_82581CE8(ctx, base);
	// bl 0x825438c8
	ctx.lr = 0x8258406C;
	sub_825438C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584080"))) PPC_WEAK_FUNC(sub_82584080);
PPC_FUNC_IMPL(__imp__sub_82584080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82584088;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82581ce8
	ctx.lr = 0x82584098;
	sub_82581CE8(ctx, base);
	// bl 0x825438c8
	ctx.lr = 0x8258409C;
	sub_825438C8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82584140
	if (ctx.cr0.eq) goto loc_82584140;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// bl 0x82581a10
	ctx.lr = 0x825840BC;
	sub_82581A10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584134
	if (ctx.cr0.eq) goto loc_82584134;
	// lis r10,-18325
	ctx.r10.s64 = -1200947200;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r10,r10,39911
	ctx.r10.u64 = ctx.r10.u64 | 39911;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8258415c
	if (ctx.cr6.gt) goto loc_8258415C;
	// beq cr6,0x8258412c
	if (ctx.cr6.eq) goto loc_8258412C;
	// lis r10,22768
	ctx.r10.s64 = 1492123648;
	// ori r10,r10,9999
	ctx.r10.u64 = ctx.r10.u64 | 9999;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82584198
	if (ctx.cr6.eq) goto loc_82584198;
	// lis r10,27729
	ctx.r10.s64 = 1817247744;
	// ori r10,r10,38877
	ctx.r10.u64 = ctx.r10.u64 | 38877;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8258412c
	if (ctx.cr6.eq) goto loc_8258412C;
	// lis r10,-24487
	ctx.r10.s64 = -1604780032;
	// ori r10,r10,25589
	ctx.r10.u64 = ctx.r10.u64 | 25589;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8258412c
	if (ctx.cr6.eq) goto loc_8258412C;
	// lis r10,-24159
	ctx.r10.s64 = -1583284224;
	// ori r10,r10,45023
	ctx.r10.u64 = ctx.r10.u64 | 45023;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8258412c
	if (ctx.cr6.eq) goto loc_8258412C;
	// lis r10,-19208
	ctx.r10.s64 = -1258815488;
	// ori r10,r10,49846
	ctx.r10.u64 = ctx.r10.u64 | 49846;
loc_82584124:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82584134
	if (!ctx.cr6.eq) goto loc_82584134;
loc_8258412C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82584130:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82584134:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825464f0
	ctx.lr = 0x82584140;
	sub_825464F0(ctx, base);
loc_82584140:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581ce8
	ctx.lr = 0x82584148;
	sub_82581CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584154
	if (ctx.cr0.eq) goto loc_82584154;
	// stw r29,6708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6708, ctx.r29.u32);
loc_82584154:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_8258415C:
	// lis r10,-15645
	ctx.r10.s64 = -1025310720;
	// ori r10,r10,28507
	ctx.r10.u64 = ctx.r10.u64 | 28507;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8258412c
	if (ctx.cr6.eq) goto loc_8258412C;
	// lis r10,-11921
	ctx.r10.s64 = -781254656;
	// ori r10,r10,43710
	ctx.r10.u64 = ctx.r10.u64 | 43710;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8258412c
	if (ctx.cr6.eq) goto loc_8258412C;
	// lis r10,-10530
	ctx.r10.s64 = -690094080;
	// ori r10,r10,2106
	ctx.r10.u64 = ctx.r10.u64 | 2106;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82584198
	if (ctx.cr6.eq) goto loc_82584198;
	// lis r10,-5864
	ctx.r10.s64 = -384303104;
	// ori r10,r10,43951
	ctx.r10.u64 = ctx.r10.u64 | 43951;
	// b 0x82584124
	goto loc_82584124;
loc_82584198:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r6,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r6.u32);
	// b 0x82584130
	goto loc_82584130;
}

__attribute__((alias("__imp__sub_825841A8"))) PPC_WEAK_FUNC(sub_825841A8);
PPC_FUNC_IMPL(__imp__sub_825841A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825841B0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,1808(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82584368
	if (!ctx.cr6.eq) goto loc_82584368;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824cce58
	ctx.lr = 0x825841E8;
	sub_824CCE58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,1824
	ctx.r4.s64 = ctx.r11.s64 + 1824;
	// bl 0x823ffc38
	ctx.lr = 0x82584200;
	sub_823FFC38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// bl 0x823ffc38
	ctx.lr = 0x8258421C;
	sub_823FFC38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824d5a80
	ctx.lr = 0x82584230;
	sub_824D5A80(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,-24640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// bl 0x824d7b70
	ctx.lr = 0x82584298;
	sub_824D7B70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824cce58
	ctx.lr = 0x825842AC;
	sub_824CCE58(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82584300
	if (!ctx.cr6.eq) goto loc_82584300;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,1544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x825842ec
	if (!ctx.cr6.gt) goto loc_825842EC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x825711b0
	ctx.lr = 0x825842E8;
	sub_825711B0(ctx, base);
	// b 0x825842f8
	goto loc_825842F8;
loc_825842EC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825712e8
	ctx.lr = 0x825842F8;
	sub_825712E8(ctx, base);
loc_825842F8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82584338
	goto loc_82584338;
loc_82584300:
	// lfs f13,624(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
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
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_82584338:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82584358
	if (ctx.cr6.eq) goto loc_82584358;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82584358
	if (ctx.cr6.gt) goto loc_82584358;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_82584358:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8239d768
	ctx.lr = 0x82584360;
	sub_8239D768(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8239d768
	ctx.lr = 0x82584368;
	sub_8239D768(ctx, base);
loc_82584368:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584378"))) PPC_WEAK_FUNC(sub_82584378);
PPC_FUNC_IMPL(__imp__sub_82584378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82584380;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lwz r10,13024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lfs f30,24000(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24000);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// addi r3,r11,7388
	ctx.r3.s64 = ctx.r11.s64 + 7388;
	// lwz r11,7388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7388);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825843E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r30,84(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82584440
	if (ctx.cr6.eq) goto loc_82584440;
loc_82584400:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82584428
	if (!ctx.cr6.eq) goto loc_82584428;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x82584428;
	sub_82410060(ctx, base);
loc_82584428:
	// lwz r30,1720(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bne cr6,0x82584400
	if (!ctx.cr6.eq) goto loc_82584400;
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
loc_82584440:
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r3,r11,7388
	ctx.r3.s64 = ctx.r11.s64 + 7388;
	// lwz r11,7388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7388);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82584458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x825844b8
	if (!ctx.cr6.gt) goto loc_825844B8;
	// lwz r31,108(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82584464:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824ca6d0
	ctx.lr = 0x8258446C;
	sub_824CA6D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825844ac
	if (ctx.cr0.eq) goto loc_825844AC;
	// lfs f13,620(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,620(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,624(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,624(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x825844a4
	if (ctx.cr6.lt) goto loc_825844A4;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bne cr6,0x825844ac
	if (!ctx.cr6.eq) goto loc_825844AC;
loc_825844A4:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_825844AC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82584464
	if (!ctx.cr0.eq) goto loc_82584464;
loc_825844B8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x825844C0;
	sub_8239D768(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825844D8"))) PPC_WEAK_FUNC(sub_825844D8);
PPC_FUNC_IMPL(__imp__sub_825844D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825844E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82584558
	if (!ctx.cr6.eq) goto loc_82584558;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82584558
	if (!ctx.cr6.gt) goto loc_82584558;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82584514:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82584528;
	sub_829B98F8(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x8258452C;
	sub_82416348(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584544
	if (ctx.cr0.eq) goto loc_82584544;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x82410060
	ctx.lr = 0x82584544;
	sub_82410060(ctx, base);
loc_82584544:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82584514
	if (ctx.cr6.lt) goto loc_82584514;
loc_82584558:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// bl 0x82873b58
	ctx.lr = 0x82584568;
	sub_82873B58(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f13,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82584630
	if (!ctx.cr6.gt) goto loc_82584630;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r6,152(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f12,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
loc_82584590:
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8258461c
	if (ctx.cr6.eq) goto loc_8258461C;
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82584608
	if (!ctx.cr6.gt) goto loc_82584608;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_825845B0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825845fc
	if (ctx.cr6.eq) goto loc_825845FC;
	// lwz r4,2112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x825845fc
	if (!ctx.cr6.gt) goto loc_825845FC;
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r4,r4,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x825845fc
	if (!ctx.cr0.eq) goto loc_825845FC;
	// lfs f10,620(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f10,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,624(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 624);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f11,f10,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
loc_825845FC:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x825845b0
	if (!ctx.cr0.eq) goto loc_825845B0;
loc_82584608:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8258461c
	if (!ctx.cr6.gt) goto loc_8258461C;
	// lwz r11,80(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_8258461C:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82584590
	if (ctx.cr6.lt) goto loc_82584590;
loc_82584630:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x82584638;
	sub_8239D768(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584640"))) PPC_WEAK_FUNC(sub_82584640);
PPC_FUNC_IMPL(__imp__sub_82584640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82584648;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825847e8
	if (ctx.cr6.eq) goto loc_825847E8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x825841a8
	ctx.lr = 0x82584668;
	sub_825841A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82584760
	if (ctx.cr0.eq) goto loc_82584760;
	// lwz r3,1492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// addi r27,r31,620
	ctx.r27.s64 = ctx.r31.s64 + 620;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r29,620
	ctx.r5.s64 = ctx.r29.s64 + 620;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82584698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82584738
	if (!ctx.cr0.eq) goto loc_82584738;
	// lwz r3,6940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6940);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825846b4
	if (ctx.cr6.eq) goto loc_825846B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8281d650
	ctx.lr = 0x825846B4;
	sub_8281D650(ctx, base);
loc_825846B4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r3,13024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82825ea0
	ctx.lr = 0x825846E0;
	sub_82825EA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825846f8
	if (!ctx.cr0.eq) goto loc_825846F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82584378
	ctx.lr = 0x825846F4;
	sub_82584378(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_825846F8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// lwz r10,1072(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1072);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8258472C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r28,14112
	ctx.r28.s64 = 924844032;
	// ori r28,r28,53358
	ctx.r28.u64 = ctx.r28.u64 | 53358;
	// b 0x825847e8
	goto loc_825847E8;
loc_82584738:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258474C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825847e8
	if (!ctx.cr0.eq) goto loc_825847E8;
	// lis r28,9385
	ctx.r28.s64 = 615055360;
	// ori r28,r28,21604
	ctx.r28.u64 = ctx.r28.u64 | 21604;
	// b 0x825847e8
	goto loc_825847E8;
loc_82584760:
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x82584768;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258477c
	if (ctx.cr0.eq) goto loc_8258477C;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
loc_8258477C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r6,30312
	ctx.r6.s64 = 1986527232;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f12,20492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20492);
	ctx.f12.f64 = double(temp.f32);
	// ori r28,r6,31343
	ctx.r28.u64 = ctx.r6.u64 | 31343;
	// lfs f13,20488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20488);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f0,20484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1076);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825847E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82891118
	ctx.lr = 0x825847E8;
	sub_82891118(ctx, base);
loc_825847E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825847F8"))) PPC_WEAK_FUNC(sub_825847F8);
PPC_FUNC_IMPL(__imp__sub_825847F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82584800;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82584b84
	if (ctx.cr6.eq) goto loc_82584B84;
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258485c
	if (!ctx.cr6.gt) goto loc_8258485C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258485c
	if (!ctx.cr0.eq) goto loc_8258485C;
	// lwz r11,6792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258485c
	if (!ctx.cr0.eq) goto loc_8258485C;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8258485c
	if (ctx.cr6.gt) goto loc_8258485C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825430a0
	ctx.lr = 0x8258485C;
	sub_825430A0(ctx, base);
loc_8258485C:
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82584874
	if (ctx.cr6.eq) goto loc_82584874;
	// lis r25,-9190
	ctx.r25.s64 = -602275840;
	// ori r25,r25,35575
	ctx.r25.u64 = ctx.r25.u64 | 35575;
	// b 0x82584b84
	goto loc_82584B84;
loc_82584874:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825841a8
	ctx.lr = 0x82584884;
	sub_825841A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825848A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825848c0
	if (ctx.cr6.eq) goto loc_825848C0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825848d0
	if (!ctx.cr6.eq) goto loc_825848D0;
loc_825848C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546cc0
	ctx.lr = 0x825848D0;
	sub_82546CC0(ctx, base);
loc_825848D0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82584964
	if (!ctx.cr6.eq) goto loc_82584964;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x825848E0;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825848f4
	if (ctx.cr0.eq) goto loc_825848F4;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
loc_825848F4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r6,30312
	ctx.r6.s64 = 1986527232;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f12,20492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20492);
	ctx.f12.f64 = double(temp.f32);
	// ori r25,r6,31343
	ctx.r25.u64 = ctx.r6.u64 | 31343;
	// lfs f13,20488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20488);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lfs f0,20484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1076);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82584958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82891118
	ctx.lr = 0x82584960;
	sub_82891118(ctx, base);
	// b 0x82584b84
	goto loc_82584B84;
loc_82584964:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-11192
	ctx.r3.s64 = ctx.r11.s64 + -11192;
	// bl 0x82816528
	ctx.lr = 0x82584970;
	sub_82816528(ctx, base);
	// lwz r8,3500(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3500);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x825849a8
	if (!ctx.cr6.gt) goto loc_825849A8;
	// lwz r10,3496(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3496);
loc_82584988:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825849a8
	if (ctx.cr6.eq) goto loc_825849A8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82584988
	if (ctx.cr6.lt) goto loc_82584988;
loc_825849A8:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x825849e0
	if (ctx.cr6.eq) goto loc_825849E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825849D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x825849e0
	if (ctx.cr6.gt) goto loc_825849E0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_825849E0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-11212
	ctx.r3.s64 = ctx.r11.s64 + -11212;
	// bl 0x82816528
	ctx.lr = 0x825849EC;
	sub_82816528(ctx, base);
	// lwz r8,3500(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3500);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82584a24
	if (!ctx.cr6.gt) goto loc_82584A24;
	// lwz r10,3496(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3496);
loc_82584A04:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82584a24
	if (ctx.cr6.eq) goto loc_82584A24;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82584a04
	if (ctx.cr6.lt) goto loc_82584A04;
loc_82584A24:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82584a54
	if (ctx.cr6.eq) goto loc_82584A54;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82584A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82584a54
	if (ctx.cr6.gt) goto loc_82584A54;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82584A54:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bne cr6,0x82584a64
	if (!ctx.cr6.eq) goto loc_82584A64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82584A64:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82584b84
	if (ctx.cr6.eq) goto loc_82584B84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e8c70
	ctx.lr = 0x82584A7C;
	sub_824E8C70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82584af8
	if (!ctx.cr0.gt) goto loc_82584AF8;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r31,620
	ctx.r4.s64 = ctx.r31.s64 + 620;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// bl 0x82825ea0
	ctx.lr = 0x82584AA4;
	sub_82825EA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82584abc
	if (!ctx.cr0.eq) goto loc_82584ABC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82584378
	ctx.lr = 0x82584AB8;
	sub_82584378(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82584ABC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82584AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r25,14112
	ctx.r25.s64 = 924844032;
	// ori r25,r25,53358
	ctx.r25.u64 = ctx.r25.u64 | 53358;
	// b 0x82584b84
	goto loc_82584B84;
loc_82584AF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82584B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82584b84
	if (!ctx.cr0.eq) goto loc_82584B84;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82584b7c
	if (ctx.cr6.eq) goto loc_82584B7C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82584b40
	if (ctx.cr6.eq) goto loc_82584B40;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e8c70
	ctx.lr = 0x82584B38;
	sub_824E8C70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82584b7c
	if (ctx.cr0.eq) goto loc_82584B7C;
loc_82584B40:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82584B70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r25,30179
	ctx.r25.s64 = 1977810944;
	// ori r25,r25,1459
	ctx.r25.u64 = ctx.r25.u64 | 1459;
	// b 0x82584b84
	goto loc_82584B84;
loc_82584B7C:
	// lis r25,9385
	ctx.r25.s64 = 615055360;
	// ori r25,r25,21604
	ctx.r25.u64 = ctx.r25.u64 | 21604;
loc_82584B84:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584B98"))) PPC_WEAK_FUNC(sub_82584B98);
PPC_FUNC_IMPL(__imp__sub_82584B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82584c58
	if (ctx.cr6.eq) goto loc_82584C58;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82584c58
	if (ctx.cr0.eq) goto loc_82584C58;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r9,6900(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6900);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82584bec
	if (ctx.cr6.eq) goto loc_82584BEC;
	// lwz r10,6908(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6908);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82584c58
	if (ctx.cr6.eq) goto loc_82584C58;
	// stw r11,6908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6908, ctx.r11.u32);
	// b 0x82584c58
	goto loc_82584C58;
loc_82584BEC:
	// lwz r9,6792(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82584c1c
	if (!ctx.cr0.eq) goto loc_82584C1C;
	// lis r30,-29704
	ctx.r30.s64 = -1946681344;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// ori r30,r30,16239
	ctx.r30.u64 = ctx.r30.u64 | 16239;
	// bl 0x825430a0
	ctx.lr = 0x82584C0C;
	sub_825430A0(ctx, base);
	// lwz r11,6792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,6792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6792, ctx.r11.u32);
	// b 0x82584c58
	goto loc_82584C58;
loc_82584C1C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82584c54
	if (ctx.cr0.eq) goto loc_82584C54;
	// lwz r8,6900(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6900);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82584c48
	if (ctx.cr6.eq) goto loc_82584C48;
	// lwz r10,6908(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6908);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82584c54
	if (ctx.cr6.eq) goto loc_82584C54;
	// stw r11,6908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6908, ctx.r11.u32);
	// b 0x82584c54
	goto loc_82584C54;
loc_82584C48:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x82584640
	ctx.lr = 0x82584C50;
	sub_82584640(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_82584C54:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_82584C58:
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

__attribute__((alias("__imp__sub_82584C78"))) PPC_WEAK_FUNC(sub_82584C78);
PPC_FUNC_IMPL(__imp__sub_82584C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82584C80;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82584e8c
	if (ctx.cr6.eq) goto loc_82584E8C;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82584e8c
	if (ctx.cr6.eq) goto loc_82584E8C;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// lwz r10,6900(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6900);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82584cc8
	if (ctx.cr6.eq) goto loc_82584CC8;
	// lwz r10,6908(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6908);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82584e8c
	if (ctx.cr6.eq) goto loc_82584E8C;
	// stw r11,6908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6908, ctx.r11.u32);
	// b 0x82584e8c
	goto loc_82584E8C;
loc_82584CC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,1492(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// bl 0x829bed50
	ctx.lr = 0x82584CD4;
	sub_829BED50(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82584ce4
	if (ctx.cr0.eq) goto loc_82584CE4;
	// stw r25,224(r26)
	PPC_STORE_U32(ctx.r26.u32 + 224, ctx.r25.u32);
	// stw r25,228(r26)
	PPC_STORE_U32(ctx.r26.u32 + 228, ctx.r25.u32);
loc_82584CE4:
	// lwz r11,6792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82584d08
	if (!ctx.cr0.eq) goto loc_82584D08;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825430a0
	ctx.lr = 0x82584CFC;
	sub_825430A0(ctx, base);
	// lwz r11,6792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,6792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6792, ctx.r11.u32);
loc_82584D08:
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82584d1c
	if (!ctx.cr6.eq) goto loc_82584D1C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825844d8
	ctx.lr = 0x82584D1C;
	sub_825844D8(ctx, base);
loc_82584D1C:
	// lwz r4,112(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82584dec
	if (ctx.cr6.eq) goto loc_82584DEC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82584D38;
	sub_829B9720(ctx, base);
	// bl 0x824a0a48
	ctx.lr = 0x82584D3C;
	sub_824A0A48(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82584dec
	if (ctx.cr0.eq) goto loc_82584DEC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-32456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32456);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82584dec
	if (ctx.cr6.gt) goto loc_82584DEC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r30,620
	ctx.r5.s64 = ctx.r30.s64 + 620;
	// addi r4,r31,620
	ctx.r4.s64 = ctx.r31.s64 + 620;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82584D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82584dec
	if (!ctx.cr0.eq) goto loc_82584DEC;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82584DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,14112
	ctx.r11.s64 = 924844032;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r25,r11,53358
	ctx.r25.u64 = ctx.r11.u64 | 53358;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,1368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82584DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82584e8c
	goto loc_82584E8C;
loc_82584DEC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r3,1484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82584E0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,1544(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1544);
	// addi r11,r30,1528
	ctx.r11.s64 = ctx.r30.s64 + 1528;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82584e44
	if (!ctx.cr6.gt) goto loc_82584E44;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_82584E24:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,84
	ctx.r9.s64 = ctx.r9.s64 + 84;
	// stw r25,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r25.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82584e24
	if (ctx.cr6.lt) goto loc_82584E24;
loc_82584E44:
	// lwz r3,1484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82584E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r25.u32);
	// lwz r9,6756(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6756);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,6792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,6716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6716, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r10,6792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6792, ctx.r10.u32);
	// stw r9,6756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6756, ctx.r9.u32);
	// beq cr6,0x82584e8c
	if (ctx.cr6.eq) goto loc_82584E8C;
	// stw r11,224(r26)
	PPC_STORE_U32(ctx.r26.u32 + 224, ctx.r11.u32);
	// stw r11,228(r26)
	PPC_STORE_U32(ctx.r26.u32 + 228, ctx.r11.u32);
loc_82584E8C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584E98"))) PPC_WEAK_FUNC(sub_82584E98);
PPC_FUNC_IMPL(__imp__sub_82584E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82584EA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82546f10
	ctx.lr = 0x82584EB4;
	sub_82546F10(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82585058
	if (ctx.cr0.eq) goto loc_82585058;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82585058
	if (ctx.cr6.eq) goto loc_82585058;
	// lwz r3,1608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x82584ED0;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584ee0
	if (ctx.cr0.eq) goto loc_82584EE0;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// stw r29,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r29.u32);
loc_82584EE0:
	// addi r6,r30,-192
	ctx.r6.s64 = ctx.r30.s64 + -192;
	// lwz r5,-92(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -92);
	// lwz r4,-96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -96);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82581a10
	ctx.lr = 0x82584EF4;
	sub_82581A10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585058
	if (ctx.cr0.eq) goto loc_82585058;
	// lis r10,-18325
	ctx.r10.s64 = -1200947200;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r10,r10,39911
	ctx.r10.u64 = ctx.r10.u64 | 39911;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82584fa8
	if (ctx.cr6.gt) goto loc_82584FA8;
	// beq cr6,0x82584f64
	if (ctx.cr6.eq) goto loc_82584F64;
	// lis r10,22768
	ctx.r10.s64 = 1492123648;
	// ori r10,r10,9999
	ctx.r10.u64 = ctx.r10.u64 | 9999;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82584ff8
	if (ctx.cr6.eq) goto loc_82584FF8;
	// lis r10,27729
	ctx.r10.s64 = 1817247744;
	// ori r10,r10,38877
	ctx.r10.u64 = ctx.r10.u64 | 38877;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82584f64
	if (ctx.cr6.eq) goto loc_82584F64;
	// lis r10,-24487
	ctx.r10.s64 = -1604780032;
	// ori r10,r10,25589
	ctx.r10.u64 = ctx.r10.u64 | 25589;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82584fe8
	if (ctx.cr6.eq) goto loc_82584FE8;
	// lis r10,-24159
	ctx.r10.s64 = -1583284224;
	// ori r10,r10,45023
	ctx.r10.u64 = ctx.r10.u64 | 45023;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82585048
	if (ctx.cr6.eq) goto loc_82585048;
	// lis r10,-19208
	ctx.r10.s64 = -1258815488;
	// ori r10,r10,49846
	ctx.r10.u64 = ctx.r10.u64 | 49846;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82585058
	if (!ctx.cr6.eq) goto loc_82585058;
loc_82584F64:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82585054
	if (ctx.cr6.eq) goto loc_82585054;
	// lwz r10,104(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 104);
	// lwz r9,6900(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6900);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82584f98
	if (ctx.cr6.eq) goto loc_82584F98;
loc_82584F84:
	// lwz r9,6908(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6908);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82585054
	if (ctx.cr6.eq) goto loc_82585054;
	// stw r10,6908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6908, ctx.r10.u32);
	// b 0x82585054
	goto loc_82585054;
loc_82584F98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82584640
	ctx.lr = 0x82584FA4;
	sub_82584640(ctx, base);
	// b 0x82585054
	goto loc_82585054;
loc_82584FA8:
	// lis r10,-15645
	ctx.r10.s64 = -1025310720;
	// ori r10,r10,28507
	ctx.r10.u64 = ctx.r10.u64 | 28507;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82585048
	if (ctx.cr6.eq) goto loc_82585048;
	// lis r10,-11921
	ctx.r10.s64 = -781254656;
	// ori r10,r10,43710
	ctx.r10.u64 = ctx.r10.u64 | 43710;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82585048
	if (ctx.cr6.eq) goto loc_82585048;
	// lis r10,-10530
	ctx.r10.s64 = -690094080;
	// ori r10,r10,2106
	ctx.r10.u64 = ctx.r10.u64 | 2106;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82584ff8
	if (ctx.cr6.eq) goto loc_82584FF8;
	// lis r10,-5864
	ctx.r10.s64 = -384303104;
	// ori r10,r10,43951
	ctx.r10.u64 = ctx.r10.u64 | 43951;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82585058
	if (!ctx.cr6.eq) goto loc_82585058;
loc_82584FE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82584b98
	ctx.lr = 0x82584FF4;
	sub_82584B98(ctx, base);
	// b 0x82585054
	goto loc_82585054;
loc_82584FF8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82585054
	if (ctx.cr6.eq) goto loc_82585054;
	// lwz r10,104(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 104);
	// lwz r9,6900(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6900);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82584f84
	if (!ctx.cr6.eq) goto loc_82584F84;
	// lwz r11,108(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82585038
	if (!ctx.cr6.eq) goto loc_82585038;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,895
	ctx.r3.s64 = 58654720;
	// stw r11,108(r6)
	PPC_STORE_U32(ctx.r6.u32 + 108, ctx.r11.u32);
	// ori r3,r3,49282
	ctx.r3.u64 = ctx.r3.u64 | 49282;
	// b 0x82585054
	goto loc_82585054;
loc_82585038:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x825847f8
	ctx.lr = 0x82585044;
	sub_825847F8(ctx, base);
	// b 0x82585054
	goto loc_82585054;
loc_82585048:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82584c78
	ctx.lr = 0x82585054;
	sub_82584C78(ctx, base);
loc_82585054:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82585058:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585068"))) PPC_WEAK_FUNC(sub_82585068);
PPC_FUNC_IMPL(__imp__sub_82585068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-64
	ctx.r3.s64 = ctx.r3.s64 + -64;
	// b 0x82580610
	sub_82580610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585078"))) PPC_WEAK_FUNC(sub_82585078);
PPC_FUNC_IMPL(__imp__sub_82585078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825838f8
	sub_825838F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585088"))) PPC_WEAK_FUNC(sub_82585088);
PPC_FUNC_IMPL(__imp__sub_82585088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -400);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82583b18
	sub_82583B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585098"))) PPC_WEAK_FUNC(sub_82585098);
PPC_FUNC_IMPL(__imp__sub_82585098) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82583b18
	sub_82583B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825850A8"))) PPC_WEAK_FUNC(sub_825850A8);
PPC_FUNC_IMPL(__imp__sub_825850A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82584e98
	sub_82584E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825850B8"))) PPC_WEAK_FUNC(sub_825850B8);
PPC_FUNC_IMPL(__imp__sub_825850B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82583960
	sub_82583960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825850C8"))) PPC_WEAK_FUNC(sub_825850C8);
PPC_FUNC_IMPL(__imp__sub_825850C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825838e8
	sub_825838E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825850D8"))) PPC_WEAK_FUNC(sub_825850D8);
PPC_FUNC_IMPL(__imp__sub_825850D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82583b18
	sub_82583B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825850E8"))) PPC_WEAK_FUNC(sub_825850E8);
PPC_FUNC_IMPL(__imp__sub_825850E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825839c8
	sub_825839C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825850F8"))) PPC_WEAK_FUNC(sub_825850F8);
PPC_FUNC_IMPL(__imp__sub_825850F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825839c8
	sub_825839C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585108"))) PPC_WEAK_FUNC(sub_82585108);
PPC_FUNC_IMPL(__imp__sub_82585108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82583fc0
	sub_82583FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585118"))) PPC_WEAK_FUNC(sub_82585118);
PPC_FUNC_IMPL(__imp__sub_82585118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-64
	ctx.r3.s64 = ctx.r3.s64 + -64;
	// b 0x82580668
	sub_82580668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585128"))) PPC_WEAK_FUNC(sub_82585128);
PPC_FUNC_IMPL(__imp__sub_82585128) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82583958
	sub_82583958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585138"))) PPC_WEAK_FUNC(sub_82585138);
PPC_FUNC_IMPL(__imp__sub_82585138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9956
	ctx.r3.s64 = ctx.r11.s64 + -9956;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585148"))) PPC_WEAK_FUNC(sub_82585148);
PPC_FUNC_IMPL(__imp__sub_82585148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82585180
	if (ctx.cr6.eq) goto loc_82585180;
	// bl 0x823b9ee8
	ctx.lr = 0x82585170;
	sub_823B9EE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82585180
	if (!ctx.cr6.eq) goto loc_82585180;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8258518c
	goto loc_8258518C;
loc_82585180:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-112
	ctx.r3.s64 = ctx.r30.s64 + -112;
	// bl 0x82580098
	ctx.lr = 0x8258518C;
	sub_82580098(ctx, base);
loc_8258518C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825851A8"))) PPC_WEAK_FUNC(sub_825851A8);
PPC_FUNC_IMPL(__imp__sub_825851A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b9ee8
	sub_823B9EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825851B0"))) PPC_WEAK_FUNC(sub_825851B0);
PPC_FUNC_IMPL(__imp__sub_825851B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1824
	ctx.r3.s64 = 1824;
	// bl 0x82833108
	ctx.lr = 0x825851CC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825851e4
	if (ctx.cr0.eq) goto loc_825851E4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-240
	ctx.r4.s64 = ctx.r31.s64 + -240;
	// bl 0x82585270
	ctx.lr = 0x825851E0;
	sub_82585270(ctx, base);
	// b 0x825851e8
	goto loc_825851E8;
loc_825851E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825851E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82585200
	if (ctx.cr6.eq) goto loc_82585200;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82585200:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585218"))) PPC_WEAK_FUNC(sub_82585218);
PPC_FUNC_IMPL(__imp__sub_82585218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b9ee8
	ctx.lr = 0x82585238;
	sub_823B9EE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82585248
	if (!ctx.cr6.eq) goto loc_82585248;
	// addi r3,r30,-240
	ctx.r3.s64 = ctx.r30.s64 + -240;
	// b 0x82585254
	goto loc_82585254;
loc_82585248:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-112
	ctx.r3.s64 = ctx.r30.s64 + -112;
	// bl 0x82580108
	ctx.lr = 0x82585254;
	sub_82580108(ctx, base);
loc_82585254:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585270"))) PPC_WEAK_FUNC(sub_82585270);
PPC_FUNC_IMPL(__imp__sub_82585270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82585278;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-10024
	ctx.r11.s64 = ctx.r11.s64 + -10024;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x825852a4
	if (!ctx.cr6.eq) goto loc_825852A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x825852b4
	goto loc_825852B4;
loc_825852A4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_825852B4:
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x82571e20
	ctx.lr = 0x825852BC;
	sub_82571E20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82582280
	ctx.lr = 0x825852CC;
	sub_82582280(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-11216
	ctx.r11.s64 = ctx.r11.s64 + -11216;
	// addi r10,r10,-11192
	ctx.r10.s64 = ctx.r10.s64 + -11192;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r8,r11,-10100
	ctx.r8.s64 = ctx.r11.s64 + -10100;
	// addi r9,r9,-10048
	ctx.r9.s64 = ctx.r9.s64 + -10048;
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
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
	// bl 0x82873b58
	ctx.lr = 0x82585388;
	sub_82873B58(ctx, base);
	// addi r4,r30,168
	ctx.r4.s64 = ctx.r30.s64 + 168;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x82873b58
	ctx.lr = 0x82585394;
	sub_82873B58(ctx, base);
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x82873b58
	ctx.lr = 0x825853A0;
	sub_82873B58(ctx, base);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825853C0"))) PPC_WEAK_FUNC(sub_825853C0);
PPC_FUNC_IMPL(__imp__sub_825853C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825853C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r10,-236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -236);
	// addi r30,r3,-240
	ctx.r30.s64 = ctx.r3.s64 + -240;
	// addi r11,r11,-11216
	ctx.r11.s64 = ctx.r11.s64 + -11216;
	// addi r31,r30,240
	ctx.r31.s64 = ctx.r30.s64 + 240;
	// stw r11,-240(r3)
	PPC_STORE_U32(ctx.r3.u32 + -240, ctx.r11.u32);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r9,-11192
	ctx.r10.s64 = ctx.r9.s64 + -11192;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// stw r10,-236(r11)
	PPC_STORE_U32(ctx.r11.u32 + -236, ctx.r10.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r8,-10100
	ctx.r9.s64 = ctx.r8.s64 + -10100;
	// addi r8,r11,-10048
	ctx.r8.s64 = ctx.r11.s64 + -10048;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,-228(r11)
	PPC_STORE_U32(ctx.r11.u32 + -228, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r8.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-236
	ctx.r11.s64 = ctx.r11.s64 + -236;
	// stw r11,-240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -240, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x82585448;
	sub_8239D768(ctx, base);
	// addi r3,r31,-72
	ctx.r3.s64 = ctx.r31.s64 + -72;
	// bl 0x8239d768
	ctx.lr = 0x82585450;
	sub_8239D768(ctx, base);
	// addi r3,r31,-96
	ctx.r3.s64 = ctx.r31.s64 + -96;
	// bl 0x8239d768
	ctx.lr = 0x82585458;
	sub_8239D768(ctx, base);
	// addi r29,r31,-112
	ctx.r29.s64 = ctx.r31.s64 + -112;
	// addi r3,r29,-64
	ctx.r3.s64 = ctx.r29.s64 + -64;
	// bl 0x8269b988
	ctx.lr = 0x82585464;
	sub_8269B988(ctx, base);
	// addi r3,r29,-88
	ctx.r3.s64 = ctx.r29.s64 + -88;
	// bl 0x82333960
	ctx.lr = 0x8258546C;
	sub_82333960(ctx, base);
	// addi r3,r29,-112
	ctx.r3.s64 = ctx.r29.s64 + -112;
	// bl 0x82333960
	ctx.lr = 0x82585474;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82570708
	ctx.lr = 0x8258547C;
	sub_82570708(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258548c
	if (ctx.cr0.eq) goto loc_8258548C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x8258548C;
	sub_82332DB8(ctx, base);
loc_8258548C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585498"))) PPC_WEAK_FUNC(sub_82585498);
PPC_FUNC_IMPL(__imp__sub_82585498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825854A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// addi r11,r11,-10024
	ctx.r11.s64 = ctx.r11.s64 + -10024;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x825705f8
	ctx.lr = 0x825854C0;
	sub_825705F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82580498
	ctx.lr = 0x825854CC;
	sub_82580498(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-11216
	ctx.r11.s64 = ctx.r11.s64 + -11216;
	// addi r9,r10,-11192
	ctx.r9.s64 = ctx.r10.s64 + -11192;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r8,r11,-10100
	ctx.r8.s64 = ctx.r11.s64 + -10100;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r7,r10,-10048
	ctx.r7.s64 = ctx.r10.s64 + -10048;
	// addi r4,r11,-21260
	ctx.r4.s64 = ctx.r11.s64 + -21260;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,144
	ctx.r30.s64 = ctx.r31.s64 + 144;
	// addi r29,r31,168
	ctx.r29.s64 = ctx.r31.s64 + 168;
	// addi r28,r31,192
	ctx.r28.s64 = ctx.r31.s64 + 192;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r11,-236
	ctx.r9.s64 = ctx.r11.s64 + -236;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r27,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r27.u32);
	// stw r27,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// stw r27,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r27.u32);
	// stw r27,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r27.u32);
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// stw r27,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r27.u32);
	// stw r27,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r27.u32);
	// stw r27,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r27.u32);
	// stw r27,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r27.u32);
	// stw r27,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r27.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stw r27,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r27.u32);
	// stw r27,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r27.u32);
	// stw r27,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r27.u32);
	// stw r27,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r27.u32);
	// stw r27,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r27.u32);
	// bl 0x8233a258
	ctx.lr = 0x82585598;
	sub_8233A258(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82400b48
	ctx.lr = 0x825855A4;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x825855AC;
	sub_82333960(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-21244
	ctx.r4.s64 = ctx.r11.s64 + -21244;
	// bl 0x8233a258
	ctx.lr = 0x825855BC;
	sub_8233A258(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82400b48
	ctx.lr = 0x825855C8;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x825855D0;
	sub_82333960(ctx, base);
	// lis r11,9385
	ctx.r11.s64 = 615055360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,21604
	ctx.r11.u64 = ctx.r11.u64 | 21604;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x82410060
	ctx.lr = 0x825855F4;
	sub_82410060(ctx, base);
	// lis r11,14112
	ctx.r11.s64 = 924844032;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,53358
	ctx.r11.u64 = ctx.r11.u64 | 53358;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x82410060
	ctx.lr = 0x82585618;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-21224
	ctx.r3.s64 = ctx.r11.s64 + -21224;
	// bl 0x828165a8
	ctx.lr = 0x82585624;
	sub_828165A8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-21088
	ctx.r3.s64 = ctx.r11.s64 + -21088;
	// bl 0x828165a8
	ctx.lr = 0x82585634;
	sub_828165A8(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-20944
	ctx.r3.s64 = ctx.r11.s64 + -20944;
	// bl 0x828165a8
	ctx.lr = 0x82585644;
	sub_828165A8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-20808
	ctx.r3.s64 = ctx.r11.s64 + -20808;
	// bl 0x828165a8
	ctx.lr = 0x82585654;
	sub_828165A8(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-20672
	ctx.r3.s64 = ctx.r11.s64 + -20672;
	// bl 0x828165a8
	ctx.lr = 0x82585664;
	sub_828165A8(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-20536
	ctx.r3.s64 = ctx.r11.s64 + -20536;
	// bl 0x828165a8
	ctx.lr = 0x82585674;
	sub_828165A8(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-20400
	ctx.r3.s64 = ctx.r11.s64 + -20400;
	// bl 0x828165a8
	ctx.lr = 0x82585684;
	sub_828165A8(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-20264
	ctx.r3.s64 = ctx.r11.s64 + -20264;
	// bl 0x828165a8
	ctx.lr = 0x82585694;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825856A4;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-20088
	ctx.r3.s64 = ctx.r11.s64 + -20088;
	// bl 0x828165a8
	ctx.lr = 0x825856B0;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825856C0;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-19912
	ctx.r3.s64 = ctx.r11.s64 + -19912;
	// bl 0x828165a8
	ctx.lr = 0x825856CC;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825856DC;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-19736
	ctx.r3.s64 = ctx.r11.s64 + -19736;
	// bl 0x828165a8
	ctx.lr = 0x825856E8;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825856F8;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-19560
	ctx.r3.s64 = ctx.r11.s64 + -19560;
	// bl 0x828165a8
	ctx.lr = 0x82585704;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585714;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-19384
	ctx.r3.s64 = ctx.r11.s64 + -19384;
	// bl 0x828165a8
	ctx.lr = 0x82585720;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585730;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-19208
	ctx.r3.s64 = ctx.r11.s64 + -19208;
	// bl 0x828165a8
	ctx.lr = 0x8258573C;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8258574C;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-19032
	ctx.r3.s64 = ctx.r11.s64 + -19032;
	// bl 0x828165a8
	ctx.lr = 0x82585758;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585768;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-18856
	ctx.r3.s64 = ctx.r11.s64 + -18856;
	// bl 0x828165a8
	ctx.lr = 0x82585774;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585784;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-18680
	ctx.r3.s64 = ctx.r11.s64 + -18680;
	// bl 0x828165a8
	ctx.lr = 0x82585790;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825857A0;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-18504
	ctx.r3.s64 = ctx.r11.s64 + -18504;
	// bl 0x828165a8
	ctx.lr = 0x825857AC;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825857BC;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-18328
	ctx.r3.s64 = ctx.r11.s64 + -18328;
	// bl 0x828165a8
	ctx.lr = 0x825857C8;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825857D8;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-18152
	ctx.r3.s64 = ctx.r11.s64 + -18152;
	// bl 0x828165a8
	ctx.lr = 0x825857E4;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825857F4;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-17976
	ctx.r3.s64 = ctx.r11.s64 + -17976;
	// bl 0x828165a8
	ctx.lr = 0x82585800;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585810;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-17800
	ctx.r3.s64 = ctx.r11.s64 + -17800;
	// bl 0x828165a8
	ctx.lr = 0x8258581C;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8258582C;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-17624
	ctx.r3.s64 = ctx.r11.s64 + -17624;
	// bl 0x828165a8
	ctx.lr = 0x82585838;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585848;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-17448
	ctx.r3.s64 = ctx.r11.s64 + -17448;
	// bl 0x828165a8
	ctx.lr = 0x82585854;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585864;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-17272
	ctx.r3.s64 = ctx.r11.s64 + -17272;
	// bl 0x828165a8
	ctx.lr = 0x82585870;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x82585880;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-17096
	ctx.r3.s64 = ctx.r11.s64 + -17096;
	// bl 0x828165a8
	ctx.lr = 0x8258588C;
	sub_828165A8(ctx, base);
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-16920
	ctx.r3.s64 = ctx.r11.s64 + -16920;
	// bl 0x828165a8
	ctx.lr = 0x8258589C;
	sub_828165A8(ctx, base);
	// stw r3,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-16744
	ctx.r3.s64 = ctx.r11.s64 + -16744;
	// bl 0x828165a8
	ctx.lr = 0x825858AC;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825858BC;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-16568
	ctx.r3.s64 = ctx.r11.s64 + -16568;
	// bl 0x828165a8
	ctx.lr = 0x825858C8;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825858D8;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-16392
	ctx.r3.s64 = ctx.r11.s64 + -16392;
	// bl 0x828165a8
	ctx.lr = 0x825858E4;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825858F4;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-16216
	ctx.r3.s64 = ctx.r11.s64 + -16216;
	// bl 0x828165a8
	ctx.lr = 0x82585900;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585910;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-16040
	ctx.r3.s64 = ctx.r11.s64 + -16040;
	// bl 0x828165a8
	ctx.lr = 0x8258591C;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8258592C;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-15864
	ctx.r3.s64 = ctx.r11.s64 + -15864;
	// bl 0x828165a8
	ctx.lr = 0x82585938;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585948;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-15688
	ctx.r3.s64 = ctx.r11.s64 + -15688;
	// bl 0x828165a8
	ctx.lr = 0x82585954;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585964;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-15512
	ctx.r3.s64 = ctx.r11.s64 + -15512;
	// bl 0x828165a8
	ctx.lr = 0x82585970;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585980;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-15336
	ctx.r3.s64 = ctx.r11.s64 + -15336;
	// bl 0x828165a8
	ctx.lr = 0x8258598C;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8258599C;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-15160
	ctx.r3.s64 = ctx.r11.s64 + -15160;
	// bl 0x828165a8
	ctx.lr = 0x825859A8;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825859B8;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-14984
	ctx.r3.s64 = ctx.r11.s64 + -14984;
	// bl 0x828165a8
	ctx.lr = 0x825859C4;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825859D4;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-14808
	ctx.r3.s64 = ctx.r11.s64 + -14808;
	// bl 0x828165a8
	ctx.lr = 0x825859E0;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825859F0;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-14632
	ctx.r3.s64 = ctx.r11.s64 + -14632;
	// bl 0x828165a8
	ctx.lr = 0x825859FC;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585A0C;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-14456
	ctx.r3.s64 = ctx.r11.s64 + -14456;
	// bl 0x828165a8
	ctx.lr = 0x82585A18;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585A28;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-14280
	ctx.r3.s64 = ctx.r11.s64 + -14280;
	// bl 0x828165a8
	ctx.lr = 0x82585A34;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410060
	ctx.lr = 0x82585A44;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-14104
	ctx.r3.s64 = ctx.r11.s64 + -14104;
	// bl 0x828165a8
	ctx.lr = 0x82585A50;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585A60;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-13936
	ctx.r3.s64 = ctx.r11.s64 + -13936;
	// bl 0x828165a8
	ctx.lr = 0x82585A6C;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585A7C;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-13768
	ctx.r3.s64 = ctx.r11.s64 + -13768;
	// bl 0x828165a8
	ctx.lr = 0x82585A88;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585A98;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-13600
	ctx.r3.s64 = ctx.r11.s64 + -13600;
	// bl 0x828165a8
	ctx.lr = 0x82585AA4;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585AB4;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-13432
	ctx.r3.s64 = ctx.r11.s64 + -13432;
	// bl 0x828165a8
	ctx.lr = 0x82585AC0;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585AD0;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-13264
	ctx.r3.s64 = ctx.r11.s64 + -13264;
	// bl 0x828165a8
	ctx.lr = 0x82585ADC;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585AEC;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-13096
	ctx.r3.s64 = ctx.r11.s64 + -13096;
	// bl 0x828165a8
	ctx.lr = 0x82585AF8;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585B08;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-12928
	ctx.r3.s64 = ctx.r11.s64 + -12928;
	// bl 0x828165a8
	ctx.lr = 0x82585B14;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585B24;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-12760
	ctx.r3.s64 = ctx.r11.s64 + -12760;
	// bl 0x828165a8
	ctx.lr = 0x82585B30;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585B40;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-12592
	ctx.r3.s64 = ctx.r11.s64 + -12592;
	// bl 0x828165a8
	ctx.lr = 0x82585B4C;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585B5C;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-12424
	ctx.r3.s64 = ctx.r11.s64 + -12424;
	// bl 0x828165a8
	ctx.lr = 0x82585B68;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585B78;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-12248
	ctx.r3.s64 = ctx.r11.s64 + -12248;
	// bl 0x828165a8
	ctx.lr = 0x82585B84;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585B94;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-12072
	ctx.r3.s64 = ctx.r11.s64 + -12072;
	// bl 0x828165a8
	ctx.lr = 0x82585BA0;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585BB0;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11896
	ctx.r3.s64 = ctx.r11.s64 + -11896;
	// bl 0x828165a8
	ctx.lr = 0x82585BBC;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585BCC;
	sub_82410060(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11720
	ctx.r3.s64 = ctx.r11.s64 + -11720;
	// bl 0x828165a8
	ctx.lr = 0x82585BD8;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x82585BE8;
	sub_82410060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585BF8"))) PPC_WEAK_FUNC(sub_82585BF8);
PPC_FUNC_IMPL(__imp__sub_82585BF8) {
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
	// lwz r11,-236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -236);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-236
	ctx.r3.s64 = ctx.r11.s64 + -236;
	// bl 0x8257a570
	ctx.lr = 0x82585C20;
	sub_8257A570(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,23688
	ctx.r8.s64 = ctx.r11.s64 + 23688;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,-236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -236);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1280
	ctx.r3.s64 = ctx.r11.s64 + 1280;
	// lwz r11,1296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82585c6c
	if (!ctx.cr6.gt) goto loc_82585C6C;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_82585C50:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82585c74
	if (ctx.cr6.eq) goto loc_82585C74;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82585c50
	if (ctx.cr6.lt) goto loc_82585C50;
loc_82585C6C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82585C74;
	sub_82410060(ctx, base);
loc_82585C74:
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

__attribute__((alias("__imp__sub_82585C88"))) PPC_WEAK_FUNC(sub_82585C88);
PPC_FUNC_IMPL(__imp__sub_82585C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,1584(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82585ccc
	if (ctx.cr6.eq) goto loc_82585CCC;
	// bl 0x823b8fc0
	ctx.lr = 0x82585CA8;
	sub_823B8FC0(ctx, base);
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
	ctx.lr = 0x82585CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82585cd0
	if (!ctx.cr0.eq) goto loc_82585CD0;
loc_82585CCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82585CD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585CE8"))) PPC_WEAK_FUNC(sub_82585CE8);
PPC_FUNC_IMPL(__imp__sub_82585CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8255cef8
	ctx.lr = 0x82585D0C;
	sub_8255CEF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585d1c
	if (ctx.cr0.eq) goto loc_82585D1C;
	// lwz r11,-232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -232);
	// stw r11,6840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6840, ctx.r11.u32);
loc_82585D1C:
	// lwz r11,-236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -236);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-236
	ctx.r3.s64 = ctx.r11.s64 + -236;
	// bl 0x82570930
	ctx.lr = 0x82585D34;
	sub_82570930(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585D50"))) PPC_WEAK_FUNC(sub_82585D50);
PPC_FUNC_IMPL(__imp__sub_82585D50) {
	PPC_FUNC_PROLOGUE();
	// b 0x82581ce8
	sub_82581CE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585D58"))) PPC_WEAK_FUNC(sub_82585D58);
PPC_FUNC_IMPL(__imp__sub_82585D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82581ce8
	ctx.lr = 0x82585D78;
	sub_82581CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585d84
	if (ctx.cr0.eq) goto loc_82585D84;
	// stw r30,6712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6712, ctx.r30.u32);
loc_82585D84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581ce8
	ctx.lr = 0x82585D8C;
	sub_82581CE8(ctx, base);
	// bl 0x8255cef8
	ctx.lr = 0x82585D90;
	sub_8255CEF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585da4
	if (ctx.cr0.eq) goto loc_82585DA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7072, ctx.r11.u32);
	// stw r11,7108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7108, ctx.r11.u32);
loc_82585DA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585DC0"))) PPC_WEAK_FUNC(sub_82585DC0);
PPC_FUNC_IMPL(__imp__sub_82585DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82585DC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82581ce8
	ctx.lr = 0x82585DD8;
	sub_82581CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585de4
	if (ctx.cr0.eq) goto loc_82585DE4;
	// stw r30,6708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6708, ctx.r30.u32);
loc_82585DE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581ce8
	ctx.lr = 0x82585DEC;
	sub_82581CE8(ctx, base);
	// bl 0x8255cef8
	ctx.lr = 0x82585DF0;
	sub_8255CEF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82585fcc
	if (ctx.cr0.eq) goto loc_82585FCC;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82581a10
	ctx.lr = 0x82585E10;
	sub_82581A10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585e1c
	if (ctx.cr0.eq) goto loc_82585E1C;
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82585E1C:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82585f4c
	if (ctx.cr6.eq) goto loc_82585F4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82581a10
	ctx.lr = 0x82585E38;
	sub_82581A10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585e44
	if (ctx.cr0.eq) goto loc_82585E44;
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82585E44:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82585f4c
	if (ctx.cr6.eq) goto loc_82585F4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82581a10
	ctx.lr = 0x82585E60;
	sub_82581A10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585e6c
	if (ctx.cr0.eq) goto loc_82585E6C;
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82585E6C:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82585f4c
	if (ctx.cr6.eq) goto loc_82585F4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82581a10
	ctx.lr = 0x82585E88;
	sub_82581A10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585e94
	if (ctx.cr0.eq) goto loc_82585E94;
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82585E94:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r29,252(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82585eac
	if (!ctx.cr6.eq) goto loc_82585EAC;
	// stw r28,6868(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6868, ctx.r28.u32);
	// b 0x82585fcc
	goto loc_82585FCC;
loc_82585EAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82581a10
	ctx.lr = 0x82585EB8;
	sub_82581A10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585ec4
	if (ctx.cr0.eq) goto loc_82585EC4;
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82585EC4:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82585f10
	if (!ctx.cr6.eq) goto loc_82585F10;
	// lwz r11,960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// stw r28,6868(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6868, ctx.r28.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82585ee8
	if (!ctx.cr6.eq) goto loc_82585EE8;
	// stw r28,6872(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6872, ctx.r28.u32);
loc_82585EE8:
	// stw r28,6744(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6744, ctx.r28.u32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// stw r28,6816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6816, ctx.r28.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,9336
	ctx.r4.s64 = ctx.r11.s64 + 9336;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82585F00:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82585F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82585fcc
	goto loc_82585FCC;
loc_82585F10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82581a10
	ctx.lr = 0x82585F1C;
	sub_82581A10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585f28
	if (ctx.cr0.eq) goto loc_82585F28;
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82585F28:
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82585fcc
	if (ctx.cr6.eq) goto loc_82585FCC;
	// stw r28,6744(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6744, ctx.r28.u32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// stw r28,6816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6816, ctx.r28.u32);
	// addi r4,r11,9336
	ctx.r4.s64 = ctx.r11.s64 + 9336;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82585f00
	goto loc_82585F00;
loc_82585F4C:
	// lwz r11,7008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7008);
	// stw r28,7072(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7072, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,7108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7108, ctx.r28.u32);
	// bge cr6,0x82585f68
	if (!ctx.cr6.lt) goto loc_82585F68;
	// stw r28,7004(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7004, ctx.r28.u32);
	// b 0x82585f6c
	goto loc_82585F6C;
loc_82585F68:
	// stw r11,7004(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7004, ctx.r11.u32);
loc_82585F6C:
	// lwz r10,960(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6744(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6744, ctx.r11.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r11,6868(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6868, ctx.r11.u32);
	// stw r11,6816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6816, ctx.r11.u32);
	// bne cr6,0x82585f8c
	if (!ctx.cr6.eq) goto loc_82585F8C;
	// stw r11,6872(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6872, ctx.r11.u32);
loc_82585F8C:
	// lwz r29,1608(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82585fbc
	if (ctx.cr6.eq) goto loc_82585FBC;
	// bl 0x823b9548
	ctx.lr = 0x82585F9C;
	sub_823B9548(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82585FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82585fc0
	goto loc_82585FC0;
loc_82585FBC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82585FC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586d58
	ctx.lr = 0x82585FC8;
	sub_82586D58(ctx, base);
	// stw r3,7056(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7056, ctx.r3.u32);
loc_82585FCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585FD8"))) PPC_WEAK_FUNC(sub_82585FD8);
PPC_FUNC_IMPL(__imp__sub_82585FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82585FE0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,1824
	ctx.r4.s64 = ctx.r11.s64 + 1824;
	// bl 0x823ffc38
	ctx.lr = 0x8258600C;
	sub_823FFC38(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// bl 0x823ffc38
	ctx.lr = 0x8258602C;
	sub_823FFC38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824d5a80
	ctx.lr = 0x82586040;
	sub_824D5A80(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,-24640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// bl 0x824d7b70
	ctx.lr = 0x825860A8;
	sub_824D7B70(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x825860ec
	if (!ctx.cr0.eq) goto loc_825860EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,1544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82586144
	if (!ctx.cr6.gt) goto loc_82586144;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825711b0
	ctx.lr = 0x825860E4;
	sub_825711B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82586124
	goto loc_82586124;
loc_825860EC:
	// lfs f13,624(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,624(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,620(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
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
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_82586124:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82586144
	if (ctx.cr6.eq) goto loc_82586144;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82586144
	if (ctx.cr6.gt) goto loc_82586144;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_82586144:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8239d768
	ctx.lr = 0x8258614C;
	sub_8239D768(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8239d768
	ctx.lr = 0x82586154;
	sub_8239D768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82586168"))) PPC_WEAK_FUNC(sub_82586168);
PPC_FUNC_IMPL(__imp__sub_82586168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82586170;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82586240
	if (ctx.cr6.eq) goto loc_82586240;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82585fd8
	ctx.lr = 0x82586190;
	sub_82585FD8(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82586240
	if (ctx.cr0.eq) goto loc_82586240;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,6824(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ble cr6,0x82586220
	if (!ctx.cr6.gt) goto loc_82586220;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,1072(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1072);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825861D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x825861E0;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825861f0
	if (ctx.cr0.eq) goto loc_825861F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r11.u32);
loc_825861F0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,7068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7068);
	// lwz r9,7072(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7072);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r10,1508(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blt cr6,0x82586240
	if (ctx.cr6.lt) goto loc_82586240;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// stw r11,7072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7072, ctx.r11.u32);
	// b 0x82586240
	goto loc_82586240;
loc_82586220:
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,960(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r10.u32);
	// bne cr6,0x82586240
	if (!ctx.cr6.eq) goto loc_82586240;
	// stw r10,6876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6876, ctx.r10.u32);
loc_82586240:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82586250"))) PPC_WEAK_FUNC(sub_82586250);
PPC_FUNC_IMPL(__imp__sub_82586250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82586258;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825866b8
	if (ctx.cr6.eq) goto loc_825866B8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82585fd8
	ctx.lr = 0x82586284;
	sub_82585FD8(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// bl 0x82873b58
	ctx.lr = 0x8258629C;
	sub_82873B58(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825866b0
	if (ctx.cr6.eq) goto loc_825866B0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x828a95f0
	ctx.lr = 0x825862BC;
	sub_828A95F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825866b0
	if (ctx.cr0.eq) goto loc_825866B0;
	// lfs f13,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,7108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7108);
	// lfs f0,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// stw r27,7244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7244, ctx.r27.u32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// beq cr6,0x82586368
	if (ctx.cr6.eq) goto loc_82586368;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82586e78
	ctx.lr = 0x82586314;
	sub_82586E78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82586368
	if (ctx.cr0.eq) goto loc_82586368;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8258632c
	if (!ctx.cr6.eq) goto loc_8258632C;
	// stw r27,6872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6872, ctx.r27.u32);
loc_8258632C:
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r10,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r10.u32);
	// bne cr6,0x82586344
	if (!ctx.cr6.eq) goto loc_82586344;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6876, ctx.r11.u32);
loc_82586344:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8239d768
	ctx.lr = 0x82586360;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x825866bc
	goto loc_825866BC;
loc_82586368:
	// lwz r11,7004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7004);
	// lwz r10,7036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7036);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825863c8
	if (ctx.cr6.gt) goto loc_825863C8;
	// lwz r11,7044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825863c8
	if (ctx.cr6.eq) goto loc_825863C8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,32748
	ctx.r11.s64 = ctx.r11.s64 + 32748;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82586430
	if (ctx.cr6.lt) goto loc_82586430;
	// lwz r11,7028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7028);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r25,7284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7284, ctx.r25.u32);
	// stw r9,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r9.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r25,7288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7288, ctx.r25.u32);
	// stw r11,7012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7012, ctx.r11.u32);
loc_825863BC:
	// bne cr6,0x82586344
	if (!ctx.cr6.eq) goto loc_82586344;
	// stw r25,6876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6876, ctx.r25.u32);
	// b 0x82586344
	goto loc_82586344;
loc_825863C8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,32748
	ctx.r11.s64 = ctx.r11.s64 + 32748;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82586430
	if (ctx.cr6.lt) goto loc_82586430;
	// lwz r11,6752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6752);
	// lwz r10,6748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6748);
	// addi r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 + 1000;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82586430
	if (ctx.cr6.lt) goto loc_82586430;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82586430
	if (ctx.cr6.eq) goto loc_82586430;
	// lwz r11,6904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82586430
	if (ctx.cr6.eq) goto loc_82586430;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// li r25,1
	ctx.r25.s64 = 1;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r25,7276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7276, ctx.r25.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r10,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r10.u32);
	// stw r25,7244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7244, ctx.r25.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,7236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7236, ctx.r11.u32);
	// b 0x825863bc
	goto loc_825863BC;
loc_82586430:
	// lfs f13,7184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7184);
	ctx.f13.f64 = double(temp.f32);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r25,1
	ctx.r25.s64 = 1;
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x8258649c
	if (!ctx.cr6.lt) goto loc_8258649C;
	// lfs f13,7180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// ble cr6,0x8258649c
	if (!ctx.cr6.gt) goto loc_8258649C;
	// lwz r11,7056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7056);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258649c
	if (ctx.cr6.eq) goto loc_8258649C;
	// lwz r11,1436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1436);
	// mulli r10,r30,5
	ctx.r10.s64 = ctx.r30.s64 * 5;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8258649c
	if (!ctx.cr6.gt) goto loc_8258649C;
	// lwz r11,6896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6896);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258649c
	if (ctx.cr6.eq) goto loc_8258649C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258665c
	if (ctx.cr6.eq) goto loc_8258665C;
	// lwz r10,7004(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7004);
	// lwz r11,7176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7176);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258665c
	if (ctx.cr6.lt) goto loc_8258665C;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8258662c
	goto loc_8258662C;
loc_8258649C:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x825864f8
	if (ctx.cr6.gt) goto loc_825864F8;
	// lwz r11,7376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7376);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825864f8
	if (ctx.cr6.eq) goto loc_825864F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82586e78
	ctx.lr = 0x825864BC;
	sub_82586E78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825864f8
	if (ctx.cr0.eq) goto loc_825864F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// stw r11,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r11.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x825864f0
	if (!ctx.cr6.eq) goto loc_825864F0;
	// stw r25,6876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6876, ctx.r25.u32);
loc_825864F0:
	// stw r27,7108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7108, ctx.r27.u32);
	// b 0x82586654
	goto loc_82586654;
loc_825864F8:
	// lwz r11,7152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825865d8
	if (!ctx.cr6.eq) goto loc_825865D8;
	// lfs f0,7148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82586544
	if (!ctx.cr6.lt) goto loc_82586544;
	// lfs f0,7144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82586544
	if (!ctx.cr6.gt) goto loc_82586544;
	// lwz r11,7056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7056);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82586544
	if (ctx.cr6.eq) goto loc_82586544;
	// lwz r11,1436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1436);
	// mulli r10,r30,5
	ctx.r10.s64 = ctx.r30.s64 * 5;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82586544
	if (!ctx.cr6.gt) goto loc_82586544;
	// lwz r11,6888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825865d8
	if (!ctx.cr6.eq) goto loc_825865D8;
loc_82586544:
	// lfs f0,7060(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7060);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8258665c
	if (!ctx.cr6.gt) goto loc_8258665C;
	// lfs f0,7064(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7064);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8258665c
	if (!ctx.cr6.lt) goto loc_8258665C;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8258665c
	if (ctx.cr6.eq) goto loc_8258665C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82585fd8
	ctx.lr = 0x82586578;
	sub_82585FD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258665c
	if (ctx.cr0.eq) goto loc_8258665C;
	// lwz r11,7004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7004);
	// lwz r10,7052(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7052);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8258665c
	if (ctx.cr6.lt) goto loc_8258665C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82586d58
	ctx.lr = 0x8258659C;
	sub_82586D58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258665c
	if (ctx.cr0.eq) goto loc_8258665C;
	// lwz r30,7048(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7048);
	// bl 0x82567888
	ctx.lr = 0x825865AC;
	sub_82567888(ctx, base);
	// subf. r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8258665c
	if (!ctx.cr0.gt) goto loc_8258665C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82586d58
	ctx.lr = 0x825865C0;
	sub_82586D58(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,7056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7056, ctx.r3.u32);
	// stw r11,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r11.u32);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// b 0x82586638
	goto loc_82586638;
loc_825865D8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258665c
	if (ctx.cr6.eq) goto loc_8258665C;
	// lwz r10,7140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7140);
	// lwz r9,7004(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7004);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82586628
	if (!ctx.cr6.lt) goto loc_82586628;
	// lwz r8,7152(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7152);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8258665c
	if (ctx.cr6.eq) goto loc_8258665C;
	// add. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82586610
	if (!ctx.cr0.lt) goto loc_82586610;
	// stw r27,7004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7004, ctx.r27.u32);
	// b 0x82586628
	goto loc_82586628;
loc_82586610:
	// lwz r9,7008(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7008);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82586624
	if (!ctx.cr6.gt) goto loc_82586624;
	// stw r9,7004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7004, ctx.r9.u32);
	// b 0x82586628
	goto loc_82586628;
loc_82586624:
	// stw r10,7004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7004, ctx.r10.u32);
loc_82586628:
	// li r11,4
	ctx.r11.s64 = 4;
loc_8258662C:
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// stw r11,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r11.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
loc_82586638:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x82586654
	if (!ctx.cr6.eq) goto loc_82586654;
	// stw r25,6876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6876, ctx.r25.u32);
loc_82586654:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x825866b0
	if (!ctx.cr6.eq) goto loc_825866B0;
loc_8258665C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,-27804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x825866b0
	if (!ctx.cr6.gt) goto loc_825866B0;
	// lwz r11,6912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825866b0
	if (ctx.cr6.eq) goto loc_825866B0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// li r9,8
	ctx.r9.s64 = 8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r9,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r9.u32);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x825866b0
	if (!ctx.cr6.eq) goto loc_825866B0;
	// stw r25,6876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6876, ctx.r25.u32);
loc_825866B0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x825866B8;
	sub_8239D768(ctx, base);
loc_825866B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_825866BC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825866C8"))) PPC_WEAK_FUNC(sub_825866C8);
PPC_FUNC_IMPL(__imp__sub_825866C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825866D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825869b0
	if (ctx.cr6.eq) goto loc_825869B0;
	// lwz r27,4(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x825869b0
	if (ctx.cr6.eq) goto loc_825869B0;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x825819a0
	ctx.lr = 0x82586704;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82586710
	if (ctx.cr0.eq) goto loc_82586710;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82586710:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11540
	ctx.r3.s64 = ctx.r11.s64 + -11540;
	// bl 0x82816528
	ctx.lr = 0x8258671C;
	sub_82816528(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82586730
	if (!ctx.cr6.eq) goto loc_82586730;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// b 0x82586810
	goto loc_82586810;
loc_82586730:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x825819a0
	ctx.lr = 0x82586740;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258674c
	if (ctx.cr0.eq) goto loc_8258674C;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_8258674C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11532
	ctx.r3.s64 = ctx.r11.s64 + -11532;
	// bl 0x82816528
	ctx.lr = 0x82586758;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x825867dc
	if (!ctx.cr6.eq) goto loc_825867DC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r31,r11,13024
	ctx.r31.s64 = ctx.r11.s64 + 13024;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82586778;
	sub_829B98F8(ctx, base);
	// lis r29,-31944
	ctx.r29.s64 = -2093481984;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,12316(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12316);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825868dc
	if (!ctx.cr0.eq) goto loc_825868DC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11520
	ctx.r3.s64 = ctx.r11.s64 + -11520;
	// bl 0x82816528
	ctx.lr = 0x82586798;
	sub_82816528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x825867A8;
	sub_829B98F8(ctx, base);
	// bl 0x82587458
	ctx.lr = 0x825867AC;
	sub_82587458(ctx, base);
	// stw r3,6784(r27)
	PPC_STORE_U32(ctx.r27.u32 + 6784, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11440
	ctx.r3.s64 = ctx.r11.s64 + -11440;
	// bl 0x82816528
	ctx.lr = 0x825867BC;
	sub_82816528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x825867CC;
	sub_829B98F8(ctx, base);
	// bl 0x824a0a48
	ctx.lr = 0x825867D0;
	sub_824A0A48(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stb r11,12316(r29)
	PPC_STORE_U8(ctx.r29.u32 + 12316, ctx.r11.u8);
	// b 0x825868d8
	goto loc_825868D8;
loc_825867DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x825819a0
	ctx.lr = 0x825867EC;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825867f8
	if (ctx.cr0.eq) goto loc_825867F8;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_825867F8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11376
	ctx.r3.s64 = ctx.r11.s64 + -11376;
	// bl 0x82816528
	ctx.lr = 0x82586804;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8258682c
	if (!ctx.cr6.eq) goto loc_8258682C;
	// lwz r4,112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
loc_82586810:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r31,r11,13024
	ctx.r31.s64 = ctx.r11.s64 + 13024;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82586824;
	sub_829B98F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x825868dc
	goto loc_825868DC;
loc_8258682C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x825819a0
	ctx.lr = 0x8258683C;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82586848
	if (ctx.cr0.eq) goto loc_82586848;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82586848:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11368
	ctx.r3.s64 = ctx.r11.s64 + -11368;
	// bl 0x82816528
	ctx.lr = 0x82586854;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x825869b0
	if (!ctx.cr6.eq) goto loc_825869B0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// addi r31,r11,13024
	ctx.r31.s64 = ctx.r11.s64 + 13024;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82586874;
	sub_829B98F8(ctx, base);
	// lis r29,-31944
	ctx.r29.s64 = -2093481984;
	// stw r26,6832(r27)
	PPC_STORE_U32(ctx.r27.u32 + 6832, ctx.r26.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,12317(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12317);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825868dc
	if (!ctx.cr0.eq) goto loc_825868DC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11360
	ctx.r3.s64 = ctx.r11.s64 + -11360;
	// bl 0x82816528
	ctx.lr = 0x82586898;
	sub_82816528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x825868A8;
	sub_829B98F8(ctx, base);
	// bl 0x82587458
	ctx.lr = 0x825868AC;
	sub_82587458(ctx, base);
	// stw r3,6784(r27)
	PPC_STORE_U32(ctx.r27.u32 + 6784, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11280
	ctx.r3.s64 = ctx.r11.s64 + -11280;
	// bl 0x82816528
	ctx.lr = 0x825868BC;
	sub_82816528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x825868CC;
	sub_829B98F8(ctx, base);
	// bl 0x824a0a48
	ctx.lr = 0x825868D0;
	sub_824A0A48(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stb r11,12317(r29)
	PPC_STORE_U8(ctx.r29.u32 + 12317, ctx.r11.u8);
loc_825868D8:
	// stw r3,6788(r27)
	PPC_STORE_U32(ctx.r27.u32 + 6788, ctx.r3.u32);
loc_825868DC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x825869b0
	if (ctx.cr6.eq) goto loc_825869B0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// lwz r10,1072(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1072);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82586918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x82586920;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258692c
	if (ctx.cr0.eq) goto loc_8258692C;
	// stw r26,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r26.u32);
loc_8258692C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,6784(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6784);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x825869b0
	if (ctx.cr6.eq) goto loc_825869B0;
	// lwz r11,6792(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825869b0
	if (!ctx.cr6.eq) goto loc_825869B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82586978
	if (ctx.cr6.eq) goto loc_82586978;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82586970;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82586974;
	sub_82409C40(ctx, base);
	// b 0x8258697c
	goto loc_8258697C;
loc_82586978:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258697C:
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8251a260
	ctx.lr = 0x82586984;
	sub_8251A260(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x827da008
	ctx.lr = 0x82586998;
	sub_827DA008(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,6784(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6784);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x827dcb18
	ctx.lr = 0x825869AC;
	sub_827DCB18(ctx, base);
	// stw r26,6792(r27)
	PPC_STORE_U32(ctx.r27.u32 + 6792, ctx.r26.u32);
loc_825869B0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825869C0"))) PPC_WEAK_FUNC(sub_825869C0);
PPC_FUNC_IMPL(__imp__sub_825869C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825869C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82586a04
	if (ctx.cr6.eq) goto loc_82586A04;
	// bl 0x823b9548
	ctx.lr = 0x825869E4;
	sub_823B9548(ctx, base);
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
	ctx.lr = 0x825869FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82586a08
	goto loc_82586A08;
loc_82586A04:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82586A08:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82586d4c
	if (ctx.cr6.eq) goto loc_82586D4C;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82586d4c
	if (ctx.cr6.eq) goto loc_82586D4C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r30,5676(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5676);
	// addi r27,r11,-11548
	ctx.r27.s64 = ctx.r11.s64 + -11548;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x82586A30;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82586d4c
	if (ctx.cr6.eq) goto loc_82586D4C;
	// addi r30,r26,-240
	ctx.r30.s64 = ctx.r26.s64 + -240;
	// lwz r5,-140(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + -140);
	// lwz r4,-144(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -144);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581a10
	ctx.lr = 0x82586A50;
	sub_82581A10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82586a5c
	if (ctx.cr0.eq) goto loc_82586A5C;
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82586A5C:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,6808(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6808, ctx.r10.u32);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82586a9c
	if (!ctx.cr6.eq) goto loc_82586A9C;
	// lfs f0,7000(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 7000);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,6812(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 6812);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,5412(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 5412, temp.u32);
	// stw r11,6808(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6808, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825866c8
	ctx.lr = 0x82586A98;
	sub_825866C8(ctx, base);
	// b 0x82586d28
	goto loc_82586D28;
loc_82586A9C:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82586c4c
	if (!ctx.cr6.eq) goto loc_82586C4C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82585fd8
	ctx.lr = 0x82586ABC;
	sub_82585FD8(ctx, base);
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82586ae0
	if (ctx.cr6.eq) goto loc_82586AE0;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82586AD8;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82586ADC;
	sub_82409C40(ctx, base);
	// b 0x82586ae4
	goto loc_82586AE4;
loc_82586AE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82586AE4:
	// bl 0x82411c50
	ctx.lr = 0x82586AE8;
	sub_82411C50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82586AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x825819a0
	ctx.lr = 0x82586B0C;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82586b18
	if (ctx.cr0.eq) goto loc_82586B18;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82586B18:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11532
	ctx.r3.s64 = ctx.r11.s64 + -11532;
	// bl 0x82816528
	ctx.lr = 0x82586B24;
	sub_82816528(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82586b68
	if (!ctx.cr6.eq) goto loc_82586B68;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r4,-24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82586B40;
	sub_829B98F8(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82586B44;
	sub_82416348(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82586b54
	if (!ctx.cr0.eq) goto loc_82586B54;
loc_82586B4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82586d50
	goto loc_82586D50;
loc_82586B54:
	// li r4,118
	ctx.r4.s64 = 118;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824b7380
	ctx.lr = 0x82586B60;
	sub_824B7380(ctx, base);
	// lwz r11,-24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24);
	// b 0x82586bc8
	goto loc_82586BC8;
loc_82586B68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x825819a0
	ctx.lr = 0x82586B78;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82586b84
	if (ctx.cr0.eq) goto loc_82586B84;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82586B84:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11368
	ctx.r3.s64 = ctx.r11.s64 + -11368;
	// bl 0x82816528
	ctx.lr = 0x82586B90;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82586bcc
	if (!ctx.cr6.eq) goto loc_82586BCC;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r4,-20(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82586BA8;
	sub_829B98F8(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82586BAC;
	sub_82416348(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82586b4c
	if (ctx.cr0.eq) goto loc_82586B4C;
	// li r4,119
	ctx.r4.s64 = 119;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824b7380
	ctx.lr = 0x82586BC0;
	sub_824B7380(ctx, base);
	// lwz r11,-20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20);
	// stw r27,6832(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6832, ctx.r27.u32);
loc_82586BC8:
	// stw r11,6860(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6860, ctx.r11.u32);
loc_82586BCC:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,176
	ctx.r3.s64 = 176;
	// stw r11,7376(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7376, ctx.r11.u32);
	// lwz r11,-236(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -236);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,1268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1268);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r27,6856(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6856, ctx.r27.u32);
	// bl 0x82833108
	ctx.lr = 0x82586BF4;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82586c38
	if (ctx.cr0.eq) goto loc_82586C38;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82586c20
	if (ctx.cr6.eq) goto loc_82586C20;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82586C14;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82586C18;
	sub_82409C40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82586c24
	goto loc_82586C24;
loc_82586C20:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82586C24:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ae6e8
	ctx.lr = 0x82586C30;
	sub_826AE6E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82586c3c
	goto loc_82586C3C;
loc_82586C38:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82586C3C:
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82586C48;
	sub_82833A30(ctx, base);
	// b 0x82586d4c
	goto loc_82586D4C;
loc_82586C4C:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82586cb4
	if (!ctx.cr6.eq) goto loc_82586CB4;
	// lfs f0,7000(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 7000);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5412(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 5412, temp.u32);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82586cac
	if (ctx.cr6.eq) goto loc_82586CAC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82586250
	ctx.lr = 0x82586C80;
	sub_82586250(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82586cac
	if (!ctx.cr0.eq) goto loc_82586CAC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r28,5676(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5676);
	// bl 0x82816528
	ctx.lr = 0x82586C94;
	sub_82816528(ctx, base);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82586cac
	if (ctx.cr6.eq) goto loc_82586CAC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82586168
	ctx.lr = 0x82586CA8;
	sub_82586168(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82586CAC:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x82586d4c
	goto loc_82586D4C;
loc_82586CB4:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82586cd4
	if (ctx.cr6.eq) goto loc_82586CD4;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82586d30
	if (!ctx.cr6.eq) goto loc_82586D30;
loc_82586CD4:
	// lfs f0,7000(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 7000);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,5412(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 5412, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82586d28
	if (ctx.cr6.eq) goto loc_82586D28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82586D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82586250
	ctx.lr = 0x82586D14;
	sub_82586250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82586d28
	if (!ctx.cr0.eq) goto loc_82586D28;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82586168
	ctx.lr = 0x82586D28;
	sub_82586168(ctx, base);
loc_82586D28:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82586d4c
	goto loc_82586D4C;
loc_82586D30:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82586d4c
	if (!ctx.cr6.eq) goto loc_82586D4C;
	// lfs f0,7000(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 7000);
	ctx.f0.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stfs f0,5412(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 5412, temp.u32);
loc_82586D4C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82586D50:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82586D58"))) PPC_WEAK_FUNC(sub_82586D58);
PPC_FUNC_IMPL(__imp__sub_82586D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82586D60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82586e68
	if (ctx.cr6.eq) goto loc_82586E68;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82586e68
	if (ctx.cr6.eq) goto loc_82586E68;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x825819a0
	ctx.lr = 0x82586D8C;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82586d98
	if (ctx.cr0.eq) goto loc_82586D98;
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82586D98:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11540
	ctx.r3.s64 = ctx.r11.s64 + -11540;
	// bl 0x82816528
	ctx.lr = 0x82586DA4;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82586db4
	if (!ctx.cr6.eq) goto loc_82586DB4;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x82586e50
	goto loc_82586E50;
loc_82586DB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x825819a0
	ctx.lr = 0x82586DC4;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82586dd0
	if (ctx.cr0.eq) goto loc_82586DD0;
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82586DD0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11532
	ctx.r3.s64 = ctx.r11.s64 + -11532;
	// bl 0x82816528
	ctx.lr = 0x82586DDC;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82586dec
	if (!ctx.cr6.eq) goto loc_82586DEC;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// b 0x82586e50
	goto loc_82586E50;
loc_82586DEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x825819a0
	ctx.lr = 0x82586DFC;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82586e08
	if (ctx.cr0.eq) goto loc_82586E08;
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82586E08:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11376
	ctx.r3.s64 = ctx.r11.s64 + -11376;
	// bl 0x82816528
	ctx.lr = 0x82586E14;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82586e4c
	if (ctx.cr6.eq) goto loc_82586E4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x825819a0
	ctx.lr = 0x82586E2C;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82586e38
	if (ctx.cr0.eq) goto loc_82586E38;
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82586E38:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11368
	ctx.r3.s64 = ctx.r11.s64 + -11368;
	// bl 0x82816528
	ctx.lr = 0x82586E44;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82586e68
	if (!ctx.cr6.eq) goto loc_82586E68;
loc_82586E4C:
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
loc_82586E50:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82586E60;
	sub_829B98F8(ctx, base);
	// bl 0x824a09f0
	ctx.lr = 0x82586E64;
	sub_824A09F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82586E68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82586E78"))) PPC_WEAK_FUNC(sub_82586E78);
PPC_FUNC_IMPL(__imp__sub_82586E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82586E80;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82586f78
	if (ctx.cr6.eq) goto loc_82586F78;
	// lwz r11,7108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82586eb4
	if (!ctx.cr6.eq) goto loc_82586EB4;
	// lwz r11,7072(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7072);
	// lwz r10,7068(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7068);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82586f78
	if (ctx.cr6.lt) goto loc_82586F78;
loc_82586EB4:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,12
	ctx.r11.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bl 0x82587240
	ctx.lr = 0x82586EE0;
	sub_82587240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82586fb8
	ctx.lr = 0x82586EF4;
	sub_82586FB8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8282f630
	ctx.lr = 0x82586F00;
	sub_8282F630(ctx, base);
	// lwz r11,7104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7104);
	// addi r30,r28,7084
	ctx.r30.s64 = ctx.r28.s64 + 7084;
	// stw r31,7100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 7100, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82586f2c
	if (ctx.cr6.eq) goto loc_82586F2C;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x82586F2C;
	sub_82332C38(ctx, base);
loc_82586F2C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82642770
	ctx.lr = 0x82586F38;
	sub_82642770(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82400f38
	ctx.lr = 0x82586F40;
	sub_82400F38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8282f630
	ctx.lr = 0x82586F4C;
	sub_8282F630(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82586f60
	if (!ctx.cr6.gt) goto loc_82586F60;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82586F60:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400f38
	ctx.lr = 0x82586F68;
	sub_82400F38(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82586f84
	if (ctx.cr0.eq) goto loc_82586F84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82400f38
	ctx.lr = 0x82586F78;
	sub_82400F38(ctx, base);
loc_82586F78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82586F7C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
loc_82586F84:
	// lwz r11,7004(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7004);
	// lwz r10,7076(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7076);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82586fb0
	if (!ctx.cr6.lt) goto loc_82586FB0;
	// lwz r11,7108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82586fb0
	if (!ctx.cr6.eq) goto loc_82586FB0;
loc_82586FA0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82400f38
	ctx.lr = 0x82586FA8;
	sub_82400F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82586f7c
	goto loc_82586F7C;
loc_82586FB0:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82586fa0
	goto loc_82586FA0;
}

__attribute__((alias("__imp__sub_82586FB8"))) PPC_WEAK_FUNC(sub_82586FB8);
PPC_FUNC_IMPL(__imp__sub_82586FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82586FC0;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r24,4(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x825819a0
	ctx.lr = 0x82586FE4;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82586ff0
	if (ctx.cr0.eq) goto loc_82586FF0;
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82586FF0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11540
	ctx.r3.s64 = ctx.r11.s64 + -11540;
	// bl 0x82816528
	ctx.lr = 0x82586FFC;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8258700c
	if (!ctx.cr6.eq) goto loc_8258700C;
	// addi r27,r31,144
	ctx.r27.s64 = ctx.r31.s64 + 144;
	// b 0x825870a8
	goto loc_825870A8;
loc_8258700C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bl 0x825819a0
	ctx.lr = 0x8258701C;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82587028
	if (ctx.cr0.eq) goto loc_82587028;
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82587028:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11532
	ctx.r3.s64 = ctx.r11.s64 + -11532;
	// bl 0x82816528
	ctx.lr = 0x82587034;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82587044
	if (!ctx.cr6.eq) goto loc_82587044;
	// addi r27,r31,168
	ctx.r27.s64 = ctx.r31.s64 + 168;
	// b 0x825870a8
	goto loc_825870A8;
loc_82587044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bl 0x825819a0
	ctx.lr = 0x82587054;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82587060
	if (ctx.cr0.eq) goto loc_82587060;
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82587060:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11376
	ctx.r3.s64 = ctx.r11.s64 + -11376;
	// bl 0x82816528
	ctx.lr = 0x8258706C;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82587238
	if (ctx.cr6.eq) goto loc_82587238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bl 0x825819a0
	ctx.lr = 0x82587084;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82587090
	if (ctx.cr0.eq) goto loc_82587090;
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82587090:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11368
	ctx.r3.s64 = ctx.r11.s64 + -11368;
	// bl 0x82816528
	ctx.lr = 0x8258709C;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82587238
	if (!ctx.cr6.eq) goto loc_82587238;
	// addi r27,r31,192
	ctx.r27.s64 = ctx.r31.s64 + 192;
loc_825870A8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82587238
	if (ctx.cr6.eq) goto loc_82587238;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// ble cr6,0x82587110
	if (!ctx.cr6.gt) goto loc_82587110;
loc_825870E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82410060
	ctx.lr = 0x825870F4;
	sub_82410060(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825870e8
	if (ctx.cr6.lt) goto loc_825870E8;
	// lwz r26,128(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r28,124(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82587110:
	// lwz r30,16(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8258717c
	if (!ctx.cr0.gt) goto loc_8258717C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82587124:
	// bl 0x82a4cd78
	ctx.lr = 0x82587128;
	sub_82A4CD78(ctx, base);
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// divw r10,r3,r9
	ctx.r10.s32 = ctx.r3.s32 / ctx.r9.s32;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// twllei r9,0
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// andc r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r10,-1
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stwx r8,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r8.u32);
	// lwz r30,16(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82587124
	if (ctx.cr6.lt) goto loc_82587124;
loc_8258717C:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82587230
	if (!ctx.cr6.gt) goto loc_82587230;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
loc_8258718C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x829b98f8
	ctx.lr = 0x825871A8;
	sub_829B98F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82587220
	if (ctx.cr0.eq) goto loc_82587220;
	// lwz r11,628(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// lfs f0,624(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,620(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// lfs f13,628(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,624(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// lfs f12,620(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,7080(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 7080);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82587214
	if (ctx.cr6.lt) goto loc_82587214;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x824cac78
	ctx.lr = 0x82587214;
	sub_824CAC78(ctx, base);
loc_82587214:
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x82587230
	if (ctx.cr6.eq) goto loc_82587230;
loc_82587220:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8258718c
	if (ctx.cr6.lt) goto loc_8258718C;
loc_82587230:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239d768
	ctx.lr = 0x82587238;
	sub_8239D768(ctx, base);
loc_82587238:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587240"))) PPC_WEAK_FUNC(sub_82587240);
PPC_FUNC_IMPL(__imp__sub_82587240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x825819a0
	ctx.lr = 0x82587264;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82587270
	if (ctx.cr0.eq) goto loc_82587270;
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82587270:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11540
	ctx.r3.s64 = ctx.r11.s64 + -11540;
	// bl 0x82816528
	ctx.lr = 0x8258727C;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8258728c
	if (!ctx.cr6.eq) goto loc_8258728C;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x825872fc
	goto loc_825872FC;
loc_8258728C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x825819a0
	ctx.lr = 0x8258729C;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825872a8
	if (ctx.cr0.eq) goto loc_825872A8;
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_825872A8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11532
	ctx.r3.s64 = ctx.r11.s64 + -11532;
	// bl 0x82816528
	ctx.lr = 0x825872B4;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x825872c4
	if (!ctx.cr6.eq) goto loc_825872C4;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x825872fc
	goto loc_825872FC;
loc_825872C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x825819a0
	ctx.lr = 0x825872D4;
	sub_825819A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825872e0
	if (ctx.cr0.eq) goto loc_825872E0;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_825872E0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-11368
	ctx.r3.s64 = ctx.r11.s64 + -11368;
	// bl 0x82816528
	ctx.lr = 0x825872EC;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,5
	ctx.r3.s64 = 5;
	// beq cr6,0x825872fc
	if (ctx.cr6.eq) goto loc_825872FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825872FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587318"))) PPC_WEAK_FUNC(sub_82587318);
PPC_FUNC_IMPL(__imp__sub_82587318) {
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
	// li r3,1616
	ctx.r3.s64 = 1616;
	// bl 0x82833108
	ctx.lr = 0x8258732C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258733c
	if (ctx.cr0.eq) goto loc_8258733C;
	// bl 0x827d73c0
	ctx.lr = 0x82587338;
	sub_827D73C0(ctx, base);
	// b 0x82587340
	goto loc_82587340;
loc_8258733C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82587340:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587350"))) PPC_WEAK_FUNC(sub_82587350);
PPC_FUNC_IMPL(__imp__sub_82587350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25584);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82587390
	if (!ctx.cr0.eq) goto loc_82587390;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,25584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25584, ctx.r11.u32);
	// addi r3,r9,-21360
	ctx.r3.s64 = ctx.r9.s64 + -21360;
	// bl 0x82816528
	ctx.lr = 0x82587388;
	sub_82816528(ctx, base);
	// stw r3,25580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25580, ctx.r3.u32);
	// b 0x82587394
	goto loc_82587394;
loc_82587390:
	// lwz r3,25580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25580);
loc_82587394:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825873A8"))) PPC_WEAK_FUNC(sub_825873A8);
PPC_FUNC_IMPL(__imp__sub_825873A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825873f8
	ctx.lr = 0x825873C8;
	sub_825873F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825873DC;
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

__attribute__((alias("__imp__sub_825873F8"))) PPC_WEAK_FUNC(sub_825873F8);
PPC_FUNC_IMPL(__imp__sub_825873F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12312
	ctx.r31.s64 = ctx.r11.s64 + 12312;
	// lwz r11,12308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12308);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82587440
	if (!ctx.cr0.eq) goto loc_82587440;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-10016
	ctx.r9.s64 = ctx.r9.s64 + -10016;
	// stw r11,12308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12308, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21808
	ctx.r3.s64 = ctx.r11.s64 + 21808;
	// bl 0x82a4c758
	ctx.lr = 0x82587440;
	sub_82A4C758(ctx, base);
loc_82587440:
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

__attribute__((alias("__imp__sub_82587458"))) PPC_WEAK_FUNC(sub_82587458);
PPC_FUNC_IMPL(__imp__sub_82587458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825873f8
	ctx.lr = 0x82587470;
	sub_825873F8(ctx, base);
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
	ctx.lr = 0x82587488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82587498
	if (!ctx.cr0.eq) goto loc_82587498;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82587498:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825874B0"))) PPC_WEAK_FUNC(sub_825874B0);
PPC_FUNC_IMPL(__imp__sub_825874B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825851b0
	sub_825851B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825874C0"))) PPC_WEAK_FUNC(sub_825874C0);
PPC_FUNC_IMPL(__imp__sub_825874C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82585218
	sub_82585218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825874D0"))) PPC_WEAK_FUNC(sub_825874D0);
PPC_FUNC_IMPL(__imp__sub_825874D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82585218
	sub_82585218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825874E0"))) PPC_WEAK_FUNC(sub_825874E0);
PPC_FUNC_IMPL(__imp__sub_825874E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-112
	ctx.r3.s64 = ctx.r3.s64 + -112;
	// b 0x825817d8
	sub_825817D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825874F0"))) PPC_WEAK_FUNC(sub_825874F0);
PPC_FUNC_IMPL(__imp__sub_825874F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82585138
	sub_82585138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587500"))) PPC_WEAK_FUNC(sub_82587500);
PPC_FUNC_IMPL(__imp__sub_82587500) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825851a8
	sub_825851A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587510"))) PPC_WEAK_FUNC(sub_82587510);
PPC_FUNC_IMPL(__imp__sub_82587510) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825869c0
	sub_825869C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587520"))) PPC_WEAK_FUNC(sub_82587520);
PPC_FUNC_IMPL(__imp__sub_82587520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-112
	ctx.r3.s64 = ctx.r3.s64 + -112;
	// b 0x82580668
	sub_82580668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587530"))) PPC_WEAK_FUNC(sub_82587530);
PPC_FUNC_IMPL(__imp__sub_82587530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82585ce8
	sub_82585CE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587540"))) PPC_WEAK_FUNC(sub_82587540);
PPC_FUNC_IMPL(__imp__sub_82587540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -400);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x825853c0
	sub_825853C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587550"))) PPC_WEAK_FUNC(sub_82587550);
PPC_FUNC_IMPL(__imp__sub_82587550) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825853c0
	sub_825853C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587560"))) PPC_WEAK_FUNC(sub_82587560);
PPC_FUNC_IMPL(__imp__sub_82587560) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825853c0
	sub_825853C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587570"))) PPC_WEAK_FUNC(sub_82587570);
PPC_FUNC_IMPL(__imp__sub_82587570) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82585bf8
	sub_82585BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587580"))) PPC_WEAK_FUNC(sub_82587580);
PPC_FUNC_IMPL(__imp__sub_82587580) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82585148
	sub_82585148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587590"))) PPC_WEAK_FUNC(sub_82587590);
PPC_FUNC_IMPL(__imp__sub_82587590) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-112
	ctx.r3.s64 = ctx.r3.s64 + -112;
	// b 0x82580610
	sub_82580610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825875A0"))) PPC_WEAK_FUNC(sub_825875A0);
PPC_FUNC_IMPL(__imp__sub_825875A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9980
	ctx.r3.s64 = ctx.r11.s64 + -9980;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825875B0"))) PPC_WEAK_FUNC(sub_825875B0);
PPC_FUNC_IMPL(__imp__sub_825875B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825875e8
	if (ctx.cr6.eq) goto loc_825875E8;
	// bl 0x823b9d80
	ctx.lr = 0x825875D8;
	sub_823B9D80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825875e8
	if (!ctx.cr6.eq) goto loc_825875E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825875f4
	goto loc_825875F4;
loc_825875E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-432
	ctx.r3.s64 = ctx.r30.s64 + -432;
	// bl 0x82580098
	ctx.lr = 0x825875F4;
	sub_82580098(ctx, base);
loc_825875F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587610"))) PPC_WEAK_FUNC(sub_82587610);
PPC_FUNC_IMPL(__imp__sub_82587610) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b9d80
	sub_823B9D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587618"))) PPC_WEAK_FUNC(sub_82587618);
PPC_FUNC_IMPL(__imp__sub_82587618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,2144
	ctx.r3.s64 = 2144;
	// bl 0x82833108
	ctx.lr = 0x82587634;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258764c
	if (ctx.cr0.eq) goto loc_8258764C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-560
	ctx.r4.s64 = ctx.r31.s64 + -560;
	// bl 0x82587808
	ctx.lr = 0x82587648;
	sub_82587808(ctx, base);
	// b 0x82587650
	goto loc_82587650;
loc_8258764C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82587650:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82587668
	if (ctx.cr6.eq) goto loc_82587668;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82587668:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587680"))) PPC_WEAK_FUNC(sub_82587680);
PPC_FUNC_IMPL(__imp__sub_82587680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b9d80
	ctx.lr = 0x825876A0;
	sub_823B9D80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825876b0
	if (!ctx.cr6.eq) goto loc_825876B0;
	// addi r3,r30,-560
	ctx.r3.s64 = ctx.r30.s64 + -560;
	// b 0x825876bc
	goto loc_825876BC;
loc_825876B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-432
	ctx.r3.s64 = ctx.r30.s64 + -432;
	// bl 0x82580108
	ctx.lr = 0x825876BC;
	sub_82580108(ctx, base);
loc_825876BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825876D8"))) PPC_WEAK_FUNC(sub_825876D8);
PPC_FUNC_IMPL(__imp__sub_825876D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-9920
	ctx.r11.s64 = ctx.r11.s64 + -9920;
	// addi r9,r9,-9896
	ctx.r9.s64 = ctx.r9.s64 + -9896;
	// lwz r10,-556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -556);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// stw r11,-560(r31)
	PPC_STORE_U32(ctx.r31.u32 + -560, ctx.r11.u32);
	// addi r3,r31,-68
	ctx.r3.s64 = ctx.r31.s64 + -68;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,-556(r11)
	PPC_STORE_U32(ctx.r11.u32 + -556, ctx.r9.u32);
	// addi r10,r8,-8804
	ctx.r10.s64 = ctx.r8.s64 + -8804;
	// lwz r11,-556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -556);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r9,r9,-8752
	ctx.r9.s64 = ctx.r9.s64 + -8752;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,-548(r11)
	PPC_STORE_U32(ctx.r11.u32 + -548, ctx.r10.u32);
	// lwz r11,-556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -556);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,-160(r11)
	PPC_STORE_U32(ctx.r11.u32 + -160, ctx.r9.u32);
	// lwz r11,-556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -556);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-556
	ctx.r11.s64 = ctx.r11.s64 + -556;
	// stw r11,-560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -560, ctx.r11.u32);
	// bl 0x82400f38
	ctx.lr = 0x8258775C;
	sub_82400F38(ctx, base);
	// addi r3,r31,-92
	ctx.r3.s64 = ctx.r31.s64 + -92;
	// bl 0x8239d768
	ctx.lr = 0x82587764;
	sub_8239D768(ctx, base);
	// addi r3,r31,-128
	ctx.r3.s64 = ctx.r31.s64 + -128;
	// bl 0x8239d768
	ctx.lr = 0x8258776C;
	sub_8239D768(ctx, base);
	// addi r3,r31,-152
	ctx.r3.s64 = ctx.r31.s64 + -152;
	// bl 0x8239d768
	ctx.lr = 0x82587774;
	sub_8239D768(ctx, base);
	// addi r3,r31,-176
	ctx.r3.s64 = ctx.r31.s64 + -176;
	// bl 0x8239d768
	ctx.lr = 0x8258777C;
	sub_8239D768(ctx, base);
	// addi r3,r31,-200
	ctx.r3.s64 = ctx.r31.s64 + -200;
	// bl 0x8239d768
	ctx.lr = 0x82587784;
	sub_8239D768(ctx, base);
	// addi r3,r31,-224
	ctx.r3.s64 = ctx.r31.s64 + -224;
	// bl 0x8239d768
	ctx.lr = 0x8258778C;
	sub_8239D768(ctx, base);
	// addi r3,r31,-248
	ctx.r3.s64 = ctx.r31.s64 + -248;
	// bl 0x8239d768
	ctx.lr = 0x82587794;
	sub_8239D768(ctx, base);
	// addi r3,r31,-272
	ctx.r3.s64 = ctx.r31.s64 + -272;
	// bl 0x8239d768
	ctx.lr = 0x8258779C;
	sub_8239D768(ctx, base);
	// addi r3,r31,-296
	ctx.r3.s64 = ctx.r31.s64 + -296;
	// bl 0x8239d768
	ctx.lr = 0x825877A4;
	sub_8239D768(ctx, base);
	// addi r3,r31,-320
	ctx.r3.s64 = ctx.r31.s64 + -320;
	// bl 0x8239d768
	ctx.lr = 0x825877AC;
	sub_8239D768(ctx, base);
	// addi r3,r31,-344
	ctx.r3.s64 = ctx.r31.s64 + -344;
	// bl 0x8239d768
	ctx.lr = 0x825877B4;
	sub_8239D768(ctx, base);
	// addi r3,r31,-368
	ctx.r3.s64 = ctx.r31.s64 + -368;
	// bl 0x8239d768
	ctx.lr = 0x825877BC;
	sub_8239D768(ctx, base);
	// addi r3,r31,-392
	ctx.r3.s64 = ctx.r31.s64 + -392;
	// bl 0x8239d768
	ctx.lr = 0x825877C4;
	sub_8239D768(ctx, base);
	// addi r3,r31,-416
	ctx.r3.s64 = ctx.r31.s64 + -416;
	// bl 0x8239d768
	ctx.lr = 0x825877CC;
	sub_8239D768(ctx, base);
	// addi r3,r31,-448
	ctx.r3.s64 = ctx.r31.s64 + -448;
	// bl 0x8239d768
	ctx.lr = 0x825877D4;
	sub_8239D768(ctx, base);
	// addi r31,r31,-432
	ctx.r31.s64 = ctx.r31.s64 + -432;
	// addi r3,r31,-64
	ctx.r3.s64 = ctx.r31.s64 + -64;
	// bl 0x8269b988
	ctx.lr = 0x825877E0;
	sub_8269B988(ctx, base);
	// addi r3,r31,-88
	ctx.r3.s64 = ctx.r31.s64 + -88;
	// bl 0x82333960
	ctx.lr = 0x825877E8;
	sub_82333960(ctx, base);
	// addi r3,r31,-112
	ctx.r3.s64 = ctx.r31.s64 + -112;
	// bl 0x82333960
	ctx.lr = 0x825877F0;
	sub_82333960(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587808"))) PPC_WEAK_FUNC(sub_82587808);
PPC_FUNC_IMPL(__imp__sub_82587808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82587810;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-8728
	ctx.r11.s64 = ctx.r11.s64 + -8728;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8258783c
	if (!ctx.cr6.eq) goto loc_8258783C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8258784c
	goto loc_8258784C;
loc_8258783C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8258784C:
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82571e20
	ctx.lr = 0x82587854;
	sub_82571E20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82582280
	ctx.lr = 0x82587864;
	sub_82582280(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-9920
	ctx.r11.s64 = ctx.r11.s64 + -9920;
	// addi r10,r10,-9896
	ctx.r10.s64 = ctx.r10.s64 + -9896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r8,r11,-8804
	ctx.r8.s64 = ctx.r11.s64 + -8804;
	// addi r9,r9,-8752
	ctx.r9.s64 = ctx.r9.s64 + -8752;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// lfs f0,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x825878E0;
	sub_82873B58(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x825878FC;
	sub_82873B58(ctx, base);
	// addi r4,r30,168
	ctx.r4.s64 = ctx.r30.s64 + 168;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x82873b58
	ctx.lr = 0x82587908;
	sub_82873B58(ctx, base);
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x82873b58
	ctx.lr = 0x82587914;
	sub_82873B58(ctx, base);
	// addi r4,r30,216
	ctx.r4.s64 = ctx.r30.s64 + 216;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x82873b58
	ctx.lr = 0x82587920;
	sub_82873B58(ctx, base);
	// addi r4,r30,240
	ctx.r4.s64 = ctx.r30.s64 + 240;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x82873b58
	ctx.lr = 0x8258792C;
	sub_82873B58(ctx, base);
	// addi r4,r30,264
	ctx.r4.s64 = ctx.r30.s64 + 264;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x82873b58
	ctx.lr = 0x82587938;
	sub_82873B58(ctx, base);
	// addi r4,r30,288
	ctx.r4.s64 = ctx.r30.s64 + 288;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x82873b58
	ctx.lr = 0x82587944;
	sub_82873B58(ctx, base);
	// addi r4,r30,312
	ctx.r4.s64 = ctx.r30.s64 + 312;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// bl 0x82873b58
	ctx.lr = 0x82587950;
	sub_82873B58(ctx, base);
	// addi r4,r30,336
	ctx.r4.s64 = ctx.r30.s64 + 336;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// bl 0x82873b58
	ctx.lr = 0x8258795C;
	sub_82873B58(ctx, base);
	// addi r4,r30,360
	ctx.r4.s64 = ctx.r30.s64 + 360;
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x82873b58
	ctx.lr = 0x82587968;
	sub_82873B58(ctx, base);
	// addi r4,r30,384
	ctx.r4.s64 = ctx.r30.s64 + 384;
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// bl 0x82873b58
	ctx.lr = 0x82587974;
	sub_82873B58(ctx, base);
	// addi r4,r30,408
	ctx.r4.s64 = ctx.r30.s64 + 408;
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// bl 0x82873b58
	ctx.lr = 0x82587980;
	sub_82873B58(ctx, base);
	// addi r4,r30,432
	ctx.r4.s64 = ctx.r30.s64 + 432;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// bl 0x82873b58
	ctx.lr = 0x8258798C;
	sub_82873B58(ctx, base);
	// lwz r11,456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// addi r4,r30,468
	ctx.r4.s64 = ctx.r30.s64 + 468;
	// lwz r11,460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// addi r3,r31,468
	ctx.r3.s64 = ctx.r31.s64 + 468;
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x825879B0;
	sub_82873B58(ctx, base);
	// addi r4,r30,492
	ctx.r4.s64 = ctx.r30.s64 + 492;
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// bl 0x8282f630
	ctx.lr = 0x825879BC;
	sub_8282F630(ctx, base);
	// lwz r11,516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825879E8"))) PPC_WEAK_FUNC(sub_825879E8);
PPC_FUNC_IMPL(__imp__sub_825879E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825879F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-560
	ctx.r30.s64 = ctx.r3.s64 + -560;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,560
	ctx.r31.s64 = ctx.r30.s64 + 560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825876d8
	ctx.lr = 0x82587A08;
	sub_825876D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82570708
	ctx.lr = 0x82587A10;
	sub_82570708(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82587a20
	if (ctx.cr0.eq) goto loc_82587A20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x82587A20;
	sub_82332DB8(ctx, base);
loc_82587A20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587A30"))) PPC_WEAK_FUNC(sub_82587A30);
PPC_FUNC_IMPL(__imp__sub_82587A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d4
	ctx.lr = 0x82587A38;
	__savegprlr_15(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// addi r11,r11,-8728
	ctx.r11.s64 = ctx.r11.s64 + -8728;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x825705f8
	ctx.lr = 0x82587A58;
	sub_825705F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82580498
	ctx.lr = 0x82587A64;
	sub_82580498(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r9,r10,-9896
	ctx.r9.s64 = ctx.r10.s64 + -9896;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-9920
	ctx.r11.s64 = ctx.r11.s64 + -9920;
	// addi r7,r10,-8752
	ctx.r7.s64 = ctx.r10.s64 + -8752;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r29,r30,144
	ctx.r29.s64 = ctx.r30.s64 + 144;
	// addi r8,r11,-8804
	ctx.r8.s64 = ctx.r11.s64 + -8804;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r28,r30,168
	ctx.r28.s64 = ctx.r30.s64 + 168;
	// addi r27,r30,192
	ctx.r27.s64 = ctx.r30.s64 + 192;
	// addi r15,r30,112
	ctx.r15.s64 = ctx.r30.s64 + 112;
	// addi r26,r30,216
	ctx.r26.s64 = ctx.r30.s64 + 216;
	// addi r25,r30,240
	ctx.r25.s64 = ctx.r30.s64 + 240;
	// addi r24,r30,264
	ctx.r24.s64 = ctx.r30.s64 + 264;
	// addi r23,r30,288
	ctx.r23.s64 = ctx.r30.s64 + 288;
	// addi r22,r30,312
	ctx.r22.s64 = ctx.r30.s64 + 312;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r7,400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 400, ctx.r7.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-556
	ctx.r9.s64 = ctx.r10.s64 + -556;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r11.u32);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r31,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r31.u32);
	// stw r31,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r31.u32);
	// stw r31,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r31.u32);
	// stw r31,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r31.u32);
	// stw r31,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r31.u32);
	// stw r11,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r11.u32);
	// stw r31,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r31.u32);
	// stw r31,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r31.u32);
	// stw r31,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r31.u32);
	// stw r31,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r31.u32);
	// stw r31,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r31.u32);
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// stw r31,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r31.u32);
	// stw r31,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r31.u32);
	// stw r31,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r31.u32);
	// stw r31,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r31.u32);
	// stw r31,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r31.u32);
	// stw r11,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r11.u32);
	// stw r31,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r31.u32);
	// stw r31,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r31.u32);
	// stw r31,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r31.u32);
	// stw r31,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r31.u32);
	// stw r31,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r31.u32);
	// stw r11,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r11.u32);
	// stw r31,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r31.u32);
	// stw r31,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r31.u32);
	// stw r31,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r31.u32);
	// stw r31,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r31.u32);
	// stw r31,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r31.u32);
	// stw r11,244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 244, ctx.r11.u32);
	// stw r31,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r31.u32);
	// stw r31,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r31.u32);
	// stw r31,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r31.u32);
	// stw r31,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r31.u32);
	// addi r4,r9,-9996
	ctx.r4.s64 = ctx.r9.s64 + -9996;
	// stw r11,268(r30)
	PPC_STORE_U32(ctx.r30.u32 + 268, ctx.r11.u32);
	// addi r21,r30,336
	ctx.r21.s64 = ctx.r30.s64 + 336;
	// stw r31,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r31.u32);
	// addi r20,r30,360
	ctx.r20.s64 = ctx.r30.s64 + 360;
	// stw r31,276(r30)
	PPC_STORE_U32(ctx.r30.u32 + 276, ctx.r31.u32);
	// addi r19,r30,384
	ctx.r19.s64 = ctx.r30.s64 + 384;
	// stw r31,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r31.u32);
	// addi r17,r30,408
	ctx.r17.s64 = ctx.r30.s64 + 408;
	// stw r31,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r31.u32);
	// addi r18,r30,432
	ctx.r18.s64 = ctx.r30.s64 + 432;
	// stw r31,264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 264, ctx.r31.u32);
	// addi r16,r30,468
	ctx.r16.s64 = ctx.r30.s64 + 468;
	// stw r11,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r11.u32);
	// stw r31,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r31.u32);
	// stw r31,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r31.u32);
	// stw r31,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r31.u32);
	// stw r31,308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 308, ctx.r31.u32);
	// stw r31,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r31.u32);
	// stw r11,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r11.u32);
	// stw r31,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r31.u32);
	// stw r31,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r31.u32);
	// stw r31,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r31.u32);
	// stw r31,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r31.u32);
	// stw r31,312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 312, ctx.r31.u32);
	// stw r11,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r11.u32);
	// stw r31,344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 344, ctx.r31.u32);
	// stw r31,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r31.u32);
	// stw r31,352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 352, ctx.r31.u32);
	// stw r31,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r31.u32);
	// stw r31,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r31.u32);
	// stw r11,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r11.u32);
	// stw r31,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r31.u32);
	// stw r31,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r31.u32);
	// stw r31,376(r30)
	PPC_STORE_U32(ctx.r30.u32 + 376, ctx.r31.u32);
	// stw r31,380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 380, ctx.r31.u32);
	// stw r31,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r31.u32);
	// stw r11,388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 388, ctx.r11.u32);
	// stw r31,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r31.u32);
	// stw r31,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r31.u32);
	// stw r31,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r31.u32);
	// stw r31,404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 404, ctx.r31.u32);
	// stw r31,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r31.u32);
	// stw r11,412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 412, ctx.r11.u32);
	// stw r31,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r31.u32);
	// stw r31,420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 420, ctx.r31.u32);
	// stw r31,424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 424, ctx.r31.u32);
	// stw r31,428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 428, ctx.r31.u32);
	// stw r31,408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 408, ctx.r31.u32);
	// stw r11,436(r30)
	PPC_STORE_U32(ctx.r30.u32 + 436, ctx.r11.u32);
	// stw r31,440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 440, ctx.r31.u32);
	// stw r31,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r31.u32);
	// stw r31,448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 448, ctx.r31.u32);
	// stw r31,452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 452, ctx.r31.u32);
	// stw r31,432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 432, ctx.r31.u32);
	// stw r11,472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 472, ctx.r11.u32);
	// stw r31,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r31.u32);
	// stw r31,480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 480, ctx.r31.u32);
	// stw r31,484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 484, ctx.r31.u32);
	// stw r31,488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 488, ctx.r31.u32);
	// stw r31,468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 468, ctx.r31.u32);
	// stw r10,496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 496, ctx.r10.u32);
	// stw r31,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r31.u32);
	// stw r31,504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 504, ctx.r31.u32);
	// stw r31,508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 508, ctx.r31.u32);
	// stw r31,512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 512, ctx.r31.u32);
	// stw r31,492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 492, ctx.r31.u32);
	// bl 0x8233a258
	ctx.lr = 0x82587C9C;
	sub_8233A258(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82400b48
	ctx.lr = 0x82587CA8;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82587CB0;
	sub_82333960(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-9980
	ctx.r4.s64 = ctx.r11.s64 + -9980;
	// bl 0x8233a258
	ctx.lr = 0x82587CC0;
	sub_8233A258(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82400b48
	ctx.lr = 0x82587CCC;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82587CD4;
	sub_82333960(ctx, base);
	// lis r11,7330
	ctx.r11.s64 = 480378880;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,14075
	ctx.r11.u64 = ctx.r11.u64 | 14075;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x82410060
	ctx.lr = 0x82587CF8;
	sub_82410060(ctx, base);
	// lis r11,14112
	ctx.r11.s64 = 924844032;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,53358
	ctx.r11.u64 = ctx.r11.u64 | 53358;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x82410060
	ctx.lr = 0x82587D1C;
	sub_82410060(ctx, base);
	// lis r11,-21759
	ctx.r11.s64 = -1425997824;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,53956
	ctx.r11.u64 = ctx.r11.u64 | 53956;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x82410060
	ctx.lr = 0x82587D40;
	sub_82410060(ctx, base);
	// lis r11,9385
	ctx.r11.s64 = 615055360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,21604
	ctx.r11.u64 = ctx.r11.u64 | 21604;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x82410060
	ctx.lr = 0x82587D64;
	sub_82410060(ctx, base);
	// lis r11,19106
	ctx.r11.s64 = 1252130816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,17460
	ctx.r11.u64 = ctx.r11.u64 | 17460;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x82410060
	ctx.lr = 0x82587D88;
	sub_82410060(ctx, base);
	// lis r11,-27852
	ctx.r11.s64 = -1825308672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,40719
	ctx.r11.u64 = ctx.r11.u64 | 40719;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x82410060
	ctx.lr = 0x82587DAC;
	sub_82410060(ctx, base);
	// stw r31,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r31.u32);
	// stw r31,524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 524, ctx.r31.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r31.u32);
	// beq cr6,0x82587dd8
	if (ctx.cr6.eq) goto loc_82587DD8;
	// stw r31,20(r15)
	PPC_STORE_U32(ctx.r15.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82332c38
	ctx.lr = 0x82587DD8;
	sub_82332C38(ctx, base);
loc_82587DD8:
	// lis r11,-4448
	ctx.r11.s64 = -291504128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,53680
	ctx.r11.u64 = ctx.r11.u64 | 53680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587DF0;
	sub_82410060(ctx, base);
	// lis r11,14570
	ctx.r11.s64 = 954859520;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,3342
	ctx.r11.u64 = ctx.r11.u64 | 3342;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587E08;
	sub_82410060(ctx, base);
	// lis r11,-20387
	ctx.r11.s64 = -1336082432;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,26802
	ctx.r11.u64 = ctx.r11.u64 | 26802;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587E20;
	sub_82410060(ctx, base);
	// lis r11,-30551
	ctx.r11.s64 = -2002190336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,60381
	ctx.r11.u64 = ctx.r11.u64 | 60381;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587E38;
	sub_82410060(ctx, base);
	// lis r11,10985
	ctx.r11.s64 = 719912960;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,57215
	ctx.r11.u64 = ctx.r11.u64 | 57215;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587E50;
	sub_82410060(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82587e74
	if (ctx.cr6.eq) goto loc_82587E74;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x82587E74;
	sub_82332C38(ctx, base);
loc_82587E74:
	// lis r11,7107
	ctx.r11.s64 = 465764352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,39615
	ctx.r11.u64 = ctx.r11.u64 | 39615;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587E8C;
	sub_82410060(ctx, base);
	// lis r11,12879
	ctx.r11.s64 = 844038144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,54393
	ctx.r11.u64 = ctx.r11.u64 | 54393;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587EA4;
	sub_82410060(ctx, base);
	// lis r11,-23188
	ctx.r11.s64 = -1519648768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,46312
	ctx.r11.u64 = ctx.r11.u64 | 46312;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587EBC;
	sub_82410060(ctx, base);
	// lis r11,-28027
	ctx.r11.s64 = -1836777472;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,50158
	ctx.r11.u64 = ctx.r11.u64 | 50158;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587ED4;
	sub_82410060(ctx, base);
	// lis r11,-30672
	ctx.r11.s64 = -2010120192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,47964
	ctx.r11.u64 = ctx.r11.u64 | 47964;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587EEC;
	sub_82410060(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82587f10
	if (ctx.cr6.eq) goto loc_82587F10;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82587F10;
	sub_82332C38(ctx, base);
loc_82587F10:
	// lis r11,-25025
	ctx.r11.s64 = -1640038400;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,6003
	ctx.r11.u64 = ctx.r11.u64 | 6003;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587F28;
	sub_82410060(ctx, base);
	// lis r11,-5611
	ctx.r11.s64 = -367722496;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,10967
	ctx.r11.u64 = ctx.r11.u64 | 10967;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587F40;
	sub_82410060(ctx, base);
	// lis r11,4069
	ctx.r11.s64 = 266665984;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,63805
	ctx.r11.u64 = ctx.r11.u64 | 63805;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587F58;
	sub_82410060(ctx, base);
	// lis r11,4984
	ctx.r11.s64 = 326631424;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,22413
	ctx.r11.u64 = ctx.r11.u64 | 22413;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587F70;
	sub_82410060(ctx, base);
	// lis r11,-24093
	ctx.r11.s64 = -1578958848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,25359
	ctx.r11.u64 = ctx.r11.u64 | 25359;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587F88;
	sub_82410060(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82587fac
	if (ctx.cr6.eq) goto loc_82587FAC;
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332c38
	ctx.lr = 0x82587FAC;
	sub_82332C38(ctx, base);
loc_82587FAC:
	// lis r11,29611
	ctx.r11.s64 = 1940586496;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,35841
	ctx.r11.u64 = ctx.r11.u64 | 35841;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587FC4;
	sub_82410060(ctx, base);
	// lis r11,-6696
	ctx.r11.s64 = -438829056;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,3882
	ctx.r11.u64 = ctx.r11.u64 | 3882;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587FDC;
	sub_82410060(ctx, base);
	// lis r11,-27218
	ctx.r11.s64 = -1783758848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,12841
	ctx.r11.u64 = ctx.r11.u64 | 12841;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82587FF4;
	sub_82410060(ctx, base);
	// lis r11,-13894
	ctx.r11.s64 = -910557184;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,56485
	ctx.r11.u64 = ctx.r11.u64 | 56485;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8258800C;
	sub_82410060(ctx, base);
	// lis r11,-26539
	ctx.r11.s64 = -1739259904;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,49687
	ctx.r11.u64 = ctx.r11.u64 | 49687;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588024;
	sub_82410060(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82588048
	if (ctx.cr6.eq) goto loc_82588048;
	// stw r11,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332c38
	ctx.lr = 0x82588048;
	sub_82332C38(ctx, base);
loc_82588048:
	// lis r11,1490
	ctx.r11.s64 = 97648640;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,46485
	ctx.r11.u64 = ctx.r11.u64 | 46485;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588060;
	sub_82410060(ctx, base);
	// lis r11,-15875
	ctx.r11.s64 = -1040384000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,47667
	ctx.r11.u64 = ctx.r11.u64 | 47667;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588078;
	sub_82410060(ctx, base);
	// lis r11,20727
	ctx.r11.s64 = 1358364672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,17060
	ctx.r11.u64 = ctx.r11.u64 | 17060;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588090;
	sub_82410060(ctx, base);
	// lis r11,-27861
	ctx.r11.s64 = -1825898496;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,46420
	ctx.r11.u64 = ctx.r11.u64 | 46420;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825880A8;
	sub_82410060(ctx, base);
	// lis r11,30841
	ctx.r11.s64 = 2021195776;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,27485
	ctx.r11.u64 = ctx.r11.u64 | 27485;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825880C0;
	sub_82410060(ctx, base);
	// lis r11,-17472
	ctx.r11.s64 = -1145044992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,41941
	ctx.r11.u64 = ctx.r11.u64 | 41941;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825880D8;
	sub_82410060(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825880fc
	if (ctx.cr6.eq) goto loc_825880FC;
	// stw r11,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332c38
	ctx.lr = 0x825880FC;
	sub_82332C38(ctx, base);
loc_825880FC:
	// lis r11,27587
	ctx.r11.s64 = 1807941632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,23481
	ctx.r11.u64 = ctx.r11.u64 | 23481;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588114;
	sub_82410060(ctx, base);
	// lis r11,-14173
	ctx.r11.s64 = -928841728;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,46470
	ctx.r11.u64 = ctx.r11.u64 | 46470;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8258812C;
	sub_82410060(ctx, base);
	// lis r11,28044
	ctx.r11.s64 = 1837891584;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,24480
	ctx.r11.u64 = ctx.r11.u64 | 24480;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588144;
	sub_82410060(ctx, base);
	// lis r11,-18783
	ctx.r11.s64 = -1230962688;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,61236
	ctx.r11.u64 = ctx.r11.u64 | 61236;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8258815C;
	sub_82410060(ctx, base);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lwz r10,20(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82588180
	if (ctx.cr6.eq) goto loc_82588180;
	// stw r11,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82332c38
	ctx.lr = 0x82588180;
	sub_82332C38(ctx, base);
loc_82588180:
	// lis r11,18684
	ctx.r11.s64 = 1224474624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,45855
	ctx.r11.u64 = ctx.r11.u64 | 45855;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588198;
	sub_82410060(ctx, base);
	// lis r11,22821
	ctx.r11.s64 = 1495597056;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,39850
	ctx.r11.u64 = ctx.r11.u64 | 39850;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825881B0;
	sub_82410060(ctx, base);
	// lis r11,-30877
	ctx.r11.s64 = -2023555072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,15174
	ctx.r11.u64 = ctx.r11.u64 | 15174;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825881C8;
	sub_82410060(ctx, base);
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// lwz r10,20(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825881ec
	if (ctx.cr6.eq) goto loc_825881EC;
	// stw r11,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82332c38
	ctx.lr = 0x825881EC;
	sub_82332C38(ctx, base);
loc_825881EC:
	// lis r11,-31369
	ctx.r11.s64 = -2055798784;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,63615
	ctx.r11.u64 = ctx.r11.u64 | 63615;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588204;
	sub_82410060(ctx, base);
	// lis r11,-11146
	ctx.r11.s64 = -730464256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,26082
	ctx.r11.u64 = ctx.r11.u64 | 26082;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8258821C;
	sub_82410060(ctx, base);
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// lwz r10,20(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82588240
	if (ctx.cr6.eq) goto loc_82588240;
	// stw r11,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82332c38
	ctx.lr = 0x82588240;
	sub_82332C38(ctx, base);
loc_82588240:
	// lis r11,21744
	ctx.r11.s64 = 1425014784;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,42877
	ctx.r11.u64 = ctx.r11.u64 | 42877;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588258;
	sub_82410060(ctx, base);
	// lis r11,-14860
	ctx.r11.s64 = -973864960;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,41726
	ctx.r11.u64 = ctx.r11.u64 | 41726;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588270;
	sub_82410060(ctx, base);
	// lis r11,8676
	ctx.r11.s64 = 568590336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,34662
	ctx.r11.u64 = ctx.r11.u64 | 34662;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588288;
	sub_82410060(ctx, base);
	// lis r11,8747
	ctx.r11.s64 = 573243392;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,2674
	ctx.r11.u64 = ctx.r11.u64 | 2674;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825882A0;
	sub_82410060(ctx, base);
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// lwz r10,20(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825882c4
	if (ctx.cr6.eq) goto loc_825882C4;
	// stw r11,20(r21)
	PPC_STORE_U32(ctx.r21.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82332c38
	ctx.lr = 0x825882C4;
	sub_82332C38(ctx, base);
loc_825882C4:
	// lis r11,-28152
	ctx.r11.s64 = -1844969472;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,54665
	ctx.r11.u64 = ctx.r11.u64 | 54665;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825882DC;
	sub_82410060(ctx, base);
	// lis r11,-27577
	ctx.r11.s64 = -1807286272;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,44884
	ctx.r11.u64 = ctx.r11.u64 | 44884;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825882F4;
	sub_82410060(ctx, base);
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,58480
	ctx.r11.u64 = ctx.r11.u64 | 58480;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8258830C;
	sub_82410060(ctx, base);
	// lis r11,31216
	ctx.r11.s64 = 2045771776;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,1710
	ctx.r11.u64 = ctx.r11.u64 | 1710;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588324;
	sub_82410060(ctx, base);
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// lwz r10,20(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82588348
	if (ctx.cr6.eq) goto loc_82588348;
	// stw r11,20(r20)
	PPC_STORE_U32(ctx.r20.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82332c38
	ctx.lr = 0x82588348;
	sub_82332C38(ctx, base);
loc_82588348:
	// lis r11,-21386
	ctx.r11.s64 = -1401552896;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,19788
	ctx.r11.u64 = ctx.r11.u64 | 19788;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588360;
	sub_82410060(ctx, base);
	// lis r11,-21462
	ctx.r11.s64 = -1406533632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,31450
	ctx.r11.u64 = ctx.r11.u64 | 31450;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588378;
	sub_82410060(ctx, base);
	// lwz r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// lwz r10,20(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8258839c
	if (ctx.cr6.eq) goto loc_8258839C;
	// stw r11,20(r19)
	PPC_STORE_U32(ctx.r19.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82332c38
	ctx.lr = 0x8258839C;
	sub_82332C38(ctx, base);
loc_8258839C:
	// lis r11,-5757
	ctx.r11.s64 = -377290752;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,50932
	ctx.r11.u64 = ctx.r11.u64 | 50932;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825883B4;
	sub_82410060(ctx, base);
	// lis r11,3274
	ctx.r11.s64 = 214564864;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,12427
	ctx.r11.u64 = ctx.r11.u64 | 12427;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825883CC;
	sub_82410060(ctx, base);
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// lwz r10,20(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825883f0
	if (ctx.cr6.eq) goto loc_825883F0;
	// stw r11,20(r17)
	PPC_STORE_U32(ctx.r17.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82332c38
	ctx.lr = 0x825883F0;
	sub_82332C38(ctx, base);
loc_825883F0:
	// lis r11,20831
	ctx.r11.s64 = 1365180416;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,50406
	ctx.r11.u64 = ctx.r11.u64 | 50406;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588408;
	sub_82410060(ctx, base);
	// lis r11,-18756
	ctx.r11.s64 = -1229193216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,27466
	ctx.r11.u64 = ctx.r11.u64 | 27466;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588420;
	sub_82410060(ctx, base);
	// lis r11,-22767
	ctx.r11.s64 = -1492058112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,17808
	ctx.r11.u64 = ctx.r11.u64 | 17808;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588438;
	sub_82410060(ctx, base);
	// lis r11,10387
	ctx.r11.s64 = 680722432;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,50981
	ctx.r11.u64 = ctx.r11.u64 | 50981;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588450;
	sub_82410060(ctx, base);
	// lis r11,-32534
	ctx.r11.s64 = -2132148224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,12168
	ctx.r11.u64 = ctx.r11.u64 | 12168;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588468;
	sub_82410060(ctx, base);
	// lis r11,12175
	ctx.r11.s64 = 797900800;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,17578
	ctx.r11.u64 = ctx.r11.u64 | 17578;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82588480;
	sub_82410060(ctx, base);
	// lwz r11,16(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// lwz r10,20(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825884a4
	if (ctx.cr6.eq) goto loc_825884A4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82332c38
	ctx.lr = 0x825884A4;
	sub_82332C38(ctx, base);
loc_825884A4:
	// lis r11,-621
	ctx.r11.s64 = -40697856;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,37891
	ctx.r11.u64 = ctx.r11.u64 | 37891;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825884BC;
	sub_82410060(ctx, base);
	// lis r11,26979
	ctx.r11.s64 = 1768095744;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,64930
	ctx.r11.u64 = ctx.r11.u64 | 64930;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825884D4;
	sub_82410060(ctx, base);
	// lis r11,-21283
	ctx.r11.s64 = -1394802688;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,36630
	ctx.r11.u64 = ctx.r11.u64 | 36630;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825884EC;
	sub_82410060(ctx, base);
	// lwz r11,16(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r10,20(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82588510
	if (ctx.cr6.eq) goto loc_82588510;
	// stw r11,20(r16)
	PPC_STORE_U32(ctx.r16.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82332c38
	ctx.lr = 0x82588510;
	sub_82332C38(ctx, base);
loc_82588510:
	// stw r31,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 516, ctx.r31.u32);
	// stw r31,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r31.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82a4ea24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82588528"))) PPC_WEAK_FUNC(sub_82588528);
PPC_FUNC_IMPL(__imp__sub_82588528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82588530;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -556);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-556
	ctx.r3.s64 = ctx.r11.s64 + -556;
	// bl 0x82570860
	ctx.lr = 0x8258854C;
	sub_82570860(ctx, base);
	// lwz r11,-76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -76);
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258860c
	if (!ctx.cr6.gt) goto loc_8258860C;
	// addi r26,r31,-68
	ctx.r26.s64 = ctx.r31.s64 + -68;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8258856C:
	// lwz r10,-80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -80);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82588580;
	sub_829B98F8(ctx, base);
	// bl 0x824a0a48
	ctx.lr = 0x82588584;
	sub_824A0A48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r30,620
	ctx.r4.s64 = ctx.r30.s64 + 620;
	// bl 0x824cac78
	ctx.lr = 0x82588594;
	sub_824CAC78(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x8258859C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825885e8
	if (ctx.cr0.eq) goto loc_825885E8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825885b4
	if (ctx.cr6.eq) goto loc_825885B4;
	// lwz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// b 0x825885b8
	goto loc_825885B8;
loc_825885B4:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
loc_825885B8:
	// lwz r11,-556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -556);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r11,r11,-556
	ctx.xer.ca = ctx.r11.u32 > 555;
	ctx.r11.s64 = ctx.r11.s64 + -556;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825885d4
	if (ctx.cr0.eq) goto loc_825885D4;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x825885d8
	goto loc_825885D8;
loc_825885D4:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_825885D8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824f7c50
	ctx.lr = 0x825885E0;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x825885ec
	goto loc_825885EC;
loc_825885E8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_825885EC:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x825885F8;
	sub_82833A30(ctx, base);
	// lwz r11,-76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -76);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258856c
	if (ctx.cr6.lt) goto loc_8258856C;
loc_8258860C:
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// addi r3,r31,-92
	ctx.r3.s64 = ctx.r31.s64 + -92;
	// stw r25,-76(r31)
	PPC_STORE_U32(ctx.r31.u32 + -76, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82588630
	if (ctx.cr6.eq) goto loc_82588630;
	// stw r25,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x82588630;
	sub_82332C38(ctx, base);
loc_82588630:
	// lwz r11,-52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -52);
	// addi r3,r31,-68
	ctx.r3.s64 = ctx.r31.s64 + -68;
	// lwz r10,-48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82588654
	if (ctx.cr6.eq) goto loc_82588654;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82588654;
	sub_82332C38(ctx, base);
loc_82588654:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r4,11388
	ctx.r4.s64 = 746323968;
	// ori r4,r4,47258
	ctx.r4.u64 = ctx.r4.u64 | 47258;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82588668;
	sub_829B98F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82437b78
	ctx.lr = 0x82588670;
	sub_82437B78(ctx, base);
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
	ctx.lr = 0x82588688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82588694
	if (!ctx.cr0.eq) goto loc_82588694;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82588694:
	// stw r30,-104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -104, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825886A0"))) PPC_WEAK_FUNC(sub_825886A0);
PPC_FUNC_IMPL(__imp__sub_825886A0) {
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
	// addi r3,r31,-432
	ctx.r3.s64 = ctx.r31.s64 + -432;
	// bl 0x82580610
	ctx.lr = 0x825886C4;
	sub_82580610(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x825886ec
	if (!ctx.cr6.gt) goto loc_825886EC;
	// addi r31,r31,-560
	ctx.r31.s64 = ctx.r31.s64 + -560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82589128
	ctx.lr = 0x825886E0;
	sub_82589128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82589020
	ctx.lr = 0x825886EC;
	sub_82589020(ctx, base);
loc_825886EC:
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

__attribute__((alias("__imp__sub_82588708"))) PPC_WEAK_FUNC(sub_82588708);
PPC_FUNC_IMPL(__imp__sub_82588708) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-44(r3)
	PPC_STORE_U32(ctx.r3.u32 + -44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82588718"))) PPC_WEAK_FUNC(sub_82588718);
PPC_FUNC_IMPL(__imp__sub_82588718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82588720;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82588764
	if (ctx.cr6.eq) goto loc_82588764;
	// lwz r3,1608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x82588740;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258874c
	if (ctx.cr0.eq) goto loc_8258874C;
	// stw r27,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r27.u32);
loc_8258874C:
	// lwz r3,1608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x82588754;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82588764
	if (ctx.cr0.eq) goto loc_82588764;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// stw r27,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r27.u32);
loc_82588764:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lis r4,-12870
	ctx.r4.s64 = -843448320;
	// ori r4,r4,59421
	ctx.r4.u64 = ctx.r4.u64 | 59421;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8258877C;
	sub_829B98F8(ctx, base);
	// bl 0x824a0a48
	ctx.lr = 0x82588780;
	sub_824A0A48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82588790
	if (ctx.cr0.eq) goto loc_82588790;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82588794
	goto loc_82588794;
loc_82588790:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82588794:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r31,r28,-448
	ctx.r31.s64 = ctx.r28.s64 + -448;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825887A8;
	sub_82410060(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lis r4,8551
	ctx.r4.s64 = 560398336;
	// ori r4,r4,39529
	ctx.r4.u64 = ctx.r4.u64 | 39529;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x825887BC;
	sub_829B98F8(ctx, base);
	// bl 0x824a0a48
	ctx.lr = 0x825887C0;
	sub_824A0A48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825887d0
	if (ctx.cr0.eq) goto loc_825887D0;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x825887d4
	goto loc_825887D4;
loc_825887D0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_825887D4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825887E4;
	sub_82410060(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lis r4,-6411
	ctx.r4.s64 = -420151296;
	// ori r4,r4,23021
	ctx.r4.u64 = ctx.r4.u64 | 23021;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x825887F8;
	sub_829B98F8(ctx, base);
	// bl 0x824a0a48
	ctx.lr = 0x825887FC;
	sub_824A0A48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258880c
	if (ctx.cr0.eq) goto loc_8258880C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82588810
	goto loc_82588810;
loc_8258880C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82588810:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x82588820;
	sub_82410060(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lis r4,1669
	ctx.r4.s64 = 109379584;
	// ori r4,r4,33370
	ctx.r4.u64 = ctx.r4.u64 | 33370;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82588834;
	sub_829B98F8(ctx, base);
	// bl 0x824a0a48
	ctx.lr = 0x82588838;
	sub_824A0A48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82588848
	if (ctx.cr0.eq) goto loc_82588848;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x8258884c
	goto loc_8258884C;
loc_82588848:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8258884C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x8258885C;
	sub_82410060(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82588880
	if (ctx.cr6.eq) goto loc_82588880;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82588880;
	sub_82332C38(ctx, base);
loc_82588880:
	// addi r3,r28,-560
	ctx.r3.s64 = ctx.r28.s64 + -560;
	// bl 0x82588e38
	ctx.lr = 0x82588888;
	sub_82588E38(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825888A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,-548(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -548);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,-552(r28)
	PPC_STORE_U32(ctx.r28.u32 + -552, ctx.r4.u32);
	// bl 0x8289f1a8
	ctx.lr = 0x825888D4;
	sub_8289F1A8(ctx, base);
	// lwz r4,-552(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -552);
	// bl 0x824f45f0
	ctx.lr = 0x825888DC;
	sub_824F45F0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x825888EC;
	sub_82409BE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8254a768
	ctx.lr = 0x825888F4;
	sub_8254A768(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,7188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7188, ctx.r11.u32);
	// addi r3,r28,-432
	ctx.r3.s64 = ctx.r28.s64 + -432;
	// bl 0x825817d8
	ctx.lr = 0x82588908;
	sub_825817D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82588910"))) PPC_WEAK_FUNC(sub_82588910);
PPC_FUNC_IMPL(__imp__sub_82588910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82588918;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// lwzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x829e4e20
	ctx.lr = 0x82588954;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x82588960;
	sub_8233A258(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r26,r11,7896
	ctx.r26.s64 = ctx.r11.s64 + 7896;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258897c
	if (!ctx.cr6.eq) goto loc_8258897C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8258897C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-9964
	ctx.r4.s64 = ctx.r11.s64 + -9964;
	// bl 0x82a4cc80
	ctx.lr = 0x82588988;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82588a6c
	if (!ctx.cr0.eq) goto loc_82588A6C;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x829e4e20
	ctx.lr = 0x825889A8;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233a258
	ctx.lr = 0x825889B4;
	sub_8233A258(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82400b48
	ctx.lr = 0x825889C0;
	sub_82400B48(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x825889C8;
	sub_82333960(ctx, base);
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x829e4d70
	ctx.lr = 0x825889E0;
	sub_829E4D70(ctx, base);
	// li r3,80
	ctx.r3.s64 = 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82333900
	ctx.lr = 0x825889EC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82588a40
	if (ctx.cr0.eq) goto loc_82588A40;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82588a0c
	if (!ctx.cr6.eq) goto loc_82588A0C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82588A0C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82409058
	ctx.lr = 0x82588A14;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r10,-9940
	ctx.r5.s64 = ctx.r10.s64 + -9940;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82580168
	ctx.lr = 0x82588A2C;
	sub_82580168(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stfs f31,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// addi r11,r11,-8720
	ctx.r11.s64 = ctx.r11.s64 + -8720;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82588a44
	goto loc_82588A44;
loc_82588A40:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82588A44:
	// clrlwi. r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82588a84
	if (ctx.cr0.eq) goto loc_82588A84;
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82588a84
	if (ctx.cr6.eq) goto loc_82588A84;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82588a84
	if (ctx.cr6.eq) goto loc_82588A84;
	// bl 0x82332db8
	ctx.lr = 0x82588A68;
	sub_82332DB8(ctx, base);
	// b 0x82588a84
	goto loc_82588A84;
loc_82588A6C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82580790
	ctx.lr = 0x82588A80;
	sub_82580790(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82588A84:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82588A8C;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82588AA0"))) PPC_WEAK_FUNC(sub_82588AA0);
PPC_FUNC_IMPL(__imp__sub_82588AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82588b0c
	if (ctx.cr6.eq) goto loc_82588B0C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82588b04
	if (ctx.cr6.eq) goto loc_82588B04;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82588afc
	if (ctx.cr6.eq) goto loc_82588AFC;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x82588af4
	if (ctx.cr6.eq) goto loc_82588AF4;
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// bl 0x82588b30
	ctx.lr = 0x82588ADC;
	sub_82588B30(ctx, base);
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82588b30
	ctx.lr = 0x82588AE8;
	sub_82588B30(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82588b30
	ctx.lr = 0x82588AF4;
	sub_82588B30(ctx, base);
loc_82588AF4:
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// b 0x82588b10
	goto loc_82588B10;
loc_82588AFC:
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// b 0x82588b10
	goto loc_82588B10;
loc_82588B04:
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// b 0x82588b10
	goto loc_82588B10;
loc_82588B0C:
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
loc_82588B10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82588b30
	ctx.lr = 0x82588B18;
	sub_82588B30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82588B30"))) PPC_WEAK_FUNC(sub_82588B30);
PPC_FUNC_IMPL(__imp__sub_82588B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82588B38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82588bc4
	if (!ctx.cr6.gt) goto loc_82588BC4;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_82588B58:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82588B6C;
	sub_829B98F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82588bb0
	if (ctx.cr0.eq) goto loc_82588BB0;
	// bl 0x82410578
	ctx.lr = 0x82588B78;
	sub_82410578(ctx, base);
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
	ctx.lr = 0x82588B90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82588b9c
	if (!ctx.cr0.eq) goto loc_82588B9C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82588B9C:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82588bb0
	if (!ctx.cr6.eq) goto loc_82588BB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r11.u32);
loc_82588BB0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82588b58
	if (ctx.cr6.lt) goto loc_82588B58;
loc_82588BC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82588BD0"))) PPC_WEAK_FUNC(sub_82588BD0);
PPC_FUNC_IMPL(__imp__sub_82588BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82588BD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82588d08
	if (!ctx.cr6.gt) goto loc_82588D08;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r8,13024(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
loc_82588C00:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,84(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x829b98f8
	ctx.lr = 0x82588C10;
	sub_829B98F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82410578
	ctx.lr = 0x82588C18;
	sub_82410578(ctx, base);
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
	ctx.lr = 0x82588C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82588c3c
	if (!ctx.cr0.eq) goto loc_82588C3C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82588C3C:
	// lwz r8,13024(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,788(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82588c54
	if (ctx.cr6.eq) goto loc_82588C54;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82588c58
	if (!ctx.cr6.eq) goto loc_82588C58;
loc_82588C54:
	// stw r27,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r27.u32);
loc_82588C58:
	// lwz r11,788(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82588c74
	if (ctx.cr6.eq) goto loc_82588C74;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82588c74
	if (ctx.cr6.eq) goto loc_82588C74;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82588cf4
	if (!ctx.cr6.eq) goto loc_82588CF4;
loc_82588C74:
	// lwz r11,1876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82588cb4
	if (!ctx.cr6.gt) goto loc_82588CB4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82588C88:
	// lwz r10,1872(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1872);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82588ca0
	if (ctx.cr6.eq) goto loc_82588CA0;
	// stw r27,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r27.u32);
loc_82588CA0:
	// lwz r10,1876(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82588c88
	if (ctx.cr6.lt) goto loc_82588C88;
loc_82588CB4:
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82588cf4
	if (!ctx.cr6.gt) goto loc_82588CF4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82588CC8:
	// lwz r10,1644(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82588ce0
	if (ctx.cr6.eq) goto loc_82588CE0;
	// stw r27,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r27.u32);
loc_82588CE0:
	// lwz r10,1648(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82588cc8
	if (ctx.cr6.lt) goto loc_82588CC8;
loc_82588CF4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82588c00
	if (ctx.cr6.lt) goto loc_82588C00;
loc_82588D08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82588D10"))) PPC_WEAK_FUNC(sub_82588D10);
PPC_FUNC_IMPL(__imp__sub_82588D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82588D18;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82588e28
	if (!ctx.cr6.gt) goto loc_82588E28;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_82588D40:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82588D54;
	sub_829B98F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82410578
	ctx.lr = 0x82588D5C;
	sub_82410578(ctx, base);
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
	ctx.lr = 0x82588D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x82588d84
	if (!ctx.cr0.eq) goto loc_82588D84;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82588D84:
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82588dc4
	if (!ctx.cr6.eq) goto loc_82588DC4;
	// lwa r10,1940(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 1940));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,1936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1936, ctx.r10.u32);
	// beq cr6,0x82588dc4
	if (ctx.cr6.eq) goto loc_82588DC4;
	// stw r10,1940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1940, ctx.r10.u32);
loc_82588DC4:
	// lwz r10,1876(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1876);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82588e14
	if (!ctx.cr6.gt) goto loc_82588E14;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82588DD8:
	// lwz r8,1872(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,108
	ctx.r10.s64 = ctx.r10.s64 + 108;
	// lwa r7,0(r8)
	ctx.r7.s64 = int32_t(PPC_LOAD_U32(ctx.r8.u32 + 0));
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f0.u32);
	// lwz r8,1876(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1876);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82588dd8
	if (ctx.cr6.lt) goto loc_82588DD8;
loc_82588E14:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82588d40
	if (ctx.cr6.lt) goto loc_82588D40;
loc_82588E28:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82588E38"))) PPC_WEAK_FUNC(sub_82588E38);
PPC_FUNC_IMPL(__imp__sub_82588E38) {
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
	// addi r4,r31,312
	ctx.r4.s64 = ctx.r31.s64 + 312;
	// bl 0x82588bd0
	ctx.lr = 0x82588E5C;
	sub_82588BD0(ctx, base);
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82588bd0
	ctx.lr = 0x82588E68;
	sub_82588BD0(ctx, base);
	// addi r4,r31,264
	ctx.r4.s64 = ctx.r31.s64 + 264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82588bd0
	ctx.lr = 0x82588E74;
	sub_82588BD0(ctx, base);
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82588bd0
	ctx.lr = 0x82588E80;
	sub_82588BD0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8254a768
	ctx.lr = 0x82588E98;
	sub_8254A768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,6932(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6932);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f31,6936(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6936);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x82588ebc
	if (ctx.cr6.gt) goto loc_82588EBC;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
loc_82588EBC:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82588ec8
	if (ctx.cr6.gt) goto loc_82588EC8;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
loc_82588EC8:
	// addi r4,r31,408
	ctx.r4.s64 = ctx.r31.s64 + 408;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82588d10
	ctx.lr = 0x82588ED8;
	sub_82588D10(ctx, base);
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82588d10
	ctx.lr = 0x82588EE8;
	sub_82588D10(ctx, base);
	// addi r4,r31,360
	ctx.r4.s64 = ctx.r31.s64 + 360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82588d10
	ctx.lr = 0x82588EF8;
	sub_82588D10(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82588d10
	ctx.lr = 0x82588F08;
	sub_82588D10(ctx, base);
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82588d10
	ctx.lr = 0x82588F18;
	sub_82588D10(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82588d10
	ctx.lr = 0x82588F28;
	sub_82588D10(ctx, base);
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82588d10
	ctx.lr = 0x82588F38;
	sub_82588D10(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82588d10
	ctx.lr = 0x82588F48;
	sub_82588D10(ctx, base);
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

__attribute__((alias("__imp__sub_82588F68"))) PPC_WEAK_FUNC(sub_82588F68);
PPC_FUNC_IMPL(__imp__sub_82588F68) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,10548(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82439c68
	ctx.lr = 0x82588F94;
	sub_82439C68(ctx, base);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82588ff8
	if (!ctx.cr6.gt) goto loc_82588FF8;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82588FA8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82588fdc
	if (ctx.cr6.eq) goto loc_82588FDC;
	// lwz r7,2112(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2112);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82588fdc
	if (!ctx.cr6.gt) goto loc_82588FDC;
	// lwz r7,84(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// rlwinm. r7,r7,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82588fdc
	if (!ctx.cr0.eq) goto loc_82588FDC;
	// lwz r10,716(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 716);
	// lwz r7,456(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82588ff0
	if (ctx.cr6.eq) goto loc_82588FF0;
loc_82588FDC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82588fa8
	if (ctx.cr6.lt) goto loc_82588FA8;
	// b 0x82588ff8
	goto loc_82588FF8;
loc_82588FF0:
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
loc_82588FF8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x82589000;
	sub_8239D768(ctx, base);
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

__attribute__((alias("__imp__sub_82589020"))) PPC_WEAK_FUNC(sub_82589020);
PPC_FUNC_IMPL(__imp__sub_82589020) {
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
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82581a10
	ctx.lr = 0x82589048;
	sub_82581A10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258910c
	if (ctx.cr0.eq) goto loc_8258910C;
	// lis r11,21891
	ctx.r11.s64 = 1434648576;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r11,r11,61958
	ctx.r11.u64 = ctx.r11.u64 | 61958;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8258910c
	if (!ctx.cr6.eq) goto loc_8258910C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,1460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8258910c
	if (ctx.cr6.eq) goto loc_8258910C;
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8254a768
	ctx.lr = 0x82589088;
	sub_8254A768(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8258910c
	if (ctx.cr0.eq) goto loc_8258910C;
	// lwz r11,2112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258910c
	if (!ctx.cr6.gt) goto loc_8258910C;
	// lwz r11,84(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258910c
	if (!ctx.cr0.eq) goto loc_8258910C;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,620
	ctx.r4.s64 = ctx.r8.s64 + 620;
	// lfs f8,24000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f8.f64 = double(temp.f32);
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x8241c958
	ctx.lr = 0x825890C8;
	sub_8241C958(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// beq cr6,0x825890dc
	if (ctx.cr6.eq) goto loc_825890DC;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// b 0x825890e0
	goto loc_825890E0;
loc_825890DC:
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
loc_825890E0:
	// lfs f13,6948(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6948);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82589100
	if (!ctx.cr6.lt) goto loc_82589100;
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// beq cr6,0x82589100
	if (ctx.cr6.eq) goto loc_82589100;
	// lfs f0,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x82589108
	goto loc_82589108;
loc_82589100:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
loc_82589108:
	// stfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
loc_8258910C:
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

__attribute__((alias("__imp__sub_82589128"))) PPC_WEAK_FUNC(sub_82589128);
PPC_FUNC_IMPL(__imp__sub_82589128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82589130;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r10,1460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82589248
	if (ctx.cr6.eq) goto loc_82589248;
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8254a768
	ctx.lr = 0x8258915C;
	sub_8254A768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r10,6800(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6800);
	// lwz r27,6808(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6808);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// ble cr6,0x825891e8
	if (!ctx.cr6.gt) goto loc_825891E8;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8258919C:
	// lwz r11,6796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6796);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// blt cr6,0x825891d0
	if (ctx.cr6.lt) goto loc_825891D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x825891C0;
	sub_82410060(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82589250
	ctx.lr = 0x825891D0;
	sub_82589250(ctx, base);
loc_825891D0:
	// lwz r11,6800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6800);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258919c
	if (ctx.cr6.lt) goto loc_8258919C;
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_825891E8:
	// li r31,1
	ctx.r31.s64 = 1;
loc_825891EC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82589218
	if (!ctx.cr6.gt) goto loc_82589218;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_825891FC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8258921c
	if (ctx.cr6.eq) goto loc_8258921C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x825891fc
	if (ctx.cr6.lt) goto loc_825891FC;
loc_82589218:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8258921C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82589234
	if (!ctx.cr6.eq) goto loc_82589234;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82589250
	ctx.lr = 0x82589234;
	sub_82589250(ctx, base);
loc_82589234:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// ble cr6,0x825891ec
	if (!ctx.cr6.gt) goto loc_825891EC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x82589248;
	sub_8239D768(ctx, base);
loc_82589248:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82589250"))) PPC_WEAK_FUNC(sub_82589250);
PPC_FUNC_IMPL(__imp__sub_82589250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x825892fc
	if (ctx.cr6.eq) goto loc_825892FC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x825892d4
	if (ctx.cr6.eq) goto loc_825892D4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x825892ac
	if (ctx.cr6.eq) goto loc_825892AC;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x8258932c
	if (!ctx.cr6.eq) goto loc_8258932C;
	// addi r4,r31,312
	ctx.r4.s64 = ctx.r31.s64 + 312;
	// bl 0x825893f8
	ctx.lr = 0x82589294;
	sub_825893F8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825893f8
	ctx.lr = 0x825892A4;
	sub_825893F8(ctx, base);
	// addi r4,r31,408
	ctx.r4.s64 = ctx.r31.s64 + 408;
	// b 0x82589320
	goto loc_82589320;
loc_825892AC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825893f8
	ctx.lr = 0x825892BC;
	sub_825893F8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825893f8
	ctx.lr = 0x825892CC;
	sub_825893F8(ctx, base);
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// b 0x82589320
	goto loc_82589320;
loc_825892D4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,264
	ctx.r4.s64 = ctx.r31.s64 + 264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825893f8
	ctx.lr = 0x825892E4;
	sub_825893F8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825893f8
	ctx.lr = 0x825892F4;
	sub_825893F8(ctx, base);
	// addi r4,r31,360
	ctx.r4.s64 = ctx.r31.s64 + 360;
	// b 0x82589320
	goto loc_82589320;
loc_825892FC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825893f8
	ctx.lr = 0x8258930C;
	sub_825893F8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825893f8
	ctx.lr = 0x8258931C;
	sub_825893F8(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
loc_82589320:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825893f8
	ctx.lr = 0x8258932C;
	sub_825893F8(ctx, base);
loc_8258932C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82589348"))) PPC_WEAK_FUNC(sub_82589348);
PPC_FUNC_IMPL(__imp__sub_82589348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82589350;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82589388
	if (ctx.cr6.eq) goto loc_82589388;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82589388;
	sub_82332C38(ctx, base);
loc_82589388:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x825893c0
	if (ctx.cr6.eq) goto loc_825893C0;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x825893b8
	if (ctx.cr6.eq) goto loc_825893B8;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x825893b0
	if (ctx.cr6.eq) goto loc_825893B0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bne cr6,0x825893cc
	if (!ctx.cr6.eq) goto loc_825893CC;
	// addi r4,r30,312
	ctx.r4.s64 = ctx.r30.s64 + 312;
	// b 0x825893c4
	goto loc_825893C4;
loc_825893B0:
	// addi r4,r30,288
	ctx.r4.s64 = ctx.r30.s64 + 288;
	// b 0x825893c4
	goto loc_825893C4;
loc_825893B8:
	// addi r4,r30,264
	ctx.r4.s64 = ctx.r30.s64 + 264;
	// b 0x825893c4
	goto loc_825893C4;
loc_825893C0:
	// addi r4,r30,240
	ctx.r4.s64 = ctx.r30.s64 + 240;
loc_825893C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828e0f90
	ctx.lr = 0x825893CC;
	sub_828E0F90(ctx, base);
loc_825893CC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825893f0
	if (ctx.cr6.eq) goto loc_825893F0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x825893F0;
	sub_82332C38(ctx, base);
loc_825893F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825893F8"))) PPC_WEAK_FUNC(sub_825893F8);
PPC_FUNC_IMPL(__imp__sub_825893F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82589400;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825894f8
	if (!ctx.cr6.gt) goto loc_825894F8;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_82589424:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,13024(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r3,84(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82589438;
	sub_829B98F8(ctx, base);
	// bl 0x824a0af8
	ctx.lr = 0x8258943C;
	sub_824A0AF8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x825894e4
	if (ctx.cr0.eq) goto loc_825894E4;
	// lwz r10,13024(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8258945c
	if (ctx.cr6.eq) goto loc_8258945C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82589460
	if (!ctx.cr6.eq) goto loc_82589460;
loc_8258945C:
	// stw r26,1948(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1948, ctx.r26.u32);
loc_82589460:
	// lwz r11,1820(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1820);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825894e4
	if (ctx.cr6.eq) goto loc_825894E4;
	// lwz r11,788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82589488
	if (ctx.cr6.eq) goto loc_82589488;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82589488
	if (ctx.cr6.eq) goto loc_82589488;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825894e4
	if (!ctx.cr6.eq) goto loc_825894E4;
loc_82589488:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258949C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8281dc68
	ctx.lr = 0x825894A4;
	sub_8281DC68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825894e4
	if (ctx.cr0.eq) goto loc_825894E4;
	// bl 0x824116b0
	ctx.lr = 0x825894B0;
	sub_824116B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x825894d0
	if (ctx.cr6.eq) goto loc_825894D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8281d650
	ctx.lr = 0x825894C4;
	sub_8281D650(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// b 0x825894e4
	goto loc_825894E4;
loc_825894D0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r10,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_825894E4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82589424
	if (ctx.cr6.lt) goto loc_82589424;
loc_825894F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82589500"))) PPC_WEAK_FUNC(sub_82589500);
PPC_FUNC_IMPL(__imp__sub_82589500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82589508;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258959c
	if (ctx.cr6.eq) goto loc_8258959C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8258959c
	if (ctx.cr6.eq) goto loc_8258959C;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
loc_8258952C:
	// lwz r31,64(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82589588
	if (ctx.cr6.eq) goto loc_82589588;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8258956c
	if (!ctx.cr6.gt) goto loc_8258956C;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_82589550:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82589570
	if (ctx.cr6.eq) goto loc_82589570;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82589550
	if (ctx.cr6.lt) goto loc_82589550;
loc_8258956C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82589570:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82589588
	if (ctx.cr6.eq) goto loc_82589588;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824090e0
	ctx.lr = 0x82589580;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82589598
	if (ctx.cr0.eq) goto loc_82589598;
loc_82589588:
	// lwz r29,68(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8258952c
	if (!ctx.cr6.eq) goto loc_8258952C;
	// b 0x8258959c
	goto loc_8258959C;
loc_82589598:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_8258959C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825895A8"))) PPC_WEAK_FUNC(sub_825895A8);
PPC_FUNC_IMPL(__imp__sub_825895A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825895B0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// lfs f30,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// beq cr6,0x82589644
	if (ctx.cr6.eq) goto loc_82589644;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82589648
	goto loc_82589648;
loc_82589644:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82589648:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82589654
	if (ctx.cr6.eq) goto loc_82589654;
	// bl 0x824cd328
	ctx.lr = 0x82589654;
	sub_824CD328(ctx, base);
loc_82589654:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lfs f13,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lfs f11,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// bl 0x828264e0
	ctx.lr = 0x825896BC;
	sub_828264E0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,13868
	ctx.r28.s64 = ctx.r11.s64 + 13868;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825896DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,472(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82589728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stb r30,192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 192, ctx.r30.u8);
	// bl 0x82825748
	ctx.lr = 0x8258978C;
	sub_82825748(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825897A0"))) PPC_WEAK_FUNC(sub_825897A0);
PPC_FUNC_IMPL(__imp__sub_825897A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825897A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x825897C8;
	sub_829B98F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825897f8
	if (ctx.cr0.eq) goto loc_825897F8;
	// bl 0x823354d0
	ctx.lr = 0x825897D4;
	sub_823354D0(ctx, base);
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
	ctx.lr = 0x825897EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bne 0x825897fc
	if (!ctx.cr0.eq) goto loc_825897FC;
loc_825897F8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825897FC:
	// lwz r11,1816(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82589810
	if (!ctx.cr6.gt) goto loc_82589810;
	// lwz r11,1812(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1812);
	// b 0x82589814
	goto loc_82589814;
loc_82589810:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82589814:
	// lwz r9,1504(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1504);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82589838
	if (ctx.cr6.eq) goto loc_82589838;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82589838
	if (ctx.cr6.eq) goto loc_82589838;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1504, ctx.r11.u32);
	// b 0x82589860
	goto loc_82589860;
loc_82589838:
	// lwz r10,528(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// lwz r9,7088(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7088);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r11.u32);
loc_82589860:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82589868"))) PPC_WEAK_FUNC(sub_82589868);
PPC_FUNC_IMPL(__imp__sub_82589868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82589870;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8258989C;
	sub_829B98F8(ctx, base);
	// bl 0x824a0a48
	ctx.lr = 0x825898A0;
	sub_824A0A48(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825898b4
	if (ctx.cr6.eq) goto loc_825898B4;
	// addi r4,r3,620
	ctx.r4.s64 = ctx.r3.s64 + 620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825895a8
	ctx.lr = 0x825898B4;
	sub_825895A8(ctx, base);
loc_825898B4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258993c
	if (!ctx.cr6.gt) goto loc_8258993C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_825898C8:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x825898DC;
	sub_829B98F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82589928
	if (ctx.cr0.eq) goto loc_82589928;
	// bl 0x82410578
	ctx.lr = 0x825898E8;
	sub_82410578(ctx, base);
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
	ctx.lr = 0x82589900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x82589910
	if (!ctx.cr0.eq) goto loc_82589910;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82589910:
	// lwz r11,1668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82589928
	if (!ctx.cr6.eq) goto loc_82589928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8254d940
	ctx.lr = 0x82589928;
	sub_8254D940(ctx, base);
loc_82589928:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825898c8
	if (ctx.cr6.lt) goto loc_825898C8;
loc_8258993C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82589958
	if (ctx.cr6.eq) goto loc_82589958;
	// lis r5,21635
	ctx.r5.s64 = 1417871360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,52629
	ctx.r5.u64 = ctx.r5.u64 | 52629;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825897a0
	ctx.lr = 0x82589958;
	sub_825897A0(ctx, base);
loc_82589958:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x825899b8
	if (ctx.cr6.eq) goto loc_825899B8;
	// lwa r11,8(r25)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r25.u32 + 8));
	// lfs f0,6928(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6928);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r10,6748(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6748);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1112(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1112);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// stw r10,6748(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6748, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825899AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r4,r31,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r31.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8289f1a8
	ctx.lr = 0x825899B8;
	sub_8289F1A8(ctx, base);
loc_825899B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825899C0"))) PPC_WEAK_FUNC(sub_825899C0);
PPC_FUNC_IMPL(__imp__sub_825899C0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r9,620(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r8,624(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r7,628(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lwz r10,508(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lfs f13,16464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16464);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// ble cr6,0x82589a9c
	if (!ctx.cr6.gt) goto loc_82589A9C;
	// lwz r11,504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
loc_82589A24:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82589a90
	if (!ctx.cr6.lt) goto loc_82589A90;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
loc_82589A90:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x82589a24
	if (!ctx.cr0.eq) goto loc_82589A24;
loc_82589A9C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825895a8
	ctx.lr = 0x82589AA8;
	sub_825895A8(ctx, base);
	// lis r5,21635
	ctx.r5.s64 = 1417871360;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r5,52629
	ctx.r5.u64 = ctx.r5.u64 | 52629;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825897a0
	ctx.lr = 0x82589ABC;
	sub_825897A0(ctx, base);
	// lis r5,11335
	ctx.r5.s64 = 742850560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r5,33587
	ctx.r5.u64 = ctx.r5.u64 | 33587;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825897a0
	ctx.lr = 0x82589AD0;
	sub_825897A0(ctx, base);
	// lis r5,-12756
	ctx.r5.s64 = -835977216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r5,65131
	ctx.r5.u64 = ctx.r5.u64 | 65131;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825897a0
	ctx.lr = 0x82589AE4;
	sub_825897A0(ctx, base);
	// lis r5,-24034
	ctx.r5.s64 = -1575092224;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r5,19253
	ctx.r5.u64 = ctx.r5.u64 | 19253;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825897a0
	ctx.lr = 0x82589AF8;
	sub_825897A0(ctx, base);
	// lwa r11,8(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,6928(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6928);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r10,6748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6748);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1112(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1112);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// stw r10,6748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6748, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r4,r30,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r30.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289f1a8
	ctx.lr = 0x82589B50;
	sub_8289F1A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82589B68"))) PPC_WEAK_FUNC(sub_82589B68);
PPC_FUNC_IMPL(__imp__sub_82589B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// beq cr6,0x82589c6c
	if (ctx.cr6.eq) goto loc_82589C6C;
	// lwz r10,2112(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82589c6c
	if (!ctx.cr6.gt) goto loc_82589C6C;
	// lwz r10,84(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82589c6c
	if (!ctx.cr0.eq) goto loc_82589C6C;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lfs f0,6940(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6940);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6944(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6944);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,10548(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10548);
	// lfs f12,984(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82589c6c
	if (!ctx.cr6.gt) goto loc_82589C6C;
	// lfs f0,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6952(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6952);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82589c68
	if (ctx.cr6.gt) goto loc_82589C68;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82589c6c
	if (ctx.cr6.eq) goto loc_82589C6C;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f0,6948(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6948);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r7,r10,-29292
	ctx.r7.s64 = ctx.r10.s64 + -29292;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,-29292(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29292);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// fadds f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,4652(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4652);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfs f1,904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x824d7b70
	ctx.lr = 0x82589C48;
	sub_824D7B70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82589c6c
	if (ctx.cr0.eq) goto loc_82589C6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82589c6c
	if (!ctx.cr0.eq) goto loc_82589C6C;
loc_82589C68:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82589C6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82589C88"))) PPC_WEAK_FUNC(sub_82589C88);
PPC_FUNC_IMPL(__imp__sub_82589C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82589C90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82581ce8
	ctx.lr = 0x82589CA0;
	sub_82581CE8(ctx, base);
	// bl 0x8254a5a8
	ctx.lr = 0x82589CA4;
	sub_8254A5A8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82589dc8
	if (ctx.cr0.eq) goto loc_82589DC8;
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// addi r30,r31,6992
	ctx.r30.s64 = ctx.r31.s64 + 6992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,7044(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7044);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,7024
	ctx.r3.s64 = ctx.r31.s64 + 7024;
	// stw r11,7040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7040, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82589cec
	if (ctx.cr6.eq) goto loc_82589CEC;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x82589CEC;
	sub_82332C38(ctx, base);
loc_82589CEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,27481
	ctx.r11.s64 = 1800994816;
	// ori r11,r11,65533
	ctx.r11.u64 = ctx.r11.u64 | 65533;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82589d20
	if (!ctx.cr6.eq) goto loc_82589D20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825899c0
	ctx.lr = 0x82589D1C;
	sub_825899C0(ctx, base);
	// b 0x82589dc8
	goto loc_82589DC8;
loc_82589D20:
	// lis r11,5429
	ctx.r11.s64 = 355794944;
	// ori r11,r11,35786
	ctx.r11.u64 = ctx.r11.u64 | 35786;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82589d48
	if (!ctx.cr6.eq) goto loc_82589D48;
	// lis r6,5700
	ctx.r6.s64 = 373555200;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r6,r6,3080
	ctx.r6.u64 = ctx.r6.u64 | 3080;
	// addi r5,r29,144
	ctx.r5.s64 = ctx.r29.s64 + 144;
	// b 0x82589dbc
	goto loc_82589DBC;
loc_82589D48:
	// lis r11,-21750
	ctx.r11.s64 = -1425408000;
	// ori r11,r11,13491
	ctx.r11.u64 = ctx.r11.u64 | 13491;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82589d70
	if (!ctx.cr6.eq) goto loc_82589D70;
	// lis r6,27824
	ctx.r6.s64 = 1823473664;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r6,r6,59071
	ctx.r6.u64 = ctx.r6.u64 | 59071;
	// addi r5,r29,168
	ctx.r5.s64 = ctx.r29.s64 + 168;
	// b 0x82589dbc
	goto loc_82589DBC;
loc_82589D70:
	// lis r11,-31934
	ctx.r11.s64 = -2092826624;
	// ori r11,r11,32103
	ctx.r11.u64 = ctx.r11.u64 | 32103;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82589d98
	if (!ctx.cr6.eq) goto loc_82589D98;
	// lis r6,-14970
	ctx.r6.s64 = -981073920;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r6,r6,2249
	ctx.r6.u64 = ctx.r6.u64 | 2249;
	// addi r5,r29,192
	ctx.r5.s64 = ctx.r29.s64 + 192;
	// b 0x82589dbc
	goto loc_82589DBC;
loc_82589D98:
	// lis r11,8704
	ctx.r11.s64 = 570425344;
	// ori r11,r11,30998
	ctx.r11.u64 = ctx.r11.u64 | 30998;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82589dc8
	if (!ctx.cr6.eq) goto loc_82589DC8;
	// lis r6,5868
	ctx.r6.s64 = 384565248;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,35618
	ctx.r6.u64 = ctx.r6.u64 | 35618;
	// addi r5,r29,216
	ctx.r5.s64 = ctx.r29.s64 + 216;
loc_82589DBC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82589868
	ctx.lr = 0x82589DC8;
	sub_82589868(ctx, base);
loc_82589DC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82589DD0"))) PPC_WEAK_FUNC(sub_82589DD0);
PPC_FUNC_IMPL(__imp__sub_82589DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82581ce8
	ctx.lr = 0x82589DF0;
	sub_82581CE8(ctx, base);
	// bl 0x8254a5a8
	ctx.lr = 0x82589DF4;
	sub_8254A5A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82589e68
	if (ctx.cr0.eq) goto loc_82589E68;
	// lis r11,-20726
	ctx.r11.s64 = -1358299136;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,30523
	ctx.r11.u64 = ctx.r11.u64 | 30523;
	// stw r10,6924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6924, ctx.r10.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82589e2c
	if (!ctx.cr6.eq) goto loc_82589E2C;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,6756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6756, ctx.r10.u32);
	// stw r9,3160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3160, ctx.r9.u32);
	// b 0x82589e64
	goto loc_82589E64;
loc_82589E2C:
	// lis r11,-8686
	ctx.r11.s64 = -569245696;
	// ori r11,r11,29726
	ctx.r11.u64 = ctx.r11.u64 | 29726;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82589e48
	if (!ctx.cr6.eq) goto loc_82589E48;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82589e5c
	goto loc_82589E5C;
loc_82589E48:
	// lis r11,21891
	ctx.r11.s64 = 1434648576;
	// ori r11,r11,61958
	ctx.r11.u64 = ctx.r11.u64 | 61958;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82589e68
	if (!ctx.cr6.eq) goto loc_82589E68;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82589E5C:
	// stw r11,6756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6756, ctx.r11.u32);
	// stw r10,3160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3160, ctx.r10.u32);
loc_82589E64:
	// stw r11,6924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6924, ctx.r11.u32);
loc_82589E68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581ce8
	ctx.lr = 0x82589E70;
	sub_82581CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82589e7c
	if (ctx.cr0.eq) goto loc_82589E7C;
	// stw r31,6708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6708, ctx.r31.u32);
loc_82589E7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82589E98"))) PPC_WEAK_FUNC(sub_82589E98);
PPC_FUNC_IMPL(__imp__sub_82589E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82589EA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8258a224
	if (ctx.cr6.eq) goto loc_8258A224;
	// lwz r11,6812(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82589ed8
	if (!ctx.cr6.eq) goto loc_82589ED8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82549b30
	ctx.lr = 0x82589ED0;
	sub_82549B30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82589fbc
	if (!ctx.cr0.eq) goto loc_82589FBC;
loc_82589ED8:
	// lwz r11,6812(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82589fbc
	if (!ctx.cr6.eq) goto loc_82589FBC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f2,3108(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 3108);
	ctx.f2.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,3112(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 3112);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// lfs f0,-24640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x824d7b70
	ctx.lr = 0x82589F48;
	sub_824D7B70(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8258a224
	if (ctx.cr0.eq) goto loc_8258A224;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,1600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1600, ctx.r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258a224
	if (!ctx.cr6.eq) goto loc_8258A224;
	// lwz r11,7100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258a224
	if (!ctx.cr6.eq) goto loc_8258A224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,6964(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 6964);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82549c60
	ctx.lr = 0x82589FB0;
	sub_82549C60(ctx, base);
	// lis r27,7330
	ctx.r27.s64 = 480378880;
	// ori r27,r27,14075
	ctx.r27.u64 = ctx.r27.u64 | 14075;
	// b 0x8258a224
	goto loc_8258A224;
loc_82589FBC:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8258a224
	if (!ctx.cr6.lt) goto loc_8258A224;
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82589fe4
	if (!ctx.cr6.eq) goto loc_82589FE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82588f68
	ctx.lr = 0x82589FE0;
	sub_82588F68(ctx, base);
	// stw r3,524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 524, ctx.r3.u32);
loc_82589FE4:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258a004
	if (ctx.cr6.eq) goto loc_8258A004;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8258a03c
	if (ctx.cr6.eq) goto loc_8258A03C;
loc_8258A004:
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x829b9720
	ctx.lr = 0x8258A020;
	sub_829B9720(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r3,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r3.u32);
	// stw r11,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r11.u32);
loc_8258A03C:
	// lwz r6,108(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8258a224
	if (ctx.cr6.eq) goto loc_8258A224;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// lwz r10,1072(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1072);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8258A078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,14112
	ctx.r5.s64 = 924844032;
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,53358
	ctx.r5.u64 = ctx.r5.u64 | 53358;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A0A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r11,1408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x829b9720
	ctx.lr = 0x8258A0C8;
	sub_829B9720(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8258a224
	if (ctx.cr0.eq) goto loc_8258A224;
	// lwz r3,1492(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1492);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r29,620
	ctx.r5.s64 = ctx.r29.s64 + 620;
	// addi r4,r28,620
	ctx.r4.s64 = ctx.r28.s64 + 620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A0F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8258a1b4
	if (!ctx.cr0.eq) goto loc_8258A1B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r30,1408(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// stw r27,1956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1956, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r27,1600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1600, ctx.r27.u32);
	// lwz r3,1608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8258A128;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258a138
	if (ctx.cr0.eq) goto loc_8258A138;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// stw r27,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r27.u32);
loc_8258A138:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258a16c
	if (ctx.cr0.eq) goto loc_8258A16C;
	// lis r27,14112
	ctx.r27.s64 = 924844032;
	// ori r27,r27,53358
	ctx.r27.u64 = ctx.r27.u64 | 53358;
	// b 0x8258a224
	goto loc_8258A224;
loc_8258A16C:
	// bl 0x823bce28
	ctx.lr = 0x8258A170;
	sub_823BCE28(ctx, base);
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
	ctx.lr = 0x8258A188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8258a194
	if (!ctx.cr0.eq) goto loc_8258A194;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8258A194:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8258a224
	if (ctx.cr6.eq) goto loc_8258A224;
	// lwz r11,1456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258a224
	if (ctx.cr6.eq) goto loc_8258A224;
	// lis r27,-21759
	ctx.r27.s64 = -1425997824;
	// ori r27,r27,53956
	ctx.r27.u64 = ctx.r27.u64 | 53956;
	// b 0x8258a224
	goto loc_8258A224;
loc_8258A1B4:
	// bl 0x823bcca0
	ctx.lr = 0x8258A1B8;
	sub_823BCCA0(ctx, base);
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
	ctx.lr = 0x8258A1D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8258a1dc
	if (!ctx.cr0.eq) goto loc_8258A1DC;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8258A1DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8258a218
	if (ctx.cr6.eq) goto loc_8258A218;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x8258A1F4;
	sub_82409BE0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,20360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20360);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	// lfs f13,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8258a224
	if (!ctx.cr6.gt) goto loc_8258A224;
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258a224
	if (ctx.cr6.eq) goto loc_8258A224;
loc_8258A218:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
loc_8258A224:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A230"))) PPC_WEAK_FUNC(sub_8258A230);
PPC_FUNC_IMPL(__imp__sub_8258A230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8258A238;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8258a3f4
	if (ctx.cr6.eq) goto loc_8258A3F4;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8258a3ec
	if (ctx.cr6.gt) goto loc_8258A3EC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f2,3108(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3108);
	ctx.f2.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,3112(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3112);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lfs f0,-24640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x824d7b70
	ctx.lr = 0x8258A2C8;
	sub_824D7B70(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8258a3f4
	if (ctx.cr0.eq) goto loc_8258A3F4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r6,r10,13868
	ctx.r6.s64 = ctx.r10.s64 + 13868;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,223
	ctx.r7.s64 = 223;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r5,r27,620
	ctx.r5.s64 = ctx.r27.s64 + 620;
	// addi r4,r29,620
	ctx.r4.s64 = ctx.r29.s64 + 620;
	// bl 0x828253c8
	ctx.lr = 0x8258A2F8;
	sub_828253C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// lwz r4,6808(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6808);
	// bl 0x82589348
	ctx.lr = 0x8258A338;
	sub_82589348(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82589500
	ctx.lr = 0x8258A348;
	sub_82589500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8258a374
	if (!ctx.cr0.eq) goto loc_8258A374;
	// addi r4,r28,432
	ctx.r4.s64 = ctx.r28.s64 + 432;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828e0f90
	ctx.lr = 0x8258A35C;
	sub_828E0F90(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82589500
	ctx.lr = 0x8258A36C;
	sub_82589500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258a384
	if (ctx.cr0.eq) goto loc_8258A384;
loc_8258A374:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
loc_8258A384:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8258a394
	if (ctx.cr6.eq) goto loc_8258A394;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332db8
	ctx.lr = 0x8258A394;
	sub_82332DB8(ctx, base);
loc_8258A394:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A3B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258a3e0
	if (!ctx.cr6.eq) goto loc_8258A3E0;
	// lwz r11,7100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258a3e0
	if (!ctx.cr6.eq) goto loc_8258A3E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,6968(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 6968);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82549c60
	ctx.lr = 0x8258A3D8;
	sub_82549C60(ctx, base);
	// lis r30,7330
	ctx.r30.s64 = 480378880;
	// ori r30,r30,14075
	ctx.r30.u64 = ctx.r30.u64 | 14075;
loc_8258A3E0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8239d768
	ctx.lr = 0x8258A3E8;
	sub_8239D768(ctx, base);
	// b 0x8258a3f4
	goto loc_8258A3F4;
loc_8258A3EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82549580
	ctx.lr = 0x8258A3F4;
	sub_82549580(ctx, base);
loc_8258A3F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A400"))) PPC_WEAK_FUNC(sub_8258A400);
PPC_FUNC_IMPL(__imp__sub_8258A400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8258A408;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r31,620
	ctx.r29.s64 = ctx.r31.s64 + 620;
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lfs f1,6988(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6988);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r9,628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x824dea78
	ctx.lr = 0x8258A444;
	sub_824DEA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8258a488
	if (ctx.cr0.eq) goto loc_8258A488;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,2340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7064(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7064);
	// bl 0x824ffc38
	ctx.lr = 0x8258A47C;
	sub_824FFC38(ctx, base);
	// lis r3,19106
	ctx.r3.s64 = 1252130816;
	// ori r3,r3,17460
	ctx.r3.u64 = ctx.r3.u64 | 17460;
	// b 0x8258a550
	goto loc_8258A550;
loc_8258A488:
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
	ctx.lr = 0x8258A4A4;
	sub_8254D518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258a54c
	if (ctx.cr0.eq) goto loc_8258A54C;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8258a54c
	if (!ctx.cr6.gt) goto loc_8258A54C;
	// stw r3,7072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7072, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addic. r11,r3,300
	ctx.xer.ca = ctx.r3.u32 > 4294966995;
	ctx.r11.s64 = ctx.r3.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258a4f8
	if (ctx.cr0.eq) goto loc_8258A4F8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8258a4f8
	if (ctx.cr6.eq) goto loc_8258A4F8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8258a4fc
	goto loc_8258A4FC;
loc_8258A4F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258A4FC:
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8258a528
	if (ctx.cr6.eq) goto loc_8258A528;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8258a540
	if (!ctx.cr0.eq) goto loc_8258A540;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8258a528
	if (ctx.cr6.eq) goto loc_8258A528;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8258a540
	if (!ctx.cr0.eq) goto loc_8258A540;
loc_8258A528:
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258a540
	if (!ctx.cr0.eq) goto loc_8258A540;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824cdaf8
	ctx.lr = 0x8258A540;
	sub_824CDAF8(ctx, base);
loc_8258A540:
	// lis r3,-13597
	ctx.r3.s64 = -891092992;
	// ori r3,r3,14997
	ctx.r3.u64 = ctx.r3.u64 | 14997;
	// b 0x8258a550
	goto loc_8258A550;
loc_8258A54C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258A550:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A560"))) PPC_WEAK_FUNC(sub_8258A560);
PPC_FUNC_IMPL(__imp__sub_8258A560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8258A568;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8258a7b4
	if (ctx.cr6.eq) goto loc_8258A7B4;
	// lwz r11,6768(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6768);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258a59c
	if (ctx.cr6.eq) goto loc_8258A59C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8258a7b8
	goto loc_8258A7B8;
loc_8258A59C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// bl 0x824d77f8
	ctx.lr = 0x8258A5B4;
	sub_824D77F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8258a7b4
	if (ctx.cr0.eq) goto loc_8258A7B4;
	// lwz r11,6924(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6924);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258a5ec
	if (ctx.cr0.eq) goto loc_8258A5EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258a400
	ctx.lr = 0x8258A5D4;
	sub_8258A400(ctx, base);
	// lwz r11,6924(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6924);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,6924(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6924, ctx.r11.u32);
	// bne 0x8258a7b4
	if (!ctx.cr0.eq) goto loc_8258A7B4;
	// b 0x8258a71c
	goto loc_8258A71C;
loc_8258A5EC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82589b68
	ctx.lr = 0x8258A5F8;
	sub_82589B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258a60c
	if (ctx.cr0.eq) goto loc_8258A60C;
	// lis r27,-27852
	ctx.r27.s64 = -1825308672;
	// ori r27,r27,40719
	ctx.r27.u64 = ctx.r27.u64 | 40719;
	// b 0x8258a7b4
	goto loc_8258A7B4;
loc_8258A60C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258a680
	if (ctx.cr0.eq) goto loc_8258A680;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,1668(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1668);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8258a674
	if (!ctx.cr6.eq) goto loc_8258A674;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258A674:
	// lis r27,9385
	ctx.r27.s64 = 615055360;
	// ori r27,r27,21604
	ctx.r27.u64 = ctx.r27.u64 | 21604;
	// b 0x8258a7b4
	goto loc_8258A7B4;
loc_8258A680:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lfs f1,16620(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16620);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,1340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bne 0x8258a768
	if (!ctx.cr0.eq) goto loc_8258A768;
	// lwz r11,1344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1344);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A6D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258a728
	if (ctx.cr0.eq) goto loc_8258A728;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258a7b4
	if (!ctx.cr6.eq) goto loc_8258A7B4;
	// lwz r11,7100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258a7b4
	if (!ctx.cr6.eq) goto loc_8258A7B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,6972(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 6972);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82549c60
	ctx.lr = 0x8258A71C;
	sub_82549C60(ctx, base);
loc_8258A71C:
	// lis r27,7330
	ctx.r27.s64 = 480378880;
	// ori r27,r27,14075
	ctx.r27.u64 = ctx.r27.u64 | 14075;
	// b 0x8258a7b4
	goto loc_8258A7B4;
loc_8258A728:
	// lwz r3,1492(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r30,620
	ctx.r5.s64 = ctx.r30.s64 + 620;
	// addi r4,r29,620
	ctx.r4.s64 = ctx.r29.s64 + 620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A74C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8258a7b4
	if (!ctx.cr0.eq) goto loc_8258A7B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_8258A768:
	// lis r5,14112
	ctx.r5.s64 = 924844032;
	// lwz r11,1368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1368);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,53358
	ctx.r5.u64 = ctx.r5.u64 | 53358;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r27,1956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1956, ctx.r27.u32);
	// lwz r3,1608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8258A79C;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258a7ac
	if (ctx.cr0.eq) goto loc_8258A7AC;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// stw r27,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r27.u32);
loc_8258A7AC:
	// lis r27,14112
	ctx.r27.s64 = 924844032;
	// ori r27,r27,53358
	ctx.r27.u64 = ctx.r27.u64 | 53358;
loc_8258A7B4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8258A7B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A7C8"))) PPC_WEAK_FUNC(sub_8258A7C8);
PPC_FUNC_IMPL(__imp__sub_8258A7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8258A7D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258a7f8
	if (!ctx.cr6.eq) goto loc_8258A7F8;
	// lwz r11,-40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258a910
	if (!ctx.cr6.eq) goto loc_8258A910;
loc_8258A7F8:
	// bl 0x823b7c50
	ctx.lr = 0x8258A7FC;
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
	ctx.lr = 0x8258A814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258a910
	if (ctx.cr6.eq) goto loc_8258A910;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r6,-31949
	ctx.r6.s64 = -2093809664;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,-24640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,10548(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10548);
	// lfs f2,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,1672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1672);
	// bl 0x824d7b70
	ctx.lr = 0x8258A890;
	sub_824D7B70(ctx, base);
	// addi r6,r29,-560
	ctx.r6.s64 = ctx.r29.s64 + -560;
	// lwz r5,-460(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -460);
	// lwz r4,-464(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -464);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82581a10
	ctx.lr = 0x8258A8A4;
	sub_82581A10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258a910
	if (ctx.cr0.eq) goto loc_8258A910;
	// lis r10,-20726
	ctx.r10.s64 = -1358299136;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r10,r10,30523
	ctx.r10.u64 = ctx.r10.u64 | 30523;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8258a8d0
	if (!ctx.cr6.eq) goto loc_8258A8D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82589e98
	ctx.lr = 0x8258A8CC;
	sub_82589E98(ctx, base);
	// b 0x8258a90c
	goto loc_8258A90C;
loc_8258A8D0:
	// lis r10,-8686
	ctx.r10.s64 = -569245696;
	// ori r10,r10,29726
	ctx.r10.u64 = ctx.r10.u64 | 29726;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8258a8f0
	if (!ctx.cr6.eq) goto loc_8258A8F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8258a230
	ctx.lr = 0x8258A8EC;
	sub_8258A230(ctx, base);
	// b 0x8258a90c
	goto loc_8258A90C;
loc_8258A8F0:
	// lis r10,21891
	ctx.r10.s64 = 1434648576;
	// ori r10,r10,61958
	ctx.r10.u64 = ctx.r10.u64 | 61958;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8258a910
	if (!ctx.cr6.eq) goto loc_8258A910;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8258a560
	ctx.lr = 0x8258A90C;
	sub_8258A560(ctx, base);
loc_8258A90C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8258A910:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A920"))) PPC_WEAK_FUNC(sub_8258A920);
PPC_FUNC_IMPL(__imp__sub_8258A920) {
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
	// bl 0x8254a768
	ctx.lr = 0x8258A93C;
	sub_8254A768(ctx, base);
	// lfs f0,628(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8258a958
	if (ctx.cr6.lt) goto loc_8258A958;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258A958:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258A970"))) PPC_WEAK_FUNC(sub_8258A970);
PPC_FUNC_IMPL(__imp__sub_8258A970) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258a7c8
	sub_8258A7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A980"))) PPC_WEAK_FUNC(sub_8258A980);
PPC_FUNC_IMPL(__imp__sub_8258A980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82588708
	sub_82588708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A990"))) PPC_WEAK_FUNC(sub_8258A990);
PPC_FUNC_IMPL(__imp__sub_8258A990) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -400);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x825879e8
	sub_825879E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A9A0"))) PPC_WEAK_FUNC(sub_8258A9A0);
PPC_FUNC_IMPL(__imp__sub_8258A9A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825879e8
	sub_825879E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A9B0"))) PPC_WEAK_FUNC(sub_8258A9B0);
PPC_FUNC_IMPL(__imp__sub_8258A9B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825879e8
	sub_825879E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A9C0"))) PPC_WEAK_FUNC(sub_8258A9C0);
PPC_FUNC_IMPL(__imp__sub_8258A9C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825875b0
	sub_825875B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A9D0"))) PPC_WEAK_FUNC(sub_8258A9D0);
PPC_FUNC_IMPL(__imp__sub_8258A9D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825886a0
	sub_825886A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A9E0"))) PPC_WEAK_FUNC(sub_8258A9E0);
PPC_FUNC_IMPL(__imp__sub_8258A9E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82587618
	sub_82587618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A9F0"))) PPC_WEAK_FUNC(sub_8258A9F0);
PPC_FUNC_IMPL(__imp__sub_8258A9F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825875a0
	sub_825875A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AA00"))) PPC_WEAK_FUNC(sub_8258AA00);
PPC_FUNC_IMPL(__imp__sub_8258AA00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82587680
	sub_82587680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AA10"))) PPC_WEAK_FUNC(sub_8258AA10);
PPC_FUNC_IMPL(__imp__sub_8258AA10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82587680
	sub_82587680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AA20"))) PPC_WEAK_FUNC(sub_8258AA20);
PPC_FUNC_IMPL(__imp__sub_8258AA20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82588718
	sub_82588718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AA30"))) PPC_WEAK_FUNC(sub_8258AA30);
PPC_FUNC_IMPL(__imp__sub_8258AA30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-432
	ctx.r3.s64 = ctx.r3.s64 + -432;
	// b 0x82580668
	sub_82580668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AA40"))) PPC_WEAK_FUNC(sub_8258AA40);
PPC_FUNC_IMPL(__imp__sub_8258AA40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82587610
	sub_82587610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AA50"))) PPC_WEAK_FUNC(sub_8258AA50);
PPC_FUNC_IMPL(__imp__sub_8258AA50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82588528
	sub_82588528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AA60"))) PPC_WEAK_FUNC(sub_8258AA60);
PPC_FUNC_IMPL(__imp__sub_8258AA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9400
	ctx.r3.s64 = ctx.r11.s64 + -9400;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258AA70"))) PPC_WEAK_FUNC(sub_8258AA70);
PPC_FUNC_IMPL(__imp__sub_8258AA70) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bb5f8
	sub_823BB5F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AA78"))) PPC_WEAK_FUNC(sub_8258AA78);
PPC_FUNC_IMPL(__imp__sub_8258AA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1744
	ctx.r3.s64 = 1744;
	// bl 0x82833108
	ctx.lr = 0x8258AA94;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258aaac
	if (ctx.cr0.eq) goto loc_8258AAAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x8258ac70
	ctx.lr = 0x8258AAA8;
	sub_8258AC70(ctx, base);
	// b 0x8258aab0
	goto loc_8258AAB0;
loc_8258AAAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258AAB0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258aac4
	if (ctx.cr6.eq) goto loc_8258AAC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8258AAC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258AAD8"))) PPC_WEAK_FUNC(sub_8258AAD8);
PPC_FUNC_IMPL(__imp__sub_8258AAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8258ab08
	if (ctx.cr6.eq) goto loc_8258AB08;
	// bl 0x823bb5f8
	ctx.lr = 0x8258AB00;
	sub_823BB5F8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8258ab48
	if (ctx.cr6.eq) goto loc_8258AB48;
loc_8258AB08:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82580098
	ctx.lr = 0x8258AB20;
	sub_82580098(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8258ab48
	if (!ctx.cr0.eq) goto loc_8258AB48;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82579a00
	ctx.lr = 0x8258AB3C;
	sub_82579A00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8258ab4c
	if (ctx.cr0.eq) goto loc_8258AB4C;
loc_8258AB48:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8258AB4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258AB68"))) PPC_WEAK_FUNC(sub_8258AB68);
PPC_FUNC_IMPL(__imp__sub_8258AB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823bb5f8
	ctx.lr = 0x8258AB88;
	sub_823BB5F8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8258ab98
	if (!ctx.cr6.eq) goto loc_8258AB98;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// b 0x8258abcc
	goto loc_8258ABCC;
loc_8258AB98:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82580108
	ctx.lr = 0x8258ABB0;
	sub_82580108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8258abcc
	if (!ctx.cr0.eq) goto loc_8258ABCC;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82579ad0
	ctx.lr = 0x8258ABCC;
	sub_82579AD0(ctx, base);
loc_8258ABCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258ABE8"))) PPC_WEAK_FUNC(sub_8258ABE8);
PPC_FUNC_IMPL(__imp__sub_8258ABE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x82579e10
	sub_82579E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258ABF8"))) PPC_WEAK_FUNC(sub_8258ABF8);
PPC_FUNC_IMPL(__imp__sub_8258ABF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r10,-28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,1384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1384, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258AC18"))) PPC_WEAK_FUNC(sub_8258AC18);
PPC_FUNC_IMPL(__imp__sub_8258AC18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// b 0x82580610
	sub_82580610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AC30"))) PPC_WEAK_FUNC(sub_8258AC30);
PPC_FUNC_IMPL(__imp__sub_8258AC30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x82579e80
	sub_82579E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AC40"))) PPC_WEAK_FUNC(sub_8258AC40);
PPC_FUNC_IMPL(__imp__sub_8258AC40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// b 0x82580668
	sub_82580668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AC58"))) PPC_WEAK_FUNC(sub_8258AC58);
PPC_FUNC_IMPL(__imp__sub_8258AC58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// b 0x825817d8
	sub_825817D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AC70"))) PPC_WEAK_FUNC(sub_8258AC70);
PPC_FUNC_IMPL(__imp__sub_8258AC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8258AC78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,-7536
	ctx.r11.s64 = ctx.r11.s64 + -7536;
	// addi r10,r10,-7520
	ctx.r10.s64 = ctx.r10.s64 + -7520;
	// addi r9,r9,-7512
	ctx.r9.s64 = ctx.r9.s64 + -7512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r10.u32);
	// addi r30,r31,1728
	ctx.r30.s64 = ctx.r31.s64 + 1728;
	// stw r9,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r9.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8258acc0
	if (!ctx.cr6.eq) goto loc_8258ACC0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8258accc
	goto loc_8258ACCC;
loc_8258ACC0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8258ACCC:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82571e20
	ctx.lr = 0x8258ACD4;
	sub_82571E20(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8258ace4
	if (!ctx.cr6.eq) goto loc_8258ACE4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8258acf0
	goto loc_8258ACF0;
loc_8258ACE4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8258ACF0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,1616
	ctx.r3.s64 = ctx.r31.s64 + 1616;
	// bl 0x82582280
	ctx.lr = 0x8258ACFC;
	sub_82582280(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8258ad0c
	if (!ctx.cr6.eq) goto loc_8258AD0C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8258ad18
	goto loc_8258AD18;
loc_8258AD0C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8258AD18:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r9,r9,31792
	ctx.r9.s64 = ctx.r9.s64 + 31792;
	// addi r8,r8,-32652
	ctx.r8.s64 = ctx.r8.s64 + -32652;
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// addi r7,r7,-32600
	ctx.r7.s64 = ctx.r7.s64 + -32600;
	// addi r6,r6,-8704
	ctx.r6.s64 = ctx.r6.s64 + -8704;
	// lis r5,-32228
	ctx.r5.s64 = -2112094208;
	// lis r4,-32228
	ctx.r4.s64 = -2112094208;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r9,r5,-7612
	ctx.r9.s64 = ctx.r5.s64 + -7612;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r5,-32228
	ctx.r5.s64 = -2112094208;
	// addi r4,r4,-7560
	ctx.r4.s64 = ctx.r4.s64 + -7560;
	// addi r5,r5,-25196
	ctx.r5.s64 = ctx.r5.s64 + -25196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r7,396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 396, ctx.r7.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r28,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r28.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
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
	// stw r4,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r4.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AE08"))) PPC_WEAK_FUNC(sub_8258AE08);
PPC_FUNC_IMPL(__imp__sub_8258AE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8258AE10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// addi r31,r3,-32
	ctx.r31.s64 = ctx.r3.s64 + -32;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// addi r10,r10,-8704
	ctx.r10.s64 = ctx.r10.s64 + -8704;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r9,r9,-7612
	ctx.r9.s64 = ctx.r9.s64 + -7612;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r8,-7560
	ctx.r8.s64 = ctx.r8.s64 + -7560;
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// addi r29,r31,1744
	ctx.r29.s64 = ctx.r31.s64 + 1744;
	// addi r7,r7,-25196
	ctx.r7.s64 = ctx.r7.s64 + -25196;
	// stw r10,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r10.u32);
	// addi r3,r29,-64
	ctx.r3.s64 = ctx.r29.s64 + -64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r7,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,-36(r10)
	PPC_STORE_U32(ctx.r10.u32 + -36, ctx.r11.u32);
	// bl 0x8269b988
	ctx.lr = 0x8258AEA0;
	sub_8269B988(ctx, base);
	// addi r3,r29,-88
	ctx.r3.s64 = ctx.r29.s64 + -88;
	// bl 0x82333960
	ctx.lr = 0x8258AEA8;
	sub_82333960(ctx, base);
	// addi r3,r29,-112
	ctx.r3.s64 = ctx.r29.s64 + -112;
	// bl 0x82333960
	ctx.lr = 0x8258AEB0;
	sub_82333960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82570708
	ctx.lr = 0x8258AEB8;
	sub_82570708(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258aec8
	if (ctx.cr0.eq) goto loc_8258AEC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8258AEC8;
	sub_82332DB8(ctx, base);
loc_8258AEC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AED8"))) PPC_WEAK_FUNC(sub_8258AED8);
PPC_FUNC_IMPL(__imp__sub_8258AED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8258AEE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-7536
	ctx.r11.s64 = ctx.r11.s64 + -7536;
	// addi r10,r10,-7520
	ctx.r10.s64 = ctx.r10.s64 + -7520;
	// addi r9,r9,-7512
	ctx.r9.s64 = ctx.r9.s64 + -7512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r10.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r9,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r9.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,1728
	ctx.r30.s64 = ctx.r31.s64 + 1728;
	// bl 0x825705f8
	ctx.lr = 0x8258AF1C;
	sub_825705F8(ctx, base);
	// addi r3,r31,1616
	ctx.r3.s64 = ctx.r31.s64 + 1616;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82580498
	ctx.lr = 0x8258AF28;
	sub_82580498(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82579c40
	ctx.lr = 0x8258AF34;
	sub_82579C40(ctx, base);
	// lis r7,14112
	ctx.r7.s64 = 924844032;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// ori r7,r7,53358
	ctx.r7.u64 = ctx.r7.u64 | 53358;
	// addi r11,r11,-8704
	ctx.r11.s64 = ctx.r11.s64 + -8704;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r10,r10,-7612
	ctx.r10.s64 = ctx.r10.s64 + -7612;
	// addi r9,r9,-7560
	ctx.r9.s64 = ctx.r9.s64 + -7560;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r8,r8,-25196
	ctx.r8.s64 = ctx.r8.s64 + -25196;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,1508(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1492
	ctx.r3.s64 = ctx.r11.s64 + 1492;
	// bl 0x82410060
	ctx.lr = 0x8258AFD4;
	sub_82410060(ctx, base);
	// lis r11,9385
	ctx.r11.s64 = 615055360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,21604
	ctx.r11.u64 = ctx.r11.u64 | 21604;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1492
	ctx.r3.s64 = ctx.r11.s64 + 1492;
	// bl 0x82410060
	ctx.lr = 0x8258AFF8;
	sub_82410060(ctx, base);
	// lis r11,18987
	ctx.r11.s64 = 1244332032;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,28266
	ctx.r11.u64 = ctx.r11.u64 | 28266;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1492
	ctx.r3.s64 = ctx.r11.s64 + 1492;
	// bl 0x82410060
	ctx.lr = 0x8258B01C;
	sub_82410060(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B030"))) PPC_WEAK_FUNC(sub_8258B030);
PPC_FUNC_IMPL(__imp__sub_8258B030) {
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
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x8257a570
	ctx.lr = 0x8258B058;
	sub_8257A570(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82579d18
	ctx.lr = 0x8258B068;
	sub_82579D18(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,-20272
	ctx.r8.s64 = ctx.r11.s64 + -20272;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1484
	ctx.r3.s64 = ctx.r11.s64 + 1484;
	// lwz r11,1500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258b0b4
	if (!ctx.cr6.gt) goto loc_8258B0B4;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_8258B098:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8258b0bc
	if (ctx.cr6.eq) goto loc_8258B0BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258b098
	if (ctx.cr6.lt) goto loc_8258B098;
loc_8258B0B4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8258B0BC;
	sub_82410060(ctx, base);
loc_8258B0BC:
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

__attribute__((alias("__imp__sub_8258B0D0"))) PPC_WEAK_FUNC(sub_8258B0D0);
PPC_FUNC_IMPL(__imp__sub_8258B0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,1488(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8258B0E8;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8258B0EC;
	sub_824A0990(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258b154
	if (ctx.cr0.eq) goto loc_8258B154;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,1756(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1756);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8258B108;
	sub_829B9720(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258b138
	if (ctx.cr0.eq) goto loc_8258B138;
	// bl 0x82569060
	ctx.lr = 0x8258B114;
	sub_82569060(ctx, base);
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
	ctx.lr = 0x8258B12C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x8258b13c
	if (!ctx.cr0.eq) goto loc_8258B13C;
loc_8258B138:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258B13C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258b154
	if (ctx.cr6.eq) goto loc_8258B154;
	// lwz r11,1428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1428);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258b158
	if (!ctx.cr6.eq) goto loc_8258B158;
loc_8258B154:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258B158:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258B170"))) PPC_WEAK_FUNC(sub_8258B170);
PPC_FUNC_IMPL(__imp__sub_8258B170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8258B178;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,1824
	ctx.r4.s64 = ctx.r11.s64 + 1824;
	// bl 0x823ffc38
	ctx.lr = 0x8258B1A4;
	sub_823FFC38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// bl 0x823ffc38
	ctx.lr = 0x8258B1C4;
	sub_823FFC38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824d5a80
	ctx.lr = 0x8258B1D8;
	sub_824D5A80(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,-24640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// bl 0x824d7b70
	ctx.lr = 0x8258B240;
	sub_824D7B70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824cce58
	ctx.lr = 0x8258B254;
	sub_824CCE58(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8258b294
	if (!ctx.cr6.eq) goto loc_8258B294;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,1544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258b2ec
	if (!ctx.cr6.gt) goto loc_8258B2EC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825711b0
	ctx.lr = 0x8258B28C;
	sub_825711B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8258b2cc
	goto loc_8258B2CC;
loc_8258B294:
	// lfs f13,624(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,624(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,620(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
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
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_8258B2CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8258b2ec
	if (ctx.cr6.eq) goto loc_8258B2EC;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8258b2ec
	if (ctx.cr6.gt) goto loc_8258B2EC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_8258B2EC:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8239d768
	ctx.lr = 0x8258B2F4;
	sub_8239D768(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8239d768
	ctx.lr = 0x8258B2FC;
	sub_8239D768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B310"))) PPC_WEAK_FUNC(sub_8258B310);
PPC_FUNC_IMPL(__imp__sub_8258B310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8258B318;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,1492(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// lwz r28,4080(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4080);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,1456(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8258b35c
	if (!ctx.cr6.gt) goto loc_8258B35C;
	// lwz r11,1452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8258b360
	goto loc_8258B360;
loc_8258B35C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258B360:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258b47c
	if (ctx.cr6.eq) goto loc_8258B47C;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8258B384;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8258B388;
	sub_824A0990(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,1764(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1764);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8258B39C;
	sub_829B9720(ctx, base);
	// bl 0x824d4028
	ctx.lr = 0x8258B3A0;
	sub_824D4028(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8258b3d0
	if (ctx.cr0.eq) goto loc_8258B3D0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r6,620
	ctx.r5.s64 = ctx.r6.s64 + 620;
	// addi r4,r30,620
	ctx.r4.s64 = ctx.r30.s64 + 620;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258B3C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258b438
	if (ctx.cr0.eq) goto loc_8258B438;
loc_8258B3D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8257a308
	ctx.lr = 0x8258B3E0;
	sub_8257A308(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne 0x8258b3f8
	if (!ctx.cr0.eq) goto loc_8258B3F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8258b438
	goto loc_8258B438;
loc_8258B3F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8258b41c
	if (!ctx.cr6.eq) goto loc_8258B41C;
	// lwz r10,628(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,620(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 620);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824f12a0
	ctx.lr = 0x8258B414;
	sub_824F12A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r28,4080(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4080, ctx.r28.u32);
loc_8258B41C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,620
	ctx.r4.s64 = ctx.r11.s64 + 620;
	// lwz r11,464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 464);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258B438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258B438:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8258B45C;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8258B460;
	sub_824A0990(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8258b470
	if (ctx.cr6.eq) goto loc_8258B470;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// b 0x8258b474
	goto loc_8258B474;
loc_8258B470:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258B474:
	// stw r11,1764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1764, ctx.r11.u32);
	// b 0x8258b4d8
	goto loc_8258B4D8;
loc_8258B47C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8258b4a8
	if (!ctx.cr6.eq) goto loc_8258B4A8;
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,620(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 620);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824f12a0
	ctx.lr = 0x8258B498;
	sub_824F12A0(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r28,4080(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4080, ctx.r28.u32);
	// stw r11,1460(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1460, ctx.r11.u32);
loc_8258B4A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824defd8
	ctx.lr = 0x8258B4B0;
	sub_824DEFD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258b4d8
	if (ctx.cr0.eq) goto loc_8258B4D8;
	// lwz r11,1544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	// lwz r10,1548(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1548);
	// stw r11,1464(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1464, ctx.r11.u32);
	// stw r10,1468(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1468, ctx.r10.u32);
	// lfs f0,1772(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1772);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1768);
	// stfs f0,1480(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1480, temp.u32);
	// stw r11,1472(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1472, ctx.r11.u32);
loc_8258B4D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x8258b538
	if (!ctx.cr6.eq) goto loc_8258B538;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1504);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82570f18
	ctx.lr = 0x8258B510;
	sub_82570F18(ctx, base);
	// lwz r3,1608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8258B518;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258b52c
	if (ctx.cr0.eq) goto loc_8258B52C;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
loc_8258B52C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8258b54c
	goto loc_8258B54C;
loc_8258B538:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82570fd0
	ctx.lr = 0x8258B540;
	sub_82570FD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8258B54C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B568"))) PPC_WEAK_FUNC(sub_8258B568);
PPC_FUNC_IMPL(__imp__sub_8258B568) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8258b638
	if (ctx.cr6.eq) goto loc_8258B638;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258b638
	if (ctx.cr6.eq) goto loc_8258B638;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8258b170
	ctx.lr = 0x8258B5A8;
	sub_8258B170(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8258b62c
	if (ctx.cr0.eq) goto loc_8258B62C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-11456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11456);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8258b5d8
	if (ctx.cr6.lt) goto loc_8258B5D8;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8258b62c
	if (!ctx.cr6.gt) goto loc_8258B62C;
loc_8258B5D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258B5FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258b62c
	if (ctx.cr0.eq) goto loc_8258B62C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8258b638
	if (!ctx.cr6.eq) goto loc_8258B638;
loc_8258B62C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8258b310
	ctx.lr = 0x8258B638;
	sub_8258B310(ctx, base);
loc_8258B638:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258B650"))) PPC_WEAK_FUNC(sub_8258B650);
PPC_FUNC_IMPL(__imp__sub_8258B650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8258B658;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8258b694
	if (ctx.cr6.eq) goto loc_8258B694;
	// bl 0x823bade0
	ctx.lr = 0x8258B674;
	sub_823BADE0(ctx, base);
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
	ctx.lr = 0x8258B68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8258b698
	goto loc_8258B698;
loc_8258B694:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8258B698:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8258b70c
	if (ctx.cr6.eq) goto loc_8258B70C;
	// lwz r27,12(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8258b70c
	if (ctx.cr6.eq) goto loc_8258B70C;
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// addi r31,r30,-32
	ctx.r31.s64 = ctx.r30.s64 + -32;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82581a10
	ctx.lr = 0x8258B6D0;
	sub_82581A10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258b6dc
	if (ctx.cr0.eq) goto loc_8258B6DC;
	// lwz r29,56(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_8258B6DC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-21344
	ctx.r3.s64 = ctx.r11.s64 + -21344;
	// bl 0x82816528
	ctx.lr = 0x8258B6E8;
	sub_82816528(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8258b70c
	if (!ctx.cr6.eq) goto loc_8258B70C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5412(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 5412, temp.u32);
	// bl 0x8258b568
	ctx.lr = 0x8258B708;
	sub_8258B568(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8258B70C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B718"))) PPC_WEAK_FUNC(sub_8258B718);
PPC_FUNC_IMPL(__imp__sub_8258B718) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -400);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8258ae08
	sub_8258AE08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B728"))) PPC_WEAK_FUNC(sub_8258B728);
PPC_FUNC_IMPL(__imp__sub_8258B728) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8258ae08
	sub_8258AE08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B738"))) PPC_WEAK_FUNC(sub_8258B738);
PPC_FUNC_IMPL(__imp__sub_8258B738) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258ae08
	sub_8258AE08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B748"))) PPC_WEAK_FUNC(sub_8258B748);
PPC_FUNC_IMPL(__imp__sub_8258B748) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8258ab68
	sub_8258AB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B758"))) PPC_WEAK_FUNC(sub_8258B758);
PPC_FUNC_IMPL(__imp__sub_8258B758) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258ab68
	sub_8258AB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B768"))) PPC_WEAK_FUNC(sub_8258B768);
PPC_FUNC_IMPL(__imp__sub_8258B768) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258ac40
	sub_8258AC40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B778"))) PPC_WEAK_FUNC(sub_8258B778);
PPC_FUNC_IMPL(__imp__sub_8258B778) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258ac58
	sub_8258AC58(ctx, base);
	return;
}

