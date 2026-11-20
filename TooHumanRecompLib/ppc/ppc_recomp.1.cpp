#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82338A28"))) PPC_WEAK_FUNC(sub_82338A28);
PPC_FUNC_IMPL(__imp__sub_82338A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82338a60
	if (ctx.cr6.eq) goto loc_82338A60;
	// bl 0x82338750
	ctx.lr = 0x82338A50;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82338a60
	if (!ctx.cr6.eq) goto loc_82338A60;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82338a6c
	goto loc_82338A6C;
loc_82338A60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a88
	ctx.lr = 0x82338A6C;
	sub_82338A88(ctx, base);
loc_82338A6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338A88"))) PPC_WEAK_FUNC(sub_82338A88);
PPC_FUNC_IMPL(__imp__sub_82338A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82338ac8
	if (ctx.cr6.eq) goto loc_82338AC8;
	// bl 0x823388b8
	ctx.lr = 0x82338AA8;
	sub_823388B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82338ab8
	if (!ctx.cr6.eq) goto loc_82338AB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82338acc
	goto loc_82338ACC;
loc_82338AB8:
	// bl 0x82333d20
	ctx.lr = 0x82338ABC;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82338acc
	if (ctx.cr6.eq) goto loc_82338ACC;
loc_82338AC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82338ACC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338AE0"))) PPC_WEAK_FUNC(sub_82338AE0);
PPC_FUNC_IMPL(__imp__sub_82338AE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823385d0
	sub_823385D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82338AE8"))) PPC_WEAK_FUNC(sub_82338AE8);
PPC_FUNC_IMPL(__imp__sub_82338AE8) {
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
	// li r3,1424
	ctx.r3.s64 = 1424;
	// bl 0x82833108
	ctx.lr = 0x82338B08;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82338b68
	if (ctx.cr0.eq) goto loc_82338B68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82338b88
	ctx.lr = 0x82338B1C;
	sub_82338B88(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,17456
	ctx.r11.s64 = ctx.r11.s64 + 17456;
	// addi r10,r10,18464
	ctx.r10.s64 = ctx.r10.s64 + 18464;
	// addi r9,r9,14028
	ctx.r9.s64 = ctx.r9.s64 + 14028;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// lfs f0,1412(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// lwz r11,1416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// lwz r11,1420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1420);
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// b 0x82338b6c
	goto loc_82338B6C;
loc_82338B68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82338B6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338B88"))) PPC_WEAK_FUNC(sub_82338B88);
PPC_FUNC_IMPL(__imp__sub_82338B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82338B90;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823393a0
	ctx.lr = 0x82338BA0;
	sub_823393A0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r4,r30,396
	ctx.r4.s64 = ctx.r30.s64 + 396;
	// bne cr6,0x82338bb4
	if (!ctx.cr6.eq) goto loc_82338BB4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82338BB4:
	// addi r3,r31,396
	ctx.r3.s64 = ctx.r31.s64 + 396;
	// bl 0x82339608
	ctx.lr = 0x82338BBC;
	sub_82339608(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,15896
	ctx.r11.s64 = ctx.r11.s64 + 15896;
	// addi r10,r10,16904
	ctx.r10.s64 = ctx.r10.s64 + 16904;
	// addi r9,r9,14028
	ctx.r9.s64 = ctx.r9.s64 + 14028;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,496
	ctx.r4.s64 = ctx.r30.s64 + 496;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x82338BF0;
	sub_82A4EA80(ctx, base);
	// lwz r11,560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// lwz r11,564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// lwz r11,568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// lwz r11,572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// lwz r11,576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// lwz r11,580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// lwz r11,584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// lwz r11,588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 588);
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// lwz r11,600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 600);
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// lwz r11,604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 604);
	// stw r11,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
	// lwz r11,608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// lwz r11,612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 612);
	// stw r11,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r11.u32);
	// lwz r11,616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 616);
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// lwz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// lwz r11,632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 632);
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
	// lwz r11,636(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 636);
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// lwz r11,640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 640);
	// stw r11,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
	// lwz r11,644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 644);
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// lwz r11,648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 648);
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// lwz r11,660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// stw r11,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r11.u32);
	// lwz r11,664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// lwz r11,668(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 668);
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// lwz r11,672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// lwz r11,676(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 676);
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// lfs f0,680(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,680(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// lwz r11,684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 684);
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
	// lwz r11,688(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	// stw r11,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r11.u32);
	// lwz r11,692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// addi r28,r31,1088
	ctx.r28.s64 = ctx.r31.s64 + 1088;
	// addi r27,r30,1088
	ctx.r27.s64 = ctx.r30.s64 + 1088;
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// lfs f0,696(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// lfs f0,700(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,700(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 700, temp.u32);
	// lwz r11,704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// lwz r11,708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	// stw r11,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r11.u32);
	// lwz r11,712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// stw r11,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r11.u32);
	// lwz r11,716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 716);
	// stw r11,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r11.u32);
	// lwz r11,720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 720);
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// lwz r11,724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// lwz r11,728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 728);
	// stw r11,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r11.u32);
	// lwz r11,732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 732);
	// stw r11,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r11.u32);
	// lwz r11,736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
	// lwz r11,740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// stw r11,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r11.u32);
	// lwz r11,744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 744);
	// stw r11,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r11.u32);
	// lwz r11,748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 748);
	// stw r11,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r11.u32);
	// lwz r11,752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 752);
	// stw r11,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
	// lwz r11,756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 756);
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
	// lwz r11,760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 760);
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// lwz r11,764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 764);
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
	// lwz r11,768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// stw r11,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r11.u32);
	// lwz r11,772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 772);
	// stw r11,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r11.u32);
	// lwz r11,776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
	// lwz r11,780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 780);
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// lwz r11,784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// stw r11,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r11.u32);
	// lwz r11,788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// stw r11,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r11.u32);
	// lwz r11,792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// lwz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// stw r11,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r11.u32);
	// lwz r11,800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// lwz r11,804(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 804);
	// stw r11,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r11.u32);
	// lwz r11,808(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 808);
	// stw r11,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// lwz r11,812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 812);
	// stw r11,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r11.u32);
	// lwz r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// stw r11,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r11.u32);
	// lwz r11,820(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 820);
	// stw r11,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r11.u32);
	// lwz r11,824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// lwz r11,828(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 828);
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// lwz r11,832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// stw r11,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r11.u32);
	// lwz r11,836(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	// stw r11,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r11.u32);
	// lwz r11,840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 840);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// lwz r11,844(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 844);
	// stw r11,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r10,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r10.u32);
	// lwz r10,852(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// stw r10,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r10.u32);
	// lwz r10,856(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// stw r10,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r10.u32);
	// lwz r10,860(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 860);
	// stw r10,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r10.u32);
	// lwz r10,864(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// lwz r10,868(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 868);
	// stw r10,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r10.u32);
	// lwz r10,872(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 872);
	// stw r10,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r10.u32);
	// lwz r10,876(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 876);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// lwz r10,880(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 880);
	// stw r10,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r10.u32);
	// lwz r10,884(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 884);
	// stw r10,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r10.u32);
	// lwz r10,888(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 888);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// lwz r10,892(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 892);
	// stw r10,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r10.u32);
	// lwz r10,896(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 896);
	// stw r10,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r10.u32);
	// lwz r10,900(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// lwz r10,904(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 904);
	// stw r10,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r10.u32);
	// lwz r10,908(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 908);
	// stw r10,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r10.u32);
	// lwz r10,912(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	// stw r10,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r10.u32);
	// lwz r10,916(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 916);
	// stw r10,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r10.u32);
	// lwz r10,920(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 920);
	// stw r10,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r10.u32);
	// lwz r10,924(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 924);
	// stw r10,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r10.u32);
	// lwz r10,928(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 928);
	// stw r10,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r10.u32);
	// lwz r10,932(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 932);
	// stw r10,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r10.u32);
	// lwz r10,936(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 936);
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// lwz r10,940(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 940);
	// stw r10,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r10.u32);
	// lwz r10,944(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 944);
	// stw r10,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r10.u32);
	// lwz r10,948(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 948);
	// stw r10,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r10.u32);
	// lwz r10,952(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 952);
	// stw r10,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r10.u32);
	// lwz r10,956(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	// stw r10,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r10.u32);
	// lwz r10,960(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// stw r10,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r10.u32);
	// lfs f0,964(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 964);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// lfs f0,968(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,968(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 968, temp.u32);
	// lfs f0,972(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 972);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// lfs f0,976(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 976);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// lwz r10,980(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 980);
	// stw r10,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r10.u32);
	// lwz r10,984(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 984);
	// stw r10,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r10.u32);
	// lwz r10,988(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 988);
	// stw r10,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r10.u32);
	// lwz r10,992(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 992);
	// stw r10,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r10.u32);
	// lwz r10,996(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 996);
	// stw r10,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r10.u32);
	// lwz r10,1000(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1000);
	// stw r10,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r10.u32);
	// lwz r10,1004(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1004);
	// stw r10,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r10.u32);
	// lwz r10,1008(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1008);
	// stw r10,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r10.u32);
	// lwz r10,1012(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1012);
	// stw r10,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r10.u32);
	// lwz r10,1016(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1016);
	// stw r10,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r10.u32);
	// lwz r10,1020(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1020);
	// stw r10,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r10.u32);
	// lwz r10,1024(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1024);
	// stw r10,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r10.u32);
	// lwz r10,1028(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	// stw r10,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r10.u32);
	// lwz r10,1032(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1032);
	// stw r10,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r10.u32);
	// lwz r10,1036(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1036);
	// stw r10,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r10.u32);
	// lwz r10,1040(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1040);
	// stw r10,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r10.u32);
	// lwz r10,1044(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1044);
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// lwz r10,1048(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1048);
	// stw r10,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r10.u32);
	// lwz r10,1052(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1052);
	// stw r10,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r10.u32);
	// lwz r10,1056(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1056);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// lwz r10,1060(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1060);
	// stw r10,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r10.u32);
	// lwz r10,1064(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1064);
	// stw r10,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r10.u32);
	// lwz r10,1068(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1068);
	// stw r10,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r10.u32);
	// lwz r10,1072(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1072);
	// stw r10,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r10.u32);
	// lwz r10,1076(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1076);
	// stw r10,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r10.u32);
	// lwz r10,1080(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1080);
	// stw r10,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r10.u32);
	// lwz r10,1084(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1084);
	// stw r10,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r10.u32);
	// stw r11,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r11.u32);
	// stw r29,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r29.u32);
	// stw r29,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r29.u32);
	// stw r29,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r29.u32);
	// stw r29,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r29.u32);
	// stw r29,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r29.u32);
	// beq cr6,0x823390cc
	if (ctx.cr6.eq) goto loc_823390CC;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823390cc
	if (!ctx.cr6.gt) goto loc_823390CC;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82339068
	if (ctx.cr0.eq) goto loc_82339068;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82339068;
	sub_82332C38(ctx, base);
loc_82339068:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823390cc
	if (!ctx.cr6.gt) goto loc_823390CC;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_8233907C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x82339090;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823390b8
	if (ctx.cr0.eq) goto loc_823390B8;
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
loc_823390B8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233907c
	if (ctx.cr6.lt) goto loc_8233907C;
loc_823390CC:
	// lwz r11,1112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1112);
	// addi r28,r31,1148
	ctx.r28.s64 = ctx.r31.s64 + 1148;
	// li r26,12
	ctx.r26.s64 = 12;
	// addi r27,r30,1148
	ctx.r27.s64 = ctx.r30.s64 + 1148;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r11,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r11.u32);
	// lwz r11,1116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1116);
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// lwz r11,1120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1120);
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// lwz r11,1124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1124);
	// stw r11,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r11.u32);
	// lfs f0,1128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1128, temp.u32);
	// lwz r11,1132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1132);
	// stw r11,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r11.u32);
	// lwz r11,1136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// stw r11,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// lwz r11,1140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1140);
	// stw r11,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r11.u32);
	// lwz r11,1144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// stw r26,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r26.u32);
	// stw r29,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r29.u32);
	// stw r29,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r29.u32);
	// stw r29,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r29.u32);
	// stw r29,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r29.u32);
	// stw r29,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r29.u32);
	// beq cr6,0x82339188
	if (ctx.cr6.eq) goto loc_82339188;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82339188
	if (!ctx.cr6.gt) goto loc_82339188;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233916c
	if (ctx.cr0.eq) goto loc_8233916C;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x8233916C;
	sub_82332C38(ctx, base);
loc_8233916C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82339180;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_82339188:
	// addi r4,r30,1172
	ctx.r4.s64 = ctx.r30.s64 + 1172;
	// addi r3,r31,1172
	ctx.r3.s64 = ctx.r31.s64 + 1172;
	// bl 0x823399c8
	ctx.lr = 0x82339194;
	sub_823399C8(ctx, base);
	// lwz r11,1196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1196);
	// addi r28,r31,1264
	ctx.r28.s64 = ctx.r31.s64 + 1264;
	// addi r27,r30,1264
	ctx.r27.s64 = ctx.r30.s64 + 1264;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r11,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r11.u32);
	// lwz r11,1200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1200);
	// stw r11,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r11.u32);
	// lwz r11,1204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1204);
	// stw r11,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r11.u32);
	// lwz r11,1208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1208);
	// stw r11,1208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1208, ctx.r11.u32);
	// lwz r11,1212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1212);
	// stw r11,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r11.u32);
	// lwz r11,1216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1216);
	// stw r11,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r11.u32);
	// lwz r11,1220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1220);
	// stw r11,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r11.u32);
	// lwz r11,1224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1224);
	// stw r11,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r11.u32);
	// lwz r11,1228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1228);
	// stw r11,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r11.u32);
	// lwz r11,1232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1232);
	// stw r11,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r11.u32);
	// lwz r11,1236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1236);
	// stw r11,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r11.u32);
	// lwz r11,1240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1240);
	// stw r11,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r11.u32);
	// lwz r11,1244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1244);
	// stw r11,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r11.u32);
	// lwz r11,1248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1248);
	// stw r11,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r11.u32);
	// lwz r11,1252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1252);
	// stw r11,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r11.u32);
	// lwz r11,1256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1256);
	// stw r11,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r11.u32);
	// lwz r11,1260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1260);
	// stw r11,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r11.u32);
	// stw r26,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r26.u32);
	// stw r29,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r29.u32);
	// stw r29,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r29.u32);
	// stw r29,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r29.u32);
	// stw r29,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r29.u32);
	// stw r29,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r29.u32);
	// beq cr6,0x823392dc
	if (ctx.cr6.eq) goto loc_823392DC;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823392dc
	if (!ctx.cr6.gt) goto loc_823392DC;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82339270
	if (ctx.cr0.eq) goto loc_82339270;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82339270;
	sub_82332C38(ctx, base);
loc_82339270:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823392dc
	if (!ctx.cr6.gt) goto loc_823392DC;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82339284:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x82339298;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823392c8
	if (ctx.cr0.eq) goto loc_823392C8;
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
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_823392C8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82339284
	if (ctx.cr6.lt) goto loc_82339284;
loc_823392DC:
	// lwz r11,1288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1288);
	// addi r4,r30,1300
	ctx.r4.s64 = ctx.r30.s64 + 1300;
	// addi r3,r31,1300
	ctx.r3.s64 = ctx.r31.s64 + 1300;
	// stw r11,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r11.u32);
	// lwz r11,1292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1292);
	// stw r11,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r11.u32);
	// lwz r11,1296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	// stw r11,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x82339300;
	sub_82873B58(ctx, base);
	// addi r4,r30,1324
	ctx.r4.s64 = ctx.r30.s64 + 1324;
	// addi r3,r31,1324
	ctx.r3.s64 = ctx.r31.s64 + 1324;
	// bl 0x82873b58
	ctx.lr = 0x8233930C;
	sub_82873B58(ctx, base);
	// lwz r10,1348(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1348);
	// addi r28,r31,1352
	ctx.r28.s64 = ctx.r31.s64 + 1352;
	// addi r27,r30,1352
	ctx.r27.s64 = ctx.r30.s64 + 1352;
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r10,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r10.u32);
	// stw r11,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r11.u32);
	// stw r29,1360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1360, ctx.r29.u32);
	// stw r29,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r29.u32);
	// stw r29,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r29.u32);
	// stw r29,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r29.u32);
	// stw r29,1352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1352, ctx.r29.u32);
	// beq cr6,0x82339388
	if (ctx.cr6.eq) goto loc_82339388;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82339388
	if (!ctx.cr6.gt) goto loc_82339388;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233936c
	if (ctx.cr0.eq) goto loc_8233936C;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x8233936C;
	sub_82332C38(ctx, base);
loc_8233936C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82339380;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_82339388:
	// addi r4,r30,1376
	ctx.r4.s64 = ctx.r30.s64 + 1376;
	// addi r3,r31,1376
	ctx.r3.s64 = ctx.r31.s64 + 1376;
	// bl 0x82873b58
	ctx.lr = 0x82339394;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823393A0"))) PPC_WEAK_FUNC(sub_823393A0);
PPC_FUNC_IMPL(__imp__sub_823393A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x823393A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82337440
	ctx.lr = 0x823393D4;
	sub_82337440(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r10,17280
	ctx.r10.s64 = ctx.r10.s64 + 17280;
	// addi r9,r11,17024
	ctx.r9.s64 = ctx.r11.s64 + 17024;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r28,r30,36
	ctx.r28.s64 = ctx.r30.s64 + 36;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// beq cr6,0x82339464
	if (ctx.cr6.eq) goto loc_82339464;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82339464
	if (!ctx.cr6.gt) goto loc_82339464;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82339448
	if (ctx.cr0.eq) goto loc_82339448;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x82339448;
	sub_82332C38(ctx, base);
loc_82339448:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8233945C;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_82339464:
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r11,r31,172
	ctx.r11.s64 = ctx.r31.s64 + 172;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,15852
	ctx.r9.s64 = ctx.r9.s64 + 15852;
	// addi r4,r30,176
	ctx.r4.s64 = ctx.r30.s64 + 176;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// li r5,28
	ctx.r5.s64 = 28;
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
	// lbz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 100);
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
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
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82339564;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,204
	ctx.r4.s64 = ctx.r30.s64 + 204;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x82873b58
	ctx.lr = 0x82339570;
	sub_82873B58(ctx, base);
	// addi r11,r30,228
	ctx.r11.s64 = ctx.r30.s64 + 228;
	// li r29,6
	ctx.r29.s64 = 6;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// addi r28,r10,228
	ctx.r28.s64 = ctx.r10.s64 + 228;
loc_82339584:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r28,r30
	ctx.r3.u64 = ctx.r28.u64 + ctx.r30.u64;
	// bl 0x82873b58
	ctx.lr = 0x82339590;
	sub_82873B58(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bge 0x82339584
	if (!ctx.cr0.lt) goto loc_82339584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823395A8"))) PPC_WEAK_FUNC(sub_823395A8);
PPC_FUNC_IMPL(__imp__sub_823395A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15812
	ctx.r3.s64 = ctx.r11.s64 + 15812;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823395B8"))) PPC_WEAK_FUNC(sub_823395B8);
PPC_FUNC_IMPL(__imp__sub_823395B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82338858
	sub_82338858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823395C0"))) PPC_WEAK_FUNC(sub_823395C0);
PPC_FUNC_IMPL(__imp__sub_823395C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x823395ec
	if (ctx.cr0.eq) goto loc_823395EC;
	// bl 0x82332db8
	ctx.lr = 0x823395EC;
	sub_82332DB8(ctx, base);
loc_823395EC:
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

__attribute__((alias("__imp__sub_82339608"))) PPC_WEAK_FUNC(sub_82339608);
PPC_FUNC_IMPL(__imp__sub_82339608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82339610;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r11,r11,16956
	ctx.r11.s64 = ctx.r11.s64 + 16956;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// beq cr6,0x823396a0
	if (ctx.cr6.eq) goto loc_823396A0;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823396a0
	if (!ctx.cr6.gt) goto loc_823396A0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82339684
	if (ctx.cr0.eq) goto loc_82339684;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82339684;
	sub_82332C38(ctx, base);
loc_82339684:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82339698;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_823396A0:
	// addi r31,r29,28
	ctx.r31.s64 = ctx.r29.s64 + 28;
	// stw r30,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r30.u32);
	// addi r28,r27,28
	ctx.r28.s64 = ctx.r27.s64 + 28;
	// stw r30,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r30.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r30.u32);
	// stw r30,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r30.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
	// beq cr6,0x82339714
	if (ctx.cr6.eq) goto loc_82339714;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82339714
	if (!ctx.cr6.gt) goto loc_82339714;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823396f8
	if (ctx.cr0.eq) goto loc_823396F8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x823396F8;
	sub_82332C38(ctx, base);
loc_823396F8:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8233970C;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82339714:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x823f6de0
	ctx.lr = 0x82339728;
	sub_823F6DE0(ctx, base);
	// addi r4,r27,60
	ctx.r4.s64 = ctx.r27.s64 + 60;
	// addi r3,r29,60
	ctx.r3.s64 = ctx.r29.s64 + 60;
	// bl 0x823397c0
	ctx.lr = 0x82339734;
	sub_823397C0(ctx, base);
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r11.u32);
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// stw r11,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// stw r11,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82339758"))) PPC_WEAK_FUNC(sub_82339758);
PPC_FUNC_IMPL(__imp__sub_82339758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823398c0
	ctx.lr = 0x82339778;
	sub_823398C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82339788
	if (ctx.cr0.eq) goto loc_82339788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82339788;
	sub_82332DB8(ctx, base);
loc_82339788:
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

__attribute__((alias("__imp__sub_823397A8"))) PPC_WEAK_FUNC(sub_823397A8);
PPC_FUNC_IMPL(__imp__sub_823397A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823397B8"))) PPC_WEAK_FUNC(sub_823397B8);
PPC_FUNC_IMPL(__imp__sub_823397B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82332db8
	sub_82332DB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823397C0"))) PPC_WEAK_FUNC(sub_823397C0);
PPC_FUNC_IMPL(__imp__sub_823397C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82339844
	if (ctx.cr6.eq) goto loc_82339844;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82339844
	if (!ctx.cr6.gt) goto loc_82339844;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8233982c
	if (ctx.cr0.eq) goto loc_8233982C;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332c38
	ctx.lr = 0x8233982C;
	sub_82332C38(ctx, base);
loc_8233982C:
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8233983C;
	sub_82A45878(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82339844:
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

__attribute__((alias("__imp__sub_82339860"))) PPC_WEAK_FUNC(sub_82339860);
PPC_FUNC_IMPL(__imp__sub_82339860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x82339888;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339898
	if (ctx.cr6.eq) goto loc_82339898;
	// bl 0x82332db8
	ctx.lr = 0x82339898;
	sub_82332DB8(ctx, base);
loc_82339898:
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

__attribute__((alias("__imp__sub_823398C0"))) PPC_WEAK_FUNC(sub_823398C0);
PPC_FUNC_IMPL(__imp__sub_823398C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x823398C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r11,16956
	ctx.r11.s64 = ctx.r11.s64 + 16956;
	// addi r28,r30,28
	ctx.r28.s64 = ctx.r30.s64 + 28;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r26.u32);
	// beq cr6,0x82339908
	if (ctx.cr6.eq) goto loc_82339908;
	// stw r26,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82339908;
	sub_82332C38(ctx, base);
loc_82339908:
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
	// bl 0x823f6de0
	ctx.lr = 0x82339918;
	sub_823F6DE0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82339960
	if (ctx.cr0.lt) goto loc_82339960;
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8233992C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r25,r29,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82332ca8
	ctx.lr = 0x8233994C;
	sub_82332CA8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332db8
	ctx.lr = 0x82339954;
	sub_82332DB8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x8233992c
	if (!ctx.cr0.lt) goto loc_8233992C;
loc_82339960:
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x82339860
	ctx.lr = 0x82339968;
	sub_82339860(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8269b988
	ctx.lr = 0x82339970;
	sub_8269B988(ctx, base);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8233998C;
	sub_82332CA8(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233999c
	if (ctx.cr6.eq) goto loc_8233999C;
	// bl 0x82332db8
	ctx.lr = 0x8233999C;
	sub_82332DB8(ctx, base);
loc_8233999C:
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823399B0"))) PPC_WEAK_FUNC(sub_823399B0);
PPC_FUNC_IMPL(__imp__sub_823399B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15828
	ctx.r3.s64 = ctx.r11.s64 + 15828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823399C0"))) PPC_WEAK_FUNC(sub_823399C0);
PPC_FUNC_IMPL(__imp__sub_823399C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82338700
	sub_82338700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823399C8"))) PPC_WEAK_FUNC(sub_823399C8);
PPC_FUNC_IMPL(__imp__sub_823399C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82339a50
	if (ctx.cr6.eq) goto loc_82339A50;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82339a50
	if (!ctx.cr6.gt) goto loc_82339A50;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82339a34
	if (ctx.cr0.eq) goto loc_82339A34;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82332c38
	ctx.lr = 0x82339A34;
	sub_82332C38(ctx, base);
loc_82339A34:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82339A48;
	sub_82A45878(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82339A50:
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

__attribute__((alias("__imp__sub_82339A70"))) PPC_WEAK_FUNC(sub_82339A70);
PPC_FUNC_IMPL(__imp__sub_82339A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15836
	ctx.r3.s64 = ctx.r11.s64 + 15836;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339A80"))) PPC_WEAK_FUNC(sub_82339A80);
PPC_FUNC_IMPL(__imp__sub_82339A80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823386a0
	sub_823386A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82339A88"))) PPC_WEAK_FUNC(sub_82339A88);
PPC_FUNC_IMPL(__imp__sub_82339A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27988(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27988);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82339ac8
	if (!ctx.cr0.eq) goto loc_82339AC8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27988, ctx.r11.u32);
	// addi r3,r9,15836
	ctx.r3.s64 = ctx.r9.s64 + 15836;
	// bl 0x82816528
	ctx.lr = 0x82339AC0;
	sub_82816528(ctx, base);
	// stw r3,-27992(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27992, ctx.r3.u32);
	// b 0x82339acc
	goto loc_82339ACC;
loc_82339AC8:
	// lwz r3,-27992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27992);
loc_82339ACC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339AE0"))) PPC_WEAK_FUNC(sub_82339AE0);
PPC_FUNC_IMPL(__imp__sub_82339AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823385d0
	ctx.lr = 0x82339B00;
	sub_823385D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82339B14;
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

__attribute__((alias("__imp__sub_82339B30"))) PPC_WEAK_FUNC(sub_82339B30);
PPC_FUNC_IMPL(__imp__sub_82339B30) {
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
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82339B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82339B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339B70"))) PPC_WEAK_FUNC(sub_82339B70);
PPC_FUNC_IMPL(__imp__sub_82339B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82339B78;
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
	// beq cr6,0x82339bd4
	if (ctx.cr6.eq) goto loc_82339BD4;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32424
	ctx.r31.s64 = ctx.r11.s64 + -32424;
	// lwz r11,-32420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32420);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82339bc4
	if (!ctx.cr0.eq) goto loc_82339BC4;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,17432
	ctx.r9.s64 = ctx.r9.s64 + 17432;
	// stw r11,-32420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32420, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30032
	ctx.r3.s64 = ctx.r11.s64 + -30032;
	// bl 0x82a4c758
	ctx.lr = 0x82339BC4;
	sub_82A4C758(ctx, base);
loc_82339BC4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82339bd4
	if (!ctx.cr6.eq) goto loc_82339BD4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82339be0
	goto loc_82339BE0;
loc_82339BD4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x82339BE0;
	sub_82339EE8(ctx, base);
loc_82339BE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82339BE8"))) PPC_WEAK_FUNC(sub_82339BE8);
PPC_FUNC_IMPL(__imp__sub_82339BE8) {
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
	ctx.lr = 0x82339BFC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82339c1c
	if (ctx.cr0.eq) goto loc_82339C1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,17392
	ctx.r11.s64 = ctx.r10.s64 + 17392;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82339c20
	goto loc_82339C20;
loc_82339C1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82339C20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339C30"))) PPC_WEAK_FUNC(sub_82339C30);
PPC_FUNC_IMPL(__imp__sub_82339C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82339c5c
	if (ctx.cr6.eq) goto loc_82339C5C;
	// bl 0x82339c78
	ctx.lr = 0x82339C50;
	sub_82339C78(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82339c60
	if (ctx.cr6.eq) goto loc_82339C60;
loc_82339C5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82339C60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339C78"))) PPC_WEAK_FUNC(sub_82339C78);
PPC_FUNC_IMPL(__imp__sub_82339C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32408
	ctx.r31.s64 = ctx.r11.s64 + -32408;
	// lwz r11,-32404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32404);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82339cc0
	if (!ctx.cr0.eq) goto loc_82339CC0;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,17004
	ctx.r9.s64 = ctx.r9.s64 + 17004;
	// stw r11,-32404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32404, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30080
	ctx.r3.s64 = ctx.r11.s64 + -30080;
	// bl 0x82a4c758
	ctx.lr = 0x82339CC0;
	sub_82A4C758(ctx, base);
loc_82339CC0:
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

__attribute__((alias("__imp__sub_82339CD8"))) PPC_WEAK_FUNC(sub_82339CD8);
PPC_FUNC_IMPL(__imp__sub_82339CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// lwz r3,-32384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32384);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82339d20
	if (!ctx.cr6.eq) goto loc_82339D20;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,856
	ctx.r3.s64 = ctx.r10.s64 + 856;
	// bl 0x82a4c7d8
	ctx.lr = 0x82339D0C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82339D14;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82339D1C;
	sub_82816528(ctx, base);
	// stw r3,-32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32384, ctx.r3.u32);
loc_82339D20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339D38"))) PPC_WEAK_FUNC(sub_82339D38);
PPC_FUNC_IMPL(__imp__sub_82339D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82339c78
	ctx.lr = 0x82339D58;
	sub_82339C78(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82339d68
	if (ctx.cr6.eq) goto loc_82339D68;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82339D68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339D80"))) PPC_WEAK_FUNC(sub_82339D80);
PPC_FUNC_IMPL(__imp__sub_82339D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82339de0
	ctx.lr = 0x82339DA0;
	sub_82339DE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82339db0
	if (!ctx.cr6.eq) goto loc_82339DB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82339dc4
	goto loc_82339DC4;
loc_82339DB0:
	// bl 0x82339c78
	ctx.lr = 0x82339DB4;
	sub_82339C78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82339dc4
	if (ctx.cr6.eq) goto loc_82339DC4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82339DC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339DE0"))) PPC_WEAK_FUNC(sub_82339DE0);
PPC_FUNC_IMPL(__imp__sub_82339DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32432
	ctx.r31.s64 = ctx.r11.s64 + -32432;
	// lwz r11,-32428(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32428);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82339e28
	if (!ctx.cr0.eq) goto loc_82339E28;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,17372
	ctx.r9.s64 = ctx.r9.s64 + 17372;
	// stw r11,-32428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32428, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30056
	ctx.r3.s64 = ctx.r11.s64 + -30056;
	// bl 0x82a4c758
	ctx.lr = 0x82339E28;
	sub_82A4C758(ctx, base);
loc_82339E28:
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

__attribute__((alias("__imp__sub_82339E40"))) PPC_WEAK_FUNC(sub_82339E40);
PPC_FUNC_IMPL(__imp__sub_82339E40) {
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
	ctx.lr = 0x82339E54;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82339e74
	if (ctx.cr0.eq) goto loc_82339E74;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,15864
	ctx.r11.s64 = ctx.r10.s64 + 15864;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82339e78
	goto loc_82339E78;
loc_82339E74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82339E78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339E88"))) PPC_WEAK_FUNC(sub_82339E88);
PPC_FUNC_IMPL(__imp__sub_82339E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// lwz r3,-32380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32380);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82339ed0
	if (!ctx.cr6.eq) goto loc_82339ED0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,880
	ctx.r3.s64 = ctx.r10.s64 + 880;
	// bl 0x82a4c7d8
	ctx.lr = 0x82339EBC;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82339EC4;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82339ECC;
	sub_82816528(ctx, base);
	// stw r3,-32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32380, ctx.r3.u32);
loc_82339ED0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339EE8"))) PPC_WEAK_FUNC(sub_82339EE8);
PPC_FUNC_IMPL(__imp__sub_82339EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82339f28
	if (ctx.cr6.eq) goto loc_82339F28;
	// bl 0x82339de0
	ctx.lr = 0x82339F08;
	sub_82339DE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82339f18
	if (!ctx.cr6.eq) goto loc_82339F18;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82339f2c
	goto loc_82339F2C;
loc_82339F18:
	// bl 0x82339c78
	ctx.lr = 0x82339F1C;
	sub_82339C78(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82339f2c
	if (ctx.cr6.eq) goto loc_82339F2C;
loc_82339F28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82339F2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339F40"))) PPC_WEAK_FUNC(sub_82339F40);
PPC_FUNC_IMPL(__imp__sub_82339F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82339F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-32424
	ctx.r31.s64 = ctx.r11.s64 + -32424;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-32420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32420);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82339f8c
	if (!ctx.cr0.eq) goto loc_82339F8C;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,17432
	ctx.r9.s64 = ctx.r9.s64 + 17432;
	// stw r11,-32420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32420, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30032
	ctx.r3.s64 = ctx.r11.s64 + -30032;
	// bl 0x82a4c758
	ctx.lr = 0x82339F8C;
	sub_82A4C758(ctx, base);
loc_82339F8C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82339fa0
	if (ctx.cr6.eq) goto loc_82339FA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x82339FA0;
	sub_82339D80(ctx, base);
loc_82339FA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82339FA8"))) PPC_WEAK_FUNC(sub_82339FA8);
PPC_FUNC_IMPL(__imp__sub_82339FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32416
	ctx.r31.s64 = ctx.r11.s64 + -32416;
	// lwz r11,-32412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32412);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82339ff0
	if (!ctx.cr0.eq) goto loc_82339FF0;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,17432
	ctx.r9.s64 = ctx.r9.s64 + 17432;
	// stw r11,-32412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32412, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30008
	ctx.r3.s64 = ctx.r11.s64 + -30008;
	// bl 0x82a4c758
	ctx.lr = 0x82339FF0;
	sub_82A4C758(ctx, base);
loc_82339FF0:
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

__attribute__((alias("__imp__sub_8233A008"))) PPC_WEAK_FUNC(sub_8233A008);
PPC_FUNC_IMPL(__imp__sub_8233A008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// lwz r3,-32376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233a050
	if (!ctx.cr6.eq) goto loc_8233A050;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,920
	ctx.r3.s64 = ctx.r10.s64 + 920;
	// bl 0x82a4c7d8
	ctx.lr = 0x8233A03C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8233A044;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8233A04C;
	sub_82816528(ctx, base);
	// stw r3,-32376(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32376, ctx.r3.u32);
loc_8233A050:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A068"))) PPC_WEAK_FUNC(sub_8233A068);
PPC_FUNC_IMPL(__imp__sub_8233A068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8233A070;
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
	// beq cr6,0x8233a0cc
	if (ctx.cr6.eq) goto loc_8233A0CC;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32440
	ctx.r31.s64 = ctx.r11.s64 + -32440;
	// lwz r11,-32436(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32436);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8233a0bc
	if (!ctx.cr0.eq) goto loc_8233A0BC;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,18576
	ctx.r9.s64 = ctx.r9.s64 + 18576;
	// stw r11,-32436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32436, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-29984
	ctx.r3.s64 = ctx.r11.s64 + -29984;
	// bl 0x82a4c758
	ctx.lr = 0x8233A0BC;
	sub_82A4C758(ctx, base);
loc_8233A0BC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8233a0cc
	if (!ctx.cr6.eq) goto loc_8233A0CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233a0d8
	goto loc_8233A0D8;
loc_8233A0CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339b70
	ctx.lr = 0x8233A0D8;
	sub_82339B70(ctx, base);
loc_8233A0D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A0E0"))) PPC_WEAK_FUNC(sub_8233A0E0);
PPC_FUNC_IMPL(__imp__sub_8233A0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8233A0E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-32440
	ctx.r31.s64 = ctx.r11.s64 + -32440;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-32436(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32436);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8233a12c
	if (!ctx.cr0.eq) goto loc_8233A12C;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,18576
	ctx.r9.s64 = ctx.r9.s64 + 18576;
	// stw r11,-32436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32436, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-29984
	ctx.r3.s64 = ctx.r11.s64 + -29984;
	// bl 0x82a4c758
	ctx.lr = 0x8233A12C;
	sub_82A4C758(ctx, base);
loc_8233A12C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8233a140
	if (ctx.cr6.eq) goto loc_8233A140;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339f40
	ctx.lr = 0x8233A140;
	sub_82339F40(ctx, base);
loc_8233A140:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A148"))) PPC_WEAK_FUNC(sub_8233A148);
PPC_FUNC_IMPL(__imp__sub_8233A148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32448
	ctx.r31.s64 = ctx.r11.s64 + -32448;
	// lwz r11,-32444(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8233a190
	if (!ctx.cr0.eq) goto loc_8233A190;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,18576
	ctx.r9.s64 = ctx.r9.s64 + 18576;
	// stw r11,-32444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32444, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-29960
	ctx.r3.s64 = ctx.r11.s64 + -29960;
	// bl 0x82a4c758
	ctx.lr = 0x8233A190;
	sub_82A4C758(ctx, base);
loc_8233A190:
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

__attribute__((alias("__imp__sub_8233A1A8"))) PPC_WEAK_FUNC(sub_8233A1A8);
PPC_FUNC_IMPL(__imp__sub_8233A1A8) {
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
	ctx.lr = 0x8233A1BC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233a1e4
	if (ctx.cr0.eq) goto loc_8233A1E4;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18536
	ctx.r11.s64 = ctx.r11.s64 + 18536;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8233a1e8
	goto loc_8233A1E8;
loc_8233A1E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233A1E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A1F8"))) PPC_WEAK_FUNC(sub_8233A1F8);
PPC_FUNC_IMPL(__imp__sub_8233A1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// lwz r3,-32372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233a240
	if (!ctx.cr6.eq) goto loc_8233A240;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,948
	ctx.r3.s64 = ctx.r10.s64 + 948;
	// bl 0x82a4c7d8
	ctx.lr = 0x8233A22C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8233A234;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8233A23C;
	sub_82816528(ctx, base);
	// stw r3,-32372(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32372, ctx.r3.u32);
loc_8233A240:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A258"))) PPC_WEAK_FUNC(sub_8233A258);
PPC_FUNC_IMPL(__imp__sub_8233A258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233a2a8
	if (ctx.cr6.eq) goto loc_8233A2A8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8233A284:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233a284
	if (!ctx.cr6.eq) goto loc_8233A284;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// b 0x8233a2ac
	goto loc_8233A2AC;
loc_8233A2A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8233A2AC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333858
	ctx.lr = 0x8233A2BC;
	sub_82333858(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233a308
	if (ctx.cr6.eq) goto loc_8233A308;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a328
	ctx.lr = 0x8233A2D4;
	sub_8233A328(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,256(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// bl 0x82a45878
	ctx.lr = 0x8233A2EC;
	sub_82A45878(ctx, base);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8233a308
	if (ctx.cr6.eq) goto loc_8233A308;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a308
	if (ctx.cr6.eq) goto loc_8233A308;
	// bl 0x82332db8
	ctx.lr = 0x8233A308;
	sub_82332DB8(ctx, base);
loc_8233A308:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A328"))) PPC_WEAK_FUNC(sub_8233A328);
PPC_FUNC_IMPL(__imp__sub_8233A328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8233A330;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233a3bc
	if (ctx.cr6.eq) goto loc_8233A3BC;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8233A34C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233a34c
	if (!ctx.cr6.eq) goto loc_8233A34C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// ble cr6,0x8233a398
	if (!ctx.cr6.gt) goto loc_8233A398;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8233a390
	if (!ctx.cr6.gt) goto loc_8233A390;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8233A390:
	// bl 0x82333900
	ctx.lr = 0x8233A394;
	sub_82333900(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8233A398:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a45b58
	ctx.lr = 0x8233A3B4;
	sub_82A45B58(ctx, base);
	// stw r29,256(r28)
	PPC_STORE_U32(ctx.r28.u32 + 256, ctx.r29.u32);
	// b 0x8233a3c4
	goto loc_8233A3C4;
loc_8233A3BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,256(r28)
	PPC_STORE_U32(ctx.r28.u32 + 256, ctx.r11.u32);
loc_8233A3C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A3D0"))) PPC_WEAK_FUNC(sub_8233A3D0);
PPC_FUNC_IMPL(__imp__sub_8233A3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,18596
	ctx.r3.s64 = ctx.r11.s64 + 18596;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A3E0"))) PPC_WEAK_FUNC(sub_8233A3E0);
PPC_FUNC_IMPL(__imp__sub_8233A3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233a418
	if (ctx.cr6.eq) goto loc_8233A418;
	// bl 0x82392a10
	ctx.lr = 0x8233A408;
	sub_82392A10(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8233a418
	if (!ctx.cr6.eq) goto loc_8233A418;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233a430
	goto loc_8233A430;
loc_8233A418:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82404790
	ctx.lr = 0x8233A430;
	sub_82404790(ctx, base);
loc_8233A430:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A448"))) PPC_WEAK_FUNC(sub_8233A448);
PPC_FUNC_IMPL(__imp__sub_8233A448) {
	PPC_FUNC_PROLOGUE();
	// b 0x82392a10
	sub_82392A10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A450"))) PPC_WEAK_FUNC(sub_8233A450);
PPC_FUNC_IMPL(__imp__sub_8233A450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82833108
	ctx.lr = 0x8233A46C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233a484
	if (ctx.cr0.eq) goto loc_8233A484;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x8233a510
	ctx.lr = 0x8233A480;
	sub_8233A510(ctx, base);
	// b 0x8233a488
	goto loc_8233A488;
loc_8233A484:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233A488:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a49c
	if (ctx.cr6.eq) goto loc_8233A49C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8233A49C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A4B0"))) PPC_WEAK_FUNC(sub_8233A4B0);
PPC_FUNC_IMPL(__imp__sub_8233A4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82392a10
	ctx.lr = 0x8233A4D0;
	sub_82392A10(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8233a4e0
	if (!ctx.cr6.eq) goto loc_8233A4E0;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// b 0x8233a4f8
	goto loc_8233A4F8;
loc_8233A4E0:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x824045d0
	ctx.lr = 0x8233A4F8;
	sub_824045D0(ctx, base);
loc_8233A4F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A510"))) PPC_WEAK_FUNC(sub_8233A510);
PPC_FUNC_IMPL(__imp__sub_8233A510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8233A518;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-27468
	ctx.r11.s64 = ctx.r11.s64 + -27468;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// addi r11,r8,22500
	ctx.r11.s64 = ctx.r8.s64 + 22500;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bne cr6,0x8233a568
	if (!ctx.cr6.eq) goto loc_8233A568;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8233a574
	goto loc_8233A574;
loc_8233A568:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8233A574:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82404518
	ctx.lr = 0x8233A57C;
	sub_82404518(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233a58c
	if (!ctx.cr6.eq) goto loc_8233A58C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8233a598
	goto loc_8233A598;
loc_8233A58C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8233A598:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82404460
	ctx.lr = 0x8233A5A4;
	sub_82404460(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233a5b4
	if (!ctx.cr6.eq) goto loc_8233A5B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8233a5c0
	goto loc_8233A5C0;
loc_8233A5B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8233A5C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82404350
	ctx.lr = 0x8233A5CC;
	sub_82404350(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233a5dc
	if (!ctx.cr6.eq) goto loc_8233A5DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8233a5e8
	goto loc_8233A5E8;
loc_8233A5DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8233A5E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82404100
	ctx.lr = 0x8233A5F4;
	sub_82404100(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,25584
	ctx.r11.s64 = ctx.r11.s64 + 25584;
	// addi r10,r10,25760
	ctx.r10.s64 = ctx.r10.s64 + 25760;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r9,r9,-22744
	ctx.r9.s64 = ctx.r9.s64 + -22744;
	// addi r8,r8,31532
	ctx.r8.s64 = ctx.r8.s64 + 31532;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r7,-23712
	ctx.r7.s64 = ctx.r7.s64 + -23712;
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A688"))) PPC_WEAK_FUNC(sub_8233A688);
PPC_FUNC_IMPL(__imp__sub_8233A688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,18636
	ctx.r3.s64 = ctx.r11.s64 + 18636;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A698"))) PPC_WEAK_FUNC(sub_8233A698);
PPC_FUNC_IMPL(__imp__sub_8233A698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233a6d0
	if (ctx.cr6.eq) goto loc_8233A6D0;
	// bl 0x82392b70
	ctx.lr = 0x8233A6C0;
	sub_82392B70(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8233a6d0
	if (!ctx.cr6.eq) goto loc_8233A6D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233a6e8
	goto loc_8233A6E8;
loc_8233A6D0:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82400ed0
	ctx.lr = 0x8233A6E8;
	sub_82400ED0(ctx, base);
loc_8233A6E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A700"))) PPC_WEAK_FUNC(sub_8233A700);
PPC_FUNC_IMPL(__imp__sub_8233A700) {
	PPC_FUNC_PROLOGUE();
	// b 0x82392b70
	sub_82392B70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A708"))) PPC_WEAK_FUNC(sub_8233A708);
PPC_FUNC_IMPL(__imp__sub_8233A708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82833108
	ctx.lr = 0x8233A724;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233a73c
	if (ctx.cr0.eq) goto loc_8233A73C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x8233a7d0
	ctx.lr = 0x8233A738;
	sub_8233A7D0(ctx, base);
	// b 0x8233a740
	goto loc_8233A740;
loc_8233A73C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233A740:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a758
	if (ctx.cr6.eq) goto loc_8233A758;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233A758:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A770"))) PPC_WEAK_FUNC(sub_8233A770);
PPC_FUNC_IMPL(__imp__sub_8233A770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82392b70
	ctx.lr = 0x8233A790;
	sub_82392B70(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8233a7a0
	if (!ctx.cr6.eq) goto loc_8233A7A0;
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// b 0x8233a7b8
	goto loc_8233A7B8;
loc_8233A7A0:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82400d08
	ctx.lr = 0x8233A7B8;
	sub_82400D08(ctx, base);
loc_8233A7B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A7D0"))) PPC_WEAK_FUNC(sub_8233A7D0);
PPC_FUNC_IMPL(__imp__sub_8233A7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233a89c
	if (ctx.cr6.eq) goto loc_8233A89C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,29708
	ctx.r11.s64 = ctx.r11.s64 + 29708;
	// addi r10,r10,-6368
	ctx.r10.s64 = ctx.r10.s64 + -6368;
	// addi r9,r9,10412
	ctx.r9.s64 = ctx.r9.s64 + 10412;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// bne cr6,0x8233a82c
	if (!ctx.cr6.eq) goto loc_8233A82C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233a83c
	goto loc_8233A83C;
loc_8233A82C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233A83C:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82404518
	ctx.lr = 0x8233A844;
	sub_82404518(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233a854
	if (!ctx.cr6.eq) goto loc_8233A854;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233a864
	goto loc_8233A864;
loc_8233A854:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233A864:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82404460
	ctx.lr = 0x8233A870;
	sub_82404460(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233a880
	if (!ctx.cr6.eq) goto loc_8233A880;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233a890
	goto loc_8233A890;
loc_8233A880:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233A890:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82400bf8
	ctx.lr = 0x8233A89C;
	sub_82400BF8(ctx, base);
loc_8233A89C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,-16484
	ctx.r11.s64 = ctx.r11.s64 + -16484;
	// addi r9,r9,29480
	ctx.r9.s64 = ctx.r9.s64 + 29480;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r8,29656
	ctx.r10.s64 = ctx.r8.s64 + 29656;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r9,r9,29976
	ctx.r9.s64 = ctx.r9.s64 + 29976;
	// addi r8,r8,-14708
	ctx.r8.s64 = ctx.r8.s64 + -14708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A930"))) PPC_WEAK_FUNC(sub_8233A930);
PPC_FUNC_IMPL(__imp__sub_8233A930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,18668
	ctx.r3.s64 = ctx.r11.s64 + 18668;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A940"))) PPC_WEAK_FUNC(sub_8233A940);
PPC_FUNC_IMPL(__imp__sub_8233A940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233a978
	if (ctx.cr6.eq) goto loc_8233A978;
	// bl 0x82392cc8
	ctx.lr = 0x8233A968;
	sub_82392CC8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8233a978
	if (!ctx.cr6.eq) goto loc_8233A978;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233a990
	goto loc_8233A990;
loc_8233A978:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8233a698
	ctx.lr = 0x8233A990;
	sub_8233A698(ctx, base);
loc_8233A990:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A9A8"))) PPC_WEAK_FUNC(sub_8233A9A8);
PPC_FUNC_IMPL(__imp__sub_8233A9A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82392cc8
	sub_82392CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A9B0"))) PPC_WEAK_FUNC(sub_8233A9B0);
PPC_FUNC_IMPL(__imp__sub_8233A9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82833108
	ctx.lr = 0x8233A9CC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233a9e4
	if (ctx.cr0.eq) goto loc_8233A9E4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x8233aa70
	ctx.lr = 0x8233A9E0;
	sub_8233AA70(ctx, base);
	// b 0x8233a9e8
	goto loc_8233A9E8;
loc_8233A9E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233A9E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a9fc
	if (ctx.cr6.eq) goto loc_8233A9FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8233A9FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233AA10"))) PPC_WEAK_FUNC(sub_8233AA10);
PPC_FUNC_IMPL(__imp__sub_8233AA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82392cc8
	ctx.lr = 0x8233AA30;
	sub_82392CC8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8233aa40
	if (!ctx.cr6.eq) goto loc_8233AA40;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// b 0x8233aa58
	goto loc_8233AA58;
loc_8233AA40:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8233a770
	ctx.lr = 0x8233AA58;
	sub_8233A770(ctx, base);
loc_8233AA58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233AA70"))) PPC_WEAK_FUNC(sub_8233AA70);
PPC_FUNC_IMPL(__imp__sub_8233AA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233ab64
	if (ctx.cr6.eq) goto loc_8233AB64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,30044
	ctx.r11.s64 = ctx.r11.s64 + 30044;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-6368
	ctx.r10.s64 = ctx.r10.s64 + -6368;
	// addi r9,r9,10412
	ctx.r9.s64 = ctx.r9.s64 + 10412;
	// addi r11,r8,-10732
	ctx.r11.s64 = ctx.r8.s64 + -10732;
	// stw r10,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r10.u32);
	// stw r9,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// bne cr6,0x8233aad8
	if (!ctx.cr6.eq) goto loc_8233AAD8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233aae4
	goto loc_8233AAE4;
loc_8233AAD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8233AAE4:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82404518
	ctx.lr = 0x8233AAEC;
	sub_82404518(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8233aafc
	if (!ctx.cr6.eq) goto loc_8233AAFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233ab08
	goto loc_8233AB08;
loc_8233AAFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8233AB08:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82404460
	ctx.lr = 0x8233AB14;
	sub_82404460(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8233ab24
	if (!ctx.cr6.eq) goto loc_8233AB24;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233ab30
	goto loc_8233AB30;
loc_8233AB24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8233AB30:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,76
	ctx.r3.s64 = ctx.r30.s64 + 76;
	// bl 0x82400bf8
	ctx.lr = 0x8233AB3C;
	sub_82400BF8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8233ab4c
	if (!ctx.cr6.eq) goto loc_8233AB4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233ab58
	goto loc_8233AB58;
loc_8233AB4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8233AB58:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// bl 0x8233a7d0
	ctx.lr = 0x8233AB64;
	sub_8233A7D0(ctx, base);
loc_8233AB64:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r10,r10,29744
	ctx.r10.s64 = ctx.r10.s64 + 29744;
	// addi r9,r9,29920
	ctx.r9.s64 = ctx.r9.s64 + 29920;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r8,r8,29976
	ctx.r8.s64 = ctx.r8.s64 + 29976;
	// addi r7,r7,-14708
	ctx.r7.s64 = ctx.r7.s64 + -14708;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r10,r6,-16484
	ctx.r10.s64 = ctx.r6.s64 + -16484;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r8.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r7,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r7.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233ABE8"))) PPC_WEAK_FUNC(sub_8233ABE8);
PPC_FUNC_IMPL(__imp__sub_8233ABE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,18720
	ctx.r3.s64 = ctx.r11.s64 + 18720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233ABF8"))) PPC_WEAK_FUNC(sub_8233ABF8);
PPC_FUNC_IMPL(__imp__sub_8233ABF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233ac30
	if (ctx.cr6.eq) goto loc_8233AC30;
	// bl 0x82392f68
	ctx.lr = 0x8233AC20;
	sub_82392F68(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8233ac30
	if (!ctx.cr6.eq) goto loc_8233AC30;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233ac48
	goto loc_8233AC48;
loc_8233AC30:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82400920
	ctx.lr = 0x8233AC48;
	sub_82400920(ctx, base);
loc_8233AC48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233AC60"))) PPC_WEAK_FUNC(sub_8233AC60);
PPC_FUNC_IMPL(__imp__sub_8233AC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82833108
	ctx.lr = 0x8233AC7C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233ac94
	if (ctx.cr0.eq) goto loc_8233AC94;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x8233b258
	ctx.lr = 0x8233AC90;
	sub_8233B258(ctx, base);
	// b 0x8233ac98
	goto loc_8233AC98;
loc_8233AC94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233AC98:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233acb0
	if (ctx.cr6.eq) goto loc_8233ACB0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233ACB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233ACC8"))) PPC_WEAK_FUNC(sub_8233ACC8);
PPC_FUNC_IMPL(__imp__sub_8233ACC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82392f68
	ctx.lr = 0x8233ACE8;
	sub_82392F68(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8233acf8
	if (!ctx.cr6.eq) goto loc_8233ACF8;
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// b 0x8233ad10
	goto loc_8233AD10;
loc_8233ACF8:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82400750
	ctx.lr = 0x8233AD10;
	sub_82400750(ctx, base);
loc_8233AD10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233AD28"))) PPC_WEAK_FUNC(sub_8233AD28);
PPC_FUNC_IMPL(__imp__sub_8233AD28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AD40"))) PPC_WEAK_FUNC(sub_8233AD40);
PPC_FUNC_IMPL(__imp__sub_8233AD40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AD58"))) PPC_WEAK_FUNC(sub_8233AD58);
PPC_FUNC_IMPL(__imp__sub_8233AD58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2500);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AD70"))) PPC_WEAK_FUNC(sub_8233AD70);
PPC_FUNC_IMPL(__imp__sub_8233AD70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2504);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AD88"))) PPC_WEAK_FUNC(sub_8233AD88);
PPC_FUNC_IMPL(__imp__sub_8233AD88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233ADA0"))) PPC_WEAK_FUNC(sub_8233ADA0);
PPC_FUNC_IMPL(__imp__sub_8233ADA0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233ADCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233ADE0"))) PPC_WEAK_FUNC(sub_8233ADE0);
PPC_FUNC_IMPL(__imp__sub_8233ADE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2512);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233ADF8"))) PPC_WEAK_FUNC(sub_8233ADF8);
PPC_FUNC_IMPL(__imp__sub_8233ADF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -68);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AE10"))) PPC_WEAK_FUNC(sub_8233AE10);
PPC_FUNC_IMPL(__imp__sub_8233AE10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2516);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AE28"))) PPC_WEAK_FUNC(sub_8233AE28);
PPC_FUNC_IMPL(__imp__sub_8233AE28) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233AE54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233AE68"))) PPC_WEAK_FUNC(sub_8233AE68);
PPC_FUNC_IMPL(__imp__sub_8233AE68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2532);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AE80"))) PPC_WEAK_FUNC(sub_8233AE80);
PPC_FUNC_IMPL(__imp__sub_8233AE80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2524);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AE98"))) PPC_WEAK_FUNC(sub_8233AE98);
PPC_FUNC_IMPL(__imp__sub_8233AE98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2528);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AEB0"))) PPC_WEAK_FUNC(sub_8233AEB0);
PPC_FUNC_IMPL(__imp__sub_8233AEB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2536);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AEC8"))) PPC_WEAK_FUNC(sub_8233AEC8);
PPC_FUNC_IMPL(__imp__sub_8233AEC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2540);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AEE0"))) PPC_WEAK_FUNC(sub_8233AEE0);
PPC_FUNC_IMPL(__imp__sub_8233AEE0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2544);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233AF0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233AF20"))) PPC_WEAK_FUNC(sub_8233AF20);
PPC_FUNC_IMPL(__imp__sub_8233AF20) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233AF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233AF60"))) PPC_WEAK_FUNC(sub_8233AF60);
PPC_FUNC_IMPL(__imp__sub_8233AF60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AF78"))) PPC_WEAK_FUNC(sub_8233AF78);
PPC_FUNC_IMPL(__imp__sub_8233AF78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AF90"))) PPC_WEAK_FUNC(sub_8233AF90);
PPC_FUNC_IMPL(__imp__sub_8233AF90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AFA8"))) PPC_WEAK_FUNC(sub_8233AFA8);
PPC_FUNC_IMPL(__imp__sub_8233AFA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2568);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AFC0"))) PPC_WEAK_FUNC(sub_8233AFC0);
PPC_FUNC_IMPL(__imp__sub_8233AFC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AFD8"))) PPC_WEAK_FUNC(sub_8233AFD8);
PPC_FUNC_IMPL(__imp__sub_8233AFD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233AFF0"))) PPC_WEAK_FUNC(sub_8233AFF0);
PPC_FUNC_IMPL(__imp__sub_8233AFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,2576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233B018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8233B030"))) PPC_WEAK_FUNC(sub_8233B030);
PPC_FUNC_IMPL(__imp__sub_8233B030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,2580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2580);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233B064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8233B080"))) PPC_WEAK_FUNC(sub_8233B080);
PPC_FUNC_IMPL(__imp__sub_8233B080) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2584);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233B0AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B0C0"))) PPC_WEAK_FUNC(sub_8233B0C0);
PPC_FUNC_IMPL(__imp__sub_8233B0C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B0D8"))) PPC_WEAK_FUNC(sub_8233B0D8);
PPC_FUNC_IMPL(__imp__sub_8233B0D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2592);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B0F0"))) PPC_WEAK_FUNC(sub_8233B0F0);
PPC_FUNC_IMPL(__imp__sub_8233B0F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2596);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B108"))) PPC_WEAK_FUNC(sub_8233B108);
PPC_FUNC_IMPL(__imp__sub_8233B108) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B120"))) PPC_WEAK_FUNC(sub_8233B120);
PPC_FUNC_IMPL(__imp__sub_8233B120) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B138"))) PPC_WEAK_FUNC(sub_8233B138);
PPC_FUNC_IMPL(__imp__sub_8233B138) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2608);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B150"))) PPC_WEAK_FUNC(sub_8233B150);
PPC_FUNC_IMPL(__imp__sub_8233B150) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2612);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B168"))) PPC_WEAK_FUNC(sub_8233B168);
PPC_FUNC_IMPL(__imp__sub_8233B168) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2616);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B180"))) PPC_WEAK_FUNC(sub_8233B180);
PPC_FUNC_IMPL(__imp__sub_8233B180) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2620);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B198"))) PPC_WEAK_FUNC(sub_8233B198);
PPC_FUNC_IMPL(__imp__sub_8233B198) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B1B0"))) PPC_WEAK_FUNC(sub_8233B1B0);
PPC_FUNC_IMPL(__imp__sub_8233B1B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2628);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B1C8"))) PPC_WEAK_FUNC(sub_8233B1C8);
PPC_FUNC_IMPL(__imp__sub_8233B1C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2632);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B1E0"))) PPC_WEAK_FUNC(sub_8233B1E0);
PPC_FUNC_IMPL(__imp__sub_8233B1E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B1F8"))) PPC_WEAK_FUNC(sub_8233B1F8);
PPC_FUNC_IMPL(__imp__sub_8233B1F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2640);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B210"))) PPC_WEAK_FUNC(sub_8233B210);
PPC_FUNC_IMPL(__imp__sub_8233B210) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2644);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B228"))) PPC_WEAK_FUNC(sub_8233B228);
PPC_FUNC_IMPL(__imp__sub_8233B228) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B240"))) PPC_WEAK_FUNC(sub_8233B240);
PPC_FUNC_IMPL(__imp__sub_8233B240) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2648);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233B258"))) PPC_WEAK_FUNC(sub_8233B258);
PPC_FUNC_IMPL(__imp__sub_8233B258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233b2ec
	if (ctx.cr6.eq) goto loc_8233B2EC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,30380
	ctx.r11.s64 = ctx.r11.s64 + 30380;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bne cr6,0x8233b2a8
	if (!ctx.cr6.eq) goto loc_8233B2A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233b2b8
	goto loc_8233B2B8;
loc_8233B2A8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233B2B8:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x824006f0
	ctx.lr = 0x8233B2C0;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233b2d0
	if (!ctx.cr6.eq) goto loc_8233B2D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233b2e0
	goto loc_8233B2E0;
loc_8233B2D0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233B2E0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82400638
	ctx.lr = 0x8233B2EC;
	sub_82400638(ctx, base);
loc_8233B2EC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,-31216
	ctx.r11.s64 = ctx.r11.s64 + -31216;
	// addi r9,r9,30104
	ctx.r9.s64 = ctx.r9.s64 + 30104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r8,30300
	ctx.r10.s64 = ctx.r8.s64 + 30300;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,30352
	ctx.r9.s64 = ctx.r9.s64 + 30352;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B368"))) PPC_WEAK_FUNC(sub_8233B368);
PPC_FUNC_IMPL(__imp__sub_8233B368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,18744
	ctx.r3.s64 = ctx.r11.s64 + 18744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B378"))) PPC_WEAK_FUNC(sub_8233B378);
PPC_FUNC_IMPL(__imp__sub_8233B378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233b3b0
	if (ctx.cr6.eq) goto loc_8233B3B0;
	// bl 0x823930c8
	ctx.lr = 0x8233B3A0;
	sub_823930C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233b3b0
	if (!ctx.cr6.eq) goto loc_8233B3B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233b3bc
	goto loc_8233B3BC;
loc_8233B3B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233abf8
	ctx.lr = 0x8233B3BC;
	sub_8233ABF8(ctx, base);
loc_8233B3BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B3D8"))) PPC_WEAK_FUNC(sub_8233B3D8);
PPC_FUNC_IMPL(__imp__sub_8233B3D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823930c8
	sub_823930C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233B3E0"))) PPC_WEAK_FUNC(sub_8233B3E0);
PPC_FUNC_IMPL(__imp__sub_8233B3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82833108
	ctx.lr = 0x8233B3FC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233b414
	if (ctx.cr0.eq) goto loc_8233B414;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x8233b4a0
	ctx.lr = 0x8233B410;
	sub_8233B4A0(ctx, base);
	// b 0x8233b418
	goto loc_8233B418;
loc_8233B414:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233B418:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233b430
	if (ctx.cr6.eq) goto loc_8233B430;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233B430:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B448"))) PPC_WEAK_FUNC(sub_8233B448);
PPC_FUNC_IMPL(__imp__sub_8233B448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823930c8
	ctx.lr = 0x8233B468;
	sub_823930C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233b478
	if (!ctx.cr6.eq) goto loc_8233B478;
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// b 0x8233b484
	goto loc_8233B484;
loc_8233B478:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233acc8
	ctx.lr = 0x8233B484;
	sub_8233ACC8(ctx, base);
loc_8233B484:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B4A0"))) PPC_WEAK_FUNC(sub_8233B4A0);
PPC_FUNC_IMPL(__imp__sub_8233B4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,30380
	ctx.r11.s64 = ctx.r11.s64 + 30380;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bne cr6,0x8233b4e8
	if (!ctx.cr6.eq) goto loc_8233B4E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233b4f8
	goto loc_8233B4F8;
loc_8233B4E8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233B4F8:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x824006f0
	ctx.lr = 0x8233B500;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233b510
	if (!ctx.cr6.eq) goto loc_8233B510;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233b520
	goto loc_8233B520;
loc_8233B510:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233B520:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82400638
	ctx.lr = 0x8233B52C;
	sub_82400638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233b258
	ctx.lr = 0x8233B53C;
	sub_8233B258(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-31216
	ctx.r11.s64 = ctx.r11.s64 + -31216;
	// addi r10,r10,30416
	ctx.r10.s64 = ctx.r10.s64 + 30416;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,30612
	ctx.r8.s64 = ctx.r11.s64 + 30612;
	// addi r9,r9,30352
	ctx.r9.s64 = ctx.r9.s64 + 30352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B5B0"))) PPC_WEAK_FUNC(sub_8233B5B0);
PPC_FUNC_IMPL(__imp__sub_8233B5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,18768
	ctx.r3.s64 = ctx.r11.s64 + 18768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B5C0"))) PPC_WEAK_FUNC(sub_8233B5C0);
PPC_FUNC_IMPL(__imp__sub_8233B5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233b5f8
	if (ctx.cr6.eq) goto loc_8233B5F8;
	// bl 0x82393228
	ctx.lr = 0x8233B5E8;
	sub_82393228(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233b5f8
	if (!ctx.cr6.eq) goto loc_8233B5F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233b604
	goto loc_8233B604;
loc_8233B5F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x8233abf8
	ctx.lr = 0x8233B604;
	sub_8233ABF8(ctx, base);
loc_8233B604:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B620"))) PPC_WEAK_FUNC(sub_8233B620);
PPC_FUNC_IMPL(__imp__sub_8233B620) {
	PPC_FUNC_PROLOGUE();
	// b 0x82393228
	sub_82393228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233B628"))) PPC_WEAK_FUNC(sub_8233B628);
PPC_FUNC_IMPL(__imp__sub_8233B628) {
	PPC_FUNC_PROLOGUE();
	// b 0x82392f68
	sub_82392F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233B630"))) PPC_WEAK_FUNC(sub_8233B630);
PPC_FUNC_IMPL(__imp__sub_8233B630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82833108
	ctx.lr = 0x8233B64C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233b664
	if (ctx.cr0.eq) goto loc_8233B664;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x8233b6f0
	ctx.lr = 0x8233B660;
	sub_8233B6F0(ctx, base);
	// b 0x8233b668
	goto loc_8233B668;
loc_8233B664:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233B668:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233b680
	if (ctx.cr6.eq) goto loc_8233B680;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233B680:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B698"))) PPC_WEAK_FUNC(sub_8233B698);
PPC_FUNC_IMPL(__imp__sub_8233B698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82393228
	ctx.lr = 0x8233B6B8;
	sub_82393228(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233b6c8
	if (!ctx.cr6.eq) goto loc_8233B6C8;
	// addi r3,r30,-20
	ctx.r3.s64 = ctx.r30.s64 + -20;
	// b 0x8233b6d4
	goto loc_8233B6D4;
loc_8233B6C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x8233acc8
	ctx.lr = 0x8233B6D4;
	sub_8233ACC8(ctx, base);
loc_8233B6D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B6F0"))) PPC_WEAK_FUNC(sub_8233B6F0);
PPC_FUNC_IMPL(__imp__sub_8233B6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233b784
	if (ctx.cr6.eq) goto loc_8233B784;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-30120
	ctx.r11.s64 = ctx.r11.s64 + -30120;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bne cr6,0x8233b740
	if (!ctx.cr6.eq) goto loc_8233B740;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233b750
	goto loc_8233B750;
loc_8233B740:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233B750:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x824006f0
	ctx.lr = 0x8233B758;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233b768
	if (!ctx.cr6.eq) goto loc_8233B768;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233b778
	goto loc_8233B778;
loc_8233B768:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233B778:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82400638
	ctx.lr = 0x8233B784;
	sub_82400638(ctx, base);
loc_8233B784:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233b258
	ctx.lr = 0x8233B794;
	sub_8233B258(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,30688
	ctx.r11.s64 = ctx.r11.s64 + 30688;
	// addi r10,r10,30872
	ctx.r10.s64 = ctx.r10.s64 + 30872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,31068
	ctx.r8.s64 = ctx.r11.s64 + 31068;
	// addi r9,r9,32032
	ctx.r9.s64 = ctx.r9.s64 + 32032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B818"))) PPC_WEAK_FUNC(sub_8233B818);
PPC_FUNC_IMPL(__imp__sub_8233B818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,18800
	ctx.r3.s64 = ctx.r11.s64 + 18800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B828"))) PPC_WEAK_FUNC(sub_8233B828);
PPC_FUNC_IMPL(__imp__sub_8233B828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233b860
	if (ctx.cr6.eq) goto loc_8233B860;
	// bl 0x82393388
	ctx.lr = 0x8233B850;
	sub_82393388(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233b860
	if (!ctx.cr6.eq) goto loc_8233B860;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233b86c
	goto loc_8233B86C;
loc_8233B860:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233b5c0
	ctx.lr = 0x8233B86C;
	sub_8233B5C0(ctx, base);
loc_8233B86C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B888"))) PPC_WEAK_FUNC(sub_8233B888);
PPC_FUNC_IMPL(__imp__sub_8233B888) {
	PPC_FUNC_PROLOGUE();
	// b 0x82393388
	sub_82393388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233B890"))) PPC_WEAK_FUNC(sub_8233B890);
PPC_FUNC_IMPL(__imp__sub_8233B890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82833108
	ctx.lr = 0x8233B8AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233b8c4
	if (ctx.cr0.eq) goto loc_8233B8C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x8233b950
	ctx.lr = 0x8233B8C0;
	sub_8233B950(ctx, base);
	// b 0x8233b8c8
	goto loc_8233B8C8;
loc_8233B8C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233B8C8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233b8e0
	if (ctx.cr6.eq) goto loc_8233B8E0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233B8E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B8F8"))) PPC_WEAK_FUNC(sub_8233B8F8);
PPC_FUNC_IMPL(__imp__sub_8233B8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82393388
	ctx.lr = 0x8233B918;
	sub_82393388(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233b928
	if (!ctx.cr6.eq) goto loc_8233B928;
	// addi r3,r30,-20
	ctx.r3.s64 = ctx.r30.s64 + -20;
	// b 0x8233b934
	goto loc_8233B934;
loc_8233B928:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233b698
	ctx.lr = 0x8233B934;
	sub_8233B698(ctx, base);
loc_8233B934:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B950"))) PPC_WEAK_FUNC(sub_8233B950);
PPC_FUNC_IMPL(__imp__sub_8233B950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-30120
	ctx.r11.s64 = ctx.r11.s64 + -30120;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bne cr6,0x8233b998
	if (!ctx.cr6.eq) goto loc_8233B998;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233b9a8
	goto loc_8233B9A8;
loc_8233B998:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233B9A8:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x824006f0
	ctx.lr = 0x8233B9B0;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233b9c0
	if (!ctx.cr6.eq) goto loc_8233B9C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233b9d0
	goto loc_8233B9D0;
loc_8233B9C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233B9D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82400638
	ctx.lr = 0x8233B9DC;
	sub_82400638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233b6f0
	ctx.lr = 0x8233B9EC;
	sub_8233B6F0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,31144
	ctx.r11.s64 = ctx.r11.s64 + 31144;
	// addi r10,r10,31328
	ctx.r10.s64 = ctx.r10.s64 + 31328;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,31524
	ctx.r8.s64 = ctx.r11.s64 + 31524;
	// addi r9,r9,32032
	ctx.r9.s64 = ctx.r9.s64 + 32032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BA60"))) PPC_WEAK_FUNC(sub_8233BA60);
PPC_FUNC_IMPL(__imp__sub_8233BA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,18832
	ctx.r3.s64 = ctx.r11.s64 + 18832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BA70"))) PPC_WEAK_FUNC(sub_8233BA70);
PPC_FUNC_IMPL(__imp__sub_8233BA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233baa8
	if (ctx.cr6.eq) goto loc_8233BAA8;
	// bl 0x823934e8
	ctx.lr = 0x8233BA98;
	sub_823934E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233baa8
	if (!ctx.cr6.eq) goto loc_8233BAA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233bab4
	goto loc_8233BAB4;
loc_8233BAA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233b5c0
	ctx.lr = 0x8233BAB4;
	sub_8233B5C0(ctx, base);
loc_8233BAB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BAD0"))) PPC_WEAK_FUNC(sub_8233BAD0);
PPC_FUNC_IMPL(__imp__sub_8233BAD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823934e8
	sub_823934E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233BAD8"))) PPC_WEAK_FUNC(sub_8233BAD8);
PPC_FUNC_IMPL(__imp__sub_8233BAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82833108
	ctx.lr = 0x8233BAF4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233bb0c
	if (ctx.cr0.eq) goto loc_8233BB0C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x8233bb98
	ctx.lr = 0x8233BB08;
	sub_8233BB98(ctx, base);
	// b 0x8233bb10
	goto loc_8233BB10;
loc_8233BB0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233BB10:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233bb28
	if (ctx.cr6.eq) goto loc_8233BB28;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233BB28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BB40"))) PPC_WEAK_FUNC(sub_8233BB40);
PPC_FUNC_IMPL(__imp__sub_8233BB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823934e8
	ctx.lr = 0x8233BB60;
	sub_823934E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233bb70
	if (!ctx.cr6.eq) goto loc_8233BB70;
	// addi r3,r30,-20
	ctx.r3.s64 = ctx.r30.s64 + -20;
	// b 0x8233bb7c
	goto loc_8233BB7C;
loc_8233BB70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233b698
	ctx.lr = 0x8233BB7C;
	sub_8233B698(ctx, base);
loc_8233BB7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BB98"))) PPC_WEAK_FUNC(sub_8233BB98);
PPC_FUNC_IMPL(__imp__sub_8233BB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-30120
	ctx.r11.s64 = ctx.r11.s64 + -30120;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bne cr6,0x8233bbe0
	if (!ctx.cr6.eq) goto loc_8233BBE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233bbf0
	goto loc_8233BBF0;
loc_8233BBE0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233BBF0:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x824006f0
	ctx.lr = 0x8233BBF8;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233bc08
	if (!ctx.cr6.eq) goto loc_8233BC08;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233bc18
	goto loc_8233BC18;
loc_8233BC08:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233BC18:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82400638
	ctx.lr = 0x8233BC24;
	sub_82400638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233b6f0
	ctx.lr = 0x8233BC34;
	sub_8233B6F0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,31600
	ctx.r11.s64 = ctx.r11.s64 + 31600;
	// addi r10,r10,31784
	ctx.r10.s64 = ctx.r10.s64 + 31784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,31980
	ctx.r8.s64 = ctx.r11.s64 + 31980;
	// addi r9,r9,32032
	ctx.r9.s64 = ctx.r9.s64 + 32032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BCA8"))) PPC_WEAK_FUNC(sub_8233BCA8);
PPC_FUNC_IMPL(__imp__sub_8233BCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,18864
	ctx.r3.s64 = ctx.r11.s64 + 18864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BCB8"))) PPC_WEAK_FUNC(sub_8233BCB8);
PPC_FUNC_IMPL(__imp__sub_8233BCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233bcf0
	if (ctx.cr6.eq) goto loc_8233BCF0;
	// bl 0x82393648
	ctx.lr = 0x8233BCE0;
	sub_82393648(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233bcf0
	if (!ctx.cr6.eq) goto loc_8233BCF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233bcfc
	goto loc_8233BCFC;
loc_8233BCF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-20
	ctx.r3.s64 = ctx.r30.s64 + -20;
	// bl 0x8233abf8
	ctx.lr = 0x8233BCFC;
	sub_8233ABF8(ctx, base);
loc_8233BCFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BD18"))) PPC_WEAK_FUNC(sub_8233BD18);
PPC_FUNC_IMPL(__imp__sub_8233BD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8233BD34;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233bd4c
	if (ctx.cr0.eq) goto loc_8233BD4C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x8233bdd8
	ctx.lr = 0x8233BD48;
	sub_8233BDD8(ctx, base);
	// b 0x8233bd50
	goto loc_8233BD50;
loc_8233BD4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233BD50:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233bd68
	if (ctx.cr6.eq) goto loc_8233BD68;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233BD68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BD80"))) PPC_WEAK_FUNC(sub_8233BD80);
PPC_FUNC_IMPL(__imp__sub_8233BD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82393648
	ctx.lr = 0x8233BDA0;
	sub_82393648(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233bdb0
	if (!ctx.cr6.eq) goto loc_8233BDB0;
	// addi r3,r30,-32
	ctx.r3.s64 = ctx.r30.s64 + -32;
	// b 0x8233bdbc
	goto loc_8233BDBC;
loc_8233BDB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-20
	ctx.r3.s64 = ctx.r30.s64 + -20;
	// bl 0x8233acc8
	ctx.lr = 0x8233BDBC;
	sub_8233ACC8(ctx, base);
loc_8233BDBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BDD8"))) PPC_WEAK_FUNC(sub_8233BDD8);
PPC_FUNC_IMPL(__imp__sub_8233BDD8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233be6c
	if (ctx.cr6.eq) goto loc_8233BE6C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-25920
	ctx.r11.s64 = ctx.r11.s64 + -25920;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bne cr6,0x8233be28
	if (!ctx.cr6.eq) goto loc_8233BE28;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233be38
	goto loc_8233BE38;
loc_8233BE28:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233BE38:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824006f0
	ctx.lr = 0x8233BE40;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233be50
	if (!ctx.cr6.eq) goto loc_8233BE50;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233be60
	goto loc_8233BE60;
loc_8233BE50:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233BE60:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82400638
	ctx.lr = 0x8233BE6C;
	sub_82400638(ctx, base);
loc_8233BE6C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233b258
	ctx.lr = 0x8233BE7C;
	sub_8233B258(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,32080
	ctx.r11.s64 = ctx.r11.s64 + 32080;
	// addi r10,r10,32280
	ctx.r10.s64 = ctx.r10.s64 + 32280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r11,32476
	ctx.r8.s64 = ctx.r11.s64 + 32476;
	// addi r9,r9,-25368
	ctx.r9.s64 = ctx.r9.s64 + -25368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
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
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BF18"))) PPC_WEAK_FUNC(sub_8233BF18);
PPC_FUNC_IMPL(__imp__sub_8233BF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,18896
	ctx.r3.s64 = ctx.r11.s64 + 18896;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BF28"))) PPC_WEAK_FUNC(sub_8233BF28);
PPC_FUNC_IMPL(__imp__sub_8233BF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233bf60
	if (ctx.cr6.eq) goto loc_8233BF60;
	// bl 0x823937a8
	ctx.lr = 0x8233BF50;
	sub_823937A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233bf60
	if (!ctx.cr6.eq) goto loc_8233BF60;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233bf6c
	goto loc_8233BF6C;
loc_8233BF60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233bcb8
	ctx.lr = 0x8233BF6C;
	sub_8233BCB8(ctx, base);
loc_8233BF6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BF88"))) PPC_WEAK_FUNC(sub_8233BF88);
PPC_FUNC_IMPL(__imp__sub_8233BF88) {
	PPC_FUNC_PROLOGUE();
	// b 0x82393648
	sub_82393648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233BF90"))) PPC_WEAK_FUNC(sub_8233BF90);
PPC_FUNC_IMPL(__imp__sub_8233BF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8233BFAC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233bfc4
	if (ctx.cr0.eq) goto loc_8233BFC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x8233c050
	ctx.lr = 0x8233BFC0;
	sub_8233C050(ctx, base);
	// b 0x8233bfc8
	goto loc_8233BFC8;
loc_8233BFC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233BFC8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233bfe0
	if (ctx.cr6.eq) goto loc_8233BFE0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233BFE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BFF8"))) PPC_WEAK_FUNC(sub_8233BFF8);
PPC_FUNC_IMPL(__imp__sub_8233BFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823937a8
	ctx.lr = 0x8233C018;
	sub_823937A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233c028
	if (!ctx.cr6.eq) goto loc_8233C028;
	// addi r3,r30,-32
	ctx.r3.s64 = ctx.r30.s64 + -32;
	// b 0x8233c034
	goto loc_8233C034;
loc_8233C028:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233bd80
	ctx.lr = 0x8233C034;
	sub_8233BD80(ctx, base);
loc_8233C034:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C050"))) PPC_WEAK_FUNC(sub_8233C050);
PPC_FUNC_IMPL(__imp__sub_8233C050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233c0e4
	if (ctx.cr6.eq) goto loc_8233C0E4;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-25920
	ctx.r11.s64 = ctx.r11.s64 + -25920;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bne cr6,0x8233c0a0
	if (!ctx.cr6.eq) goto loc_8233C0A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233c0b0
	goto loc_8233C0B0;
loc_8233C0A0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233C0B0:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824006f0
	ctx.lr = 0x8233C0B8;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233c0c8
	if (!ctx.cr6.eq) goto loc_8233C0C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233c0d8
	goto loc_8233C0D8;
loc_8233C0C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233C0D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82400638
	ctx.lr = 0x8233C0E4;
	sub_82400638(ctx, base);
loc_8233C0E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233bdd8
	ctx.lr = 0x8233C0F4;
	sub_8233BDD8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,32552
	ctx.r11.s64 = ctx.r11.s64 + 32552;
	// addi r10,r10,32752
	ctx.r10.s64 = ctx.r10.s64 + 32752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r11,-32588
	ctx.r8.s64 = ctx.r11.s64 + -32588;
	// addi r9,r9,-25368
	ctx.r9.s64 = ctx.r9.s64 + -25368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C168"))) PPC_WEAK_FUNC(sub_8233C168);
PPC_FUNC_IMPL(__imp__sub_8233C168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C178"))) PPC_WEAK_FUNC(sub_8233C178);
PPC_FUNC_IMPL(__imp__sub_8233C178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233c1b0
	if (ctx.cr6.eq) goto loc_8233C1B0;
	// bl 0x82393908
	ctx.lr = 0x8233C1A0;
	sub_82393908(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233c1b0
	if (!ctx.cr6.eq) goto loc_8233C1B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233c1bc
	goto loc_8233C1BC;
loc_8233C1B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233bcb8
	ctx.lr = 0x8233C1BC;
	sub_8233BCB8(ctx, base);
loc_8233C1BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C1D8"))) PPC_WEAK_FUNC(sub_8233C1D8);
PPC_FUNC_IMPL(__imp__sub_8233C1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8233C1F4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233c20c
	if (ctx.cr0.eq) goto loc_8233C20C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x8233c298
	ctx.lr = 0x8233C208;
	sub_8233C298(ctx, base);
	// b 0x8233c210
	goto loc_8233C210;
loc_8233C20C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233C210:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233c228
	if (ctx.cr6.eq) goto loc_8233C228;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233C228:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C240"))) PPC_WEAK_FUNC(sub_8233C240);
PPC_FUNC_IMPL(__imp__sub_8233C240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82393908
	ctx.lr = 0x8233C260;
	sub_82393908(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233c270
	if (!ctx.cr6.eq) goto loc_8233C270;
	// addi r3,r30,-32
	ctx.r3.s64 = ctx.r30.s64 + -32;
	// b 0x8233c27c
	goto loc_8233C27C;
loc_8233C270:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233bd80
	ctx.lr = 0x8233C27C;
	sub_8233BD80(ctx, base);
loc_8233C27C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C298"))) PPC_WEAK_FUNC(sub_8233C298);
PPC_FUNC_IMPL(__imp__sub_8233C298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233c32c
	if (ctx.cr6.eq) goto loc_8233C32C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-25920
	ctx.r11.s64 = ctx.r11.s64 + -25920;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bne cr6,0x8233c2e8
	if (!ctx.cr6.eq) goto loc_8233C2E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233c2f8
	goto loc_8233C2F8;
loc_8233C2E8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233C2F8:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824006f0
	ctx.lr = 0x8233C300;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233c310
	if (!ctx.cr6.eq) goto loc_8233C310;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233c320
	goto loc_8233C320;
loc_8233C310:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233C320:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82400638
	ctx.lr = 0x8233C32C;
	sub_82400638(ctx, base);
loc_8233C32C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233bdd8
	ctx.lr = 0x8233C33C;
	sub_8233BDD8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-26368
	ctx.r11.s64 = ctx.r11.s64 + -26368;
	// addi r10,r10,-32512
	ctx.r10.s64 = ctx.r10.s64 + -32512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r11,-32316
	ctx.r8.s64 = ctx.r11.s64 + -32316;
	// addi r9,r9,-25368
	ctx.r9.s64 = ctx.r9.s64 + -25368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C3B0"))) PPC_WEAK_FUNC(sub_8233C3B0);
PPC_FUNC_IMPL(__imp__sub_8233C3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,18964
	ctx.r3.s64 = ctx.r11.s64 + 18964;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C3C0"))) PPC_WEAK_FUNC(sub_8233C3C0);
PPC_FUNC_IMPL(__imp__sub_8233C3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233c3f8
	if (ctx.cr6.eq) goto loc_8233C3F8;
	// bl 0x82393a68
	ctx.lr = 0x8233C3E8;
	sub_82393A68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233c3f8
	if (!ctx.cr6.eq) goto loc_8233C3F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233c404
	goto loc_8233C404;
loc_8233C3F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233c178
	ctx.lr = 0x8233C404;
	sub_8233C178(ctx, base);
loc_8233C404:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C420"))) PPC_WEAK_FUNC(sub_8233C420);
PPC_FUNC_IMPL(__imp__sub_8233C420) {
	PPC_FUNC_PROLOGUE();
	// b 0x82393a68
	sub_82393A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233C428"))) PPC_WEAK_FUNC(sub_8233C428);
PPC_FUNC_IMPL(__imp__sub_8233C428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8233C444;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233c45c
	if (ctx.cr0.eq) goto loc_8233C45C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x8233c4e8
	ctx.lr = 0x8233C458;
	sub_8233C4E8(ctx, base);
	// b 0x8233c460
	goto loc_8233C460;
loc_8233C45C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233C460:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233c478
	if (ctx.cr6.eq) goto loc_8233C478;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233C478:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C490"))) PPC_WEAK_FUNC(sub_8233C490);
PPC_FUNC_IMPL(__imp__sub_8233C490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82393a68
	ctx.lr = 0x8233C4B0;
	sub_82393A68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233c4c0
	if (!ctx.cr6.eq) goto loc_8233C4C0;
	// addi r3,r30,-32
	ctx.r3.s64 = ctx.r30.s64 + -32;
	// b 0x8233c4cc
	goto loc_8233C4CC;
loc_8233C4C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233c240
	ctx.lr = 0x8233C4CC;
	sub_8233C240(ctx, base);
loc_8233C4CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C4E8"))) PPC_WEAK_FUNC(sub_8233C4E8);
PPC_FUNC_IMPL(__imp__sub_8233C4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-25920
	ctx.r11.s64 = ctx.r11.s64 + -25920;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bne cr6,0x8233c530
	if (!ctx.cr6.eq) goto loc_8233C530;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233c540
	goto loc_8233C540;
loc_8233C530:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233C540:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824006f0
	ctx.lr = 0x8233C548;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233c558
	if (!ctx.cr6.eq) goto loc_8233C558;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233c568
	goto loc_8233C568;
loc_8233C558:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233C568:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82400638
	ctx.lr = 0x8233C574;
	sub_82400638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233bdd8
	ctx.lr = 0x8233C584;
	sub_8233BDD8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-26368
	ctx.r11.s64 = ctx.r11.s64 + -26368;
	// addi r10,r10,-32512
	ctx.r10.s64 = ctx.r10.s64 + -32512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r11,-32316
	ctx.r8.s64 = ctx.r11.s64 + -32316;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r9,r9,-25368
	ctx.r9.s64 = ctx.r9.s64 + -25368;
	// addi r6,r11,-26368
	ctx.r6.s64 = ctx.r11.s64 + -26368;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r4,r11,-32044
	ctx.r4.s64 = ctx.r11.s64 + -32044;
	// addi r7,r7,-32240
	ctx.r7.s64 = ctx.r7.s64 + -32240;
	// lis r5,-32225
	ctx.r5.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r5,-25368
	ctx.r5.s64 = ctx.r5.s64 + -25368;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C648"))) PPC_WEAK_FUNC(sub_8233C648);
PPC_FUNC_IMPL(__imp__sub_8233C648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19008
	ctx.r3.s64 = ctx.r11.s64 + 19008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C658"))) PPC_WEAK_FUNC(sub_8233C658);
PPC_FUNC_IMPL(__imp__sub_8233C658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233c690
	if (ctx.cr6.eq) goto loc_8233C690;
	// bl 0x82393bc8
	ctx.lr = 0x8233C680;
	sub_82393BC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233c690
	if (!ctx.cr6.eq) goto loc_8233C690;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233c69c
	goto loc_8233C69C;
loc_8233C690:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233c178
	ctx.lr = 0x8233C69C;
	sub_8233C178(ctx, base);
loc_8233C69C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C6B8"))) PPC_WEAK_FUNC(sub_8233C6B8);
PPC_FUNC_IMPL(__imp__sub_8233C6B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82393bc8
	sub_82393BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233C6C0"))) PPC_WEAK_FUNC(sub_8233C6C0);
PPC_FUNC_IMPL(__imp__sub_8233C6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8233C6DC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233c6f4
	if (ctx.cr0.eq) goto loc_8233C6F4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x8233c780
	ctx.lr = 0x8233C6F0;
	sub_8233C780(ctx, base);
	// b 0x8233c6f8
	goto loc_8233C6F8;
loc_8233C6F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233C6F8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233c710
	if (ctx.cr6.eq) goto loc_8233C710;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233C710:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C728"))) PPC_WEAK_FUNC(sub_8233C728);
PPC_FUNC_IMPL(__imp__sub_8233C728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82393bc8
	ctx.lr = 0x8233C748;
	sub_82393BC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233c758
	if (!ctx.cr6.eq) goto loc_8233C758;
	// addi r3,r30,-32
	ctx.r3.s64 = ctx.r30.s64 + -32;
	// b 0x8233c764
	goto loc_8233C764;
loc_8233C758:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233c240
	ctx.lr = 0x8233C764;
	sub_8233C240(ctx, base);
loc_8233C764:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C780"))) PPC_WEAK_FUNC(sub_8233C780);
PPC_FUNC_IMPL(__imp__sub_8233C780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-25920
	ctx.r11.s64 = ctx.r11.s64 + -25920;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bne cr6,0x8233c7c8
	if (!ctx.cr6.eq) goto loc_8233C7C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233c7d8
	goto loc_8233C7D8;
loc_8233C7C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233C7D8:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824006f0
	ctx.lr = 0x8233C7E0;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233c7f0
	if (!ctx.cr6.eq) goto loc_8233C7F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233c800
	goto loc_8233C800;
loc_8233C7F0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233C800:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82400638
	ctx.lr = 0x8233C80C;
	sub_82400638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233bdd8
	ctx.lr = 0x8233C81C;
	sub_8233BDD8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-26368
	ctx.r11.s64 = ctx.r11.s64 + -26368;
	// addi r10,r10,-32512
	ctx.r10.s64 = ctx.r10.s64 + -32512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r11,-32316
	ctx.r8.s64 = ctx.r11.s64 + -32316;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r9,r9,-25368
	ctx.r9.s64 = ctx.r9.s64 + -25368;
	// addi r6,r11,-31968
	ctx.r6.s64 = ctx.r11.s64 + -31968;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r4,r11,-31572
	ctx.r4.s64 = ctx.r11.s64 + -31572;
	// addi r7,r7,-31768
	ctx.r7.s64 = ctx.r7.s64 + -31768;
	// lis r5,-32225
	ctx.r5.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r5,-25368
	ctx.r5.s64 = ctx.r5.s64 + -25368;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C8E0"))) PPC_WEAK_FUNC(sub_8233C8E0);
PPC_FUNC_IMPL(__imp__sub_8233C8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19052
	ctx.r3.s64 = ctx.r11.s64 + 19052;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C8F0"))) PPC_WEAK_FUNC(sub_8233C8F0);
PPC_FUNC_IMPL(__imp__sub_8233C8F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82393d28
	sub_82393D28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233C8F8"))) PPC_WEAK_FUNC(sub_8233C8F8);
PPC_FUNC_IMPL(__imp__sub_8233C8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82833108
	ctx.lr = 0x8233C914;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233c92c
	if (ctx.cr0.eq) goto loc_8233C92C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x8233cb28
	ctx.lr = 0x8233C928;
	sub_8233CB28(ctx, base);
	// b 0x8233c930
	goto loc_8233C930;
loc_8233C92C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233C930:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233c948
	if (ctx.cr6.eq) goto loc_8233C948;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233C948:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C960"))) PPC_WEAK_FUNC(sub_8233C960);
PPC_FUNC_IMPL(__imp__sub_8233C960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233c990
	if (ctx.cr6.eq) goto loc_8233C990;
	// bl 0x82393d28
	ctx.lr = 0x8233C988;
	sub_82393D28(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8233c9d4
	if (ctx.cr6.eq) goto loc_8233C9D4;
loc_8233C990:
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x8233abf8
	ctx.lr = 0x8233C9A8;
	sub_8233ABF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8233c9d4
	if (!ctx.cr0.eq) goto loc_8233C9D4;
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x824005d0
	ctx.lr = 0x8233C9C8;
	sub_824005D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8233c9d8
	if (ctx.cr0.eq) goto loc_8233C9D8;
loc_8233C9D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8233C9D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C9F0"))) PPC_WEAK_FUNC(sub_8233C9F0);
PPC_FUNC_IMPL(__imp__sub_8233C9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82393d28
	ctx.lr = 0x8233CA10;
	sub_82393D28(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8233ca20
	if (!ctx.cr6.eq) goto loc_8233CA20;
	// addi r3,r31,-20
	ctx.r3.s64 = ctx.r31.s64 + -20;
	// b 0x8233ca58
	goto loc_8233CA58;
loc_8233CA20:
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x8233acc8
	ctx.lr = 0x8233CA38;
	sub_8233ACC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8233ca58
	if (!ctx.cr0.eq) goto loc_8233CA58;
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82400570
	ctx.lr = 0x8233CA58;
	sub_82400570(ctx, base);
loc_8233CA58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CA70"))) PPC_WEAK_FUNC(sub_8233CA70);
PPC_FUNC_IMPL(__imp__sub_8233CA70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// b 0x825e4198
	sub_825E4198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233CA88"))) PPC_WEAK_FUNC(sub_8233CA88);
PPC_FUNC_IMPL(__imp__sub_8233CA88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233CAB0"))) PPC_WEAK_FUNC(sub_8233CAB0);
PPC_FUNC_IMPL(__imp__sub_8233CAB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -80);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r3,-72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233CAD8"))) PPC_WEAK_FUNC(sub_8233CAD8);
PPC_FUNC_IMPL(__imp__sub_8233CAD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -80);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,-80
	ctx.r10.s64 = ctx.r11.s64 + -80;
	// lwz r3,-72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2328);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233CB00"))) PPC_WEAK_FUNC(sub_8233CB00);
PPC_FUNC_IMPL(__imp__sub_8233CB00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -80);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,-80
	ctx.r10.s64 = ctx.r11.s64 + -80;
	// lwz r3,-72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233CB28"))) PPC_WEAK_FUNC(sub_8233CB28);
PPC_FUNC_IMPL(__imp__sub_8233CB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8233CB30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-32148
	ctx.r11.s64 = ctx.r11.s64 + -32148;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// addi r11,r8,-31044
	ctx.r11.s64 = ctx.r8.s64 + -31044;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// addi r29,r31,108
	ctx.r29.s64 = ctx.r31.s64 + 108;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233cb8c
	if (ctx.cr6.eq) goto loc_8233CB8C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233CB8C:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x824006f0
	ctx.lr = 0x8233CB94;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233cba4
	if (!ctx.cr6.eq) goto loc_8233CBA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233cbb4
	goto loc_8233CBB4;
loc_8233CBA4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233CBB4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82400638
	ctx.lr = 0x8233CBC0;
	sub_82400638(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233cbd0
	if (!ctx.cr6.eq) goto loc_8233CBD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233cbe0
	goto loc_8233CBE0;
loc_8233CBD0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233CBE0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8233b258
	ctx.lr = 0x8233CBEC;
	sub_8233B258(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233cbfc
	if (!ctx.cr6.eq) goto loc_8233CBFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8233cc0c
	goto loc_8233CC0C;
loc_8233CBFC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8233CC0C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// addi r9,r9,-23752
	ctx.r9.s64 = ctx.r9.s64 + -23752;
	// addi r8,r8,-23556
	ctx.r8.s64 = ctx.r8.s64 + -23556;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// addi r7,r7,-23504
	ctx.r7.s64 = ctx.r7.s64 + -23504;
	// addi r6,r6,-31500
	ctx.r6.s64 = ctx.r6.s64 + -31500;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// stwx r9,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u32);
	// addi r9,r5,-31496
	ctx.r9.s64 = ctx.r5.s64 + -31496;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r4,-31300
	ctx.r5.s64 = ctx.r4.s64 + -31300;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// addi r4,r4,-31248
	ctx.r4.s64 = ctx.r4.s64 + -31248;
	// addi r28,r3,-31216
	ctx.r28.s64 = ctx.r3.s64 + -31216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
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
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233CCE8"))) PPC_WEAK_FUNC(sub_8233CCE8);
PPC_FUNC_IMPL(__imp__sub_8233CCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19092
	ctx.r3.s64 = ctx.r11.s64 + 19092;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CCF8"))) PPC_WEAK_FUNC(sub_8233CCF8);
PPC_FUNC_IMPL(__imp__sub_8233CCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233cd30
	if (ctx.cr6.eq) goto loc_8233CD30;
	// bl 0x82393e88
	ctx.lr = 0x8233CD20;
	sub_82393E88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233cd30
	if (!ctx.cr6.eq) goto loc_8233CD30;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233cd3c
	goto loc_8233CD3C;
loc_8233CD30:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233b5c0
	ctx.lr = 0x8233CD3C;
	sub_8233B5C0(ctx, base);
loc_8233CD3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CD58"))) PPC_WEAK_FUNC(sub_8233CD58);
PPC_FUNC_IMPL(__imp__sub_8233CD58) {
	PPC_FUNC_PROLOGUE();
	// b 0x82393e88
	sub_82393E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233CD60"))) PPC_WEAK_FUNC(sub_8233CD60);
PPC_FUNC_IMPL(__imp__sub_8233CD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82833108
	ctx.lr = 0x8233CD7C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233cd94
	if (ctx.cr0.eq) goto loc_8233CD94;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x8233ce20
	ctx.lr = 0x8233CD90;
	sub_8233CE20(ctx, base);
	// b 0x8233cd98
	goto loc_8233CD98;
loc_8233CD94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233CD98:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233cdb0
	if (ctx.cr6.eq) goto loc_8233CDB0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233CDB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CDC8"))) PPC_WEAK_FUNC(sub_8233CDC8);
PPC_FUNC_IMPL(__imp__sub_8233CDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82393e88
	ctx.lr = 0x8233CDE8;
	sub_82393E88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233cdf8
	if (!ctx.cr6.eq) goto loc_8233CDF8;
	// addi r3,r30,-20
	ctx.r3.s64 = ctx.r30.s64 + -20;
	// b 0x8233ce04
	goto loc_8233CE04;
loc_8233CDF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233b698
	ctx.lr = 0x8233CE04;
	sub_8233B698(ctx, base);
loc_8233CE04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CE20"))) PPC_WEAK_FUNC(sub_8233CE20);
PPC_FUNC_IMPL(__imp__sub_8233CE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-30120
	ctx.r11.s64 = ctx.r11.s64 + -30120;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bne cr6,0x8233ce68
	if (!ctx.cr6.eq) goto loc_8233CE68;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233ce78
	goto loc_8233CE78;
loc_8233CE68:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233CE78:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x824006f0
	ctx.lr = 0x8233CE80;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233ce90
	if (!ctx.cr6.eq) goto loc_8233CE90;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233cea0
	goto loc_8233CEA0;
loc_8233CE90:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233CEA0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82400638
	ctx.lr = 0x8233CEAC;
	sub_82400638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233b6f0
	ctx.lr = 0x8233CEBC;
	sub_8233B6F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-31008
	ctx.r11.s64 = ctx.r11.s64 + -31008;
	// addi r10,r10,-30824
	ctx.r10.s64 = ctx.r10.s64 + -30824;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,-30628
	ctx.r8.s64 = ctx.r11.s64 + -30628;
	// addi r9,r9,32032
	ctx.r9.s64 = ctx.r9.s64 + 32032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CF30"))) PPC_WEAK_FUNC(sub_8233CF30);
PPC_FUNC_IMPL(__imp__sub_8233CF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19124
	ctx.r3.s64 = ctx.r11.s64 + 19124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CF40"))) PPC_WEAK_FUNC(sub_8233CF40);
PPC_FUNC_IMPL(__imp__sub_8233CF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233cf78
	if (ctx.cr6.eq) goto loc_8233CF78;
	// bl 0x82393fe8
	ctx.lr = 0x8233CF68;
	sub_82393FE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233cf78
	if (!ctx.cr6.eq) goto loc_8233CF78;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233cf84
	goto loc_8233CF84;
loc_8233CF78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233b5c0
	ctx.lr = 0x8233CF84;
	sub_8233B5C0(ctx, base);
loc_8233CF84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CFA0"))) PPC_WEAK_FUNC(sub_8233CFA0);
PPC_FUNC_IMPL(__imp__sub_8233CFA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82393fe8
	sub_82393FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233CFA8"))) PPC_WEAK_FUNC(sub_8233CFA8);
PPC_FUNC_IMPL(__imp__sub_8233CFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82833108
	ctx.lr = 0x8233CFC4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233cfdc
	if (ctx.cr0.eq) goto loc_8233CFDC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x8233d068
	ctx.lr = 0x8233CFD8;
	sub_8233D068(ctx, base);
	// b 0x8233cfe0
	goto loc_8233CFE0;
loc_8233CFDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233CFE0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233cff8
	if (ctx.cr6.eq) goto loc_8233CFF8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233CFF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D010"))) PPC_WEAK_FUNC(sub_8233D010);
PPC_FUNC_IMPL(__imp__sub_8233D010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82393fe8
	ctx.lr = 0x8233D030;
	sub_82393FE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233d040
	if (!ctx.cr6.eq) goto loc_8233D040;
	// addi r3,r30,-20
	ctx.r3.s64 = ctx.r30.s64 + -20;
	// b 0x8233d04c
	goto loc_8233D04C;
loc_8233D040:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233b698
	ctx.lr = 0x8233D04C;
	sub_8233B698(ctx, base);
loc_8233D04C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D068"))) PPC_WEAK_FUNC(sub_8233D068);
PPC_FUNC_IMPL(__imp__sub_8233D068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-30120
	ctx.r11.s64 = ctx.r11.s64 + -30120;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bne cr6,0x8233d0b0
	if (!ctx.cr6.eq) goto loc_8233D0B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233d0c0
	goto loc_8233D0C0;
loc_8233D0B0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233D0C0:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x824006f0
	ctx.lr = 0x8233D0C8;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233d0d8
	if (!ctx.cr6.eq) goto loc_8233D0D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233d0e8
	goto loc_8233D0E8;
loc_8233D0D8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233D0E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82400638
	ctx.lr = 0x8233D0F4;
	sub_82400638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233b6f0
	ctx.lr = 0x8233D104;
	sub_8233B6F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-30552
	ctx.r11.s64 = ctx.r11.s64 + -30552;
	// addi r10,r10,-30368
	ctx.r10.s64 = ctx.r10.s64 + -30368;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,-30172
	ctx.r8.s64 = ctx.r11.s64 + -30172;
	// addi r9,r9,32032
	ctx.r9.s64 = ctx.r9.s64 + 32032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D178"))) PPC_WEAK_FUNC(sub_8233D178);
PPC_FUNC_IMPL(__imp__sub_8233D178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19160
	ctx.r3.s64 = ctx.r11.s64 + 19160;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D188"))) PPC_WEAK_FUNC(sub_8233D188);
PPC_FUNC_IMPL(__imp__sub_8233D188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233d1c0
	if (ctx.cr6.eq) goto loc_8233D1C0;
	// bl 0x82394148
	ctx.lr = 0x8233D1B0;
	sub_82394148(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233d1c0
	if (!ctx.cr6.eq) goto loc_8233D1C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233d1cc
	goto loc_8233D1CC;
loc_8233D1C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233abf8
	ctx.lr = 0x8233D1CC;
	sub_8233ABF8(ctx, base);
loc_8233D1CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D1E8"))) PPC_WEAK_FUNC(sub_8233D1E8);
PPC_FUNC_IMPL(__imp__sub_8233D1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82833108
	ctx.lr = 0x8233D204;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233d21c
	if (ctx.cr0.eq) goto loc_8233D21C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x8233d2a8
	ctx.lr = 0x8233D218;
	sub_8233D2A8(ctx, base);
	// b 0x8233d220
	goto loc_8233D220;
loc_8233D21C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233D220:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d238
	if (ctx.cr6.eq) goto loc_8233D238;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233D238:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D250"))) PPC_WEAK_FUNC(sub_8233D250);
PPC_FUNC_IMPL(__imp__sub_8233D250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82394148
	ctx.lr = 0x8233D270;
	sub_82394148(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233d280
	if (!ctx.cr6.eq) goto loc_8233D280;
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// b 0x8233d28c
	goto loc_8233D28C;
loc_8233D280:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233acc8
	ctx.lr = 0x8233D28C;
	sub_8233ACC8(ctx, base);
loc_8233D28C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D2A8"))) PPC_WEAK_FUNC(sub_8233D2A8);
PPC_FUNC_IMPL(__imp__sub_8233D2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233d33c
	if (ctx.cr6.eq) goto loc_8233D33C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,30380
	ctx.r11.s64 = ctx.r11.s64 + 30380;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bne cr6,0x8233d2f8
	if (!ctx.cr6.eq) goto loc_8233D2F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233d308
	goto loc_8233D308;
loc_8233D2F8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233D308:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x824006f0
	ctx.lr = 0x8233D310;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233d320
	if (!ctx.cr6.eq) goto loc_8233D320;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233d330
	goto loc_8233D330;
loc_8233D320:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233D330:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82400638
	ctx.lr = 0x8233D33C;
	sub_82400638(ctx, base);
loc_8233D33C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233b258
	ctx.lr = 0x8233D34C;
	sub_8233B258(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-30088
	ctx.r11.s64 = ctx.r11.s64 + -30088;
	// addi r10,r10,-29904
	ctx.r10.s64 = ctx.r10.s64 + -29904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,-29708
	ctx.r8.s64 = ctx.r11.s64 + -29708;
	// addi r9,r9,-28000
	ctx.r9.s64 = ctx.r9.s64 + -28000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D3C0"))) PPC_WEAK_FUNC(sub_8233D3C0);
PPC_FUNC_IMPL(__imp__sub_8233D3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19192
	ctx.r3.s64 = ctx.r11.s64 + 19192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D3D0"))) PPC_WEAK_FUNC(sub_8233D3D0);
PPC_FUNC_IMPL(__imp__sub_8233D3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233d408
	if (ctx.cr6.eq) goto loc_8233D408;
	// bl 0x823942a8
	ctx.lr = 0x8233D3F8;
	sub_823942A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233d408
	if (!ctx.cr6.eq) goto loc_8233D408;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233d414
	goto loc_8233D414;
loc_8233D408:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d188
	ctx.lr = 0x8233D414;
	sub_8233D188(ctx, base);
loc_8233D414:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D430"))) PPC_WEAK_FUNC(sub_8233D430);
PPC_FUNC_IMPL(__imp__sub_8233D430) {
	PPC_FUNC_PROLOGUE();
	// b 0x823942a8
	sub_823942A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233D438"))) PPC_WEAK_FUNC(sub_8233D438);
PPC_FUNC_IMPL(__imp__sub_8233D438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82833108
	ctx.lr = 0x8233D454;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233d46c
	if (ctx.cr0.eq) goto loc_8233D46C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x8233d4f8
	ctx.lr = 0x8233D468;
	sub_8233D4F8(ctx, base);
	// b 0x8233d470
	goto loc_8233D470;
loc_8233D46C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233D470:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d488
	if (ctx.cr6.eq) goto loc_8233D488;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233D488:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D4A0"))) PPC_WEAK_FUNC(sub_8233D4A0);
PPC_FUNC_IMPL(__imp__sub_8233D4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823942a8
	ctx.lr = 0x8233D4C0;
	sub_823942A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233d4d0
	if (!ctx.cr6.eq) goto loc_8233D4D0;
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// b 0x8233d4dc
	goto loc_8233D4DC;
loc_8233D4D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d250
	ctx.lr = 0x8233D4DC;
	sub_8233D250(ctx, base);
loc_8233D4DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D4F8"))) PPC_WEAK_FUNC(sub_8233D4F8);
PPC_FUNC_IMPL(__imp__sub_8233D4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,30380
	ctx.r11.s64 = ctx.r11.s64 + 30380;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bne cr6,0x8233d540
	if (!ctx.cr6.eq) goto loc_8233D540;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233d550
	goto loc_8233D550;
loc_8233D540:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233D550:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x824006f0
	ctx.lr = 0x8233D558;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233d568
	if (!ctx.cr6.eq) goto loc_8233D568;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233d578
	goto loc_8233D578;
loc_8233D568:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233D578:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82400638
	ctx.lr = 0x8233D584;
	sub_82400638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233b258
	ctx.lr = 0x8233D594;
	sub_8233B258(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-30088
	ctx.r11.s64 = ctx.r11.s64 + -30088;
	// addi r10,r10,-29904
	ctx.r10.s64 = ctx.r10.s64 + -29904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,-29708
	ctx.r8.s64 = ctx.r11.s64 + -29708;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r9,r9,-28000
	ctx.r9.s64 = ctx.r9.s64 + -28000;
	// addi r6,r11,-29632
	ctx.r6.s64 = ctx.r11.s64 + -29632;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r4,r11,-29236
	ctx.r4.s64 = ctx.r11.s64 + -29236;
	// addi r7,r7,-29432
	ctx.r7.s64 = ctx.r7.s64 + -29432;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r5,-28000
	ctx.r5.s64 = ctx.r5.s64 + -28000;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D658"))) PPC_WEAK_FUNC(sub_8233D658);
PPC_FUNC_IMPL(__imp__sub_8233D658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19228
	ctx.r3.s64 = ctx.r11.s64 + 19228;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D668"))) PPC_WEAK_FUNC(sub_8233D668);
PPC_FUNC_IMPL(__imp__sub_8233D668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233d6a0
	if (ctx.cr6.eq) goto loc_8233D6A0;
	// bl 0x82394408
	ctx.lr = 0x8233D690;
	sub_82394408(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233d6a0
	if (!ctx.cr6.eq) goto loc_8233D6A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233d6ac
	goto loc_8233D6AC;
loc_8233D6A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// bl 0x8233bcb8
	ctx.lr = 0x8233D6AC;
	sub_8233BCB8(ctx, base);
loc_8233D6AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D6C8"))) PPC_WEAK_FUNC(sub_8233D6C8);
PPC_FUNC_IMPL(__imp__sub_8233D6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82833108
	ctx.lr = 0x8233D6E4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233d6fc
	if (ctx.cr0.eq) goto loc_8233D6FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x8233d788
	ctx.lr = 0x8233D6F8;
	sub_8233D788(ctx, base);
	// b 0x8233d700
	goto loc_8233D700;
loc_8233D6FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233D700:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d718
	if (ctx.cr6.eq) goto loc_8233D718;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233D718:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D730"))) PPC_WEAK_FUNC(sub_8233D730);
PPC_FUNC_IMPL(__imp__sub_8233D730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82394408
	ctx.lr = 0x8233D750;
	sub_82394408(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233d760
	if (!ctx.cr6.eq) goto loc_8233D760;
	// addi r3,r30,-48
	ctx.r3.s64 = ctx.r30.s64 + -48;
	// b 0x8233d76c
	goto loc_8233D76C;
loc_8233D760:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// bl 0x8233bd80
	ctx.lr = 0x8233D76C;
	sub_8233BD80(ctx, base);
loc_8233D76C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D788"))) PPC_WEAK_FUNC(sub_8233D788);
PPC_FUNC_IMPL(__imp__sub_8233D788) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233d81c
	if (ctx.cr6.eq) goto loc_8233D81C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-28464
	ctx.r11.s64 = ctx.r11.s64 + -28464;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// bne cr6,0x8233d7d8
	if (!ctx.cr6.eq) goto loc_8233D7D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233d7e8
	goto loc_8233D7E8;
loc_8233D7D8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233D7E8:
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x824006f0
	ctx.lr = 0x8233D7F0;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233d800
	if (!ctx.cr6.eq) goto loc_8233D800;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233d810
	goto loc_8233D810;
loc_8233D800:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233D810:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82400638
	ctx.lr = 0x8233D81C;
	sub_82400638(ctx, base);
loc_8233D81C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233bdd8
	ctx.lr = 0x8233D82C;
	sub_8233BDD8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-28912
	ctx.r11.s64 = ctx.r11.s64 + -28912;
	// addi r10,r10,-29184
	ctx.r10.s64 = ctx.r10.s64 + -29184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r11,-28988
	ctx.r8.s64 = ctx.r11.s64 + -28988;
	// addi r9,r9,-24800
	ctx.r9.s64 = ctx.r9.s64 + -24800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D8C0"))) PPC_WEAK_FUNC(sub_8233D8C0);
PPC_FUNC_IMPL(__imp__sub_8233D8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19260
	ctx.r3.s64 = ctx.r11.s64 + 19260;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D8D0"))) PPC_WEAK_FUNC(sub_8233D8D0);
PPC_FUNC_IMPL(__imp__sub_8233D8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233d908
	if (ctx.cr6.eq) goto loc_8233D908;
	// bl 0x82394568
	ctx.lr = 0x8233D8F8;
	sub_82394568(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233d908
	if (!ctx.cr6.eq) goto loc_8233D908;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233d914
	goto loc_8233D914;
loc_8233D908:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d668
	ctx.lr = 0x8233D914;
	sub_8233D668(ctx, base);
loc_8233D914:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D930"))) PPC_WEAK_FUNC(sub_8233D930);
PPC_FUNC_IMPL(__imp__sub_8233D930) {
	PPC_FUNC_PROLOGUE();
	// b 0x82394568
	sub_82394568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233D938"))) PPC_WEAK_FUNC(sub_8233D938);
PPC_FUNC_IMPL(__imp__sub_8233D938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82833108
	ctx.lr = 0x8233D954;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233d96c
	if (ctx.cr0.eq) goto loc_8233D96C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x8233d9f8
	ctx.lr = 0x8233D968;
	sub_8233D9F8(ctx, base);
	// b 0x8233d970
	goto loc_8233D970;
loc_8233D96C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233D970:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d988
	if (ctx.cr6.eq) goto loc_8233D988;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233D988:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D9A0"))) PPC_WEAK_FUNC(sub_8233D9A0);
PPC_FUNC_IMPL(__imp__sub_8233D9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82394568
	ctx.lr = 0x8233D9C0;
	sub_82394568(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233d9d0
	if (!ctx.cr6.eq) goto loc_8233D9D0;
	// addi r3,r30,-48
	ctx.r3.s64 = ctx.r30.s64 + -48;
	// b 0x8233d9dc
	goto loc_8233D9DC;
loc_8233D9D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d730
	ctx.lr = 0x8233D9DC;
	sub_8233D730(ctx, base);
loc_8233D9DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233D9F8"))) PPC_WEAK_FUNC(sub_8233D9F8);
PPC_FUNC_IMPL(__imp__sub_8233D9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-28464
	ctx.r11.s64 = ctx.r11.s64 + -28464;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// bne cr6,0x8233da40
	if (!ctx.cr6.eq) goto loc_8233DA40;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233da50
	goto loc_8233DA50;
loc_8233DA40:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233DA50:
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x824006f0
	ctx.lr = 0x8233DA58;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233da68
	if (!ctx.cr6.eq) goto loc_8233DA68;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233da78
	goto loc_8233DA78;
loc_8233DA68:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233DA78:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82400638
	ctx.lr = 0x8233DA84;
	sub_82400638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d788
	ctx.lr = 0x8233DA94;
	sub_8233D788(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-28912
	ctx.r11.s64 = ctx.r11.s64 + -28912;
	// addi r10,r10,-28712
	ctx.r10.s64 = ctx.r10.s64 + -28712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r11,-28516
	ctx.r8.s64 = ctx.r11.s64 + -28516;
	// addi r9,r9,-24800
	ctx.r9.s64 = ctx.r9.s64 + -24800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233DB08"))) PPC_WEAK_FUNC(sub_8233DB08);
PPC_FUNC_IMPL(__imp__sub_8233DB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823e9e88
	ctx.lr = 0x8233DB28;
	sub_823E9E88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233db38
	if (ctx.cr0.eq) goto loc_8233DB38;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// bl 0x82332db8
	ctx.lr = 0x8233DB38;
	sub_82332DB8(ctx, base);
loc_8233DB38:
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233DB58"))) PPC_WEAK_FUNC(sub_8233DB58);
PPC_FUNC_IMPL(__imp__sub_8233DB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19300
	ctx.r3.s64 = ctx.r11.s64 + 19300;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233DB68"))) PPC_WEAK_FUNC(sub_8233DB68);
PPC_FUNC_IMPL(__imp__sub_8233DB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233dba0
	if (ctx.cr6.eq) goto loc_8233DBA0;
	// bl 0x823946c8
	ctx.lr = 0x8233DB90;
	sub_823946C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233dba0
	if (!ctx.cr6.eq) goto loc_8233DBA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233dbac
	goto loc_8233DBAC;
loc_8233DBA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d188
	ctx.lr = 0x8233DBAC;
	sub_8233D188(ctx, base);
loc_8233DBAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233DBC8"))) PPC_WEAK_FUNC(sub_8233DBC8);
PPC_FUNC_IMPL(__imp__sub_8233DBC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823946c8
	sub_823946C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233DBD0"))) PPC_WEAK_FUNC(sub_8233DBD0);
PPC_FUNC_IMPL(__imp__sub_8233DBD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82394148
	sub_82394148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233DBD8"))) PPC_WEAK_FUNC(sub_8233DBD8);
PPC_FUNC_IMPL(__imp__sub_8233DBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82833108
	ctx.lr = 0x8233DBF4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233dc0c
	if (ctx.cr0.eq) goto loc_8233DC0C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x8233dc98
	ctx.lr = 0x8233DC08;
	sub_8233DC98(ctx, base);
	// b 0x8233dc10
	goto loc_8233DC10;
loc_8233DC0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233DC10:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233dc28
	if (ctx.cr6.eq) goto loc_8233DC28;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233DC28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233DC40"))) PPC_WEAK_FUNC(sub_8233DC40);
PPC_FUNC_IMPL(__imp__sub_8233DC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823946c8
	ctx.lr = 0x8233DC60;
	sub_823946C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233dc70
	if (!ctx.cr6.eq) goto loc_8233DC70;
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// b 0x8233dc7c
	goto loc_8233DC7C;
loc_8233DC70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d250
	ctx.lr = 0x8233DC7C;
	sub_8233D250(ctx, base);
loc_8233DC7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233DC98"))) PPC_WEAK_FUNC(sub_8233DC98);
PPC_FUNC_IMPL(__imp__sub_8233DC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233dd2c
	if (ctx.cr6.eq) goto loc_8233DD2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,30380
	ctx.r11.s64 = ctx.r11.s64 + 30380;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bne cr6,0x8233dce8
	if (!ctx.cr6.eq) goto loc_8233DCE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233dcf8
	goto loc_8233DCF8;
loc_8233DCE8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233DCF8:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x824006f0
	ctx.lr = 0x8233DD00;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233dd10
	if (!ctx.cr6.eq) goto loc_8233DD10;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233dd20
	goto loc_8233DD20;
loc_8233DD10:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233DD20:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82400638
	ctx.lr = 0x8233DD2C;
	sub_82400638(ctx, base);
loc_8233DD2C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233b258
	ctx.lr = 0x8233DD3C;
	sub_8233B258(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-30088
	ctx.r11.s64 = ctx.r11.s64 + -30088;
	// addi r10,r10,-29904
	ctx.r10.s64 = ctx.r10.s64 + -29904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,-29708
	ctx.r8.s64 = ctx.r11.s64 + -29708;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r9,r9,-28000
	ctx.r9.s64 = ctx.r9.s64 + -28000;
	// addi r6,r11,-28432
	ctx.r6.s64 = ctx.r11.s64 + -28432;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r4,r11,-28052
	ctx.r4.s64 = ctx.r11.s64 + -28052;
	// addi r7,r7,-28248
	ctx.r7.s64 = ctx.r7.s64 + -28248;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r5,-28000
	ctx.r5.s64 = ctx.r5.s64 + -28000;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233DE00"))) PPC_WEAK_FUNC(sub_8233DE00);
PPC_FUNC_IMPL(__imp__sub_8233DE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19340
	ctx.r3.s64 = ctx.r11.s64 + 19340;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233DE10"))) PPC_WEAK_FUNC(sub_8233DE10);
PPC_FUNC_IMPL(__imp__sub_8233DE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233de48
	if (ctx.cr6.eq) goto loc_8233DE48;
	// bl 0x82394828
	ctx.lr = 0x8233DE38;
	sub_82394828(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233de48
	if (!ctx.cr6.eq) goto loc_8233DE48;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233de54
	goto loc_8233DE54;
loc_8233DE48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-52
	ctx.r3.s64 = ctx.r30.s64 + -52;
	// bl 0x8233abf8
	ctx.lr = 0x8233DE54;
	sub_8233ABF8(ctx, base);
loc_8233DE54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233DE70"))) PPC_WEAK_FUNC(sub_8233DE70);
PPC_FUNC_IMPL(__imp__sub_8233DE70) {
	PPC_FUNC_PROLOGUE();
	// b 0x82394828
	sub_82394828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233DE78"))) PPC_WEAK_FUNC(sub_8233DE78);
PPC_FUNC_IMPL(__imp__sub_8233DE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x82833108
	ctx.lr = 0x8233DE94;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233deac
	if (ctx.cr0.eq) goto loc_8233DEAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// bl 0x8233df38
	ctx.lr = 0x8233DEA8;
	sub_8233DF38(ctx, base);
	// b 0x8233deb0
	goto loc_8233DEB0;
loc_8233DEAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233DEB0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233dec8
	if (ctx.cr6.eq) goto loc_8233DEC8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233DEC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233DEE0"))) PPC_WEAK_FUNC(sub_8233DEE0);
PPC_FUNC_IMPL(__imp__sub_8233DEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82394828
	ctx.lr = 0x8233DF00;
	sub_82394828(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233df10
	if (!ctx.cr6.eq) goto loc_8233DF10;
	// addi r3,r30,-64
	ctx.r3.s64 = ctx.r30.s64 + -64;
	// b 0x8233df1c
	goto loc_8233DF1C;
loc_8233DF10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-52
	ctx.r3.s64 = ctx.r30.s64 + -52;
	// bl 0x8233acc8
	ctx.lr = 0x8233DF1C;
	sub_8233ACC8(ctx, base);
loc_8233DF1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233DF38"))) PPC_WEAK_FUNC(sub_8233DF38);
PPC_FUNC_IMPL(__imp__sub_8233DF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-27500
	ctx.r11.s64 = ctx.r11.s64 + -27500;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// bne cr6,0x8233df80
	if (!ctx.cr6.eq) goto loc_8233DF80;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233df90
	goto loc_8233DF90;
loc_8233DF80:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233DF90:
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x824006f0
	ctx.lr = 0x8233DF98;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233dfa8
	if (!ctx.cr6.eq) goto loc_8233DFA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233dfb8
	goto loc_8233DFB8;
loc_8233DFA8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233DFB8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82400638
	ctx.lr = 0x8233DFC4;
	sub_82400638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233b258
	ctx.lr = 0x8233DFD4;
	sub_8233B258(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-27952
	ctx.r11.s64 = ctx.r11.s64 + -27952;
	// addi r10,r10,-27776
	ctx.r10.s64 = ctx.r10.s64 + -27776;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,-27580
	ctx.r8.s64 = ctx.r11.s64 + -27580;
	// addi r9,r9,-27528
	ctx.r9.s64 = ctx.r9.s64 + -27528;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x82400a48
	ctx.lr = 0x8233E034;
	sub_82400A48(ctx, base);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82873b58
	ctx.lr = 0x8233E040;
	sub_82873B58(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E068"))) PPC_WEAK_FUNC(sub_8233E068);
PPC_FUNC_IMPL(__imp__sub_8233E068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8233E070;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-64
	ctx.r30.s64 = ctx.r3.s64 + -64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,64
	ctx.r31.s64 = ctx.r30.s64 + 64;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x8239d768
	ctx.lr = 0x8233E088;
	sub_8239D768(ctx, base);
	// addi r3,r31,-52
	ctx.r3.s64 = ctx.r31.s64 + -52;
	// bl 0x82400988
	ctx.lr = 0x8233E090;
	sub_82400988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e9e88
	ctx.lr = 0x8233E098;
	sub_823E9E88(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233e0a8
	if (ctx.cr0.eq) goto loc_8233E0A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x8233E0A8;
	sub_82332DB8(ctx, base);
loc_8233E0A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233E0B8"))) PPC_WEAK_FUNC(sub_8233E0B8);
PPC_FUNC_IMPL(__imp__sub_8233E0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19372
	ctx.r3.s64 = ctx.r11.s64 + 19372;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E0C8"))) PPC_WEAK_FUNC(sub_8233E0C8);
PPC_FUNC_IMPL(__imp__sub_8233E0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233e100
	if (ctx.cr6.eq) goto loc_8233E100;
	// bl 0x82394988
	ctx.lr = 0x8233E0F0;
	sub_82394988(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233e100
	if (!ctx.cr6.eq) goto loc_8233E100;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233e10c
	goto loc_8233E10C;
loc_8233E100:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d188
	ctx.lr = 0x8233E10C;
	sub_8233D188(ctx, base);
loc_8233E10C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E128"))) PPC_WEAK_FUNC(sub_8233E128);
PPC_FUNC_IMPL(__imp__sub_8233E128) {
	PPC_FUNC_PROLOGUE();
	// b 0x82394988
	sub_82394988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233E130"))) PPC_WEAK_FUNC(sub_8233E130);
PPC_FUNC_IMPL(__imp__sub_8233E130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82833108
	ctx.lr = 0x8233E14C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233e164
	if (ctx.cr0.eq) goto loc_8233E164;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x8233e1f0
	ctx.lr = 0x8233E160;
	sub_8233E1F0(ctx, base);
	// b 0x8233e168
	goto loc_8233E168;
loc_8233E164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233E168:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233e180
	if (ctx.cr6.eq) goto loc_8233E180;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8233E180:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E198"))) PPC_WEAK_FUNC(sub_8233E198);
PPC_FUNC_IMPL(__imp__sub_8233E198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82394988
	ctx.lr = 0x8233E1B8;
	sub_82394988(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233e1c8
	if (!ctx.cr6.eq) goto loc_8233E1C8;
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// b 0x8233e1d4
	goto loc_8233E1D4;
loc_8233E1C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d250
	ctx.lr = 0x8233E1D4;
	sub_8233D250(ctx, base);
loc_8233E1D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E1F0"))) PPC_WEAK_FUNC(sub_8233E1F0);
PPC_FUNC_IMPL(__imp__sub_8233E1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,30380
	ctx.r11.s64 = ctx.r11.s64 + 30380;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bne cr6,0x8233e238
	if (!ctx.cr6.eq) goto loc_8233E238;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233e248
	goto loc_8233E248;
loc_8233E238:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233E248:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x824006f0
	ctx.lr = 0x8233E250;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233e260
	if (!ctx.cr6.eq) goto loc_8233E260;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233e270
	goto loc_8233E270;
loc_8233E260:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8233E270:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82400638
	ctx.lr = 0x8233E27C;
	sub_82400638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233b258
	ctx.lr = 0x8233E28C;
	sub_8233B258(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-30088
	ctx.r11.s64 = ctx.r11.s64 + -30088;
	// addi r10,r10,-29904
	ctx.r10.s64 = ctx.r10.s64 + -29904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,-29708
	ctx.r8.s64 = ctx.r11.s64 + -29708;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r9,r9,-28000
	ctx.r9.s64 = ctx.r9.s64 + -28000;
	// addi r6,r11,-27464
	ctx.r6.s64 = ctx.r11.s64 + -27464;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r4,r11,-27084
	ctx.r4.s64 = ctx.r11.s64 + -27084;
	// addi r7,r7,-27280
	ctx.r7.s64 = ctx.r7.s64 + -27280;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r5,-28000
	ctx.r5.s64 = ctx.r5.s64 + -28000;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E350"))) PPC_WEAK_FUNC(sub_8233E350);
PPC_FUNC_IMPL(__imp__sub_8233E350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19408
	ctx.r3.s64 = ctx.r11.s64 + 19408;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E360"))) PPC_WEAK_FUNC(sub_8233E360);
PPC_FUNC_IMPL(__imp__sub_8233E360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233e398
	if (ctx.cr6.eq) goto loc_8233E398;
	// bl 0x82394ac8
	ctx.lr = 0x8233E388;
	sub_82394AC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233e398
	if (!ctx.cr6.eq) goto loc_8233E398;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233e3a4
	goto loc_8233E3A4;
loc_8233E398:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824003f0
	ctx.lr = 0x8233E3A4;
	sub_824003F0(ctx, base);
loc_8233E3A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E3C0"))) PPC_WEAK_FUNC(sub_8233E3C0);
PPC_FUNC_IMPL(__imp__sub_8233E3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1552
	ctx.r3.s64 = 1552;
	// bl 0x82833108
	ctx.lr = 0x8233E3DC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233e3f0
	if (ctx.cr0.eq) goto loc_8233E3F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e460
	ctx.lr = 0x8233E3EC;
	sub_8233E460(ctx, base);
	// b 0x8233e3f4
	goto loc_8233E3F4;
loc_8233E3F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233E3F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E408"))) PPC_WEAK_FUNC(sub_8233E408);
PPC_FUNC_IMPL(__imp__sub_8233E408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82394ac8
	ctx.lr = 0x8233E428;
	sub_82394AC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8233e43c
	if (ctx.cr6.eq) goto loc_8233E43C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400390
	ctx.lr = 0x8233E43C;
	sub_82400390(ctx, base);
loc_8233E43C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E458"))) PPC_WEAK_FUNC(sub_8233E458);
PPC_FUNC_IMPL(__imp__sub_8233E458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,1512(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1512, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E460"))) PPC_WEAK_FUNC(sub_8233E460);
PPC_FUNC_IMPL(__imp__sub_8233E460) {
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
	// bl 0x82400248
	ctx.lr = 0x8233E480;
	sub_82400248(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,10432
	ctx.r11.s64 = ctx.r11.s64 + 10432;
	// addi r10,r10,11556
	ctx.r10.s64 = ctx.r10.s64 + 11556;
	// addi r9,r9,11608
	ctx.r9.s64 = ctx.r9.s64 + 11608;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// lwz r11,1492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// lwz r11,1496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1496);
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// lwz r11,1500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// stw r11,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
	// lfs f0,1504(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// lfs f0,1508(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1508);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// lfs f0,1512(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// lfs f0,1516(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1516, temp.u32);
	// lfs f0,1520(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1520);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1520, temp.u32);
	// lfs f0,1524(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1524(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1524, temp.u32);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E538"))) PPC_WEAK_FUNC(sub_8233E538);
PPC_FUNC_IMPL(__imp__sub_8233E538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,10432
	ctx.r11.s64 = ctx.r11.s64 + 10432;
	// addi r10,r10,11556
	ctx.r10.s64 = ctx.r10.s64 + 11556;
	// addi r9,r9,11608
	ctx.r9.s64 = ctx.r9.s64 + 11608;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x8284c6d0
	ctx.lr = 0x8233E57C;
	sub_8284C6D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233e58c
	if (ctx.cr0.eq) goto loc_8233E58C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8233E58C;
	sub_82332DB8(ctx, base);
loc_8233E58C:
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

__attribute__((alias("__imp__sub_8233E5A8"))) PPC_WEAK_FUNC(sub_8233E5A8);
PPC_FUNC_IMPL(__imp__sub_8233E5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19420
	ctx.r3.s64 = ctx.r11.s64 + 19420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E5B8"))) PPC_WEAK_FUNC(sub_8233E5B8);
PPC_FUNC_IMPL(__imp__sub_8233E5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233e5f0
	if (ctx.cr6.eq) goto loc_8233E5F0;
	// bl 0x82394c08
	ctx.lr = 0x8233E5E0;
	sub_82394C08(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233e5f0
	if (!ctx.cr6.eq) goto loc_8233E5F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233e5fc
	goto loc_8233E5FC;
loc_8233E5F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e360
	ctx.lr = 0x8233E5FC;
	sub_8233E360(ctx, base);
loc_8233E5FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E618"))) PPC_WEAK_FUNC(sub_8233E618);
PPC_FUNC_IMPL(__imp__sub_8233E618) {
	PPC_FUNC_PROLOGUE();
	// b 0x82394ac8
	sub_82394AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233E620"))) PPC_WEAK_FUNC(sub_8233E620);
PPC_FUNC_IMPL(__imp__sub_8233E620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1888
	ctx.r3.s64 = 1888;
	// bl 0x82833108
	ctx.lr = 0x8233E63C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233e650
	if (ctx.cr0.eq) goto loc_8233E650;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x8233E64C;
	sub_8233E6C8(ctx, base);
	// b 0x8233e654
	goto loc_8233E654;
loc_8233E650:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233E654:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E668"))) PPC_WEAK_FUNC(sub_8233E668);
PPC_FUNC_IMPL(__imp__sub_8233E668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82394c08
	ctx.lr = 0x8233E688;
	sub_82394C08(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233e698
	if (!ctx.cr6.eq) goto loc_8233E698;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8233e6b0
	goto loc_8233E6B0;
loc_8233E698:
	// bl 0x82394ac8
	ctx.lr = 0x8233E69C;
	sub_82394AC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8233e6b0
	if (ctx.cr6.eq) goto loc_8233E6B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400390
	ctx.lr = 0x8233E6B0;
	sub_82400390(ctx, base);
loc_8233E6B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E6C8"))) PPC_WEAK_FUNC(sub_8233E6C8);
PPC_FUNC_IMPL(__imp__sub_8233E6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8233E6D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8233e460
	ctx.lr = 0x8233E6E0;
	sub_8233E460(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,20160
	ctx.r11.s64 = ctx.r11.s64 + 20160;
	// addi r10,r10,21336
	ctx.r10.s64 = ctx.r10.s64 + 21336;
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1552
	ctx.r4.s64 = ctx.r30.s64 + 1552;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1552
	ctx.r3.s64 = ctx.r31.s64 + 1552;
	// bl 0x82873b58
	ctx.lr = 0x8233E710;
	sub_82873B58(ctx, base);
	// lwz r11,1576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	// addi r4,r30,1672
	ctx.r4.s64 = ctx.r30.s64 + 1672;
	// addi r3,r31,1672
	ctx.r3.s64 = ctx.r31.s64 + 1672;
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// lwz r11,1580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// stw r11,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r11.u32);
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// lwz r11,1588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1588);
	// stw r11,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r11.u32);
	// lwz r11,1592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// lwz r11,1596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// stw r11,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r11.u32);
	// lwz r11,1600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// lwz r11,1604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// lwz r11,1608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// lwz r11,1612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
	// lwz r11,1616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// lwz r11,1620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// lwz r11,1624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1624);
	// stw r11,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r11.u32);
	// lwz r11,1628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1628);
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
	// lwz r11,1664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1664);
	// stw r11,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r11.u32);
	// lwz r11,1668(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1668);
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// bl 0x8282f630
	ctx.lr = 0x8233E7DC;
	sub_8282F630(ctx, base);
	// lwz r11,1696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1696);
	// addi r4,r30,1724
	ctx.r4.s64 = ctx.r30.s64 + 1724;
	// addi r3,r31,1724
	ctx.r3.s64 = ctx.r31.s64 + 1724;
	// stw r11,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r11.u32);
	// lwz r11,1700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1700);
	// stw r11,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r11.u32);
	// lwz r11,1704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1704);
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// lwz r11,1708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	// stw r11,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r11.u32);
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// lwz r11,1716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// lwz r11,1720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
	// stw r11,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8233E820;
	sub_82873B58(ctx, base);
	// lwz r11,1748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1748);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,1788
	ctx.r29.s64 = ctx.r31.s64 + 1788;
	// addi r27,r30,1788
	ctx.r27.s64 = ctx.r30.s64 + 1788;
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r11,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r11.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// lwz r11,1752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1752);
	// stw r11,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r11.u32);
	// lwz r11,1756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1756);
	// stw r11,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r11.u32);
	// lwz r11,1760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1760);
	// stw r11,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r11.u32);
	// lwz r11,1764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1764);
	// stw r11,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r11.u32);
	// lfs f0,1768(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1768(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1768, temp.u32);
	// lfs f0,1772(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1772);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
	// lwz r11,1776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1776);
	// stw r11,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r11.u32);
	// lwz r11,1780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1780);
	// stw r11,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r11.u32);
	// lwz r11,1784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1784);
	// stw r11,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r11.u32);
	// stw r10,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r10.u32);
	// stw r28,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r28.u32);
	// stw r28,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r28.u32);
	// stw r28,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r28.u32);
	// stw r28,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r28.u32);
	// stw r28,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r28.u32);
	// beq cr6,0x8233e924
	if (ctx.cr6.eq) goto loc_8233E924;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233e924
	if (!ctx.cr6.gt) goto loc_8233E924;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233e8cc
	if (ctx.cr0.eq) goto loc_8233E8CC;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8233E8CC;
	sub_82332C38(ctx, base);
loc_8233E8CC:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233e924
	if (!ctx.cr6.gt) goto loc_8233E924;
loc_8233E8DC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x8233E8F0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8233e910
	if (ctx.cr0.eq) goto loc_8233E910;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r5,48
	ctx.r5.s64 = 48;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8233E910;
	sub_82A4EA80(ctx, base);
loc_8233E910:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233e8dc
	if (ctx.cr6.lt) goto loc_8233E8DC;
loc_8233E924:
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// addi r4,r30,1820
	ctx.r4.s64 = ctx.r30.s64 + 1820;
	// addi r3,r31,1820
	ctx.r3.s64 = ctx.r31.s64 + 1820;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r11.u32);
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// stw r11,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8233E944;
	sub_82A4EA80(ctx, base);
	// lwz r11,1848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// lwz r11,1852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1852);
	// stw r11,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r11.u32);
	// lfs f0,1856(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1856);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1856(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1856, temp.u32);
	// lfs f0,1860(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1860);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1860, temp.u32);
	// lfs f0,1864(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1864, temp.u32);
	// lfs f0,1868(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1868(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1868, temp.u32);
	// lfs f0,1872(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1872);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1872, temp.u32);
	// lwz r11,1876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1876);
	// stw r11,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233E990"))) PPC_WEAK_FUNC(sub_8233E990);
PPC_FUNC_IMPL(__imp__sub_8233E990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19436
	ctx.r3.s64 = ctx.r11.s64 + 19436;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E9A0"))) PPC_WEAK_FUNC(sub_8233E9A0);
PPC_FUNC_IMPL(__imp__sub_8233E9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233e9d8
	if (ctx.cr6.eq) goto loc_8233E9D8;
	// bl 0x82394d48
	ctx.lr = 0x8233E9C8;
	sub_82394D48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233e9d8
	if (!ctx.cr6.eq) goto loc_8233E9D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233e9e4
	goto loc_8233E9E4;
loc_8233E9D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x8233E9E4;
	sub_8233E5B8(ctx, base);
loc_8233E9E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233EA00"))) PPC_WEAK_FUNC(sub_8233EA00);
PPC_FUNC_IMPL(__imp__sub_8233EA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8233EA20;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8233ea70
	if (ctx.cr0.eq) goto loc_8233EA70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x8233EA34;
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
	// b 0x8233ea74
	goto loc_8233EA74;
loc_8233EA70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233EA74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233EA90"))) PPC_WEAK_FUNC(sub_8233EA90);
PPC_FUNC_IMPL(__imp__sub_8233EA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82394d48
	ctx.lr = 0x8233EAB0;
	sub_82394D48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8233eac4
	if (ctx.cr6.eq) goto loc_8233EAC4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x8233EAC4;
	sub_8233E668(ctx, base);
loc_8233EAC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233EAE0"))) PPC_WEAK_FUNC(sub_8233EAE0);
PPC_FUNC_IMPL(__imp__sub_8233EAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19460
	ctx.r3.s64 = ctx.r11.s64 + 19460;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233EAF0"))) PPC_WEAK_FUNC(sub_8233EAF0);
PPC_FUNC_IMPL(__imp__sub_8233EAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233eb28
	if (ctx.cr6.eq) goto loc_8233EB28;
	// bl 0x82394e88
	ctx.lr = 0x8233EB18;
	sub_82394E88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233eb28
	if (!ctx.cr6.eq) goto loc_8233EB28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233eb34
	goto loc_8233EB34;
loc_8233EB28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e9a0
	ctx.lr = 0x8233EB34;
	sub_8233E9A0(ctx, base);
loc_8233EB34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233EB50"))) PPC_WEAK_FUNC(sub_8233EB50);
PPC_FUNC_IMPL(__imp__sub_8233EB50) {
	PPC_FUNC_PROLOGUE();
	// b 0x82394d48
	sub_82394D48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233EB58"))) PPC_WEAK_FUNC(sub_8233EB58);
PPC_FUNC_IMPL(__imp__sub_8233EB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8233EB74;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233eb88
	if (ctx.cr0.eq) goto loc_8233EB88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233ec00
	ctx.lr = 0x8233EB84;
	sub_8233EC00(ctx, base);
	// b 0x8233eb8c
	goto loc_8233EB8C;
loc_8233EB88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233EB8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233EBA0"))) PPC_WEAK_FUNC(sub_8233EBA0);
PPC_FUNC_IMPL(__imp__sub_8233EBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82394e88
	ctx.lr = 0x8233EBC0;
	sub_82394E88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233ebd0
	if (!ctx.cr6.eq) goto loc_8233EBD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8233ebe8
	goto loc_8233EBE8;
loc_8233EBD0:
	// bl 0x82394d48
	ctx.lr = 0x8233EBD4;
	sub_82394D48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8233ebe8
	if (ctx.cr6.eq) goto loc_8233EBE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x8233EBE8;
	sub_8233E668(ctx, base);
loc_8233EBE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233EC00"))) PPC_WEAK_FUNC(sub_8233EC00);
PPC_FUNC_IMPL(__imp__sub_8233EC00) {
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
	// bl 0x8233e6c8
	ctx.lr = 0x8233EC20;
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r8,1888(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1888);
	// addi r11,r11,-25696
	ctx.r11.s64 = ctx.r11.s64 + -25696;
	// stw r8,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r8.u32);
	// addi r10,r10,-24516
	ctx.r10.s64 = ctx.r10.s64 + -24516;
	// lwz r8,1892(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1892);
	// addi r9,r9,-25740
	ctx.r9.s64 = ctx.r9.s64 + -25740;
	// stw r8,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r8.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lfs f0,1904(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1904(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1904, temp.u32);
	// lfs f0,1908(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1908(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1908, temp.u32);
	// lfs f0,1912(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1912, temp.u32);
	// lfs f0,1916(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1916);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1916(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1916, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233ECB8"))) PPC_WEAK_FUNC(sub_8233ECB8);
PPC_FUNC_IMPL(__imp__sub_8233ECB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19488
	ctx.r3.s64 = ctx.r11.s64 + 19488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233ECC8"))) PPC_WEAK_FUNC(sub_8233ECC8);
PPC_FUNC_IMPL(__imp__sub_8233ECC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8233ed00
	if (ctx.cr6.eq) goto loc_8233ED00;
	// bl 0x82394fc8
	ctx.lr = 0x8233ECF0;
	sub_82394FC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233ed00
	if (!ctx.cr6.eq) goto loc_8233ED00;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233ed0c
	goto loc_8233ED0C;
loc_8233ED00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x8233ED0C;
	sub_8233EAF0(ctx, base);
loc_8233ED0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233ED28"))) PPC_WEAK_FUNC(sub_8233ED28);
PPC_FUNC_IMPL(__imp__sub_8233ED28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,3216
	ctx.r3.s64 = 3216;
	// bl 0x82833108
	ctx.lr = 0x8233ED44;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233ed58
	if (ctx.cr0.eq) goto loc_8233ED58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233edc0
	ctx.lr = 0x8233ED54;
	sub_8233EDC0(ctx, base);
	// b 0x8233ed5c
	goto loc_8233ED5C;
loc_8233ED58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233ED5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

