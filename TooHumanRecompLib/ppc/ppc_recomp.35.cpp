#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823FFF00"))) PPC_WEAK_FUNC(sub_823FFF00);
PPC_FUNC_IMPL(__imp__sub_823FFF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823e8f00
	ctx.lr = 0x823FFF20;
	sub_823E8F00(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823fff30
	if (!ctx.cr6.eq) goto loc_823FFF30;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// b 0x823fff48
	goto loc_823FFF48;
loc_823FFF30:
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
	// bl 0x82400d08
	ctx.lr = 0x823FFF48;
	sub_82400D08(ctx, base);
loc_823FFF48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823FFF60"))) PPC_WEAK_FUNC(sub_823FFF60);
PPC_FUNC_IMPL(__imp__sub_823FFF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823fff98
	if (ctx.cr6.eq) goto loc_823FFF98;
	// bl 0x823e8f00
	ctx.lr = 0x823FFF88;
	sub_823E8F00(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823fff98
	if (!ctx.cr6.eq) goto loc_823FFF98;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823fffb0
	goto loc_823FFFB0;
loc_823FFF98:
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
	// bl 0x82400ed0
	ctx.lr = 0x823FFFB0;
	sub_82400ED0(ctx, base);
loc_823FFFB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823FFFC8"))) PPC_WEAK_FUNC(sub_823FFFC8);
PPC_FUNC_IMPL(__imp__sub_823FFFC8) {
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
	// bl 0x823fc168
	ctx.lr = 0x823FFFE8;
	sub_823FC168(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,-23120
	ctx.r11.s64 = ctx.r11.s64 + -23120;
	// addi r10,r10,-22104
	ctx.r10.s64 = ctx.r10.s64 + -22104;
	// addi r9,r9,12088
	ctx.r9.s64 = ctx.r9.s64 + 12088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lwz r8,1424(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
	// addi r11,r11,26312
	ctx.r11.s64 = ctx.r11.s64 + 26312;
	// stw r8,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r8.u32);
	// addi r10,r10,27352
	ctx.r10.s64 = ctx.r10.s64 + 27352;
	// lwz r8,1428(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// addi r9,r9,18524
	ctx.r9.s64 = ctx.r9.s64 + 18524;
	// stw r8,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r8.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// lwz r11,1444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// stw r11,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r11.u32);
	// lwz r11,1448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// lwz r11,1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// lwz r11,1460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// lwz r11,1464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1464);
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// lwz r11,1468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// lwz r11,1476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// lwz r11,1480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// lwz r11,1484(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// lfs f0,1488(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// lwz r11,1492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// lwz r11,1496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1496);
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// lfs f0,1500(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1500(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1500, temp.u32);
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
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
	// lwz r11,1516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1516);
	// stw r11,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r11.u32);
	// lfs f0,1520(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1520);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1520, temp.u32);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400128"))) PPC_WEAK_FUNC(sub_82400128);
PPC_FUNC_IMPL(__imp__sub_82400128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,10092
	ctx.r3.s64 = ctx.r11.s64 + 10092;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400138"))) PPC_WEAK_FUNC(sub_82400138);
PPC_FUNC_IMPL(__imp__sub_82400138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82400154;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82400168
	if (ctx.cr0.eq) goto loc_82400168;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823fffc8
	ctx.lr = 0x82400164;
	sub_823FFFC8(ctx, base);
	// b 0x8240016c
	goto loc_8240016C;
loc_82400168:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240016C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400180"))) PPC_WEAK_FUNC(sub_82400180);
PPC_FUNC_IMPL(__imp__sub_82400180) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82400188
	sub_82400188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82400188"))) PPC_WEAK_FUNC(sub_82400188);
PPC_FUNC_IMPL(__imp__sub_82400188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f61b8
	ctx.lr = 0x824001A8;
	sub_823F61B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824001b8
	if (!ctx.cr6.eq) goto loc_824001B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x824001d0
	goto loc_824001D0;
loc_824001B8:
	// bl 0x823f6300
	ctx.lr = 0x824001BC;
	sub_823F6300(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x824001d0
	if (ctx.cr6.eq) goto loc_824001D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823fc2e8
	ctx.lr = 0x824001D0;
	sub_823FC2E8(ctx, base);
loc_824001D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824001E8"))) PPC_WEAK_FUNC(sub_824001E8);
PPC_FUNC_IMPL(__imp__sub_824001E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82400220
	if (ctx.cr6.eq) goto loc_82400220;
	// bl 0x823f61b8
	ctx.lr = 0x82400210;
	sub_823F61B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82400220
	if (!ctx.cr6.eq) goto loc_82400220;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8240022c
	goto loc_8240022C;
loc_82400220:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fc648
	ctx.lr = 0x8240022C;
	sub_823FC648(ctx, base);
loc_8240022C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400248"))) PPC_WEAK_FUNC(sub_82400248);
PPC_FUNC_IMPL(__imp__sub_82400248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82400250;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82338b88
	ctx.lr = 0x82400260;
	sub_82338B88(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,12112
	ctx.r11.s64 = ctx.r11.s64 + 12112;
	// addi r9,r9,8296
	ctx.r9.s64 = ctx.r9.s64 + 8296;
	// addi r10,r10,13200
	ctx.r10.s64 = ctx.r10.s64 + 13200;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r29,r31,1448
	ctx.r29.s64 = ctx.r31.s64 + 1448;
	// addi r28,r30,1448
	ctx.r28.s64 = ctx.r30.s64 + 1448;
	// li r10,4
	ctx.r10.s64 = 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// lwz r9,1408(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// stw r9,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r9.u32);
	// lwz r9,1412(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// stw r9,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r9.u32);
	// lwz r9,1416(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// stw r9,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r9.u32);
	// lwz r9,1420(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1420);
	// stw r9,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r9.u32);
	// lwz r9,1424(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
	// stw r9,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r9.u32);
	// lwz r9,1428(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// stw r9,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r9.u32);
	// lwz r9,1432(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1432);
	// stw r9,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r9.u32);
	// lwz r9,1436(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// stw r9,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r9.u32);
	// lwz r9,1440(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	// stw r9,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r9.u32);
	// lwz r9,1444(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// stw r9,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r9.u32);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
	// beq cr6,0x8240034c
	if (ctx.cr6.eq) goto loc_8240034C;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8240034c
	if (!ctx.cr6.gt) goto loc_8240034C;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82400330
	if (ctx.cr0.eq) goto loc_82400330;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x82400330;
	sub_82332C38(ctx, base);
loc_82400330:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82400344;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_8240034C:
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// lwz r11,1476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// lfs f0,1480(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1480, temp.u32);
	// lfs f0,1484(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1484, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82400378"))) PPC_WEAK_FUNC(sub_82400378);
PPC_FUNC_IMPL(__imp__sub_82400378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15236
	ctx.r3.s64 = ctx.r11.s64 + 15236;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400388"))) PPC_WEAK_FUNC(sub_82400388);
PPC_FUNC_IMPL(__imp__sub_82400388) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82400390
	sub_82400390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82400390"))) PPC_WEAK_FUNC(sub_82400390);
PPC_FUNC_IMPL(__imp__sub_82400390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x824003B0;
	sub_82337028(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824003c0
	if (!ctx.cr6.eq) goto loc_824003C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x824003d8
	goto loc_824003D8;
loc_824003C0:
	// bl 0x82338750
	ctx.lr = 0x824003C4;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x824003d8
	if (ctx.cr6.eq) goto loc_824003D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x824003D8;
	sub_82338858(ctx, base);
loc_824003D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824003F0"))) PPC_WEAK_FUNC(sub_824003F0);
PPC_FUNC_IMPL(__imp__sub_824003F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82400428
	if (ctx.cr6.eq) goto loc_82400428;
	// bl 0x82337028
	ctx.lr = 0x82400418;
	sub_82337028(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82400428
	if (!ctx.cr6.eq) goto loc_82400428;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82400434
	goto loc_82400434;
loc_82400428:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x82400434;
	sub_82338A28(ctx, base);
loc_82400434:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400450"))) PPC_WEAK_FUNC(sub_82400450);
PPC_FUNC_IMPL(__imp__sub_82400450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x824004dc
	if (ctx.cr6.eq) goto loc_824004DC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-23476
	ctx.r11.s64 = ctx.r11.s64 + -23476;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// bne cr6,0x824004a0
	if (!ctx.cr6.eq) goto loc_824004A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824004ac
	goto loc_824004AC;
loc_824004A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_824004AC:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x824006f0
	ctx.lr = 0x824004B4;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824004c4
	if (!ctx.cr6.eq) goto loc_824004C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824004d0
	goto loc_824004D0;
loc_824004C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_824004D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82400638
	ctx.lr = 0x824004DC;
	sub_82400638(ctx, base);
loc_824004DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r10,r10,-23752
	ctx.r10.s64 = ctx.r10.s64 + -23752;
	// addi r9,r9,-23556
	ctx.r9.s64 = ctx.r9.s64 + -23556;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r8,-23504
	ctx.r8.s64 = ctx.r8.s64 + -23504;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400540"))) PPC_WEAK_FUNC(sub_82400540);
PPC_FUNC_IMPL(__imp__sub_82400540) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
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

__attribute__((alias("__imp__sub_82400558"))) PPC_WEAK_FUNC(sub_82400558);
PPC_FUNC_IMPL(__imp__sub_82400558) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
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

__attribute__((alias("__imp__sub_82400570"))) PPC_WEAK_FUNC(sub_82400570);
PPC_FUNC_IMPL(__imp__sub_82400570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823eac88
	ctx.lr = 0x82400590;
	sub_823EAC88(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x824005a0
	if (!ctx.cr6.eq) goto loc_824005A0;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// b 0x824005b8
	goto loc_824005B8;
loc_824005A0:
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
	ctx.lr = 0x824005B8;
	sub_82400750(ctx, base);
loc_824005B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824005D0"))) PPC_WEAK_FUNC(sub_824005D0);
PPC_FUNC_IMPL(__imp__sub_824005D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82400608
	if (ctx.cr6.eq) goto loc_82400608;
	// bl 0x823eac88
	ctx.lr = 0x824005F8;
	sub_823EAC88(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82400608
	if (!ctx.cr6.eq) goto loc_82400608;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82400620
	goto loc_82400620;
loc_82400608:
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
	ctx.lr = 0x82400620;
	sub_82400920(ctx, base);
loc_82400620:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400638"))) PPC_WEAK_FUNC(sub_82400638);
PPC_FUNC_IMPL(__imp__sub_82400638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8240068c
	if (ctx.cr6.eq) goto loc_8240068C;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,-30820
	ctx.r11.s64 = ctx.r11.s64 + -30820;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82400684
	if (ctx.cr6.eq) goto loc_82400684;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_82400684:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x824006f0
	ctx.lr = 0x8240068C;
	sub_824006F0(ctx, base);
loc_8240068C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,14184
	ctx.r11.s64 = ctx.r11.s64 + 14184;
	// addi r9,r9,-24336
	ctx.r9.s64 = ctx.r9.s64 + -24336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r8,-24140
	ctx.r10.s64 = ctx.r8.s64 + -24140;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_824006F0"))) PPC_WEAK_FUNC(sub_824006F0);
PPC_FUNC_IMPL(__imp__sub_824006F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82404518
	ctx.lr = 0x82400710;
	sub_82404518(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,27696
	ctx.r11.s64 = ctx.r11.s64 + 27696;
	// addi r10,r10,27892
	ctx.r10.s64 = ctx.r10.s64 + 27892;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
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

__attribute__((alias("__imp__sub_82400750"))) PPC_WEAK_FUNC(sub_82400750);
PPC_FUNC_IMPL(__imp__sub_82400750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824007b0
	ctx.lr = 0x82400770;
	sub_824007B0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82400780
	if (!ctx.cr6.eq) goto loc_82400780;
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// b 0x82400798
	goto loc_82400798;
loc_82400780:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x823e94e8
	ctx.lr = 0x82400798;
	sub_823E94E8(ctx, base);
loc_82400798:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824007B0"))) PPC_WEAK_FUNC(sub_824007B0);
PPC_FUNC_IMPL(__imp__sub_824007B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26012
	ctx.r31.s64 = ctx.r11.s64 + -26012;
	// lwz r11,-26008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26008);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824007f8
	if (!ctx.cr0.eq) goto loc_824007F8;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-24088
	ctx.r9.s64 = ctx.r9.s64 + -24088;
	// stw r11,-26008(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26008, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10520
	ctx.r3.s64 = ctx.r11.s64 + -10520;
	// bl 0x82a4c758
	ctx.lr = 0x824007F8;
	sub_82A4C758(ctx, base);
loc_824007F8:
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

__attribute__((alias("__imp__sub_82400810"))) PPC_WEAK_FUNC(sub_82400810);
PPC_FUNC_IMPL(__imp__sub_82400810) {
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
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82833108
	ctx.lr = 0x82400824;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82400838
	if (ctx.cr0.eq) goto loc_82400838;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e91f8
	ctx.lr = 0x82400834;
	sub_823E91F8(ctx, base);
	// b 0x8240083c
	goto loc_8240083C;
loc_82400838:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240083C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82400854
	if (ctx.cr6.eq) goto loc_82400854;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82400854:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400868"))) PPC_WEAK_FUNC(sub_82400868);
PPC_FUNC_IMPL(__imp__sub_82400868) {
	PPC_FUNC_PROLOGUE();
	// li r3,76
	ctx.r3.s64 = 76;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400870"))) PPC_WEAK_FUNC(sub_82400870);
PPC_FUNC_IMPL(__imp__sub_82400870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31068(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31068);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824008b0
	if (!ctx.cr0.eq) goto loc_824008B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31068, ctx.r11.u32);
	// addi r3,r9,9968
	ctx.r3.s64 = ctx.r9.s64 + 9968;
	// bl 0x82816528
	ctx.lr = 0x824008A8;
	sub_82816528(ctx, base);
	// stw r3,31064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31064, ctx.r3.u32);
	// b 0x824008b4
	goto loc_824008B4;
loc_824008B0:
	// lwz r3,31064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31064);
loc_824008B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824008C8"))) PPC_WEAK_FUNC(sub_824008C8);
PPC_FUNC_IMPL(__imp__sub_824008C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824007b0
	ctx.lr = 0x824008E8;
	sub_824007B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824008FC;
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

__attribute__((alias("__imp__sub_82400918"))) PPC_WEAK_FUNC(sub_82400918);
PPC_FUNC_IMPL(__imp__sub_82400918) {
	PPC_FUNC_PROLOGUE();
	// b 0x824007b0
	sub_824007B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82400920"))) PPC_WEAK_FUNC(sub_82400920);
PPC_FUNC_IMPL(__imp__sub_82400920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82400958
	if (ctx.cr6.eq) goto loc_82400958;
	// bl 0x824007b0
	ctx.lr = 0x82400948;
	sub_824007B0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82400958
	if (!ctx.cr6.eq) goto loc_82400958;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82400970
	goto loc_82400970;
loc_82400958:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x823e9548
	ctx.lr = 0x82400970;
	sub_823E9548(ctx, base);
loc_82400970:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400988"))) PPC_WEAK_FUNC(sub_82400988);
PPC_FUNC_IMPL(__imp__sub_82400988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x824009e0
	ctx.lr = 0x824009A8;
	sub_824009E0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824009b8
	if (ctx.cr6.eq) goto loc_824009B8;
	// bl 0x82332db8
	ctx.lr = 0x824009B8;
	sub_82332DB8(ctx, base);
loc_824009B8:
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

__attribute__((alias("__imp__sub_824009E0"))) PPC_WEAK_FUNC(sub_824009E0);
PPC_FUNC_IMPL(__imp__sub_824009E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x824009E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82400a24
	if (!ctx.cr6.lt) goto loc_82400A24;
	// mulli r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 * 24;
	// subf r30,r31,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_82400A0C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82333960
	ctx.lr = 0x82400A18;
	sub_82333960(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x82400a0c
	if (!ctx.cr0.eq) goto loc_82400A0C;
loc_82400A24:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82400A3C;
	sub_82332CA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82400A48"))) PPC_WEAK_FUNC(sub_82400A48);
PPC_FUNC_IMPL(__imp__sub_82400A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82400A50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,24
	ctx.r11.s64 = 24;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// beq cr6,0x82400af0
	if (ctx.cr6.eq) goto loc_82400AF0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82400af0
	if (!ctx.cr6.gt) goto loc_82400AF0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82400aac
	if (ctx.cr0.eq) goto loc_82400AAC;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x82400AAC;
	sub_82332C38(ctx, base);
loc_82400AAC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82400af0
	if (!ctx.cr6.gt) goto loc_82400AF0;
loc_82400ABC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82400b00
	ctx.lr = 0x82400AC8;
	sub_82400B00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82400adc
	if (ctx.cr0.eq) goto loc_82400ADC;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823339b8
	ctx.lr = 0x82400ADC;
	sub_823339B8(ctx, base);
loc_82400ADC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82400abc
	if (ctx.cr6.lt) goto loc_82400ABC;
loc_82400AF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82400B00"))) PPC_WEAK_FUNC(sub_82400B00);
PPC_FUNC_IMPL(__imp__sub_82400B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82400B28;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400B48"))) PPC_WEAK_FUNC(sub_82400B48);
PPC_FUNC_IMPL(__imp__sub_82400B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82400bb8
	if (ctx.cr6.eq) goto loc_82400BB8;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82332c38
	ctx.lr = 0x82400B84;
	sub_82332C38(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82400bb8
	if (ctx.cr6.eq) goto loc_82400BB8;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82400ba4
	if (ctx.cr6.eq) goto loc_82400BA4;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x82400bac
	goto loc_82400BAC;
loc_82400BA4:
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,7896
	ctx.r4.s64 = ctx.r10.s64 + 7896;
loc_82400BAC:
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82400BB8;
	sub_82A45878(ctx, base);
loc_82400BB8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82400bdc
	if (ctx.cr6.eq) goto loc_82400BDC;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82400BDC;
	sub_82332C38(ctx, base);
loc_82400BDC:
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

__attribute__((alias("__imp__sub_82400BF8"))) PPC_WEAK_FUNC(sub_82400BF8);
PPC_FUNC_IMPL(__imp__sub_82400BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82400c8c
	if (ctx.cr6.eq) goto loc_82400C8C;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,24956
	ctx.r11.s64 = ctx.r11.s64 + 24956;
	// addi r10,r10,-6368
	ctx.r10.s64 = ctx.r10.s64 + -6368;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// bne cr6,0x82400c48
	if (!ctx.cr6.eq) goto loc_82400C48;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82400c58
	goto loc_82400C58;
loc_82400C48:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_82400C58:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82404518
	ctx.lr = 0x82400C60;
	sub_82404518(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82400c70
	if (!ctx.cr6.eq) goto loc_82400C70;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82400c80
	goto loc_82400C80;
loc_82400C70:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_82400C80:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82404460
	ctx.lr = 0x82400C8C;
	sub_82404460(ctx, base);
loc_82400C8C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,-14708
	ctx.r11.s64 = ctx.r11.s64 + -14708;
	// addi r9,r9,24728
	ctx.r9.s64 = ctx.r9.s64 + 24728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r8,24904
	ctx.r10.s64 = ctx.r8.s64 + 24904;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,29976
	ctx.r9.s64 = ctx.r9.s64 + 29976;
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

__attribute__((alias("__imp__sub_82400D08"))) PPC_WEAK_FUNC(sub_82400D08);
PPC_FUNC_IMPL(__imp__sub_82400D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82400d68
	ctx.lr = 0x82400D28;
	sub_82400D68(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82400d38
	if (!ctx.cr6.eq) goto loc_82400D38;
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// b 0x82400d50
	goto loc_82400D50;
loc_82400D38:
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
	// bl 0x823e9b40
	ctx.lr = 0x82400D50;
	sub_823E9B40(ctx, base);
loc_82400D50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400D68"))) PPC_WEAK_FUNC(sub_82400D68);
PPC_FUNC_IMPL(__imp__sub_82400D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26596
	ctx.r31.s64 = ctx.r11.s64 + -26596;
	// lwz r11,-26592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26592);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82400db0
	if (!ctx.cr0.eq) goto loc_82400DB0;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,24968
	ctx.r9.s64 = ctx.r9.s64 + 24968;
	// stw r11,-26592(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26592, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10496
	ctx.r3.s64 = ctx.r11.s64 + -10496;
	// bl 0x82a4c758
	ctx.lr = 0x82400DB0;
	sub_82A4C758(ctx, base);
loc_82400DB0:
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

__attribute__((alias("__imp__sub_82400DC8"))) PPC_WEAK_FUNC(sub_82400DC8);
PPC_FUNC_IMPL(__imp__sub_82400DC8) {
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
	ctx.lr = 0x82400DDC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82400df0
	if (ctx.cr0.eq) goto loc_82400DF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e9618
	ctx.lr = 0x82400DEC;
	sub_823E9618(ctx, base);
	// b 0x82400df4
	goto loc_82400DF4;
loc_82400DF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82400DF4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82400e0c
	if (ctx.cr6.eq) goto loc_82400E0C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82400E0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400E20"))) PPC_WEAK_FUNC(sub_82400E20);
PPC_FUNC_IMPL(__imp__sub_82400E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31060(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31060);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82400e60
	if (!ctx.cr0.eq) goto loc_82400E60;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31060(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31060, ctx.r11.u32);
	// addi r3,r9,8020
	ctx.r3.s64 = ctx.r9.s64 + 8020;
	// bl 0x82816528
	ctx.lr = 0x82400E58;
	sub_82816528(ctx, base);
	// stw r3,31056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31056, ctx.r3.u32);
	// b 0x82400e64
	goto loc_82400E64;
loc_82400E60:
	// lwz r3,31056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31056);
loc_82400E64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400E78"))) PPC_WEAK_FUNC(sub_82400E78);
PPC_FUNC_IMPL(__imp__sub_82400E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82400d68
	ctx.lr = 0x82400E98;
	sub_82400D68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82400EAC;
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

__attribute__((alias("__imp__sub_82400EC8"))) PPC_WEAK_FUNC(sub_82400EC8);
PPC_FUNC_IMPL(__imp__sub_82400EC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82400d68
	sub_82400D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82400ED0"))) PPC_WEAK_FUNC(sub_82400ED0);
PPC_FUNC_IMPL(__imp__sub_82400ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82400f08
	if (ctx.cr6.eq) goto loc_82400F08;
	// bl 0x82400d68
	ctx.lr = 0x82400EF8;
	sub_82400D68(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82400f08
	if (!ctx.cr6.eq) goto loc_82400F08;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82400f20
	goto loc_82400F20;
loc_82400F08:
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
	// bl 0x823e9c18
	ctx.lr = 0x82400F20;
	sub_823E9C18(ctx, base);
loc_82400F20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400F38"))) PPC_WEAK_FUNC(sub_82400F38);
PPC_FUNC_IMPL(__imp__sub_82400F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x82400F60;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82400f70
	if (ctx.cr6.eq) goto loc_82400F70;
	// bl 0x82332db8
	ctx.lr = 0x82400F70;
	sub_82332DB8(ctx, base);
loc_82400F70:
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

__attribute__((alias("__imp__sub_82400F98"))) PPC_WEAK_FUNC(sub_82400F98);
PPC_FUNC_IMPL(__imp__sub_82400F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82400FA0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82402ba8
	ctx.lr = 0x82400FB0;
	sub_82402BA8(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,19296
	ctx.r11.s64 = ctx.r11.s64 + 19296;
	// addi r10,r10,21652
	ctx.r10.s64 = ctx.r10.s64 + 21652;
	// addi r9,r9,-6552
	ctx.r9.s64 = ctx.r9.s64 + -6552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r21,8
	ctx.r21.s64 = 8;
	// addi r28,r31,2136
	ctx.r28.s64 = ctx.r31.s64 + 2136;
	// addi r27,r30,2136
	ctx.r27.s64 = ctx.r30.s64 + 2136;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// lwz r11,2128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2128);
	// stw r11,2128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2128, ctx.r11.u32);
	// lwz r11,2132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2132);
	// stw r11,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r11.u32);
	// stw r21,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r21.u32);
	// stw r29,2144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2144, ctx.r29.u32);
	// stw r29,2148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2148, ctx.r29.u32);
	// stw r29,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r29.u32);
	// stw r29,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r29.u32);
	// stw r29,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r29.u32);
	// beq cr6,0x824010a4
	if (ctx.cr6.eq) goto loc_824010A4;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824010a4
	if (!ctx.cr6.gt) goto loc_824010A4;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82401040
	if (ctx.cr0.eq) goto loc_82401040;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82401040;
	sub_82332C38(ctx, base);
loc_82401040:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824010a4
	if (!ctx.cr6.gt) goto loc_824010A4;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82401054:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x82401068;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82401090
	if (ctx.cr0.eq) goto loc_82401090;
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
loc_82401090:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82401054
	if (ctx.cr6.lt) goto loc_82401054;
loc_824010A4:
	// lwz r11,2160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2160);
	// stw r11,2160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2160, ctx.r11.u32);
	// lwz r11,2164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2164);
	// stw r11,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r11.u32);
	// lwz r11,2168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2168);
	// stw r11,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r11.u32);
	// lwz r11,2172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2172);
	// stw r11,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r11.u32);
	// lwz r11,2176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2176);
	// stw r11,2176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2176, ctx.r11.u32);
	// lwz r11,2180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2180);
	// stw r11,2180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2180, ctx.r11.u32);
	// lwz r11,2184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2184);
	// stw r11,2184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2184, ctx.r11.u32);
	// lwz r11,2188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2188);
	// stw r11,2188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2188, ctx.r11.u32);
	// lwz r11,2192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2192);
	// stw r11,2192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2192, ctx.r11.u32);
	// lwz r11,2196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2196);
	// stw r11,2196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2196, ctx.r11.u32);
	// lwz r11,2200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2200);
	// stw r11,2200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2200, ctx.r11.u32);
	// lwz r11,2204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2204);
	// stw r11,2204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2204, ctx.r11.u32);
	// lwz r11,2208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2208);
	// stw r11,2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2208, ctx.r11.u32);
	// lwz r11,2212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2212);
	// stw r11,2212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2212, ctx.r11.u32);
	// lwz r11,2216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2216);
	// stw r11,2216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2216, ctx.r11.u32);
	// lwz r11,2220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2220);
	// stw r11,2220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2220, ctx.r11.u32);
	// lfs f0,2224(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2224, temp.u32);
	// lwz r11,2228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2228);
	// stw r11,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r11.u32);
	// lfs f0,2232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2232, temp.u32);
	// lwz r11,2236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2236);
	// stw r11,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r11.u32);
	// lfs f0,2240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2240, temp.u32);
	// lfs f0,2244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2244, temp.u32);
	// lfs f0,2248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2248, temp.u32);
	// lfs f0,2252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2252, temp.u32);
	// lfs f0,2256(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2256, temp.u32);
	// lwz r11,2260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2260);
	// stw r11,2260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2260, ctx.r11.u32);
	// lfs f0,2264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2264, temp.u32);
	// lfs f0,2268(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2268(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2268, temp.u32);
	// lfs f0,2272(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2272, temp.u32);
	// lfs f0,2276(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2276);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2276, temp.u32);
	// lwz r11,2280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2280);
	// stw r11,2280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2280, ctx.r11.u32);
	// lwz r11,2284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2284);
	// stw r11,2284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2284, ctx.r11.u32);
	// lwz r11,2288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2288);
	// stw r11,2288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2288, ctx.r11.u32);
	// lwz r11,2292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2292);
	// stw r11,2292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2292, ctx.r11.u32);
	// lwz r11,2296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2296);
	// stw r11,2296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2296, ctx.r11.u32);
	// lwz r11,2300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2300);
	// stw r11,2300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2300, ctx.r11.u32);
	// lwz r11,2304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2304);
	// stw r11,2304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2304, ctx.r11.u32);
	// lwz r11,2308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2308);
	// stw r11,2308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2308, ctx.r11.u32);
	// lwz r11,2312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2312);
	// stw r11,2312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2312, ctx.r11.u32);
	// lwz r11,2316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2316);
	// stw r11,2316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2316, ctx.r11.u32);
	// lwz r11,2320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2320);
	// stw r11,2320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2320, ctx.r11.u32);
	// addi r4,r30,2396
	ctx.r4.s64 = ctx.r30.s64 + 2396;
	// lwz r11,2324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2324);
	// addi r3,r31,2396
	ctx.r3.s64 = ctx.r31.s64 + 2396;
	// stw r11,2324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2324, ctx.r11.u32);
	// lwz r11,2328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2328);
	// stw r11,2328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2328, ctx.r11.u32);
	// lwz r11,2332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2332);
	// stw r11,2332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2332, ctx.r11.u32);
	// lwz r11,2336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2336);
	// stw r11,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r11.u32);
	// lwz r11,2340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2340);
	// stw r11,2340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2340, ctx.r11.u32);
	// lwz r11,2344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2344);
	// stw r11,2344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2344, ctx.r11.u32);
	// lwz r11,2348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2348);
	// stw r11,2348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2348, ctx.r11.u32);
	// lwz r11,2352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2352);
	// stw r11,2352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2352, ctx.r11.u32);
	// lwz r11,2356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2356);
	// stw r11,2356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2356, ctx.r11.u32);
	// lwz r11,2360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2360);
	// stw r11,2360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2360, ctx.r11.u32);
	// lwz r11,2364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2364);
	// stw r11,2364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2364, ctx.r11.u32);
	// lwz r11,2368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2368);
	// stw r11,2368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2368, ctx.r11.u32);
	// lfs f0,2372(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2372);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2372, temp.u32);
	// lfs f0,2376(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2376);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2376, temp.u32);
	// lwz r11,2380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2380);
	// stw r11,2380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2380, ctx.r11.u32);
	// lfs f0,2384(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2384, temp.u32);
	// lwz r11,2388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2388);
	// stw r11,2388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2388, ctx.r11.u32);
	// lwz r11,2392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2392);
	// stw r11,2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2392, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x82401288;
	sub_823339B8(ctx, base);
	// addi r11,r31,2440
	ctx.r11.s64 = ctx.r31.s64 + 2440;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,10804
	ctx.r10.s64 = ctx.r10.s64 + 10804;
	// addi r4,r30,2444
	ctx.r4.s64 = ctx.r30.s64 + 2444;
	// lwz r11,2420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2420);
	// stw r11,2420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2420, ctx.r11.u32);
	// lwz r11,2424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2424);
	// stw r11,2424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2424, ctx.r11.u32);
	// lwz r11,2428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2428);
	// stw r11,2428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2428, ctx.r11.u32);
	// lwz r11,2432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2432);
	// stw r11,2432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2432, ctx.r11.u32);
	// lwz r11,2436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2436);
	// stw r11,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r11.u32);
	// stw r10,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r10.u32);
	// bl 0x82873b58
	ctx.lr = 0x824012CC;
	sub_82873B58(ctx, base);
	// lwz r11,2468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2468);
	// addi r3,r31,2632
	ctx.r3.s64 = ctx.r31.s64 + 2632;
	// stw r11,2468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2468, ctx.r11.u32);
	// lwz r11,2472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2472);
	// stw r11,2472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2472, ctx.r11.u32);
	// lwz r11,2476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2476);
	// stw r11,2476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2476, ctx.r11.u32);
	// lfs f0,2480(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2480, temp.u32);
	// lfs f0,2484(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2484, temp.u32);
	// lwz r11,2488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2488);
	// stw r11,2488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2488, ctx.r11.u32);
	// lwz r11,2492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2492);
	// stw r11,2492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2492, ctx.r11.u32);
	// lwz r11,2496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2496);
	// stw r11,2496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2496, ctx.r11.u32);
	// lfs f0,2500(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2500);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2500(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2500, temp.u32);
	// lwz r11,2504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2504);
	// stw r11,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r11.u32);
	// lwz r11,2508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2508);
	// stw r11,2508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2508, ctx.r11.u32);
	// lwz r11,2512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2512);
	// stw r11,2512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2512, ctx.r11.u32);
	// addi r4,r30,2632
	ctx.r4.s64 = ctx.r30.s64 + 2632;
	// li r5,64
	ctx.r5.s64 = 64;
	// lfs f0,2516(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2516, temp.u32);
	// lfs f0,2520(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2520);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2520, temp.u32);
	// lfs f0,2524(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2524);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2524(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2524, temp.u32);
	// lwz r11,2528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2528);
	// stw r11,2528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2528, ctx.r11.u32);
	// lwz r11,2532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2532);
	// stw r11,2532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2532, ctx.r11.u32);
	// lwz r11,2536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2536);
	// stw r11,2536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2536, ctx.r11.u32);
	// lwz r11,2540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2540);
	// stw r11,2540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2540, ctx.r11.u32);
	// lwz r11,2544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2544);
	// stw r11,2544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2544, ctx.r11.u32);
	// lwz r11,2548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2548);
	// stw r11,2548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2548, ctx.r11.u32);
	// lwz r11,2552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2552);
	// stw r11,2552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2552, ctx.r11.u32);
	// lwz r11,2556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2556);
	// stw r11,2556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2556, ctx.r11.u32);
	// lwz r11,2560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2560);
	// stw r11,2560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2560, ctx.r11.u32);
	// lfs f0,2564(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2564);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2564, temp.u32);
	// lwz r11,2568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2568);
	// stw r11,2568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2568, ctx.r11.u32);
	// lwz r11,2572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2572);
	// stw r11,2572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2572, ctx.r11.u32);
	// lwz r11,2576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2576);
	// stw r11,2576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2576, ctx.r11.u32);
	// lwz r11,2580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2580);
	// stw r11,2580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2580, ctx.r11.u32);
	// lwz r11,2584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2584);
	// stw r11,2584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2584, ctx.r11.u32);
	// lwz r11,2588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2588);
	// stw r11,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
	// lwz r11,2592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2592);
	// stw r11,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r11.u32);
	// lwz r11,2596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2596);
	// stw r11,2596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2596, ctx.r11.u32);
	// lwz r11,2600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2600);
	// stw r11,2600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2600, ctx.r11.u32);
	// lwz r11,2604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2604);
	// stw r11,2604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2604, ctx.r11.u32);
	// lwz r11,2608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2608);
	// stw r11,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r11.u32);
	// lwz r11,2612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2612);
	// stw r11,2612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2612, ctx.r11.u32);
	// lwz r11,2616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2616);
	// stw r11,2616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2616, ctx.r11.u32);
	// lwz r11,2620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2620);
	// stw r11,2620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2620, ctx.r11.u32);
	// lwz r11,2624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2624);
	// stw r11,2624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2624, ctx.r11.u32);
	// lwz r11,2628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2628);
	// stw r11,2628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2628, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82401424;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,2696
	ctx.r4.s64 = ctx.r30.s64 + 2696;
	// addi r3,r31,2696
	ctx.r3.s64 = ctx.r31.s64 + 2696;
	// bl 0x823339b8
	ctx.lr = 0x82401430;
	sub_823339B8(ctx, base);
	// lwz r11,2720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2720);
	// addi r4,r30,2768
	ctx.r4.s64 = ctx.r30.s64 + 2768;
	// addi r3,r31,2768
	ctx.r3.s64 = ctx.r31.s64 + 2768;
	// stw r11,2720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2720, ctx.r11.u32);
	// lwz r11,2724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2724);
	// stw r11,2724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2724, ctx.r11.u32);
	// lwz r11,2728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2728);
	// stw r11,2728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2728, ctx.r11.u32);
	// lfs f0,2732(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2732, temp.u32);
	// lwz r11,2736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2736);
	// stw r11,2736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2736, ctx.r11.u32);
	// lwz r11,2740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2740);
	// stw r11,2740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2740, ctx.r11.u32);
	// lwz r11,2744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2744);
	// stw r11,2744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2744, ctx.r11.u32);
	// lwz r11,2748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2748);
	// stw r11,2748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2748, ctx.r11.u32);
	// lwz r11,2752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2752);
	// stw r11,2752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2752, ctx.r11.u32);
	// lwz r11,2756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2756);
	// stw r11,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r11.u32);
	// lwz r11,2760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2760);
	// stw r11,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r11.u32);
	// lwz r11,2764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2764);
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8240149C;
	sub_82873B58(ctx, base);
	// lwz r11,2792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2792);
	// addi r28,r31,2840
	ctx.r28.s64 = ctx.r31.s64 + 2840;
	// li r22,4
	ctx.r22.s64 = 4;
	// addi r27,r30,2840
	ctx.r27.s64 = ctx.r30.s64 + 2840;
	// stw r11,2792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2792, ctx.r11.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// lwz r11,2796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2796);
	// stw r11,2796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2796, ctx.r11.u32);
	// lwz r11,2800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2800);
	// stw r11,2800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2800, ctx.r11.u32);
	// lwz r11,2804(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2804);
	// stw r11,2804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2804, ctx.r11.u32);
	// lwz r11,2808(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2808);
	// stw r11,2808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2808, ctx.r11.u32);
	// lwz r11,2812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2812);
	// stw r11,2812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2812, ctx.r11.u32);
	// lwz r11,2816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2816);
	// stw r11,2816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2816, ctx.r11.u32);
	// lwz r11,2820(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2820);
	// stw r11,2820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2820, ctx.r11.u32);
	// lwz r11,2824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2824);
	// stw r11,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r11.u32);
	// lwz r11,2828(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2828);
	// stw r11,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r11.u32);
	// lwz r11,2832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2832);
	// stw r11,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r11.u32);
	// lwz r11,2836(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2836);
	// stw r11,2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2836, ctx.r11.u32);
	// stw r22,2844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2844, ctx.r22.u32);
	// stw r29,2848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2848, ctx.r29.u32);
	// stw r29,2852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2852, ctx.r29.u32);
	// stw r29,2856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2856, ctx.r29.u32);
	// stw r29,2860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2860, ctx.r29.u32);
	// stw r29,2840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2840, ctx.r29.u32);
	// beq cr6,0x82401570
	if (ctx.cr6.eq) goto loc_82401570;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82401570
	if (!ctx.cr6.gt) goto loc_82401570;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82401554
	if (ctx.cr0.eq) goto loc_82401554;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82401554;
	sub_82332C38(ctx, base);
loc_82401554:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82401568;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_82401570:
	// lwz r11,2864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2864);
	// addi r28,r31,2876
	ctx.r28.s64 = ctx.r31.s64 + 2876;
	// addi r27,r30,2876
	ctx.r27.s64 = ctx.r30.s64 + 2876;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r11,2864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2864, ctx.r11.u32);
	// lwz r11,2868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2868);
	// stw r11,2868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2868, ctx.r11.u32);
	// lwz r11,2872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2872);
	// stw r11,2872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2872, ctx.r11.u32);
	// stw r22,2880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2880, ctx.r22.u32);
	// stw r29,2884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2884, ctx.r29.u32);
	// stw r29,2888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2888, ctx.r29.u32);
	// stw r29,2892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2892, ctx.r29.u32);
	// stw r29,2896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2896, ctx.r29.u32);
	// stw r29,2876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2876, ctx.r29.u32);
	// beq cr6,0x824015f8
	if (ctx.cr6.eq) goto loc_824015F8;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824015f8
	if (!ctx.cr6.gt) goto loc_824015F8;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824015dc
	if (ctx.cr0.eq) goto loc_824015DC;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x824015DC;
	sub_82332C38(ctx, base);
loc_824015DC:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x824015F0;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_824015F8:
	// lwz r11,2900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2900);
	// addi r4,r30,2912
	ctx.r4.s64 = ctx.r30.s64 + 2912;
	// addi r3,r31,2912
	ctx.r3.s64 = ctx.r31.s64 + 2912;
	// stw r11,2900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2900, ctx.r11.u32);
	// lwz r11,2904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2904);
	// stw r11,2904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2904, ctx.r11.u32);
	// lwz r11,2908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2908);
	// stw r11,2908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2908, ctx.r11.u32);
	// bl 0x8282f630
	ctx.lr = 0x8240161C;
	sub_8282F630(ctx, base);
	// lwz r11,2936(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2936);
	// stw r11,2936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2936, ctx.r11.u32);
	// lfs f0,2940(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2940);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2940(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2940, temp.u32);
	// lwz r11,2944(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2944);
	// stw r11,2944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2944, ctx.r11.u32);
	// lwz r11,2948(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2948);
	// stw r11,2948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2948, ctx.r11.u32);
	// lwz r11,2952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2952);
	// stw r11,2952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2952, ctx.r11.u32);
	// lwz r11,2956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2956);
	// stw r11,2956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2956, ctx.r11.u32);
	// lwz r11,2960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2960);
	// stw r11,2960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2960, ctx.r11.u32);
	// lfs f0,2964(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2964);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2964, temp.u32);
	// lwz r11,2968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2968);
	// stw r11,2968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2968, ctx.r11.u32);
	// lwz r11,2972(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2972);
	// stw r11,2972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2972, ctx.r11.u32);
	// lfs f0,2976(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2976);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2976, temp.u32);
	// lwz r11,2980(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2980);
	// stw r11,2980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2980, ctx.r11.u32);
	// lwz r11,2984(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2984);
	// stw r11,2984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2984, ctx.r11.u32);
	// lwz r11,2988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2988);
	// stw r11,2988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2988, ctx.r11.u32);
	// lwz r11,2992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2992);
	// stw r11,2992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2992, ctx.r11.u32);
	// lwz r11,2996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2996);
	// stw r11,2996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2996, ctx.r11.u32);
	// lwz r11,3000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3000);
	// stw r11,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r11.u32);
	// lwz r11,3004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3004);
	// stw r11,3004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3004, ctx.r11.u32);
	// lwz r11,3008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3008);
	// stw r11,3008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3008, ctx.r11.u32);
	// lwz r11,3012(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3012);
	// stw r11,3012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3012, ctx.r11.u32);
	// lwz r11,3016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3016);
	// stw r11,3016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3016, ctx.r11.u32);
	// lwz r11,3020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3020);
	// stw r11,3020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3020, ctx.r11.u32);
	// lwz r11,3024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3024);
	// stw r11,3024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3024, ctx.r11.u32);
	// lwz r11,3028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3028);
	// stw r11,3028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3028, ctx.r11.u32);
	// lwz r11,3032(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3032);
	// stw r11,3032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3032, ctx.r11.u32);
	// lwz r11,3036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3036);
	// stw r11,3036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3036, ctx.r11.u32);
	// lwz r11,3040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3040);
	// stw r11,3040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3040, ctx.r11.u32);
	// lfs f0,3044(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3044);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3044(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3044, temp.u32);
	// lwz r11,3048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3048);
	// stw r11,3048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3048, ctx.r11.u32);
	// lwz r11,3052(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3052);
	// stw r11,3052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3052, ctx.r11.u32);
	// lwz r11,3056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3056);
	// stw r11,3056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3056, ctx.r11.u32);
	// lwz r11,3060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3060);
	// stw r11,3060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3060, ctx.r11.u32);
	// lwz r11,3064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3064);
	// stw r11,3064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3064, ctx.r11.u32);
	// lwz r11,3068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3068);
	// stw r11,3068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3068, ctx.r11.u32);
	// lwz r11,3072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3072);
	// stw r11,3072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3072, ctx.r11.u32);
	// lwz r11,3076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3076);
	// stw r11,3076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3076, ctx.r11.u32);
	// lwz r11,3080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3080);
	// stw r11,3080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3080, ctx.r11.u32);
	// lwz r11,3084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3084);
	// stw r11,3084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3084, ctx.r11.u32);
	// lfs f0,3088(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3088(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3088, temp.u32);
	// lwz r11,3092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3092);
	// stw r11,3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3092, ctx.r11.u32);
	// lwz r11,3096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3096);
	// stw r11,3096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3096, ctx.r11.u32);
	// lfs f0,3100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3100, temp.u32);
	// lwz r11,3104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3104);
	// stw r11,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r11.u32);
	// lfs f0,3108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3108, temp.u32);
	// lfs f0,3112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3112, temp.u32);
	// lfs f0,3116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3116, temp.u32);
	// lfs f0,3120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3120, temp.u32);
	// lwz r11,3124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3124);
	// stw r11,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r11.u32);
	// lwz r11,3128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3128);
	// stw r11,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r11.u32);
	// lwz r11,3132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3132);
	// stw r11,3132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3132, ctx.r11.u32);
	// lwz r11,3136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3136);
	// stw r11,3136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3136, ctx.r11.u32);
	// lwz r11,3140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3140);
	// stw r11,3140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3140, ctx.r11.u32);
	// lfs f0,3144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3144, temp.u32);
	// lwz r11,3148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3148);
	// stw r11,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r11.u32);
	// lwz r11,3152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3152);
	// stw r11,3152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3152, ctx.r11.u32);
	// lwz r11,3156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3156);
	// stw r11,3156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3156, ctx.r11.u32);
	// lwz r11,3160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3160);
	// stw r11,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r11.u32);
	// lwz r11,3164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3164);
	// stw r11,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r11.u32);
	// lwz r11,3168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3168);
	// stw r11,3168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3168, ctx.r11.u32);
	// lwz r11,3172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3172);
	// stw r11,3172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3172, ctx.r11.u32);
	// lwz r11,3176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3176);
	// stw r11,3176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3176, ctx.r11.u32);
	// lwz r11,3180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3180);
	// stw r11,3180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3180, ctx.r11.u32);
	// lfs f0,3184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3184, temp.u32);
	// lfs f0,3188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3188, temp.u32);
	// lfs f0,3192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3192, temp.u32);
	// lfs f0,3196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3196, temp.u32);
	// lwz r11,3200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3200);
	// stw r11,3200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3200, ctx.r11.u32);
	// lwz r11,3204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3204);
	// stw r11,3204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3204, ctx.r11.u32);
	// lwz r11,3208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3208);
	// stw r11,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r11.u32);
	// lwz r11,3212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3212);
	// stw r11,3212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3212, ctx.r11.u32);
	// lwz r11,3216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// stw r11,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r11.u32);
	// lfs f0,3220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3220, temp.u32);
	// lwz r11,3224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3224);
	// stw r11,3224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3224, ctx.r11.u32);
	// lwz r11,3228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3228);
	// stw r11,3228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3228, ctx.r11.u32);
	// lwz r11,3232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3232);
	// stw r11,3232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3232, ctx.r11.u32);
	// lwz r11,3236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3236);
	// stw r11,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r11.u32);
	// lwz r11,3240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3240);
	// stw r11,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r11.u32);
	// addi r4,r30,3412
	ctx.r4.s64 = ctx.r30.s64 + 3412;
	// addi r3,r31,3412
	ctx.r3.s64 = ctx.r31.s64 + 3412;
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
	// lwz r11,3264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// stw r11,3264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3264, ctx.r11.u32);
	// lwz r11,3268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3268);
	// stw r11,3268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3268, ctx.r11.u32);
	// lwz r11,3272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3272);
	// stw r11,3272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3272, ctx.r11.u32);
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
	// lwz r11,3332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3332);
	// stw r11,3332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3332, ctx.r11.u32);
	// lwz r11,3336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3336);
	// stw r11,3336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3336, ctx.r11.u32);
	// lwz r11,3340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3340);
	// stw r11,3340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3340, ctx.r11.u32);
	// lwz r11,3344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3344);
	// stw r11,3344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3344, ctx.r11.u32);
	// lwz r11,3348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3348);
	// stw r11,3348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3348, ctx.r11.u32);
	// lwz r11,3352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3352);
	// stw r11,3352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3352, ctx.r11.u32);
	// lwz r11,3356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3356);
	// stw r11,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r11.u32);
	// lfs f0,3360(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3360, temp.u32);
	// lfs f0,3364(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3364);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3364, temp.u32);
	// lwz r11,3368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3368);
	// stw r11,3368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3368, ctx.r11.u32);
	// lwz r11,3372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3372);
	// stw r11,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r11.u32);
	// lwz r11,3376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3376);
	// stw r11,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r11.u32);
	// lwz r11,3380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3380);
	// stw r11,3380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3380, ctx.r11.u32);
	// lwz r11,3384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3384);
	// stw r11,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r11.u32);
	// lwz r11,3388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3388);
	// stw r11,3388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3388, ctx.r11.u32);
	// lwz r11,3392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3392);
	// stw r11,3392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3392, ctx.r11.u32);
	// lwz r11,3396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3396);
	// stw r11,3396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3396, ctx.r11.u32);
	// lwz r11,3400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3400);
	// stw r11,3400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3400, ctx.r11.u32);
	// lwz r11,3404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3404);
	// stw r11,3404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3404, ctx.r11.u32);
	// lwz r11,3408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3408);
	// stw r11,3408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3408, ctx.r11.u32);
	// bl 0x824034a0
	ctx.lr = 0x824019E0;
	sub_824034A0(ctx, base);
	// addi r28,r31,3436
	ctx.r28.s64 = ctx.r31.s64 + 3436;
	// addi r27,r30,3436
	ctx.r27.s64 = ctx.r30.s64 + 3436;
	// stw r21,3440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3440, ctx.r21.u32);
	// stw r29,3444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3444, ctx.r29.u32);
	// stw r29,3448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3448, ctx.r29.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r29,3452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3452, ctx.r29.u32);
	// stw r29,3456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3456, ctx.r29.u32);
	// stw r29,3436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3436, ctx.r29.u32);
	// beq cr6,0x82401a98
	if (ctx.cr6.eq) goto loc_82401A98;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82401a98
	if (!ctx.cr6.gt) goto loc_82401A98;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82401a34
	if (ctx.cr0.eq) goto loc_82401A34;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82401A34;
	sub_82332C38(ctx, base);
loc_82401A34:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82401a98
	if (!ctx.cr6.gt) goto loc_82401A98;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82401A48:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x82401A5C;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82401a84
	if (ctx.cr0.eq) goto loc_82401A84;
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
loc_82401A84:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82401a48
	if (ctx.cr6.lt) goto loc_82401A48;
loc_82401A98:
	// addi r28,r31,3460
	ctx.r28.s64 = ctx.r31.s64 + 3460;
	// stw r29,3468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3468, ctx.r29.u32);
	// li r24,16
	ctx.r24.s64 = 16;
	// stw r29,3472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3472, ctx.r29.u32);
	// addi r27,r30,3460
	ctx.r27.s64 = ctx.r30.s64 + 3460;
	// stw r29,3476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3476, ctx.r29.u32);
	// stw r24,3464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3464, ctx.r24.u32);
	// stw r29,3480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3480, ctx.r29.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r29,3460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3460, ctx.r29.u32);
	// beq cr6,0x82401b64
	if (ctx.cr6.eq) goto loc_82401B64;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82401b64
	if (!ctx.cr6.gt) goto loc_82401B64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82401af0
	if (ctx.cr0.eq) goto loc_82401AF0;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82401AF0;
	sub_82332C38(ctx, base);
loc_82401AF0:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82401b64
	if (!ctx.cr6.gt) goto loc_82401B64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82401B04:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x82401B18;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82401b50
	if (ctx.cr0.eq) goto loc_82401B50;
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
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82401B50:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82401b04
	if (ctx.cr6.lt) goto loc_82401B04;
loc_82401B64:
	// addi r28,r31,3484
	ctx.r28.s64 = ctx.r31.s64 + 3484;
	// stw r22,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r22.u32);
	// addi r27,r30,3484
	ctx.r27.s64 = ctx.r30.s64 + 3484;
	// stw r29,3492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3492, ctx.r29.u32);
	// stw r29,3496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3496, ctx.r29.u32);
	// stw r29,3500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3500, ctx.r29.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r29,3504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3504, ctx.r29.u32);
	// stw r29,3484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3484, ctx.r29.u32);
	// beq cr6,0x82401bd4
	if (ctx.cr6.eq) goto loc_82401BD4;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82401bd4
	if (!ctx.cr6.gt) goto loc_82401BD4;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82401bb8
	if (ctx.cr0.eq) goto loc_82401BB8;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82401BB8;
	sub_82332C38(ctx, base);
loc_82401BB8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82401BCC;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_82401BD4:
	// lwz r11,3508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3508);
	// addi r4,r30,3512
	ctx.r4.s64 = ctx.r30.s64 + 3512;
	// addi r3,r31,3512
	ctx.r3.s64 = ctx.r31.s64 + 3512;
	// stw r11,3508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3508, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x82401BE8;
	sub_82873B58(ctx, base);
	// addi r4,r30,3536
	ctx.r4.s64 = ctx.r30.s64 + 3536;
	// addi r3,r31,3536
	ctx.r3.s64 = ctx.r31.s64 + 3536;
	// bl 0x82873b58
	ctx.lr = 0x82401BF4;
	sub_82873B58(ctx, base);
	// lfs f0,3560(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3560);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3560, temp.u32);
	// addi r4,r30,3568
	ctx.r4.s64 = ctx.r30.s64 + 3568;
	// addi r3,r31,3568
	ctx.r3.s64 = ctx.r31.s64 + 3568;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r11,3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3564);
	// stw r11,3564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3564, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82401C14;
	sub_82A4EA80(ctx, base);
	// lwz r10,3600(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3600);
	// addi r28,r31,3652
	ctx.r28.s64 = ctx.r31.s64 + 3652;
	// addi r27,r30,3652
	ctx.r27.s64 = ctx.r30.s64 + 3652;
	// li r11,12
	ctx.r11.s64 = 12;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r10,3600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3600, ctx.r10.u32);
	// lwz r10,3604(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3604);
	// stw r10,3604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3604, ctx.r10.u32);
	// lwz r10,3608(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3608);
	// stw r10,3608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3608, ctx.r10.u32);
	// lwz r10,3612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3612);
	// stw r10,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r10.u32);
	// lwz r10,3616(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3616);
	// stw r10,3616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3616, ctx.r10.u32);
	// lwz r10,3620(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3620);
	// stw r10,3620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3620, ctx.r10.u32);
	// lwz r10,3624(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3624);
	// stw r10,3624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3624, ctx.r10.u32);
	// lwz r10,3628(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3628);
	// stw r10,3628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3628, ctx.r10.u32);
	// lwz r10,3632(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3632);
	// stw r10,3632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3632, ctx.r10.u32);
	// lwz r10,3636(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3636);
	// stw r10,3636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3636, ctx.r10.u32);
	// lwz r10,3640(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3640);
	// stw r10,3640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3640, ctx.r10.u32);
	// lwz r10,3644(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3644);
	// stw r10,3644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3644, ctx.r10.u32);
	// lwz r10,3648(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3648);
	// stw r10,3648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3648, ctx.r10.u32);
	// stw r11,3656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3656, ctx.r11.u32);
	// stw r29,3660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3660, ctx.r29.u32);
	// stw r29,3664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3664, ctx.r29.u32);
	// stw r29,3668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3668, ctx.r29.u32);
	// stw r29,3672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3672, ctx.r29.u32);
	// stw r29,3652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3652, ctx.r29.u32);
	// beq cr6,0x82401d40
	if (ctx.cr6.eq) goto loc_82401D40;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82401d40
	if (!ctx.cr6.gt) goto loc_82401D40;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82401cd4
	if (ctx.cr0.eq) goto loc_82401CD4;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82401CD4;
	sub_82332C38(ctx, base);
loc_82401CD4:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82401d40
	if (!ctx.cr6.gt) goto loc_82401D40;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82401CE8:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x82401CFC;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82401d2c
	if (ctx.cr0.eq) goto loc_82401D2C;
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
loc_82401D2C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82401ce8
	if (ctx.cr6.lt) goto loc_82401CE8;
loc_82401D40:
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r31,3676
	ctx.r11.s64 = ctx.r31.s64 + 3676;
	// addi r10,r10,15852
	ctx.r10.s64 = ctx.r10.s64 + 15852;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,3676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3676, ctx.r10.u32);
	// addi r4,r30,3680
	ctx.r4.s64 = ctx.r30.s64 + 3680;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x82401D60;
	sub_82A4EA80(ctx, base);
	// lwz r10,3708(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3708);
	// addi r28,r31,3848
	ctx.r28.s64 = ctx.r31.s64 + 3848;
	// addi r27,r30,3848
	ctx.r27.s64 = ctx.r30.s64 + 3848;
	// li r11,32
	ctx.r11.s64 = 32;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r10,3708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3708, ctx.r10.u32);
	// ld r10,3712(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 3712);
	// std r10,3712(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3712, ctx.r10.u64);
	// lwz r10,3720(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3720);
	// stw r10,3720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3720, ctx.r10.u32);
	// lwz r10,3724(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3724);
	// stw r10,3724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3724, ctx.r10.u32);
	// lwz r10,3728(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3728);
	// stw r10,3728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3728, ctx.r10.u32);
	// lwz r10,3732(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3732);
	// stw r10,3732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3732, ctx.r10.u32);
	// lwz r10,3736(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3736);
	// stw r10,3736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3736, ctx.r10.u32);
	// lfs f0,3740(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3740);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3740(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3740, temp.u32);
	// lfs f0,3744(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3744(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3744, temp.u32);
	// lwz r10,3748(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3748);
	// stw r10,3748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3748, ctx.r10.u32);
	// lwz r10,3752(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3752);
	// stw r10,3752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3752, ctx.r10.u32);
	// lwz r10,3756(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3756);
	// stw r10,3756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3756, ctx.r10.u32);
	// lwz r10,3760(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3760);
	// stw r10,3760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3760, ctx.r10.u32);
	// lwz r10,3764(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3764);
	// stw r10,3764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3764, ctx.r10.u32);
	// lwz r10,3768(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3768);
	// stw r10,3768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3768, ctx.r10.u32);
	// lwz r10,3772(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3772);
	// stw r10,3772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3772, ctx.r10.u32);
	// lwz r10,3776(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3776);
	// stw r10,3776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3776, ctx.r10.u32);
	// lwz r10,3780(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3780);
	// stw r10,3780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3780, ctx.r10.u32);
	// lwz r10,3784(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3784);
	// stw r10,3784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3784, ctx.r10.u32);
	// lfs f0,3788(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3788);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3788(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3788, temp.u32);
	// lfs f0,3792(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3792);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3792(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3792, temp.u32);
	// lwz r10,3796(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3796);
	// stw r10,3796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3796, ctx.r10.u32);
	// lwz r10,3800(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3800);
	// stw r10,3800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3800, ctx.r10.u32);
	// lwz r10,3804(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3804);
	// stw r10,3804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3804, ctx.r10.u32);
	// lwz r10,3808(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3808);
	// stw r10,3808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3808, ctx.r10.u32);
	// lwz r10,3812(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3812);
	// stw r10,3812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3812, ctx.r10.u32);
	// lwz r10,3816(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3816);
	// stw r10,3816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3816, ctx.r10.u32);
	// lwz r10,3820(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3820);
	// stw r10,3820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3820, ctx.r10.u32);
	// lwz r10,3824(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3824);
	// stw r10,3824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3824, ctx.r10.u32);
	// lwz r10,3828(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3828);
	// stw r10,3828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3828, ctx.r10.u32);
	// lwz r10,3832(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3832);
	// stw r10,3832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3832, ctx.r10.u32);
	// lwz r10,3836(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3836);
	// stw r10,3836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3836, ctx.r10.u32);
	// lwz r10,3840(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3840);
	// stw r10,3840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3840, ctx.r10.u32);
	// lwz r10,3844(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3844);
	// stw r10,3844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3844, ctx.r10.u32);
	// stw r11,3852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3852, ctx.r11.u32);
	// stw r29,3856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3856, ctx.r29.u32);
	// stw r29,3860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3860, ctx.r29.u32);
	// stw r29,3864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3864, ctx.r29.u32);
	// stw r29,3868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3868, ctx.r29.u32);
	// stw r29,3848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3848, ctx.r29.u32);
	// beq cr6,0x82401f38
	if (ctx.cr6.eq) goto loc_82401F38;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82401f38
	if (!ctx.cr6.gt) goto loc_82401F38;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82401ec8
	if (ctx.cr0.eq) goto loc_82401EC8;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82401EC8;
	sub_82332C38(ctx, base);
loc_82401EC8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82401f38
	if (!ctx.cr6.gt) goto loc_82401F38;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82401EDC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x82401EF0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82401f24
	if (ctx.cr0.eq) goto loc_82401F24;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// bl 0x823339b8
	ctx.lr = 0x82401F24;
	sub_823339B8(ctx, base);
loc_82401F24:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82401edc
	if (ctx.cr6.lt) goto loc_82401EDC;
loc_82401F38:
	// lfs f0,3872(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3872);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3872, temp.u32);
	// lwz r11,3876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3876);
	// stw r11,3876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3876, ctx.r11.u32);
	// lwz r11,3880(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3880);
	// stw r11,3880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3880, ctx.r11.u32);
	// lwz r11,3884(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3884);
	// stw r11,3884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3884, ctx.r11.u32);
	// lwz r11,3888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3888);
	// stw r11,3888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3888, ctx.r11.u32);
	// lwz r11,3892(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3892);
	// stw r11,3892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3892, ctx.r11.u32);
	// lwz r11,3896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3896);
	// stw r11,3896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3896, ctx.r11.u32);
	// lwz r11,3900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3900);
	// stw r11,3900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3900, ctx.r11.u32);
	// lwz r11,3904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3904);
	// stw r11,3904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3904, ctx.r11.u32);
	// lwz r11,3908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3908);
	// stw r11,3908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3908, ctx.r11.u32);
	// lwz r11,3912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3912);
	// stw r11,3912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3912, ctx.r11.u32);
	// lwz r11,3916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3916);
	// stw r11,3916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3916, ctx.r11.u32);
	// lwz r11,3920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3920);
	// stw r11,3920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3920, ctx.r11.u32);
	// lwz r11,3924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3924);
	// stw r11,3924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3924, ctx.r11.u32);
	// lwz r11,3928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3928);
	// stw r11,3928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3928, ctx.r11.u32);
	// lwz r11,3932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3932);
	// stw r11,3932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3932, ctx.r11.u32);
	// lwz r11,3936(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3936);
	// stw r11,3936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3936, ctx.r11.u32);
	// lfs f0,3940(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3940);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3940(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3940, temp.u32);
	// lfs f0,3944(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3944);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3944(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3944, temp.u32);
	// lfs f0,3948(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3948(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3948, temp.u32);
	// lwz r11,3952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3952);
	// stw r11,3952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3952, ctx.r11.u32);
	// lwz r11,3956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3956);
	// stw r11,3956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3956, ctx.r11.u32);
	// lwz r11,3960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3960);
	// stw r11,3960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3960, ctx.r11.u32);
	// lfs f0,3964(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3964);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3964, temp.u32);
	// lwz r11,3968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3968);
	// stw r11,3968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3968, ctx.r11.u32);
	// lfs f0,3972(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3972);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3972, temp.u32);
	// lfs f0,3976(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3976);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3976, temp.u32);
	// lfs f0,3980(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3980);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3980(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3980, temp.u32);
	// lwz r11,3984(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3984);
	// stw r11,3984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3984, ctx.r11.u32);
	// lfs f0,3988(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3988);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3988, temp.u32);
	// lwz r11,3992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3992);
	// stw r11,3992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3992, ctx.r11.u32);
	// lfs f0,3996(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3996(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3996, temp.u32);
	// lfs f0,4000(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4000);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4000, temp.u32);
	// lwz r11,4004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4004);
	// stw r11,4004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4004, ctx.r11.u32);
	// lwz r11,4008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4008);
	// stw r11,4008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4008, ctx.r11.u32);
	// lwz r11,4012(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4012);
	// stw r11,4012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4012, ctx.r11.u32);
	// lwz r11,4016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4016);
	// stw r11,4016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4016, ctx.r11.u32);
	// lwz r11,4020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4020);
	// stw r11,4020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4020, ctx.r11.u32);
	// lbz r11,4024(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4024);
	// stb r11,4024(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4024, ctx.r11.u8);
	// lfs f0,4028(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4028);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4028(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4028, temp.u32);
	// lfs f0,4032(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4032);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4032, temp.u32);
	// addi r28,r31,4196
	ctx.r28.s64 = ctx.r31.s64 + 4196;
	// addi r27,r30,4196
	ctx.r27.s64 = ctx.r30.s64 + 4196;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// lwz r11,4036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4036);
	// stw r11,4036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4036, ctx.r11.u32);
	// lwz r11,4040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4040);
	// stw r11,4040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4040, ctx.r11.u32);
	// lwz r11,4044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4044);
	// stw r11,4044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4044, ctx.r11.u32);
	// lwz r11,4048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4048);
	// stw r11,4048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4048, ctx.r11.u32);
	// lfs f0,4052(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4052);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4052(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4052, temp.u32);
	// lwz r11,4056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4056);
	// stw r11,4056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4056, ctx.r11.u32);
	// lwz r11,4060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4060);
	// stw r11,4060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4060, ctx.r11.u32);
	// lwz r11,4064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4064);
	// stw r11,4064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4064, ctx.r11.u32);
	// lwz r11,4068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4068);
	// stw r11,4068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4068, ctx.r11.u32);
	// lwz r11,4072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4072);
	// stw r11,4072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4072, ctx.r11.u32);
	// lwz r11,4076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4076);
	// stw r11,4076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4076, ctx.r11.u32);
	// lwz r11,4080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4080);
	// stw r11,4080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4080, ctx.r11.u32);
	// lwz r11,4084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4084);
	// stw r11,4084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4084, ctx.r11.u32);
	// lfs f0,4088(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4088(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4088, temp.u32);
	// lfs f0,4092(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4092);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4092(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4092, temp.u32);
	// lwz r11,4096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4096);
	// stw r11,4096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4096, ctx.r11.u32);
	// lwz r11,4100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4100);
	// stw r11,4100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4100, ctx.r11.u32);
	// lwz r11,4104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4104);
	// stw r11,4104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4104, ctx.r11.u32);
	// lwz r11,4108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4108);
	// stw r11,4108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4108, ctx.r11.u32);
	// lwz r11,4112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4112);
	// stw r11,4112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4112, ctx.r11.u32);
	// lwz r11,4116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4116);
	// stw r11,4116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4116, ctx.r11.u32);
	// lwz r11,4120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4120);
	// stw r11,4120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4120, ctx.r11.u32);
	// lwz r11,4124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4124);
	// stw r11,4124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4124, ctx.r11.u32);
	// lwz r11,4128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4128);
	// stw r11,4128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4128, ctx.r11.u32);
	// lwz r11,4132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4132);
	// stw r11,4132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4132, ctx.r11.u32);
	// lwz r11,4136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4136);
	// stw r11,4136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4136, ctx.r11.u32);
	// lwz r11,4140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4140);
	// stw r11,4140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4140, ctx.r11.u32);
	// lwz r11,4144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4144);
	// stw r11,4144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4144, ctx.r11.u32);
	// lwz r11,4148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4148);
	// stw r11,4148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4148, ctx.r11.u32);
	// lwz r11,4152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4152);
	// stw r11,4152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4152, ctx.r11.u32);
	// lwz r11,4156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4156);
	// stw r11,4156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4156, ctx.r11.u32);
	// lfs f0,4160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4160, temp.u32);
	// lwz r11,4164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4164);
	// stw r11,4164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4164, ctx.r11.u32);
	// lwz r11,4168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4168);
	// stw r11,4168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4168, ctx.r11.u32);
	// lwz r11,4172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4172);
	// stw r11,4172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4172, ctx.r11.u32);
	// lwz r11,4176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4176);
	// stw r11,4176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4176, ctx.r11.u32);
	// lfs f0,4180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4180, temp.u32);
	// lwz r11,4184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4184);
	// stw r11,4184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4184, ctx.r11.u32);
	// lwz r11,4188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4188);
	// stw r11,4188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4188, ctx.r11.u32);
	// lwz r11,4192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4192);
	// stw r11,4192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4192, ctx.r11.u32);
	// stw r24,4200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4200, ctx.r24.u32);
	// stw r29,4204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4204, ctx.r29.u32);
	// stw r29,4208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4208, ctx.r29.u32);
	// stw r29,4212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4212, ctx.r29.u32);
	// stw r29,4216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4216, ctx.r29.u32);
	// stw r29,4196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4196, ctx.r29.u32);
	// beq cr6,0x82402288
	if (ctx.cr6.eq) goto loc_82402288;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82402288
	if (!ctx.cr6.gt) goto loc_82402288;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82402214
	if (ctx.cr0.eq) goto loc_82402214;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82402214;
	sub_82332C38(ctx, base);
loc_82402214:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82402288
	if (!ctx.cr6.gt) goto loc_82402288;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82402228:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x8240223C;
	sub_82332D50(ctx, base);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82402274
	if (ctx.cr0.eq) goto loc_82402274;
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
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82402274:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82402228
	if (ctx.cr6.lt) goto loc_82402228;
loc_82402288:
	// lfs f0,4220(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4220);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,4252
	ctx.r11.s64 = ctx.r30.s64 + 4252;
	// stfs f0,4220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4220, temp.u32);
	// addi r10,r31,4252
	ctx.r10.s64 = ctx.r31.s64 + 4252;
	// li r9,5
	ctx.r9.s64 = 5;
	// lfs f0,4224(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4224, temp.u32);
	// lwz r8,4228(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4228);
	// stw r8,4228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4228, ctx.r8.u32);
	// lwz r8,4232(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4232);
	// stw r8,4232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4232, ctx.r8.u32);
	// lwz r8,4236(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4236);
	// stw r8,4236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4236, ctx.r8.u32);
	// lwz r8,4240(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4240);
	// stw r8,4240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4240, ctx.r8.u32);
	// lwz r8,4244(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4244);
	// stw r8,4244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4244, ctx.r8.u32);
	// lwz r8,4248(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4248);
	// stw r8,4248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4248, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824022D8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824022d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824022D8;
	// lwz r11,4272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4272);
	// addi r4,r30,4296
	ctx.r4.s64 = ctx.r30.s64 + 4296;
	// addi r3,r31,4296
	ctx.r3.s64 = ctx.r31.s64 + 4296;
	// stw r11,4272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4272, ctx.r11.u32);
	// lwz r11,4276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4276);
	// stw r11,4276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4276, ctx.r11.u32);
	// lwz r11,4280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4280);
	// stw r11,4280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4280, ctx.r11.u32);
	// lwz r11,4284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4284);
	// stw r11,4284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4284, ctx.r11.u32);
	// lwz r11,4288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4288);
	// stw r11,4288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4288, ctx.r11.u32);
	// lfs f0,4292(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4292);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4292, temp.u32);
	// bl 0x823339b8
	ctx.lr = 0x82402328;
	sub_823339B8(ctx, base);
	// addi r4,r30,4320
	ctx.r4.s64 = ctx.r30.s64 + 4320;
	// addi r3,r31,4320
	ctx.r3.s64 = ctx.r31.s64 + 4320;
	// bl 0x823339b8
	ctx.lr = 0x82402334;
	sub_823339B8(ctx, base);
	// addi r4,r30,4344
	ctx.r4.s64 = ctx.r30.s64 + 4344;
	// addi r3,r31,4344
	ctx.r3.s64 = ctx.r31.s64 + 4344;
	// bl 0x82332f10
	ctx.lr = 0x82402340;
	sub_82332F10(ctx, base);
	// addi r28,r31,4368
	ctx.r28.s64 = ctx.r31.s64 + 4368;
	// addi r25,r30,4368
	ctx.r25.s64 = ctx.r30.s64 + 4368;
	// stw r29,4376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4376, ctx.r29.u32);
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r29,4380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4380, ctx.r29.u32);
	// stw r29,4384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4384, ctx.r29.u32);
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// stw r11,4372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4372, ctx.r11.u32);
	// stw r29,4388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4388, ctx.r29.u32);
	// stw r29,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r29.u32);
	// beq cr6,0x82402410
	if (ctx.cr6.eq) goto loc_82402410;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82402410
	if (!ctx.cr6.gt) goto loc_82402410;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82402398
	if (ctx.cr0.eq) goto loc_82402398;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82402398;
	sub_82332C38(ctx, base);
loc_82402398:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82402410
	if (!ctx.cr6.gt) goto loc_82402410;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
loc_824023AC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x824023C0;
	sub_82332D50(ctx, base);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mulli r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 * 36;
	// add. r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x824023fc
	if (ctx.cr0.eq) goto loc_824023FC;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r26,r11,r24
	ctx.r26.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x823339b8
	ctx.lr = 0x824023E4;
	sub_823339B8(ctx, base);
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// stw r11,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// stw r11,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r11.u32);
loc_824023FC:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,36
	ctx.r24.s64 = ctx.r24.s64 + 36;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824023ac
	if (ctx.cr6.lt) goto loc_824023AC;
loc_82402410:
	// lwz r9,4392(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4392);
	// addi r11,r30,4400
	ctx.r11.s64 = ctx.r30.s64 + 4400;
	// li r27,9
	ctx.r27.s64 = 9;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// addi r26,r10,4400
	ctx.r26.s64 = ctx.r10.s64 + 4400;
	// stw r9,4392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4392, ctx.r9.u32);
	// lwz r11,4396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4396);
	// stw r11,4396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4396, ctx.r11.u32);
loc_82402434:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r26,r28
	ctx.r3.u64 = ctx.r26.u64 + ctx.r28.u64;
	// bl 0x824036d8
	ctx.lr = 0x82402440;
	sub_824036D8(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,76
	ctx.r28.s64 = ctx.r28.s64 + 76;
	// bge 0x82402434
	if (!ctx.cr0.lt) goto loc_82402434;
	// addi r11,r31,5160
	ctx.r11.s64 = ctx.r31.s64 + 5160;
	// addi r9,r30,5160
	ctx.r9.s64 = ctx.r30.s64 + 5160;
	// li r10,5
	ctx.r10.s64 = 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8240245C:
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8240245c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240245C;
	// addi r11,r31,5200
	ctx.r11.s64 = ctx.r31.s64 + 5200;
	// addi r9,r30,5200
	ctx.r9.s64 = ctx.r30.s64 + 5200;
	// li r10,5
	ctx.r10.s64 = 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82402480:
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82402480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82402480;
	// lwz r11,5240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5240);
	// addi r28,r31,5248
	ctx.r28.s64 = ctx.r31.s64 + 5248;
	// addi r27,r30,5248
	ctx.r27.s64 = ctx.r30.s64 + 5248;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r11,5240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5240, ctx.r11.u32);
	// lwz r11,5244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5244);
	// stw r11,5244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5244, ctx.r11.u32);
	// stw r22,5252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5252, ctx.r22.u32);
	// stw r29,5256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5256, ctx.r29.u32);
	// stw r29,5260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5260, ctx.r29.u32);
	// stw r29,5264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5264, ctx.r29.u32);
	// stw r29,5268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5268, ctx.r29.u32);
	// stw r29,5248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5248, ctx.r29.u32);
	// beq cr6,0x82402514
	if (ctx.cr6.eq) goto loc_82402514;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82402514
	if (!ctx.cr6.gt) goto loc_82402514;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824024f8
	if (ctx.cr0.eq) goto loc_824024F8;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x824024F8;
	sub_82332C38(ctx, base);
loc_824024F8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8240250C;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_82402514:
	// lwz r11,5272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5272);
	// addi r4,r30,5276
	ctx.r4.s64 = ctx.r30.s64 + 5276;
	// addi r3,r31,5276
	ctx.r3.s64 = ctx.r31.s64 + 5276;
	// stw r11,5272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5272, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x82402528;
	sub_82873B58(ctx, base);
	// lwz r11,5300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5300);
	// addi r4,r30,5420
	ctx.r4.s64 = ctx.r30.s64 + 5420;
	// addi r3,r31,5420
	ctx.r3.s64 = ctx.r31.s64 + 5420;
	// stw r11,5300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5300, ctx.r11.u32);
	// lfs f0,5304(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5304);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5304, temp.u32);
	// lwz r11,5308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5308);
	// stw r11,5308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5308, ctx.r11.u32);
	// lwz r11,5312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5312);
	// stw r11,5312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5312, ctx.r11.u32);
	// lwz r11,5316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5316);
	// stw r11,5316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5316, ctx.r11.u32);
	// lwz r11,5320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5320);
	// stw r11,5320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5320, ctx.r11.u32);
	// lwz r11,5324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5324);
	// stw r11,5324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5324, ctx.r11.u32);
	// lwz r11,5328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5328);
	// stw r11,5328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5328, ctx.r11.u32);
	// lwz r11,5332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5332);
	// stw r11,5332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5332, ctx.r11.u32);
	// lwz r11,5336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5336);
	// stw r11,5336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5336, ctx.r11.u32);
	// lwz r11,5340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5340);
	// stw r11,5340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5340, ctx.r11.u32);
	// lwz r11,5344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5344);
	// stw r11,5344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5344, ctx.r11.u32);
	// lwz r11,5348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5348);
	// stw r11,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r11.u32);
	// lwz r11,5352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// stw r11,5352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5352, ctx.r11.u32);
	// lwz r11,5356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5356);
	// stw r11,5356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5356, ctx.r11.u32);
	// lwz r11,5360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5360);
	// stw r11,5360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5360, ctx.r11.u32);
	// lwz r11,5364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5364);
	// stw r11,5364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5364, ctx.r11.u32);
	// lwz r11,5368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5368);
	// stw r11,5368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5368, ctx.r11.u32);
	// lwz r11,5372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5372);
	// stw r11,5372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5372, ctx.r11.u32);
	// lwz r11,5376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5376);
	// stw r11,5376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5376, ctx.r11.u32);
	// lwz r11,5380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5380);
	// stw r11,5380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5380, ctx.r11.u32);
	// lwz r11,5384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5384);
	// stw r11,5384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5384, ctx.r11.u32);
	// lwz r11,5388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5388);
	// stw r11,5388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5388, ctx.r11.u32);
	// lwz r11,5392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5392);
	// stw r11,5392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5392, ctx.r11.u32);
	// lwz r11,5396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5396);
	// stw r11,5396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5396, ctx.r11.u32);
	// lwz r11,5400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5400);
	// stw r11,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r11.u32);
	// lfs f0,5404(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5404);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5404, temp.u32);
	// lwz r11,5408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5408);
	// stw r11,5408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5408, ctx.r11.u32);
	// lfs f0,5412(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5412);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
	// lfs f0,5416(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5416);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5416, temp.u32);
	// bl 0x8282f630
	ctx.lr = 0x82402624;
	sub_8282F630(ctx, base);
	// lwz r11,5444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5444);
	// stw r11,5444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5444, ctx.r11.u32);
	// lwz r11,5448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5448);
	// stw r11,5448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5448, ctx.r11.u32);
	// lwz r11,5452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5452);
	// stw r11,5452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5452, ctx.r11.u32);
	// lwz r11,5456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5456);
	// stw r11,5456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5456, ctx.r11.u32);
	// lbz r11,5460(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5460);
	// stb r11,5460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5460, ctx.r11.u8);
	// lwz r11,5464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5464);
	// stw r11,5464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5464, ctx.r11.u32);
	// lwz r11,5468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5468);
	// stw r11,5468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5468, ctx.r11.u32);
	// addi r28,r31,5652
	ctx.r28.s64 = ctx.r31.s64 + 5652;
	// addi r27,r30,5652
	ctx.r27.s64 = ctx.r30.s64 + 5652;
	// lwz r11,5472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5472);
	// stw r11,5472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5472, ctx.r11.u32);
	// lwz r11,5476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5476);
	// stw r11,5476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5476, ctx.r11.u32);
	// lwz r11,5480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5480);
	// stw r11,5480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5480, ctx.r11.u32);
	// lwz r11,5484(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5484);
	// stw r11,5484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5484, ctx.r11.u32);
	// lwz r11,5488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5488);
	// stw r11,5488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5488, ctx.r11.u32);
	// lwz r11,5492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5492);
	// stw r11,5492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5492, ctx.r11.u32);
	// lwz r11,5496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5496);
	// stw r11,5496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5496, ctx.r11.u32);
	// lwz r11,5500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5500);
	// stw r11,5500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5500, ctx.r11.u32);
	// lwz r11,5504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5504);
	// stw r11,5504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5504, ctx.r11.u32);
	// lwz r11,5508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5508);
	// stw r11,5508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5508, ctx.r11.u32);
	// lwz r11,5512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5512);
	// stw r11,5512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5512, ctx.r11.u32);
	// lbz r11,5516(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5516);
	// stb r11,5516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5516, ctx.r11.u8);
	// lwz r11,5520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5520);
	// stw r11,5520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5520, ctx.r11.u32);
	// lwz r11,5524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5524);
	// stw r11,5524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5524, ctx.r11.u32);
	// lwz r11,5528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5528);
	// stw r11,5528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5528, ctx.r11.u32);
	// lfs f0,5532(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5532);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5532, temp.u32);
	// lfs f0,5536(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5536);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5536, temp.u32);
	// lfs f0,5540(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5540);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5540, temp.u32);
	// lfs f0,5544(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5544, temp.u32);
	// lfs f0,5548(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5548, temp.u32);
	// lfs f0,5552(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5552, temp.u32);
	// lfs f0,5556(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5556);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5556, temp.u32);
	// lfs f0,5560(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5560);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5560, temp.u32);
	// lfs f0,5564(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5564);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5564, temp.u32);
	// lfs f0,5568(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5568);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5568, temp.u32);
	// lfs f0,5572(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5572, temp.u32);
	// lfs f0,5576(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5576);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5576, temp.u32);
	// lfs f0,5580(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5580);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5580, temp.u32);
	// lfs f0,5584(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5584, temp.u32);
	// lwz r11,5588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5588);
	// stw r11,5588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5588, ctx.r11.u32);
	// lwz r11,5592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5592);
	// stw r11,5592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5592, ctx.r11.u32);
	// lwz r11,5596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5596);
	// stw r11,5596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5596, ctx.r11.u32);
	// lwz r11,5600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5600);
	// stw r11,5600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5600, ctx.r11.u32);
	// lwz r11,5604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5604);
	// stw r11,5604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5604, ctx.r11.u32);
	// lwz r11,5608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5608);
	// stw r11,5608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5608, ctx.r11.u32);
	// lwz r11,5612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5612);
	// stw r11,5612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5612, ctx.r11.u32);
	// lwz r11,5616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5616);
	// stw r11,5616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5616, ctx.r11.u32);
	// lwz r11,5620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5620);
	// stw r11,5620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5620, ctx.r11.u32);
	// lwz r11,5624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5624);
	// stw r11,5624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5624, ctx.r11.u32);
	// lwz r11,5628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5628);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r11,5628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5628, ctx.r11.u32);
	// lwz r11,5632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5632);
	// stw r11,5632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5632, ctx.r11.u32);
	// lfs f0,5636(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5636);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5636, temp.u32);
	// lwz r11,5640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5640);
	// stw r11,5640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5640, ctx.r11.u32);
	// lwz r11,5644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5644);
	// stw r11,5644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5644, ctx.r11.u32);
	// lwz r11,5648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5648);
	// stw r11,5648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5648, ctx.r11.u32);
	// stw r21,5656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5656, ctx.r21.u32);
	// stw r29,5660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5660, ctx.r29.u32);
	// stw r29,5664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5664, ctx.r29.u32);
	// stw r29,5668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5668, ctx.r29.u32);
	// stw r29,5672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5672, ctx.r29.u32);
	// stw r29,5652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5652, ctx.r29.u32);
	// beq cr6,0x8240287c
	if (ctx.cr6.eq) goto loc_8240287C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240287c
	if (!ctx.cr6.gt) goto loc_8240287C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82402818
	if (ctx.cr0.eq) goto loc_82402818;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82402818;
	sub_82332C38(ctx, base);
loc_82402818:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240287c
	if (!ctx.cr6.gt) goto loc_8240287C;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_8240282C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x82402840;
	sub_82332D50(ctx, base);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82402868
	if (ctx.cr0.eq) goto loc_82402868;
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
loc_82402868:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8240282c
	if (ctx.cr6.lt) goto loc_8240282C;
loc_8240287C:
	// lwz r11,5676(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5676);
	// addi r4,r30,5712
	ctx.r4.s64 = ctx.r30.s64 + 5712;
	// addi r3,r31,5712
	ctx.r3.s64 = ctx.r31.s64 + 5712;
	// stw r11,5676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5676, ctx.r11.u32);
	// lwz r11,5680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5680);
	// stw r11,5680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5680, ctx.r11.u32);
	// lwz r11,5684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5684);
	// stw r11,5684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5684, ctx.r11.u32);
	// lwz r11,5688(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5688);
	// stw r11,5688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5688, ctx.r11.u32);
	// lwz r11,5692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5692);
	// stw r11,5692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5692, ctx.r11.u32);
	// lwz r11,5696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5696);
	// stw r11,5696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5696, ctx.r11.u32);
	// lwz r11,5700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5700);
	// stw r11,5700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5700, ctx.r11.u32);
	// lwz r11,5704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5704);
	// stw r11,5704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5704, ctx.r11.u32);
	// lwz r11,5708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5708);
	// stw r11,5708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5708, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x824028D0;
	sub_823339B8(ctx, base);
	// addi r4,r30,5736
	ctx.r4.s64 = ctx.r30.s64 + 5736;
	// addi r3,r31,5736
	ctx.r3.s64 = ctx.r31.s64 + 5736;
	// bl 0x823339b8
	ctx.lr = 0x824028DC;
	sub_823339B8(ctx, base);
	// lwz r11,5760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5760);
	// addi r4,r30,5868
	ctx.r4.s64 = ctx.r30.s64 + 5868;
	// addi r3,r31,5868
	ctx.r3.s64 = ctx.r31.s64 + 5868;
	// stw r11,5760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5760, ctx.r11.u32);
	// lwz r11,5764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5764);
	// stw r11,5764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5764, ctx.r11.u32);
	// lwz r11,5768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5768);
	// stw r11,5768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5768, ctx.r11.u32);
	// lwz r11,5772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5772);
	// stw r11,5772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5772, ctx.r11.u32);
	// lwz r11,5776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5776);
	// stw r11,5776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5776, ctx.r11.u32);
	// lwz r11,5780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5780);
	// stw r11,5780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5780, ctx.r11.u32);
	// lwz r11,5784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5784);
	// stw r11,5784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5784, ctx.r11.u32);
	// lbz r11,5788(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5788);
	// stb r11,5788(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5788, ctx.r11.u8);
	// lbz r11,5789(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5789);
	// stb r11,5789(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5789, ctx.r11.u8);
	// lwz r11,5792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5792);
	// stw r11,5792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5792, ctx.r11.u32);
	// lwz r11,5796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5796);
	// stw r11,5796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5796, ctx.r11.u32);
	// lwz r11,5800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5800);
	// stw r11,5800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5800, ctx.r11.u32);
	// lwz r11,5804(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5804);
	// stw r11,5804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5804, ctx.r11.u32);
	// lwz r11,5808(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5808);
	// stw r11,5808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5808, ctx.r11.u32);
	// lwz r11,5812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5812);
	// stw r11,5812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5812, ctx.r11.u32);
	// lwz r11,5816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5816);
	// stw r11,5816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5816, ctx.r11.u32);
	// lfs f0,5820(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5820(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5820, temp.u32);
	// lwz r11,5824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5824);
	// stw r11,5824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5824, ctx.r11.u32);
	// lwz r11,5828(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5828);
	// stw r11,5828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5828, ctx.r11.u32);
	// lwz r11,5832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5832);
	// stw r11,5832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5832, ctx.r11.u32);
	// lwz r11,5836(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5836);
	// stw r11,5836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5836, ctx.r11.u32);
	// lwz r11,5840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5840);
	// stw r11,5840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5840, ctx.r11.u32);
	// lwz r11,5844(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5844);
	// stw r11,5844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5844, ctx.r11.u32);
	// lwz r11,5848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5848);
	// stw r11,5848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5848, ctx.r11.u32);
	// lfs f0,5852(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5852, temp.u32);
	// lfs f0,5856(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5856);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5856(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5856, temp.u32);
	// lfs f0,5860(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5860);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5860, temp.u32);
	// lfs f0,5864(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5864, temp.u32);
	// bl 0x8282f630
	ctx.lr = 0x824029C8;
	sub_8282F630(ctx, base);
	// addi r4,r30,5892
	ctx.r4.s64 = ctx.r30.s64 + 5892;
	// addi r3,r31,5892
	ctx.r3.s64 = ctx.r31.s64 + 5892;
	// bl 0x8282f630
	ctx.lr = 0x824029D4;
	sub_8282F630(ctx, base);
	// addi r4,r30,5916
	ctx.r4.s64 = ctx.r30.s64 + 5916;
	// addi r3,r31,5916
	ctx.r3.s64 = ctx.r31.s64 + 5916;
	// bl 0x8282f630
	ctx.lr = 0x824029E0;
	sub_8282F630(ctx, base);
	// addi r4,r30,5940
	ctx.r4.s64 = ctx.r30.s64 + 5940;
	// addi r3,r31,5940
	ctx.r3.s64 = ctx.r31.s64 + 5940;
	// bl 0x8282f630
	ctx.lr = 0x824029EC;
	sub_8282F630(ctx, base);
	// addi r4,r30,5964
	ctx.r4.s64 = ctx.r30.s64 + 5964;
	// addi r3,r31,5964
	ctx.r3.s64 = ctx.r31.s64 + 5964;
	// bl 0x8282f630
	ctx.lr = 0x824029F8;
	sub_8282F630(ctx, base);
	// addi r4,r30,5988
	ctx.r4.s64 = ctx.r30.s64 + 5988;
	// addi r3,r31,5988
	ctx.r3.s64 = ctx.r31.s64 + 5988;
	// bl 0x8282f630
	ctx.lr = 0x82402A04;
	sub_8282F630(ctx, base);
	// addi r28,r31,6012
	ctx.r28.s64 = ctx.r31.s64 + 6012;
	// addi r27,r30,6012
	ctx.r27.s64 = ctx.r30.s64 + 6012;
	// stw r29,6020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6020, ctx.r29.u32);
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r29,6024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6024, ctx.r29.u32);
	// stw r29,6028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6028, ctx.r29.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r11,6016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6016, ctx.r11.u32);
	// stw r29,6032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6032, ctx.r29.u32);
	// stw r29,6012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6012, ctx.r29.u32);
	// beq cr6,0x82402ab8
	if (ctx.cr6.eq) goto loc_82402AB8;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82402ab8
	if (!ctx.cr6.gt) goto loc_82402AB8;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82402a5c
	if (ctx.cr0.eq) goto loc_82402A5C;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82402A5C;
	sub_82332C38(ctx, base);
loc_82402A5C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82402ab8
	if (!ctx.cr6.gt) goto loc_82402AB8;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82402A70:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x82402A84;
	sub_82332D50(ctx, base);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mulli r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 * 44;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82402aa4
	if (ctx.cr0.eq) goto loc_82402AA4;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r5,44
	ctx.r5.s64 = 44;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82402AA4;
	sub_82A4EA80(ctx, base);
loc_82402AA4:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,44
	ctx.r26.s64 = ctx.r26.s64 + 44;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82402a70
	if (ctx.cr6.lt) goto loc_82402A70;
loc_82402AB8:
	// addi r28,r31,6036
	ctx.r28.s64 = ctx.r31.s64 + 6036;
	// stw r29,6044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6044, ctx.r29.u32);
	// addi r27,r30,6036
	ctx.r27.s64 = ctx.r30.s64 + 6036;
	// stw r29,6048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6048, ctx.r29.u32);
	// li r11,144
	ctx.r11.s64 = 144;
	// stw r29,6052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6052, ctx.r29.u32);
	// stw r29,6056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6056, ctx.r29.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r11,6040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6040, ctx.r11.u32);
	// stw r29,6036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6036, ctx.r29.u32);
	// beq cr6,0x82402b64
	if (ctx.cr6.eq) goto loc_82402B64;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82402b64
	if (!ctx.cr6.gt) goto loc_82402B64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82402b10
	if (ctx.cr0.eq) goto loc_82402B10;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,144
	ctx.r4.s64 = 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82402B10;
	sub_82332C38(ctx, base);
loc_82402B10:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82402b64
	if (!ctx.cr6.gt) goto loc_82402B64;
loc_82402B20:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x82402B34;
	sub_82332D50(ctx, base);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mulli r11,r3,144
	ctx.r11.s64 = ctx.r3.s64 * 144;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82402b50
	if (ctx.cr0.eq) goto loc_82402B50;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x824038f0
	ctx.lr = 0x82402B50;
	sub_824038F0(ctx, base);
loc_82402B50:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,144
	ctx.r29.s64 = ctx.r29.s64 + 144;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82402b20
	if (ctx.cr6.lt) goto loc_82402B20;
loc_82402B64:
	// lwz r11,6060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6060);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6060, ctx.r11.u32);
	// lwz r11,6064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6064);
	// stw r11,6064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6064, ctx.r11.u32);
	// lwz r11,6068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6068);
	// stw r11,6068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6068, ctx.r11.u32);
	// lwz r11,6072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6072);
	// stw r11,6072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6072, ctx.r11.u32);
	// lwz r11,6076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6076);
	// stw r11,6076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6076, ctx.r11.u32);
	// lwz r11,6080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6080);
	// stw r11,6080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6080, ctx.r11.u32);
	// lwz r11,6084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6084);
	// stw r11,6084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6084, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82402BA8"))) PPC_WEAK_FUNC(sub_82402BA8);
PPC_FUNC_IMPL(__imp__sub_82402BA8) {
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
	ctx.lr = 0x82402BC8;
	sub_82400248(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,16208
	ctx.r11.s64 = ctx.r11.s64 + 16208;
	// addi r10,r10,17596
	ctx.r10.s64 = ctx.r10.s64 + 17596;
	// addi r9,r9,17648
	ctx.r9.s64 = ctx.r9.s64 + 17648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// lwz r11,1508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1508);
	// stw r11,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r11.u32);
	// lwz r11,1512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	// stw r11,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r11.u32);
	// lwz r11,1516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1516);
	// stw r11,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r11.u32);
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
	// lfs f0,1540(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1540, temp.u32);
	// lwz r11,1544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1544);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// lwz r11,1548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	// stw r11,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
	// lwz r11,1552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// stw r11,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r11.u32);
	// lwz r11,1556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	// stw r11,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r11.u32);
	// lwz r11,1560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// lwz r11,1564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1564);
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// lwz r11,1568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1568);
	// stw r11,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r11.u32);
	// lwz r11,1572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1572);
	// stw r11,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r11.u32);
	// lwz r11,1576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// lwz r11,1580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// stw r11,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r11.u32);
	// lfs f0,1584(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1584, temp.u32);
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
	// lwz r11,1672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1672);
	// stw r11,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r11.u32);
	// lwz r11,1676(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1676);
	// stw r11,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r11.u32);
	// lfs f0,1680(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1680);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1680(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1680, temp.u32);
	// lfs f0,1684(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1684);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1684, temp.u32);
	// lfs f0,1688(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1688);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1688(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1688, temp.u32);
	// lwz r11,1692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1692);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// lfs f0,1696(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1696);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// lfs f0,1700(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1700(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1700, temp.u32);
	// lfs f0,1704(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1704(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
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
	// lfs f0,1720(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1720(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1720, temp.u32);
	// lfs f0,1724(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1724);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1724(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1724, temp.u32);
	// lfs f0,1728(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1728);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1728(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1728, temp.u32);
	// lfs f0,1732(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1732, temp.u32);
	// lwz r11,1736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1736);
	// stw r11,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r11.u32);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// lwz r11,1744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1744);
	// stw r11,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r11.u32);
	// lwz r11,1748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1748);
	// stw r11,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r11.u32);
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
	// lbz r11,1764(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1764);
	// stb r11,1764(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1764, ctx.r11.u8);
	// lbz r11,1765(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1765);
	// stb r11,1765(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1765, ctx.r11.u8);
	// lwz r11,1768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// stw r11,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r11.u32);
	// lwz r11,1772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1772);
	// stw r11,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r11.u32);
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
	// lwz r11,1788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1788);
	// stw r11,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r11.u32);
	// lfs f0,1792(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1792);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1792(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1792, temp.u32);
	// lfs f0,1796(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1796(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1796, temp.u32);
	// lfs f0,1800(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1800);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1800(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1800, temp.u32);
	// lwz r11,1804(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1804);
	// stw r11,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r11.u32);
	// lwz r11,1808(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1808);
	// stw r11,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r11.u32);
	// lbz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1812);
	// stb r11,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r11.u8);
	// lfs f0,1816(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1816(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1816, temp.u32);
	// lfs f0,1820(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1820(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1820, temp.u32);
	// lfs f0,1824(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1824);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1824, temp.u32);
	// lfs f0,1828(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1828);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1828, temp.u32);
	// lwz r11,1832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1832);
	// stw r11,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r11.u32);
	// lwz r11,1836(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1836);
	// stw r11,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r11.u32);
	// lwz r11,1840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1840);
	// stw r11,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r11.u32);
	// lwz r11,1844(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1844);
	// stw r11,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r11.u32);
	// lwz r11,1848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
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
	// lwz r11,1864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1864);
	// stw r11,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r11.u32);
	// lwz r11,1868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1868);
	// stw r11,1868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1868, ctx.r11.u32);
	// lwz r11,1872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1872);
	// stw r11,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r11.u32);
	// lwz r11,1876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1876);
	// stw r11,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r11.u32);
	// lwz r11,1880(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1880);
	// stw r11,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r11.u32);
	// lfs f0,1884(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1884);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1884, temp.u32);
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
	// lwz r11,1912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1912);
	// stw r11,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r11.u32);
	// lwz r11,1916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1916);
	// stw r11,1916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1916, ctx.r11.u32);
	// lwz r11,1920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1920);
	// stw r11,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r11.u32);
	// lwz r11,1924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	// stw r11,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r11.u32);
	// lwz r11,1928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// lwz r11,1932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1932);
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// lwz r11,1936(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1936);
	// stw r11,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r11.u32);
	// lwz r11,1940(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1940);
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// lwz r11,1944(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1944);
	// stw r11,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r11.u32);
	// lwz r11,1948(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1948);
	// stw r11,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r11.u32);
	// lwz r11,1952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	// stw r11,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r11.u32);
	// lfs f0,1956(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1956);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1956(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1956, temp.u32);
	// lfs f0,1960(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1960);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1960(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1960, temp.u32);
	// lwz r11,1964(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// stw r11,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r11.u32);
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
	// lwz r11,1984(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1984);
	// stw r11,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r11.u32);
	// lwz r11,1988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1988);
	// stw r11,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r11.u32);
	// lwz r11,1992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1992);
	// stw r11,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r11.u32);
	// lwz r11,1996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1996);
	// stw r11,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r11.u32);
	// lwz r11,2000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2000);
	// stw r11,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r11.u32);
	// lwz r11,2004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2004);
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// lwz r11,2008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2008);
	// stw r11,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r11.u32);
	// lwz r11,2012(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2012);
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
	// lwz r11,2016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2016);
	// stw r11,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r11.u32);
	// lwz r11,2020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2020);
	// stw r11,2020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2020, ctx.r11.u32);
	// lwz r11,2024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2024);
	// stw r11,2024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2024, ctx.r11.u32);
	// lwz r11,2028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2028);
	// stw r11,2028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2028, ctx.r11.u32);
	// lwz r11,2032(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2032);
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// lwz r11,2036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2036);
	// stw r11,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r11.u32);
	// lwz r11,2040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2040);
	// stw r11,2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2040, ctx.r11.u32);
	// lwz r11,2044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2044);
	// stw r11,2044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2044, ctx.r11.u32);
	// lwz r11,2048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2048);
	// stw r11,2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2048, ctx.r11.u32);
	// lwz r11,2052(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2052);
	// stw r11,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r11.u32);
	// lwz r11,2056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// stw r11,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r11.u32);
	// lwz r11,2060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2060);
	// stw r11,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r11.u32);
	// lwz r11,2064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2064);
	// stw r11,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r11.u32);
	// lwz r11,2068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2068);
	// stw r11,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r11.u32);
	// lwz r11,2072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2072);
	// stw r11,2072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2072, ctx.r11.u32);
	// lwz r11,2076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2076);
	// stw r11,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r11.u32);
	// lwz r11,2080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2080);
	// stw r11,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r11.u32);
	// lwz r11,2084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2084);
	// stw r11,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r11.u32);
	// lwz r11,2088(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2088);
	// stw r11,2088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2088, ctx.r11.u32);
	// lwz r11,2092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2092);
	// stw r11,2092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2092, ctx.r11.u32);
	// lwz r11,2096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2096);
	// stw r11,2096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2096, ctx.r11.u32);
	// lwz r11,2100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2100);
	// stw r11,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r11.u32);
	// lwz r11,2104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2104);
	// stw r11,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r11.u32);
	// lwz r11,2108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r11.u32);
	// lwz r11,2112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2112);
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824030F8"))) PPC_WEAK_FUNC(sub_824030F8);
PPC_FUNC_IMPL(__imp__sub_824030F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828910a8
	ctx.lr = 0x82403118;
	sub_828910A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82403128
	if (ctx.cr0.eq) goto loc_82403128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82403128;
	sub_82332DB8(ctx, base);
loc_82403128:
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

__attribute__((alias("__imp__sub_82403148"))) PPC_WEAK_FUNC(sub_82403148);
PPC_FUNC_IMPL(__imp__sub_82403148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8216
	ctx.r3.s64 = ctx.r11.s64 + 8216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403158"))) PPC_WEAK_FUNC(sub_82403158);
PPC_FUNC_IMPL(__imp__sub_82403158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824031a8
	ctx.lr = 0x82403178;
	sub_824031A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8240318c
	if (ctx.cr6.eq) goto loc_8240318C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400390
	ctx.lr = 0x8240318C;
	sub_82400390(ctx, base);
loc_8240318C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824031A8"))) PPC_WEAK_FUNC(sub_824031A8);
PPC_FUNC_IMPL(__imp__sub_824031A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26020
	ctx.r31.s64 = ctx.r11.s64 + -26020;
	// lwz r11,-26016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26016);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824031f0
	if (!ctx.cr0.eq) goto loc_824031F0;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,27672
	ctx.r9.s64 = ctx.r9.s64 + 27672;
	// stw r11,-26016(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26016, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10472
	ctx.r3.s64 = ctx.r11.s64 + -10472;
	// bl 0x82a4c758
	ctx.lr = 0x824031F0;
	sub_82A4C758(ctx, base);
loc_824031F0:
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

__attribute__((alias("__imp__sub_82403208"))) PPC_WEAK_FUNC(sub_82403208);
PPC_FUNC_IMPL(__imp__sub_82403208) {
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
	// li r3,2128
	ctx.r3.s64 = 2128;
	// bl 0x82833108
	ctx.lr = 0x8240321C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240322c
	if (ctx.cr0.eq) goto loc_8240322C;
	// bl 0x828908e0
	ctx.lr = 0x82403228;
	sub_828908E0(ctx, base);
	// b 0x82403230
	goto loc_82403230;
loc_8240322C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82403230:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403240"))) PPC_WEAK_FUNC(sub_82403240);
PPC_FUNC_IMPL(__imp__sub_82403240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31052(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31052);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82403280
	if (!ctx.cr0.eq) goto loc_82403280;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31052, ctx.r11.u32);
	// addi r3,r9,8216
	ctx.r3.s64 = ctx.r9.s64 + 8216;
	// bl 0x82816528
	ctx.lr = 0x82403278;
	sub_82816528(ctx, base);
	// stw r3,31048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31048, ctx.r3.u32);
	// b 0x82403284
	goto loc_82403284;
loc_82403280:
	// lwz r3,31048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31048);
loc_82403284:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403298"))) PPC_WEAK_FUNC(sub_82403298);
PPC_FUNC_IMPL(__imp__sub_82403298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824031a8
	ctx.lr = 0x824032B8;
	sub_824031A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824032CC;
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

__attribute__((alias("__imp__sub_824032E8"))) PPC_WEAK_FUNC(sub_824032E8);
PPC_FUNC_IMPL(__imp__sub_824032E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82403320
	if (ctx.cr6.eq) goto loc_82403320;
	// bl 0x824031a8
	ctx.lr = 0x82403310;
	sub_824031A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82403320
	if (!ctx.cr6.eq) goto loc_82403320;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8240332c
	goto loc_8240332C;
loc_82403320:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824003f0
	ctx.lr = 0x8240332C;
	sub_824003F0(ctx, base);
loc_8240332C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403348"))) PPC_WEAK_FUNC(sub_82403348);
PPC_FUNC_IMPL(__imp__sub_82403348) {
	PPC_FUNC_PROLOGUE();
	// b 0x824031a8
	sub_824031A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82403350"))) PPC_WEAK_FUNC(sub_82403350);
PPC_FUNC_IMPL(__imp__sub_82403350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,2128
	ctx.r3.s64 = 2128;
	// bl 0x82833108
	ctx.lr = 0x8240336C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82403380
	if (ctx.cr0.eq) goto loc_82403380;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82402ba8
	ctx.lr = 0x8240337C;
	sub_82402BA8(ctx, base);
	// b 0x82403384
	goto loc_82403384;
loc_82403380:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82403384:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403398"))) PPC_WEAK_FUNC(sub_82403398);
PPC_FUNC_IMPL(__imp__sub_82403398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1528);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824033ac
	if (ctx.cr6.eq) goto loc_824033AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x824033b0
	goto loc_824033B0;
loc_824033AC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_824033B0:
	// stw r11,1528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1528, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824033B8"))) PPC_WEAK_FUNC(sub_824033B8);
PPC_FUNC_IMPL(__imp__sub_824033B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1528);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824033D0"))) PPC_WEAK_FUNC(sub_824033D0);
PPC_FUNC_IMPL(__imp__sub_824033D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x824030f8
	sub_824030F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824033D8"))) PPC_WEAK_FUNC(sub_824033D8);
PPC_FUNC_IMPL(__imp__sub_824033D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82403158
	sub_82403158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824033E0"))) PPC_WEAK_FUNC(sub_824033E0);
PPC_FUNC_IMPL(__imp__sub_824033E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x824030f8
	sub_824030F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824033E8"))) PPC_WEAK_FUNC(sub_824033E8);
PPC_FUNC_IMPL(__imp__sub_824033E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824dbe08
	ctx.lr = 0x82403408;
	sub_824DBE08(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82403418
	if (ctx.cr0.eq) goto loc_82403418;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82403418;
	sub_82332DB8(ctx, base);
loc_82403418:
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

__attribute__((alias("__imp__sub_82403438"))) PPC_WEAK_FUNC(sub_82403438);
PPC_FUNC_IMPL(__imp__sub_82403438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,14092
	ctx.r3.s64 = ctx.r11.s64 + 14092;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403448"))) PPC_WEAK_FUNC(sub_82403448);
PPC_FUNC_IMPL(__imp__sub_82403448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,6096
	ctx.r3.s64 = 6096;
	// bl 0x82833108
	ctx.lr = 0x82403464;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82403478
	if (ctx.cr0.eq) goto loc_82403478;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400f98
	ctx.lr = 0x82403474;
	sub_82400F98(ctx, base);
	// b 0x8240347c
	goto loc_8240347C;
loc_82403478:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240347C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403490"))) PPC_WEAK_FUNC(sub_82403490);
PPC_FUNC_IMPL(__imp__sub_82403490) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x824033e8
	sub_824033E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82403498"))) PPC_WEAK_FUNC(sub_82403498);
PPC_FUNC_IMPL(__imp__sub_82403498) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82404040
	sub_82404040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824034A0"))) PPC_WEAK_FUNC(sub_824034A0);
PPC_FUNC_IMPL(__imp__sub_824034A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x824034A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,56
	ctx.r11.s64 = 56;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// beq cr6,0x824035c8
	if (ctx.cr6.eq) goto loc_824035C8;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824035c8
	if (!ctx.cr6.gt) goto loc_824035C8;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82403504
	if (ctx.cr0.eq) goto loc_82403504;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x82332c38
	ctx.lr = 0x82403504;
	sub_82332C38(ctx, base);
loc_82403504:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824035c8
	if (!ctx.cr6.gt) goto loc_824035C8;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r28,r11,-24348
	ctx.r28.s64 = ctx.r11.s64 + -24348;
loc_8240351C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82403530;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 * 56;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824035b4
	if (ctx.cr0.eq) goto loc_824035B4;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lfs f0,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f0,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f0,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_824035B4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8240351c
	if (ctx.cr6.lt) goto loc_8240351C;
loc_824035C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824035D8"))) PPC_WEAK_FUNC(sub_824035D8);
PPC_FUNC_IMPL(__imp__sub_824035D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x824035E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r28,16(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8240361c
	if (!ctx.cr6.gt) goto loc_8240361C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82403600:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82333960
	ctx.lr = 0x82403610;
	sub_82333960(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x82403600
	if (!ctx.cr0.eq) goto loc_82403600;
loc_8240361C:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82403634;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82403644
	if (ctx.cr6.eq) goto loc_82403644;
	// bl 0x82332db8
	ctx.lr = 0x82403644;
	sub_82332DB8(ctx, base);
loc_82403644:
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82403658"))) PPC_WEAK_FUNC(sub_82403658);
PPC_FUNC_IMPL(__imp__sub_82403658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82403660;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82403698
	if (!ctx.cr6.gt) goto loc_82403698;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82403680:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82333960
	ctx.lr = 0x8240368C;
	sub_82333960(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// bne 0x82403680
	if (!ctx.cr0.eq) goto loc_82403680;
loc_82403698:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x824036B0;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824036c0
	if (ctx.cr6.eq) goto loc_824036C0;
	// bl 0x82332db8
	ctx.lr = 0x824036C0;
	sub_82332DB8(ctx, base);
loc_824036C0:
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824036D8"))) PPC_WEAK_FUNC(sub_824036D8);
PPC_FUNC_IMPL(__imp__sub_824036D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,15864
	ctx.r11.s64 = ctx.r11.s64 + 15864;
	// addi r10,r10,26260
	ctx.r10.s64 = ctx.r10.s64 + 26260;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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
	// bl 0x82a4ea80
	ctx.lr = 0x8240373C;
	sub_82A4EA80(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403778"))) PPC_WEAK_FUNC(sub_82403778);
PPC_FUNC_IMPL(__imp__sub_82403778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82403780;
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
	// beq cr6,0x824037dc
	if (ctx.cr6.eq) goto loc_824037DC;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-26028
	ctx.r31.s64 = ctx.r11.s64 + -26028;
	// lwz r11,-26024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26024);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824037cc
	if (!ctx.cr0.eq) goto loc_824037CC;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26292
	ctx.r9.s64 = ctx.r9.s64 + 26292;
	// stw r11,-26024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26024, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10448
	ctx.r3.s64 = ctx.r11.s64 + -10448;
	// bl 0x82a4c758
	ctx.lr = 0x824037CC;
	sub_82A4C758(ctx, base);
loc_824037CC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x824037dc
	if (!ctx.cr6.eq) goto loc_824037DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824037e8
	goto loc_824037E8;
loc_824037DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x824037E8;
	sub_82339EE8(ctx, base);
loc_824037E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824037F0"))) PPC_WEAK_FUNC(sub_824037F0);
PPC_FUNC_IMPL(__imp__sub_824037F0) {
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
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82333900
	ctx.lr = 0x82403804;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82403814
	if (ctx.cr0.eq) goto loc_82403814;
	// bl 0x82683f40
	ctx.lr = 0x82403810;
	sub_82683F40(ctx, base);
	// b 0x82403818
	goto loc_82403818;
loc_82403814:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82403818:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403828"))) PPC_WEAK_FUNC(sub_82403828);
PPC_FUNC_IMPL(__imp__sub_82403828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-25748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25748);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82403870
	if (!ctx.cr6.eq) goto loc_82403870;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,1056
	ctx.r3.s64 = ctx.r10.s64 + 1056;
	// bl 0x82a4c7d8
	ctx.lr = 0x8240385C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82403864;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8240386C;
	sub_82816528(ctx, base);
	// stw r3,-25748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25748, ctx.r3.u32);
loc_82403870:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403888"))) PPC_WEAK_FUNC(sub_82403888);
PPC_FUNC_IMPL(__imp__sub_82403888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82403890;
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
	// addi r31,r11,-26028
	ctx.r31.s64 = ctx.r11.s64 + -26028;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-26024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26024);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824038d4
	if (!ctx.cr0.eq) goto loc_824038D4;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26292
	ctx.r9.s64 = ctx.r9.s64 + 26292;
	// stw r11,-26024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26024, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10448
	ctx.r3.s64 = ctx.r11.s64 + -10448;
	// bl 0x82a4c758
	ctx.lr = 0x824038D4;
	sub_82A4C758(ctx, base);
loc_824038D4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x824038e8
	if (ctx.cr6.eq) goto loc_824038E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x824038E8;
	sub_82339D80(ctx, base);
loc_824038E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824038F0"))) PPC_WEAK_FUNC(sub_824038F0);
PPC_FUNC_IMPL(__imp__sub_824038F0) {
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
	// bl 0x82403a38
	ctx.lr = 0x82403910;
	sub_82403A38(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,13392
	ctx.r11.s64 = ctx.r11.s64 + 13392;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
	// lbz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 96);
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// lbz r11,97(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 97);
	// stb r11,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r11.u8);
	// lbz r11,98(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 98);
	// stb r11,98(r31)
	PPC_STORE_U8(ctx.r31.u32 + 98, ctx.r11.u8);
	// lbz r11,99(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 99);
	// stb r11,99(r31)
	PPC_STORE_U8(ctx.r31.u32 + 99, ctx.r11.u8);
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
	// lfs f0,132(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f0,136(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// rlwimi r10,r11,0,1,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFF80000000);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// rlwimi r11,r10,0,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// rlwimi r11,r10,0,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// rlwimi r11,r10,0,3,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// rlwimi r11,r10,0,4,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// rlwimi r11,r10,0,5,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x4000000) | (ctx.r11.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403A38"))) PPC_WEAK_FUNC(sub_82403A38);
PPC_FUNC_IMPL(__imp__sub_82403A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,13256
	ctx.r10.s64 = ctx.r10.s64 + 13256;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lfs f0,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lfs f0,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403AE0"))) PPC_WEAK_FUNC(sub_82403AE0);
PPC_FUNC_IMPL(__imp__sub_82403AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7908
	ctx.r3.s64 = ctx.r11.s64 + 7908;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403AF0"))) PPC_WEAK_FUNC(sub_82403AF0);
PPC_FUNC_IMPL(__imp__sub_82403AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82403b50
	ctx.lr = 0x82403B10;
	sub_82403B50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82403b20
	if (!ctx.cr6.eq) goto loc_82403B20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82403b34
	goto loc_82403B34;
loc_82403B20:
	// bl 0x82333d20
	ctx.lr = 0x82403B24;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82403b34
	if (ctx.cr6.eq) goto loc_82403B34;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82403B34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403B50"))) PPC_WEAK_FUNC(sub_82403B50);
PPC_FUNC_IMPL(__imp__sub_82403B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26036
	ctx.r31.s64 = ctx.r11.s64 + -26036;
	// lwz r11,-26032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26032);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82403b98
	if (!ctx.cr0.eq) goto loc_82403B98;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,13368
	ctx.r9.s64 = ctx.r9.s64 + 13368;
	// stw r11,-26032(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26032, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10424
	ctx.r3.s64 = ctx.r11.s64 + -10424;
	// bl 0x82a4c758
	ctx.lr = 0x82403B98;
	sub_82A4C758(ctx, base);
loc_82403B98:
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

__attribute__((alias("__imp__sub_82403BB0"))) PPC_WEAK_FUNC(sub_82403BB0);
PPC_FUNC_IMPL(__imp__sub_82403BB0) {
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
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82833108
	ctx.lr = 0x82403BC4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82403bd4
	if (ctx.cr0.eq) goto loc_82403BD4;
	// bl 0x8288c160
	ctx.lr = 0x82403BD0;
	sub_8288C160(ctx, base);
	// b 0x82403bd8
	goto loc_82403BD8;
loc_82403BD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82403BD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403BE8"))) PPC_WEAK_FUNC(sub_82403BE8);
PPC_FUNC_IMPL(__imp__sub_82403BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31044(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31044);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82403c28
	if (!ctx.cr0.eq) goto loc_82403C28;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31044, ctx.r11.u32);
	// addi r3,r9,7908
	ctx.r3.s64 = ctx.r9.s64 + 7908;
	// bl 0x82816528
	ctx.lr = 0x82403C20;
	sub_82816528(ctx, base);
	// stw r3,31040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31040, ctx.r3.u32);
	// b 0x82403c2c
	goto loc_82403C2C;
loc_82403C28:
	// lwz r3,31040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31040);
loc_82403C2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403C40"))) PPC_WEAK_FUNC(sub_82403C40);
PPC_FUNC_IMPL(__imp__sub_82403C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82403b50
	ctx.lr = 0x82403C60;
	sub_82403B50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82403C74;
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

__attribute__((alias("__imp__sub_82403C90"))) PPC_WEAK_FUNC(sub_82403C90);
PPC_FUNC_IMPL(__imp__sub_82403C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82403cd0
	if (ctx.cr6.eq) goto loc_82403CD0;
	// bl 0x82403b50
	ctx.lr = 0x82403CB0;
	sub_82403B50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82403cc0
	if (!ctx.cr6.eq) goto loc_82403CC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82403cd4
	goto loc_82403CD4;
loc_82403CC0:
	// bl 0x82333d20
	ctx.lr = 0x82403CC4;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82403cd4
	if (ctx.cr6.eq) goto loc_82403CD4;
loc_82403CD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82403CD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403CE8"))) PPC_WEAK_FUNC(sub_82403CE8);
PPC_FUNC_IMPL(__imp__sub_82403CE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82403b50
	sub_82403B50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82403CF0"))) PPC_WEAK_FUNC(sub_82403CF0);
PPC_FUNC_IMPL(__imp__sub_82403CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82833108
	ctx.lr = 0x82403D0C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82403d20
	if (ctx.cr0.eq) goto loc_82403D20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82403a38
	ctx.lr = 0x82403D1C;
	sub_82403A38(ctx, base);
	// b 0x82403d24
	goto loc_82403D24;
loc_82403D20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82403D24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403D38"))) PPC_WEAK_FUNC(sub_82403D38);
PPC_FUNC_IMPL(__imp__sub_82403D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403D40"))) PPC_WEAK_FUNC(sub_82403D40);
PPC_FUNC_IMPL(__imp__sub_82403D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7928
	ctx.r3.s64 = ctx.r11.s64 + 7928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403D50"))) PPC_WEAK_FUNC(sub_82403D50);
PPC_FUNC_IMPL(__imp__sub_82403D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82403da0
	ctx.lr = 0x82403D70;
	sub_82403DA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82403d84
	if (ctx.cr6.eq) goto loc_82403D84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82403af0
	ctx.lr = 0x82403D84;
	sub_82403AF0(ctx, base);
loc_82403D84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403DA0"))) PPC_WEAK_FUNC(sub_82403DA0);
PPC_FUNC_IMPL(__imp__sub_82403DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26044
	ctx.r31.s64 = ctx.r11.s64 + -26044;
	// lwz r11,-26040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26040);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82403de8
	if (!ctx.cr0.eq) goto loc_82403DE8;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,13504
	ctx.r9.s64 = ctx.r9.s64 + 13504;
	// stw r11,-26040(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26040, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10400
	ctx.r3.s64 = ctx.r11.s64 + -10400;
	// bl 0x82a4c758
	ctx.lr = 0x82403DE8;
	sub_82A4C758(ctx, base);
loc_82403DE8:
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

__attribute__((alias("__imp__sub_82403E00"))) PPC_WEAK_FUNC(sub_82403E00);
PPC_FUNC_IMPL(__imp__sub_82403E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31036(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31036);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82403e40
	if (!ctx.cr0.eq) goto loc_82403E40;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31036, ctx.r11.u32);
	// addi r3,r9,7928
	ctx.r3.s64 = ctx.r9.s64 + 7928;
	// bl 0x82816528
	ctx.lr = 0x82403E38;
	sub_82816528(ctx, base);
	// stw r3,31032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31032, ctx.r3.u32);
	// b 0x82403e44
	goto loc_82403E44;
loc_82403E40:
	// lwz r3,31032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31032);
loc_82403E44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403E58"))) PPC_WEAK_FUNC(sub_82403E58);
PPC_FUNC_IMPL(__imp__sub_82403E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82403da0
	ctx.lr = 0x82403E78;
	sub_82403DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82403E8C;
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

__attribute__((alias("__imp__sub_82403EA8"))) PPC_WEAK_FUNC(sub_82403EA8);
PPC_FUNC_IMPL(__imp__sub_82403EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82403ee0
	if (ctx.cr6.eq) goto loc_82403EE0;
	// bl 0x82403da0
	ctx.lr = 0x82403ED0;
	sub_82403DA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82403ee0
	if (!ctx.cr6.eq) goto loc_82403EE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82403eec
	goto loc_82403EEC;
loc_82403EE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82403c90
	ctx.lr = 0x82403EEC;
	sub_82403C90(ctx, base);
loc_82403EEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403F08"))) PPC_WEAK_FUNC(sub_82403F08);
PPC_FUNC_IMPL(__imp__sub_82403F08) {
	PPC_FUNC_PROLOGUE();
	// b 0x82403da0
	sub_82403DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82403F10"))) PPC_WEAK_FUNC(sub_82403F10);
PPC_FUNC_IMPL(__imp__sub_82403F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82833108
	ctx.lr = 0x82403F2C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82403f40
	if (ctx.cr0.eq) goto loc_82403F40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824038f0
	ctx.lr = 0x82403F3C;
	sub_824038F0(ctx, base);
	// b 0x82403f44
	goto loc_82403F44;
loc_82403F40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82403F44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403F58"))) PPC_WEAK_FUNC(sub_82403F58);
PPC_FUNC_IMPL(__imp__sub_82403F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82833108
	ctx.lr = 0x82403F70;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82403f94
	if (ctx.cr0.eq) goto loc_82403F94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8288c160
	ctx.lr = 0x82403F80;
	sub_8288C160(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,13392
	ctx.r11.s64 = ctx.r11.s64 + 13392;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82403f98
	goto loc_82403F98;
loc_82403F94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82403F98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403FB0"))) PPC_WEAK_FUNC(sub_82403FB0);
PPC_FUNC_IMPL(__imp__sub_82403FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82403FB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r28,16(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82404000
	if (!ctx.cr6.gt) goto loc_82404000;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82403FD8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82403FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
	// bne 0x82403fd8
	if (!ctx.cr0.eq) goto loc_82403FD8;
loc_82404000:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,144
	ctx.r6.s64 = 144;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82404018;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404028
	if (ctx.cr6.eq) goto loc_82404028;
	// bl 0x82332db8
	ctx.lr = 0x82404028;
	sub_82332DB8(ctx, base);
loc_82404028:
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82404040"))) PPC_WEAK_FUNC(sub_82404040);
PPC_FUNC_IMPL(__imp__sub_82404040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82332af0
	ctx.lr = 0x82404060;
	sub_82332AF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82404070
	if (!ctx.cr6.eq) goto loc_82404070;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82404088
	goto loc_82404088;
loc_82404070:
	// bl 0x824031a8
	ctx.lr = 0x82404074;
	sub_824031A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82404088
	if (ctx.cr6.eq) goto loc_82404088;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400390
	ctx.lr = 0x82404088;
	sub_82400390(ctx, base);
loc_82404088:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824040A0"))) PPC_WEAK_FUNC(sub_824040A0);
PPC_FUNC_IMPL(__imp__sub_824040A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x824040d8
	if (ctx.cr6.eq) goto loc_824040D8;
	// bl 0x82332af0
	ctx.lr = 0x824040C8;
	sub_82332AF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824040d8
	if (!ctx.cr6.eq) goto loc_824040D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824040e4
	goto loc_824040E4;
loc_824040D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824032e8
	ctx.lr = 0x824040E4;
	sub_824032E8(ctx, base);
loc_824040E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82404100"))) PPC_WEAK_FUNC(sub_82404100);
PPC_FUNC_IMPL(__imp__sub_82404100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82404108;
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824041c4
	if (ctx.cr6.eq) goto loc_824041C4;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,30716
	ctx.r11.s64 = ctx.r11.s64 + 30716;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// bne cr6,0x82404154
	if (!ctx.cr6.eq) goto loc_82404154;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82404164
	goto loc_82404164;
loc_82404154:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_82404164:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82404518
	ctx.lr = 0x8240416C;
	sub_82404518(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8240417c
	if (!ctx.cr6.eq) goto loc_8240417C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8240418c
	goto loc_8240418C;
loc_8240417C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8240418C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82404460
	ctx.lr = 0x82404198;
	sub_82404460(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824041a8
	if (!ctx.cr6.eq) goto loc_824041A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x824041b8
	goto loc_824041B8;
loc_824041A8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_824041B8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82404350
	ctx.lr = 0x824041C4;
	sub_82404350(ctx, base);
loc_824041C4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,-23712
	ctx.r11.s64 = ctx.r11.s64 + -23712;
	// addi r9,r9,30488
	ctx.r9.s64 = ctx.r9.s64 + 30488;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r8,30664
	ctx.r10.s64 = ctx.r8.s64 + 30664;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r9,r9,-28408
	ctx.r9.s64 = ctx.r9.s64 + -28408;
	// addi r8,r8,31532
	ctx.r8.s64 = ctx.r8.s64 + 31532;
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82404270"))) PPC_WEAK_FUNC(sub_82404270);
PPC_FUNC_IMPL(__imp__sub_82404270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824045d0
	sub_824045D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82404280"))) PPC_WEAK_FUNC(sub_82404280);
PPC_FUNC_IMPL(__imp__sub_82404280) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82404790
	sub_82404790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82404290"))) PPC_WEAK_FUNC(sub_82404290);
PPC_FUNC_IMPL(__imp__sub_82404290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824042a0
	sub_824042A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824042A0"))) PPC_WEAK_FUNC(sub_824042A0);
PPC_FUNC_IMPL(__imp__sub_824042A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823e99e0
	sub_823E99E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824042A8"))) PPC_WEAK_FUNC(sub_824042A8);
PPC_FUNC_IMPL(__imp__sub_824042A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824042b8
	sub_824042B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824042B8"))) PPC_WEAK_FUNC(sub_824042B8);
PPC_FUNC_IMPL(__imp__sub_824042B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82833108
	ctx.lr = 0x824042D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824042ec
	if (ctx.cr0.eq) goto loc_824042EC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82404100
	ctx.lr = 0x824042E8;
	sub_82404100(ctx, base);
	// b 0x824042f0
	goto loc_824042F0;
loc_824042EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824042F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404308
	if (ctx.cr6.eq) goto loc_82404308;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82404308:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82404320"))) PPC_WEAK_FUNC(sub_82404320);
PPC_FUNC_IMPL(__imp__sub_82404320) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82404330
	sub_82404330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82404330"))) PPC_WEAK_FUNC(sub_82404330);
PPC_FUNC_IMPL(__imp__sub_82404330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8328
	ctx.r3.s64 = ctx.r11.s64 + 8328;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82404340"))) PPC_WEAK_FUNC(sub_82404340);
PPC_FUNC_IMPL(__imp__sub_82404340) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x824045d0
	sub_824045D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82404350"))) PPC_WEAK_FUNC(sub_82404350);
PPC_FUNC_IMPL(__imp__sub_82404350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x824043e4
	if (ctx.cr6.eq) goto loc_824043E4;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,24956
	ctx.r11.s64 = ctx.r11.s64 + 24956;
	// addi r10,r10,-6368
	ctx.r10.s64 = ctx.r10.s64 + -6368;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// bne cr6,0x824043a0
	if (!ctx.cr6.eq) goto loc_824043A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824043b0
	goto loc_824043B0;
loc_824043A0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_824043B0:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82404518
	ctx.lr = 0x824043B8;
	sub_82404518(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824043c8
	if (!ctx.cr6.eq) goto loc_824043C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824043d8
	goto loc_824043D8;
loc_824043C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_824043D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82404460
	ctx.lr = 0x824043E4;
	sub_82404460(ctx, base);
loc_824043E4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,31532
	ctx.r11.s64 = ctx.r11.s64 + 31532;
	// addi r9,r9,25312
	ctx.r9.s64 = ctx.r9.s64 + 25312;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r8,25488
	ctx.r10.s64 = ctx.r8.s64 + 25488;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,25544
	ctx.r9.s64 = ctx.r9.s64 + 25544;
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

__attribute__((alias("__imp__sub_82404460"))) PPC_WEAK_FUNC(sub_82404460);
PPC_FUNC_IMPL(__imp__sub_82404460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824044b4
	if (ctx.cr6.eq) goto loc_824044B4;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,-30820
	ctx.r11.s64 = ctx.r11.s64 + -30820;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x824044ac
	if (ctx.cr6.eq) goto loc_824044AC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_824044AC:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82404518
	ctx.lr = 0x824044B4;
	sub_82404518(ctx, base);
loc_824044B4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,29976
	ctx.r11.s64 = ctx.r11.s64 + 29976;
	// addi r9,r9,23232
	ctx.r9.s64 = ctx.r9.s64 + 23232;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r8,23408
	ctx.r10.s64 = ctx.r8.s64 + 23408;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82404518"))) PPC_WEAK_FUNC(sub_82404518);
PPC_FUNC_IMPL(__imp__sub_82404518) {
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
	ctx.lr = 0x82404554;
	sub_82337440(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,10816
	ctx.r11.s64 = ctx.r11.s64 + 10816;
	// addi r10,r10,10948
	ctx.r10.s64 = ctx.r10.s64 + 10948;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r11,21704
	ctx.r11.s64 = ctx.r11.s64 + 21704;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// addi r10,r10,21880
	ctx.r10.s64 = ctx.r10.s64 + 21880;
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824045D0"))) PPC_WEAK_FUNC(sub_824045D0);
PPC_FUNC_IMPL(__imp__sub_824045D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82404630
	ctx.lr = 0x824045F0;
	sub_82404630(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82404600
	if (!ctx.cr6.eq) goto loc_82404600;
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// b 0x82404618
	goto loc_82404618;
loc_82404600:
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x823e9980
	ctx.lr = 0x82404618;
	sub_823E9980(ctx, base);
loc_82404618:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82404630"))) PPC_WEAK_FUNC(sub_82404630);
PPC_FUNC_IMPL(__imp__sub_82404630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28052
	ctx.r31.s64 = ctx.r11.s64 + -28052;
	// lwz r11,-27808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27808);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82404678
	if (!ctx.cr0.eq) goto loc_82404678;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,30732
	ctx.r9.s64 = ctx.r9.s64 + 30732;
	// stw r11,-27808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27808, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10376
	ctx.r3.s64 = ctx.r11.s64 + -10376;
	// bl 0x82a4c758
	ctx.lr = 0x82404678;
	sub_82A4C758(ctx, base);
loc_82404678:
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

__attribute__((alias("__imp__sub_82404690"))) PPC_WEAK_FUNC(sub_82404690);
PPC_FUNC_IMPL(__imp__sub_82404690) {
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
	ctx.lr = 0x824046A4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824046b8
	if (ctx.cr0.eq) goto loc_824046B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824d2430
	ctx.lr = 0x824046B4;
	sub_824D2430(ctx, base);
	// b 0x824046bc
	goto loc_824046BC;
loc_824046B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824046BC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824046d4
	if (ctx.cr6.eq) goto loc_824046D4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_824046D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824046E8"))) PPC_WEAK_FUNC(sub_824046E8);
PPC_FUNC_IMPL(__imp__sub_824046E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31028);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82404728
	if (!ctx.cr0.eq) goto loc_82404728;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31028(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31028, ctx.r11.u32);
	// addi r3,r9,8328
	ctx.r3.s64 = ctx.r9.s64 + 8328;
	// bl 0x82816528
	ctx.lr = 0x82404720;
	sub_82816528(ctx, base);
	// stw r3,31024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31024, ctx.r3.u32);
	// b 0x8240472c
	goto loc_8240472C;
loc_82404728:
	// lwz r3,31024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31024);
loc_8240472C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82404740"))) PPC_WEAK_FUNC(sub_82404740);
PPC_FUNC_IMPL(__imp__sub_82404740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82404630
	ctx.lr = 0x82404760;
	sub_82404630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82404774;
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

__attribute__((alias("__imp__sub_82404790"))) PPC_WEAK_FUNC(sub_82404790);
PPC_FUNC_IMPL(__imp__sub_82404790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x824047c8
	if (ctx.cr6.eq) goto loc_824047C8;
	// bl 0x82404630
	ctx.lr = 0x824047B8;
	sub_82404630(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x824047c8
	if (!ctx.cr6.eq) goto loc_824047C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824047e0
	goto loc_824047E0;
loc_824047C8:
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x823e9bb0
	ctx.lr = 0x824047E0;
	sub_823E9BB0(ctx, base);
loc_824047E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824047F8"))) PPC_WEAK_FUNC(sub_824047F8);
PPC_FUNC_IMPL(__imp__sub_824047F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,1144
	ctx.r11.s64 = ctx.r11.s64 + 1144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82404958
	ctx.lr = 0x82404824;
	sub_82404958(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82404834
	if (ctx.cr0.eq) goto loc_82404834;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82404834;
	sub_82332DB8(ctx, base);
loc_82404834:
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

__attribute__((alias("__imp__sub_82404850"))) PPC_WEAK_FUNC(sub_82404850);
PPC_FUNC_IMPL(__imp__sub_82404850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x82404884;
	sub_823327E0(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,848
	ctx.r11.s64 = ctx.r11.s64 + 848;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823327e0
	ctx.lr = 0x824048AC;
	sub_823327E0(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,904
	ctx.r11.s64 = ctx.r11.s64 + 904;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823327e0
	ctx.lr = 0x824048D4;
	sub_823327E0(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,956
	ctx.r11.s64 = ctx.r11.s64 + 956;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823327e0
	ctx.lr = 0x824048FC;
	sub_823327E0(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r11,r11,1008
	ctx.r11.s64 = ctx.r11.s64 + 1008;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x82404920;
	sub_82332D50(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240493c
	if (ctx.cr0.eq) goto loc_8240493C;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r10,r10,1064
	ctx.r10.s64 = ctx.r10.s64 + 1064;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8240493C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82404958"))) PPC_WEAK_FUNC(sub_82404958);
PPC_FUNC_IMPL(__imp__sub_82404958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r31,r30,76
	ctx.r31.s64 = ctx.r30.s64 + 76;
	// addi r11,r11,1432
	ctx.r11.s64 = ctx.r11.s64 + 1432;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,92(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82404998;
	sub_82332CA8(ctx, base);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824049a8
	if (ctx.cr6.eq) goto loc_824049A8;
	// bl 0x82332db8
	ctx.lr = 0x824049A8;
	sub_82332DB8(ctx, base);
loc_824049A8:
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
	// bl 0x82404a28
	ctx.lr = 0x824049C0;
	sub_82404A28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824049D8"))) PPC_WEAK_FUNC(sub_824049D8);
PPC_FUNC_IMPL(__imp__sub_824049D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82404958
	ctx.lr = 0x824049F8;
	sub_82404958(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82404a08
	if (ctx.cr0.eq) goto loc_82404A08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82404A08;
	sub_82332DB8(ctx, base);
loc_82404A08:
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

__attribute__((alias("__imp__sub_82404A28"))) PPC_WEAK_FUNC(sub_82404A28);
PPC_FUNC_IMPL(__imp__sub_82404A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82404A30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// addi r11,r11,1336
	ctx.r11.s64 = ctx.r11.s64 + 1336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82404A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828c6f18
	ctx.lr = 0x82404A68;
	sub_828C6F18(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82404A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82332db8
	ctx.lr = 0x82404A90;
	sub_82332DB8(ctx, base);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// bl 0x82404b48
	ctx.lr = 0x82404A98;
	sub_82404B48(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,1240
	ctx.r11.s64 = ctx.r11.s64 + 1240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82404AB0"))) PPC_WEAK_FUNC(sub_82404AB0);
PPC_FUNC_IMPL(__imp__sub_82404AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82404a28
	ctx.lr = 0x82404AD0;
	sub_82404A28(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82404ae0
	if (ctx.cr0.eq) goto loc_82404AE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82404AE0;
	sub_82332DB8(ctx, base);
loc_82404AE0:
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

__attribute__((alias("__imp__sub_82404B00"))) PPC_WEAK_FUNC(sub_82404B00);
PPC_FUNC_IMPL(__imp__sub_82404B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1240
	ctx.r11.s64 = ctx.r11.s64 + 1240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82404b2c
	if (ctx.cr0.eq) goto loc_82404B2C;
	// bl 0x82332db8
	ctx.lr = 0x82404B2C;
	sub_82332DB8(ctx, base);
loc_82404B2C:
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

__attribute__((alias("__imp__sub_82404B48"))) PPC_WEAK_FUNC(sub_82404B48);
PPC_FUNC_IMPL(__imp__sub_82404B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82404B50;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82404bb0
	if (!ctx.cr6.gt) goto loc_82404BB0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82404B70:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82404ba4
	if (ctx.cr6.eq) goto loc_82404BA4;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r26,r31,24
	ctx.r26.s64 = ctx.r31.s64 + 24;
	// bl 0x82332db8
	ctx.lr = 0x82404B8C;
	sub_82332DB8(ctx, base);
	// addi r3,r26,12
	ctx.r3.s64 = ctx.r26.s64 + 12;
	// bl 0x82404bf0
	ctx.lr = 0x82404B94;
	sub_82404BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333960
	ctx.lr = 0x82404B9C;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82404BA4;
	sub_82332DB8(ctx, base);
loc_82404BA4:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82404b70
	if (!ctx.cr0.eq) goto loc_82404B70;
loc_82404BB0:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82404BC8;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404bd8
	if (ctx.cr6.eq) goto loc_82404BD8;
	// bl 0x82332db8
	ctx.lr = 0x82404BD8;
	sub_82332DB8(ctx, base);
loc_82404BD8:
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
	// stw r25,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r25.u32);
	// stw r25,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82404BF0"))) PPC_WEAK_FUNC(sub_82404BF0);
PPC_FUNC_IMPL(__imp__sub_82404BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82404BF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r27,16(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82404c68
	if (!ctx.cr6.gt) goto loc_82404C68;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82404C18:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r30,r11,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82404c5c
	if (ctx.cr6.eq) goto loc_82404C5C;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404c3c
	if (ctx.cr6.eq) goto loc_82404C3C;
	// bl 0x82332db8
	ctx.lr = 0x82404C3C;
	sub_82332DB8(ctx, base);
loc_82404C3C:
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// bl 0x82404ca8
	ctx.lr = 0x82404C4C;
	sub_82404CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333960
	ctx.lr = 0x82404C54;
	sub_82333960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x82404C5C;
	sub_82332DB8(ctx, base);
loc_82404C5C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82404c18
	if (!ctx.cr0.eq) goto loc_82404C18;
loc_82404C68:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82404C80;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404c90
	if (ctx.cr6.eq) goto loc_82404C90;
	// bl 0x82332db8
	ctx.lr = 0x82404C90;
	sub_82332DB8(ctx, base);
loc_82404C90:
	// stw r25,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r25.u32);
	// stw r25,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r25.u32);
	// stw r25,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82404CA8"))) PPC_WEAK_FUNC(sub_82404CA8);
PPC_FUNC_IMPL(__imp__sub_82404CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82404CB0;
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
	// ble cr6,0x82404cf4
	if (!ctx.cr6.gt) goto loc_82404CF4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82404CD0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// bl 0x82333960
	ctx.lr = 0x82404CE0;
	sub_82333960(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x82333960
	ctx.lr = 0x82404CE8;
	sub_82333960(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
	// bne 0x82404cd0
	if (!ctx.cr0.eq) goto loc_82404CD0;
loc_82404CF4:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,52
	ctx.r6.s64 = 52;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82404D0C;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404d1c
	if (ctx.cr6.eq) goto loc_82404D1C;
	// bl 0x82332db8
	ctx.lr = 0x82404D1C;
	sub_82332DB8(ctx, base);
loc_82404D1C:
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

__attribute__((alias("__imp__sub_82404D30"))) PPC_WEAK_FUNC(sub_82404D30);
PPC_FUNC_IMPL(__imp__sub_82404D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r10,84
	ctx.r10.s64 = 84;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r8,r11,1336
	ctx.r8.s64 = ctx.r11.s64 + 1336;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r9,r9,15852
	ctx.r9.s64 = ctx.r9.s64 + 15852;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x82404DA0;
	sub_8312E7DC(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,1432
	ctx.r11.s64 = ctx.r11.s64 + 1432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82404DE8"))) PPC_WEAK_FUNC(sub_82404DE8);
PPC_FUNC_IMPL(__imp__sub_82404DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1528
	ctx.r3.s64 = ctx.r11.s64 + 1528;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82404DF8"))) PPC_WEAK_FUNC(sub_82404DF8);
PPC_FUNC_IMPL(__imp__sub_82404DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82404e30
	if (ctx.cr6.eq) goto loc_82404E30;
	// bl 0x82408b48
	ctx.lr = 0x82404E20;
	sub_82408B48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82404e30
	if (!ctx.cr6.eq) goto loc_82404E30;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82404e3c
	goto loc_82404E3C;
loc_82404E30:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240ada0
	ctx.lr = 0x82404E3C;
	sub_8240ADA0(ctx, base);
loc_82404E3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82404E58"))) PPC_WEAK_FUNC(sub_82404E58);
PPC_FUNC_IMPL(__imp__sub_82404E58) {
	PPC_FUNC_PROLOGUE();
	// b 0x82408b48
	sub_82408B48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82404E60"))) PPC_WEAK_FUNC(sub_82404E60);
PPC_FUNC_IMPL(__imp__sub_82404E60) {
	PPC_FUNC_PROLOGUE();
	// b 0x8240ac60
	sub_8240AC60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82404E68"))) PPC_WEAK_FUNC(sub_82404E68);
PPC_FUNC_IMPL(__imp__sub_82404E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1160
	ctx.r3.s64 = 1160;
	// bl 0x82833108
	ctx.lr = 0x82404E88;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82404eb0
	if (ctx.cr0.eq) goto loc_82404EB0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82409ff0
	ctx.lr = 0x82404E9C;
	sub_82409FF0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,4856
	ctx.r11.s64 = ctx.r11.s64 + 4856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82404eb4
	goto loc_82404EB4;
loc_82404EB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82404EB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82404ED0"))) PPC_WEAK_FUNC(sub_82404ED0);
PPC_FUNC_IMPL(__imp__sub_82404ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82408b48
	ctx.lr = 0x82404EF0;
	sub_82408B48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82404f04
	if (ctx.cr6.eq) goto loc_82404F04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8240ac00
	ctx.lr = 0x82404F04;
	sub_8240AC00(ctx, base);
loc_82404F04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82404F20"))) PPC_WEAK_FUNC(sub_82404F20);
PPC_FUNC_IMPL(__imp__sub_82404F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-4408
	ctx.r3.s64 = ctx.r11.s64 + -4408;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82404F30"))) PPC_WEAK_FUNC(sub_82404F30);
PPC_FUNC_IMPL(__imp__sub_82404F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82404f68
	if (ctx.cr6.eq) goto loc_82404F68;
	// bl 0x823c9b88
	ctx.lr = 0x82404F58;
	sub_823C9B88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82404f68
	if (!ctx.cr6.eq) goto loc_82404F68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82404f74
	goto loc_82404F74;
loc_82404F68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x82404F74;
	sub_82338A28(ctx, base);
loc_82404F74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82404F90"))) PPC_WEAK_FUNC(sub_82404F90);
PPC_FUNC_IMPL(__imp__sub_82404F90) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c9b88
	sub_823C9B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82404F98"))) PPC_WEAK_FUNC(sub_82404F98);
PPC_FUNC_IMPL(__imp__sub_82404F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82404FB4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82404fc8
	if (ctx.cr0.eq) goto loc_82404FC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82405040
	ctx.lr = 0x82404FC4;
	sub_82405040(ctx, base);
	// b 0x82404fcc
	goto loc_82404FCC;
loc_82404FC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82404FCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82404FE0"))) PPC_WEAK_FUNC(sub_82404FE0);
PPC_FUNC_IMPL(__imp__sub_82404FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c9b88
	ctx.lr = 0x82405000;
	sub_823C9B88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82405010
	if (!ctx.cr6.eq) goto loc_82405010;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82405028
	goto loc_82405028;
loc_82405010:
	// bl 0x82338750
	ctx.lr = 0x82405014;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82405028
	if (ctx.cr6.eq) goto loc_82405028;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x82405028;
	sub_82338858(ctx, base);
loc_82405028:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82405040"))) PPC_WEAK_FUNC(sub_82405040);
PPC_FUNC_IMPL(__imp__sub_82405040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82405048;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82338b88
	ctx.lr = 0x82405058;
	sub_82338B88(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,5040
	ctx.r11.s64 = ctx.r11.s64 + 5040;
	// addi r10,r10,6048
	ctx.r10.s64 = ctx.r10.s64 + 6048;
	// addi r9,r9,6100
	ctx.r9.s64 = ctx.r9.s64 + 6100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1416
	ctx.r4.s64 = ctx.r30.s64 + 1416;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lfs f0,1408(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// addi r3,r31,1416
	ctx.r3.s64 = ctx.r31.s64 + 1416;
	// lwz r11,1412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// bl 0x82408ba8
	ctx.lr = 0x82405098;
	sub_82408BA8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,1440
	ctx.r29.s64 = ctx.r31.s64 + 1440;
	// addi r27,r30,1440
	ctx.r27.s64 = ctx.r30.s64 + 1440;
	// stw r28,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r28.u32);
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r28,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r28.u32);
	// stw r28,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r28.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// stw r11,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r11.u32);
	// stw r28,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r28.u32);
	// stw r28,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r28.u32);
	// beq cr6,0x82405150
	if (ctx.cr6.eq) goto loc_82405150;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82405150
	if (!ctx.cr6.gt) goto loc_82405150;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824050f4
	if (ctx.cr0.eq) goto loc_824050F4;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x824050F4;
	sub_82332C38(ctx, base);
loc_824050F4:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82405150
	if (!ctx.cr6.gt) goto loc_82405150;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_82405108:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x8240511C;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240513c
	if (ctx.cr0.eq) goto loc_8240513C;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r5,28
	ctx.r5.s64 = 28;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8240513C;
	sub_82A4EA80(ctx, base);
loc_8240513C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,28
	ctx.r26.s64 = ctx.r26.s64 + 28;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82405108
	if (ctx.cr6.lt) goto loc_82405108;
loc_82405150:
	// addi r29,r31,1464
	ctx.r29.s64 = ctx.r31.s64 + 1464;
	// stw r28,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r28.u32);
	// addi r27,r30,1464
	ctx.r27.s64 = ctx.r30.s64 + 1464;
	// stw r28,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r28.u32);
	// li r11,72
	ctx.r11.s64 = 72;
	// stw r28,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r28.u32);
	// stw r28,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r28.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// stw r28,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r28.u32);
	// beq cr6,0x82405200
	if (ctx.cr6.eq) goto loc_82405200;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82405200
	if (!ctx.cr6.gt) goto loc_82405200;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824051a8
	if (ctx.cr0.eq) goto loc_824051A8;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x824051A8;
	sub_82332C38(ctx, base);
loc_824051A8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82405200
	if (!ctx.cr6.gt) goto loc_82405200;
loc_824051B8:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x824051CC;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 * 72;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824051ec
	if (ctx.cr0.eq) goto loc_824051EC;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r5,72
	ctx.r5.s64 = 72;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x824051EC;
	sub_82A4EA80(ctx, base);
loc_824051EC:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,72
	ctx.r28.s64 = ctx.r28.s64 + 72;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824051b8
	if (ctx.cr6.lt) goto loc_824051B8;
loc_82405200:
	// lwz r11,1488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// addi r4,r30,1492
	ctx.r4.s64 = ctx.r30.s64 + 1492;
	// addi r3,r31,1492
	ctx.r3.s64 = ctx.r31.s64 + 1492;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82405218;
	sub_82A4EA80(ctx, base);
	// addi r11,r30,1516
	ctx.r11.s64 = ctx.r30.s64 + 1516;
	// addi r10,r31,1516
	ctx.r10.s64 = ctx.r31.s64 + 1516;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lwz r11,1516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1516);
	// stw r11,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r11.u32);
	// lfs f0,1520(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1520);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1520, temp.u32);
	// bl 0x823339b8
	ctx.lr = 0x8240523C;
	sub_823339B8(ctx, base);
	// addi r11,r30,1548
	ctx.r11.s64 = ctx.r30.s64 + 1548;
	// addi r10,r31,1548
	ctx.r10.s64 = ctx.r31.s64 + 1548;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lwz r11,1548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	// stw r11,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
	// lfs f0,1552(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// bl 0x823339b8
	ctx.lr = 0x82405260;
	sub_823339B8(ctx, base);
	// lwz r11,1580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lfs f0,1604(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1604, temp.u32);
	// lwz r11,1608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824052B0"))) PPC_WEAK_FUNC(sub_824052B0);
PPC_FUNC_IMPL(__imp__sub_824052B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824055f0
	ctx.lr = 0x824052D0;
	sub_824055F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824052e0
	if (ctx.cr0.eq) goto loc_824052E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x824052E0;
	sub_82332DB8(ctx, base);
loc_824052E0:
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

__attribute__((alias("__imp__sub_82405300"))) PPC_WEAK_FUNC(sub_82405300);
PPC_FUNC_IMPL(__imp__sub_82405300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82405308;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829bc540
	ctx.lr = 0x82405318;
	sub_829BC540(ctx, base);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r10,r10,6048
	ctx.r10.s64 = ctx.r10.s64 + 6048;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r9,r9,6100
	ctx.r9.s64 = ctx.r9.s64 + 6100;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r11,r11,5040
	ctx.r11.s64 = ctx.r11.s64 + 5040;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,96
	ctx.r10.s64 = 96;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r30,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r30.u32);
	// stw r30,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r30.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r30.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r30,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r30.u32);
	// addi r25,r11,-24640
	ctx.r25.s64 = ctx.r11.s64 + -24640;
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// li r11,72
	ctx.r11.s64 = 72;
	// stw r10,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r10.u32);
	// li r23,2
	ctx.r23.s64 = 2;
	// stw r30,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r30.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r30,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r30.u32);
	// lfs f31,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r30.u32);
	// lfs f0,-2660(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -2660);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r30.u32);
	// addi r29,r31,1416
	ctx.r29.s64 = ctx.r31.s64 + 1416;
	// stw r30,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r9,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r9.u32);
	// stw r30,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r30.u32);
	// stw r30,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r30.u32);
	// stw r30,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r30.u32);
	// stw r30,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r30.u32);
	// stw r30,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r30.u32);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// stw r30,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r30.u32);
	// stw r30,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r30.u32);
	// stw r30,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
	// stw r30,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r30.u32);
	// stw r30,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r30.u32);
	// stw r23,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r23.u32);
	// stw r30,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r30.u32);
	// stw r30,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r30.u32);
	// stw r30,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r30.u32);
	// stw r30,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r30.u32);
	// stw r30,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r30.u32);
	// stw r23,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r23.u32);
	// stfs f31,1604(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1604, temp.u32);
	// stfs f0,1408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// stw r30,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r30.u32);
	// stw r24,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r24.u32);
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82405434
	if (!ctx.cr6.gt) goto loc_82405434;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82405408:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r26,r27,r11
	ctx.r26.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r3,r26,68
	ctx.r3.s64 = ctx.r26.s64 + 68;
	// bl 0x82333960
	ctx.lr = 0x82405418;
	sub_82333960(ctx, base);
	// addi r3,r26,36
	ctx.r3.s64 = ctx.r26.s64 + 36;
	// bl 0x82333960
	ctx.lr = 0x82405420;
	sub_82333960(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,96
	ctx.r27.s64 = ctx.r27.s64 + 96;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82405408
	if (ctx.cr6.lt) goto loc_82405408;
loc_82405434:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82405458
	if (ctx.cr6.eq) goto loc_82405458;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x82405458;
	sub_82332C38(ctx, base);
loc_82405458:
	// stw r30,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r30.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4420
	ctx.r3.s64 = ctx.r11.s64 + 4420;
	// bl 0x82816528
	ctx.lr = 0x82405468;
	sub_82816528(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82975348
	ctx.lr = 0x82405474;
	sub_82975348(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r3,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82817340
	ctx.lr = 0x82405498;
	sub_82817340(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r30.u32);
	// stfs f0,1512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// stw r30,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r30.u32);
	// stfs f31,1520(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1520, temp.u32);
	// stw r24,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r24.u32);
	// stfs f31,1552(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// stw r30,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,100
	ctx.r3.s64 = 100;
	// stw r30,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r30.u32);
	// stw r10,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r9.u32);
	// stw r8,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r8.u32);
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x824054E8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824054fc
	if (ctx.cr0.eq) goto loc_824054FC;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82976538
	ctx.lr = 0x824054F8;
	sub_82976538(ctx, base);
	// b 0x82405500
	goto loc_82405500;
loc_824054FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82405500:
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,4432
	ctx.r3.s64 = ctx.r11.s64 + 4432;
	// bl 0x828166e0
	ctx.lr = 0x82405514;
	sub_828166E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82816528
	ctx.lr = 0x8240551C;
	sub_82816528(ctx, base);
	// lwz r11,1204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// stw r3,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82405534
	if (!ctx.cr6.eq) goto loc_82405534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3628
	ctx.lr = 0x82405534;
	sub_829C3628(ctx, base);
loc_82405534:
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// addi r10,r11,29400
	ctx.r10.s64 = ctx.r11.s64 + 29400;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r24,1396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1396, ctx.r24.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82405564
	if (ctx.cr0.eq) goto loc_82405564;
	// lwz r27,80(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// b 0x82405568
	goto loc_82405568;
loc_82405564:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82405568:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82405578
	if (ctx.cr0.eq) goto loc_82405578;
	// lwz r28,80(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// b 0x8240557c
	goto loc_8240557C;
loc_82405578:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8240557C:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82833108
	ctx.lr = 0x82405584;
	sub_82833108(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x824055cc
	if (ctx.cr0.eq) goto loc_824055CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82833180
	ctx.lr = 0x82405594;
	sub_82833180(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// addi r10,r10,6168
	ctx.r10.s64 = ctx.r10.s64 + 6168;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// stw r23,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r23.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r9,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r9.u32);
	// std r11,24(r29)
	PPC_STORE_U64(ctx.r29.u32 + 24, ctx.r11.u64);
	// b 0x824055d0
	goto loc_824055D0;
loc_824055CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_824055D0:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x824055DC;
	sub_82833A30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824055F0"))) PPC_WEAK_FUNC(sub_824055F0);
PPC_FUNC_IMPL(__imp__sub_824055F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x824055F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// addi r10,r10,5040
	ctx.r10.s64 = ctx.r10.s64 + 5040;
	// lis r7,-32105
	ctx.r7.s64 = -2104033280;
	// addi r9,r9,6048
	ctx.r9.s64 = ctx.r9.s64 + 6048;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r8,r8,6100
	ctx.r8.s64 = ctx.r8.s64 + 6100;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r10,r7,29400
	ctx.r10.s64 = ctx.r7.s64 + 29400;
	// stw r8,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r8.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq 0x82405654
	if (ctx.cr0.eq) goto loc_82405654;
	// lwz r27,80(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82405658
	goto loc_82405658;
loc_82405654:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82405658:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82405668
	if (ctx.cr0.eq) goto loc_82405668;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8240566c
	goto loc_8240566C;
loc_82405668:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8240566C:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82833108
	ctx.lr = 0x82405674;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824056c0
	if (ctx.cr0.eq) goto loc_824056C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82405684;
	sub_82833180(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// addi r10,r10,6168
	ctx.r10.s64 = ctx.r10.s64 + 6168;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// b 0x824056c4
	goto loc_824056C4;
loc_824056C0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_824056C4:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x824056D0;
	sub_82833A30(ctx, base);
	// addi r3,r30,1556
	ctx.r3.s64 = ctx.r30.s64 + 1556;
	// bl 0x82333960
	ctx.lr = 0x824056D8;
	sub_82333960(ctx, base);
	// addi r3,r30,1524
	ctx.r3.s64 = ctx.r30.s64 + 1524;
	// bl 0x82333960
	ctx.lr = 0x824056E0;
	sub_82333960(ctx, base);
	// addi r31,r30,1464
	ctx.r31.s64 = ctx.r30.s64 + 1464;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1480(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	// li r6,72
	ctx.r6.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x824056FC;
	sub_82332CA8(ctx, base);
	// lwz r3,1476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240570c
	if (ctx.cr6.eq) goto loc_8240570C;
	// bl 0x82332db8
	ctx.lr = 0x8240570C;
	sub_82332DB8(ctx, base);
loc_8240570C:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r29,r30,1440
	ctx.r29.s64 = ctx.r30.s64 + 1440;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1456(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82405734;
	sub_82332CA8(ctx, base);
	// lwz r3,1452(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82405744
	if (ctx.cr6.eq) goto loc_82405744;
	// bl 0x82332db8
	ctx.lr = 0x82405744;
	sub_82332DB8(ctx, base);
loc_82405744:
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// addi r3,r30,1416
	ctx.r3.s64 = ctx.r30.s64 + 1416;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// bl 0x82408cd8
	ctx.lr = 0x82405758;
	sub_82408CD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x82405760;
	sub_829BC9E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82405768"))) PPC_WEAK_FUNC(sub_82405768);
PPC_FUNC_IMPL(__imp__sub_82405768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82405770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x829bd978
	ctx.lr = 0x8240577C;
	sub_829BD978(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// stw r29,1348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1348, ctx.r29.u32);
	// bl 0x829c36c0
	ctx.lr = 0x82405794;
	sub_829C36C0(ctx, base);
	// lwz r3,1412(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824057b4
	if (ctx.cr6.eq) goto loc_824057B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824057B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824057B4:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x824057BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82405804
	if (ctx.cr0.eq) goto loc_82405804;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824057dc
	if (ctx.cr0.eq) goto loc_824057DC;
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x824057e0
	goto loc_824057E0;
loc_824057DC:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_824057E0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824057f0
	if (ctx.cr0.eq) goto loc_824057F0;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x824057f4
	goto loc_824057F4;
loc_824057F0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_824057F4:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82409ca0
	ctx.lr = 0x824057FC;
	sub_82409CA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82405808
	goto loc_82405808;
loc_82405804:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82405808:
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82405814;
	sub_82833A30(ctx, base);
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,4432
	ctx.r4.s64 = ctx.r11.s64 + 4432;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82405838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82405854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r9,1600(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	// lwz r10,604(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// lwz r8,492(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 492);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82405898
	if (!ctx.cr6.gt) goto loc_82405898;
	// lwz r8,488(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 488);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82405898
	if (!ctx.cr6.eq) goto loc_82405898;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,476
	ctx.r3.s64 = ctx.r10.s64 + 476;
	// bl 0x82332ca8
	ctx.lr = 0x82405894;
	sub_82332CA8(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
loc_82405898:
	// lwz r3,1600(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824058bc
	if (ctx.cr6.eq) goto loc_824058BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824058B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
loc_824058BC:
	// stw r29,1600(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1600, ctx.r29.u32);
	// lwz r4,624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x824058CC;
	sub_829B98F8(ctx, base);
	// bl 0x824384e8
	ctx.lr = 0x824058D0;
	sub_824384E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824058dc
	if (ctx.cr0.eq) goto loc_824058DC;
	// stw r29,1576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1576, ctx.r29.u32);
loc_824058DC:
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r4,624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x824058EC;
	sub_829B98F8(ctx, base);
	// bl 0x824384e8
	ctx.lr = 0x824058F0;
	sub_824384E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824058fc
	if (ctx.cr0.eq) goto loc_824058FC;
	// stw r29,1572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1572, ctx.r29.u32);
loc_824058FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82405908"))) PPC_WEAK_FUNC(sub_82405908);
PPC_FUNC_IMPL(__imp__sub_82405908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82405910;
	__savegprlr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r11,4444
	ctx.r3.s64 = ctx.r11.s64 + 4444;
	// bl 0x829e6d68
	ctx.lr = 0x82405924;
	sub_829E6D68(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// stw r3,1608(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1608, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82405954
	if (ctx.cr6.eq) goto loc_82405954;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82405948;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8240594C;
	sub_82409C40(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// b 0x82405958
	goto loc_82405958;
loc_82405954:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82405958:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82405a78
	if (ctx.cr6.eq) goto loc_82405A78;
	// lwz r3,1412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// bl 0x824090e0
	ctx.lr = 0x8240596C;
	sub_824090E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82405a74
	if (ctx.cr0.eq) goto loc_82405A74;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// lis r26,-32215
	ctx.r26.s64 = -2111242240;
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// lis r25,-32215
	ctx.r25.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f13,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f0,20116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20108(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20112(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 20112);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f11,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x828264e0
	ctx.lr = 0x82405A40;
	sub_828264E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r28.u32);
	// stw r28,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r28.u32);
	// lwz r11,1120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	// stw r28,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r28.u32);
	// stw r28,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82405A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r28.u32);
loc_82405A74:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
loc_82405A78:
	// lwz r10,1316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// stw r28,156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 156, ctx.r28.u32);
	// lwz r10,1348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1348);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82405b2c
	if (!ctx.cr6.eq) goto loc_82405B2C;
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x82405A94;
	sub_82409BE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82405ab8
	if (ctx.cr0.eq) goto loc_82405AB8;
	// lwz r11,616(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 616);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82405ab8
	if (!ctx.cr6.gt) goto loc_82405AB8;
	// lwz r11,612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82405AB8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82408010
	ctx.lr = 0x82405AC0;
	sub_82408010(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,4452
	ctx.r4.s64 = ctx.r11.s64 + 4452;
	// bl 0x8233a258
	ctx.lr = 0x82405AD0;
	sub_8233A258(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// bl 0x8282cac0
	ctx.lr = 0x82405B04;
	sub_8282CAC0(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r5,16276(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// bl 0x828cef18
	ctx.lr = 0x82405B1C;
	sub_828CEF18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400988
	ctx.lr = 0x82405B24;
	sub_82400988(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82405B2C;
	sub_82333960(ctx, base);
loc_82405B2C:
	// li r3,1160
	ctx.r3.s64 = 1160;
	// bl 0x82833108
	ctx.lr = 0x82405B34;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82405b74
	if (ctx.cr0.eq) goto loc_82405B74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c8a78
	ctx.lr = 0x82405B44;
	sub_828C8A78(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r28,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r28.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r9,r9,4856
	ctx.r9.s64 = ctx.r9.s64 + 4856;
	// lfs f0,30356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30356);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f0,1120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1120, temp.u32);
	// stfs f13,1124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1124, temp.u32);
	// b 0x82405b78
	goto loc_82405B78;
loc_82405B74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82405B78:
	// stw r4,1600(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1600, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,604(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// bl 0x828cd348
	ctx.lr = 0x82405B8C;
	sub_828CD348(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82405B9C;
	sub_8233A258(ctx, base);
	// lis r4,2012
	ctx.r4.s64 = 131858432;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,37709
	ctx.r4.u64 = ctx.r4.u64 | 37709;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829c3740
	ctx.lr = 0x82405BB0;
	sub_829C3740(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82405BB8"))) PPC_WEAK_FUNC(sub_82405BB8);
PPC_FUNC_IMPL(__imp__sub_82405BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82405BC0;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x829be2e8
	ctx.lr = 0x82405BD4;
	sub_829BE2E8(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r4,1596(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// bl 0x82409b80
	ctx.lr = 0x82405BE4;
	sub_82409B80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82405ca4
	if (ctx.cr0.eq) goto loc_82405CA4;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r11,948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82405ca4
	if (ctx.cr6.eq) goto loc_82405CA4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82405c14
	if (!ctx.cr6.gt) goto loc_82405C14;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lfs f31,-25412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25412);
	ctx.f31.f64 = double(temp.f32);
loc_82405C14:
	// lwz r11,1588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82405c8c
	if (ctx.cr6.eq) goto loc_82405C8C;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x82405C28;
	sub_82833108(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82405c50
	if (ctx.cr0.eq) goto loc_82405C50;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82834610
	ctx.lr = 0x82405C48;
	sub_82834610(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82405c54
	goto loc_82405C54;
loc_82405C50:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82405C54:
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82405C60;
	sub_82833A30(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r31,1384(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// bl 0x82408ff8
	ctx.lr = 0x82405C6C;
	sub_82408FF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829735e8
	ctx.lr = 0x82405C78;
	sub_829735E8(ctx, base);
	// bl 0x82409140
	ctx.lr = 0x82405C7C;
	sub_82409140(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82405c88
	if (ctx.cr0.eq) goto loc_82405C88;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
loc_82405C88:
	// stw r29,1588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1588, ctx.r29.u32);
loc_82405C8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x824061c8
	ctx.lr = 0x82405C98;
	sub_824061C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82405cb0
	ctx.lr = 0x82405CA4;
	sub_82405CB0(ctx, base);
loc_82405CA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82405CB0"))) PPC_WEAK_FUNC(sub_82405CB0);
PPC_FUNC_IMPL(__imp__sub_82405CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82405CB8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61748
	ctx.lr = 0x82405CC0;
	__savefpr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82405CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r8,r11,-27324
	ctx.r8.s64 = ctx.r11.s64 + -27324;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f30,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// lfs f3,-27324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27324);
	ctx.f3.f64 = double(temp.f32);
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lfs f4,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82405D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82405e18
	if (!ctx.cr6.gt) goto loc_82405E18;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82405D6C:
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stfs f30,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmr f9,f30
	ctx.f9.f64 = ctx.f30.f64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lfs f2,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82405DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82405e04
	if (!ctx.cr6.eq) goto loc_82405E04;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,1440
	ctx.r3.s64 = ctx.r31.s64 + 1440;
	// bl 0x82332ca8
	ctx.lr = 0x82405DFC;
	sub_82332CA8(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
loc_82405E04:
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82405d6c
	if (ctx.cr6.lt) goto loc_82405D6C;
loc_82405E18:
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824060b4
	if (!ctx.cr6.gt) goto loc_824060B4;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lfs f28,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f28.f64 = double(temp.f32);
loc_82405E34:
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82405fb0
	if (ctx.cr6.lt) goto loc_82405FB0;
	// beq cr6,0x82405f70
	if (ctx.cr6.eq) goto loc_82405F70;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82405fe8
	if (!ctx.cr6.lt) goto loc_82405FE8;
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82405ed0
	if (ctx.cr6.eq) goto loc_82405ED0;
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 56;
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82405fe8
	if (ctx.cr6.gt) goto loc_82405FE8;
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f30,32(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r27,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r27.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r28.u32);
	// b 0x82405fe8
	goto loc_82405FE8;
loc_82405ED0:
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 56;
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82405f2c
	if (ctx.cr6.eq) goto loc_82405F2C;
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82405fe8
	if (ctx.cr6.lt) goto loc_82405FE8;
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r27,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r27.u32);
	// b 0x82405fe8
	goto loc_82405FE8;
loc_82405F2C:
	// fsubs f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82405fe8
	if (ctx.cr6.gt) goto loc_82405FE8;
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// b 0x82405fe0
	goto loc_82405FE0;
loc_82405F70:
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// lfs f0,1408(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82405fe8
	if (!ctx.cr6.lt) goto loc_82405FE8;
	// b 0x82405fe0
	goto loc_82405FE0;
loc_82405FB0:
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 56;
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82405fe8
	if (ctx.cr6.lt) goto loc_82405FE8;
loc_82405FE0:
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
loc_82405FE8:
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// fmr f8,f30
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f30.f64;
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// lfs f4,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x8240604c
	if (ctx.cr6.eq) goto loc_8240604C;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82406048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82406070
	goto loc_82406070;
loc_8240604C:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fmr f9,f30
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f30.f64;
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82406070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82406070:
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824060a0
	if (ctx.cr6.eq) goto loc_824060A0;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,1464
	ctx.r3.s64 = ctx.r31.s64 + 1464;
	// bl 0x82332ca8
	ctx.lr = 0x82406098;
	sub_82332CA8(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-72
	ctx.r30.s64 = ctx.r30.s64 + -72;
loc_824060A0:
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82405e34
	if (ctx.cr6.lt) goto loc_82405E34;
loc_824060B4:
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824061a4
	if (!ctx.cr6.gt) goto loc_824061A4;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r28,r11,7896
	ctx.r28.s64 = ctx.r11.s64 + 7896;
loc_824060D0:
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x824060f0
	if (!ctx.cr6.eq) goto loc_824060F0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_824060F0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82406130
	if (!ctx.cr6.gt) goto loc_82406130;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8240610c
	if (ctx.cr6.eq) goto loc_8240610C;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82406110
	goto loc_82406110;
loc_8240610C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_82406110:
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f2,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82967698
	ctx.lr = 0x82406130;
	sub_82967698(ctx, base);
loc_82406130:
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x82406150
	if (!ctx.cr6.eq) goto loc_82406150;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82406150:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82406190
	if (!ctx.cr6.gt) goto loc_82406190;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8240616c
	if (ctx.cr6.eq) goto loc_8240616C;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82406170
	goto loc_82406170;
loc_8240616C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_82406170:
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f2,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82967698
	ctx.lr = 0x82406190;
	sub_82967698(ctx, base);
loc_82406190:
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824060d0
	if (ctx.cr6.lt) goto loc_824060D0;
loc_824061A4:
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824061B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61794
	ctx.lr = 0x824061C4;
	__restfpr_28(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824061C8"))) PPC_WEAK_FUNC(sub_824061C8);
PPC_FUNC_IMPL(__imp__sub_824061C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x824061D0;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824061f8
	if (!ctx.cr6.eq) goto loc_824061F8;
	// bl 0x824064b0
	ctx.lr = 0x824061F8;
	sub_824064B0(ctx, base);
loc_824061F8:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r10,1432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x824062b8
	if (!ctx.cr6.gt) goto loc_824062B8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
loc_8240621C:
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// lfs f0,1408(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfsx f0,r27,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x824062a4
	if (!ctx.cr6.lt) goto loc_824062A4;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// addi r25,r31,1416
	ctx.r25.s64 = ctx.r31.s64 + 1416;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8240628c
	if (!ctx.cr6.lt) goto loc_8240628C;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// subf r30,r28,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r28.s64;
loc_82406268:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// add r26,r29,r11
	ctx.r26.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r26,68
	ctx.r3.s64 = ctx.r26.s64 + 68;
	// bl 0x82333960
	ctx.lr = 0x82406278;
	sub_82333960(ctx, base);
	// addi r3,r26,36
	ctx.r3.s64 = ctx.r26.s64 + 36;
	// bl 0x82333960
	ctx.lr = 0x82406280;
	sub_82333960(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,96
	ctx.r29.s64 = ctx.r29.s64 + 96;
	// bne 0x82406268
	if (!ctx.cr0.eq) goto loc_82406268;
loc_8240628C:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332ca8
	ctx.lr = 0x824062A4;
	sub_82332CA8(ctx, base);
loc_824062A4:
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,96
	ctx.r27.s64 = ctx.r27.s64 + 96;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8240621c
	if (ctx.cr6.lt) goto loc_8240621C;
loc_824062B8:
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824062fc
	if (!ctx.cr6.eq) goto loc_824062FC;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824062fc
	if (!ctx.cr6.gt) goto loc_824062FC;
	// lwz r10,1428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// mulli r11,r28,96
	ctx.r11.s64 = ctx.r28.s64 * 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,-96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -96);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f0,-27320(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27320);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x824062fc
	if (!ctx.cr6.lt) goto loc_824062FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824064b0
	ctx.lr = 0x824062FC;
	sub_824064B0(ctx, base);
loc_824062FC:
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82406320
	if (ctx.cr6.eq) goto loc_82406320;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82406320
	if (!ctx.cr6.eq) goto loc_82406320;
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82406370
	if (ctx.cr6.eq) goto loc_82406370;
loc_82406320:
	// lwz r10,1600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240649c
	if (ctx.cr6.eq) goto loc_8240649C;
	// lfs f0,1604(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fadds f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// stfs f13,1604(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1604, temp.u32);
	// lfs f0,16648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16648);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82406364
	if (!ctx.cr6.gt) goto loc_82406364;
	// lwz r11,932(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 932);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82406370
	if (ctx.cr6.eq) goto loc_82406370;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82406370
	if (ctx.cr6.eq) goto loc_82406370;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82406370
	if (ctx.cr6.eq) goto loc_82406370;
loc_82406364:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,932(r10)
	PPC_STORE_U32(ctx.r10.u32 + 932, ctx.r11.u32);
	// b 0x8240649c
	goto loc_8240649C;
loc_82406370:
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
	ctx.lr = 0x82406398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824063b4
	if (!ctx.cr6.gt) goto loc_824063B4;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82406488
	goto loc_82406488;
loc_824063B4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82406454
	if (!ctx.cr6.eq) goto loc_82406454;
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
	ctx.lr = 0x824063D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82406434
	if (!ctx.cr6.gt) goto loc_82406434;
	// li r29,0
	ctx.r29.s64 = 0;
loc_824063F0:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82406420
	if (!ctx.cr6.eq) goto loc_82406420;
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
	ctx.lr = 0x82406418;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82406420:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824063f0
	if (ctx.cr6.lt) goto loc_824063F0;
loc_82406434:
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
	ctx.lr = 0x82406454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82406454:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82406488
	if (!ctx.cr0.eq) goto loc_82406488;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82406474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82406488
	if (ctx.cr0.eq) goto loc_82406488;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82406488;
	sub_82410060(ctx, base);
loc_82406488:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240649C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8240649C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824064B0"))) PPC_WEAK_FUNC(sub_824064B0);
PPC_FUNC_IMPL(__imp__sub_824064B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d8
	ctx.lr = 0x824064B8;
	__savegprlr_16(ctx, base);
	// stfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f29.u64);
	// stfd f30,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// bl 0x829e4b90
	ctx.lr = 0x824064F8;
	sub_829E4B90(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lfs f30,-27320(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27320);
	ctx.f30.f64 = double(temp.f32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824069d4
	if (!ctx.cr6.eq) goto loc_824069D4;
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lwz r10,1580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x824069d4
	if (!ctx.cr6.gt) goto loc_824069D4;
	// lwz r10,1432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82406564
	if (!ctx.cr6.gt) goto loc_82406564;
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// mulli r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 * 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f31,-72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -72);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -96);
	ctx.f30.f64 = double(temp.f32);
loc_82406564:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82406bc0
	ctx.lr = 0x8240656C;
	sub_82406BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82406d98
	ctx.lr = 0x82406574;
	sub_82406D98(ctx, base);
	// addi r17,r31,1516
	ctx.r17.s64 = ctx.r31.s64 + 1516;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82406f28
	ctx.lr = 0x82406588;
	sub_82406F28(ctx, base);
	// addi r16,r31,1548
	ctx.r16.s64 = ctx.r31.s64 + 1548;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82406f28
	ctx.lr = 0x8240659C;
	sub_82406F28(ctx, base);
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lwz r10,1580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x829e4a60
	ctx.lr = 0x824065BC;
	sub_829E4A60(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824068d0
	if (ctx.cr0.eq) goto loc_824068D0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829e4e20
	ctx.lr = 0x824065D0;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8233a258
	ctx.lr = 0x824065DC;
	sub_8233A258(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x824065E8;
	sub_82400B48(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x824065F0;
	sub_82333960(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82406600
	if (ctx.cr6.eq) goto loc_82406600;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_82406600:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x824068d0
	if (!ctx.cr6.gt) goto loc_824068D0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4472
	ctx.r5.s64 = ctx.r11.s64 + 4472;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82816e00
	ctx.lr = 0x82406620;
	sub_82816E00(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824068d0
	if (!ctx.cr6.gt) goto loc_824068D0;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// lwz r28,140(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r29,-32235
	ctx.r29.s64 = -2112552960;
	// lis r30,-32235
	ctx.r30.s64 = -2112552960;
	// lis r3,-32235
	ctx.r3.s64 = -2112552960;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lis r5,-32235
	ctx.r5.s64 = -2112552960;
	// lis r6,-32235
	ctx.r6.s64 = -2112552960;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r29,r29,4704
	ctx.r29.s64 = ctx.r29.s64 + 4704;
	// addi r30,r30,4668
	ctx.r30.s64 = ctx.r30.s64 + 4668;
	// addi r27,r3,4632
	ctx.r27.s64 = ctx.r3.s64 + 4632;
	// addi r26,r4,4608
	ctx.r26.s64 = ctx.r4.s64 + 4608;
	// addi r25,r5,4580
	ctx.r25.s64 = ctx.r5.s64 + 4580;
	// addi r24,r6,4552
	ctx.r24.s64 = ctx.r6.s64 + 4552;
	// addi r23,r7,4536
	ctx.r23.s64 = ctx.r7.s64 + 4536;
	// addi r22,r8,4524
	ctx.r22.s64 = ctx.r8.s64 + 4524;
	// addi r21,r9,4508
	ctx.r21.s64 = ctx.r9.s64 + 4508;
	// addi r20,r10,4492
	ctx.r20.s64 = ctx.r10.s64 + 4492;
	// addi r19,r11,4476
	ctx.r19.s64 = ctx.r11.s64 + 4476;
loc_8240668C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82409a78
	ctx.lr = 0x8240669C;
	sub_82409A78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824066c0
	if (ctx.cr6.eq) goto loc_824066C0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x824066B0;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407100
	ctx.lr = 0x824066BC;
	sub_82407100(ctx, base);
	// b 0x824068c4
	goto loc_824068C4;
loc_824066C0:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82409a78
	ctx.lr = 0x824066D0;
	sub_82409A78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824066f4
	if (ctx.cr6.eq) goto loc_824066F4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x824066E4;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407388
	ctx.lr = 0x824066F0;
	sub_82407388(ctx, base);
	// b 0x824068c4
	goto loc_824068C4;
loc_824066F4:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82409a78
	ctx.lr = 0x82406704;
	sub_82409A78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82406728
	if (ctx.cr6.eq) goto loc_82406728;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x82406718;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407550
	ctx.lr = 0x82406724;
	sub_82407550(ctx, base);
	// b 0x824068c4
	goto loc_824068C4;
loc_82406728:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82409a78
	ctx.lr = 0x82406738;
	sub_82409A78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8240675c
	if (ctx.cr6.eq) goto loc_8240675C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x8240674C;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407450
	ctx.lr = 0x82406758;
	sub_82407450(ctx, base);
	// b 0x824068c4
	goto loc_824068C4;
loc_8240675C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82409a78
	ctx.lr = 0x8240676C;
	sub_82409A78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82406788
	if (ctx.cr6.eq) goto loc_82406788;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x82406780;
	sub_823339B8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8240680c
	goto loc_8240680C;
loc_82406788:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82409a78
	ctx.lr = 0x82406798;
	sub_82409A78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824067b8
	if (ctx.cr6.eq) goto loc_824067B8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fadds f29,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x824067B0;
	sub_823339B8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82406848
	goto loc_82406848;
loc_824067B8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82409a78
	ctx.lr = 0x824067C8;
	sub_82409A78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824067e4
	if (ctx.cr6.eq) goto loc_824067E4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x824067DC;
	sub_823339B8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82406884
	goto loc_82406884;
loc_824067E4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82409a78
	ctx.lr = 0x824067F4;
	sub_82409A78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8240681c
	if (ctx.cr6.eq) goto loc_8240681C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x82406808;
	sub_823339B8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
loc_8240680C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824076c8
	ctx.lr = 0x82406818;
	sub_824076C8(ctx, base);
	// b 0x824068c4
	goto loc_824068C4;
loc_8240681C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82409a78
	ctx.lr = 0x8240682C;
	sub_82409A78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8240685c
	if (ctx.cr6.eq) goto loc_8240685C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fadds f29,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x82406844;
	sub_823339B8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_82406848:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824079a0
	ctx.lr = 0x82406858;
	sub_824079A0(ctx, base);
	// b 0x824068c4
	goto loc_824068C4;
loc_8240685C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82409a78
	ctx.lr = 0x8240686C;
	sub_82409A78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82406894
	if (ctx.cr6.eq) goto loc_82406894;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x82406880;
	sub_823339B8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
loc_82406884:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407c28
	ctx.lr = 0x82406890;
	sub_82407C28(ctx, base);
	// b 0x824068c4
	goto loc_824068C4;
loc_82406894:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82409a78
	ctx.lr = 0x824068A4;
	sub_82409A78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824068c4
	if (ctx.cr6.eq) goto loc_824068C4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x824068B8;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407f38
	ctx.lr = 0x824068C4;
	sub_82407F38(ctx, base);
loc_824068C4:
	// addic. r18,r18,-1
	ctx.xer.ca = ctx.r18.u32 > 0;
	ctx.r18.s64 = ctx.r18.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// bne 0x8240668c
	if (!ctx.cr0.eq) goto loc_8240668C;
loc_824068D0:
	// addi r3,r31,1416
	ctx.r3.s64 = ctx.r31.s64 + 1416;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x824068E4;
	sub_82332D50(ctx, base);
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// mulli r30,r3,96
	ctx.r30.s64 = ctx.r3.s64 * 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a455d0
	ctx.lr = 0x824068FC;
	sub_82A455D0(ctx, base);
	// lwz r11,1508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82406918
	if (ctx.cr6.eq) goto loc_82406918;
	// lwz r10,1428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// b 0x82406928
	goto loc_82406928;
loc_82406918:
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// lwz r10,1488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82406928:
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// li r4,5
	ctx.r4.s64 = 5;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r9,r31,1492
	ctx.r9.s64 = ctx.r31.s64 + 1492;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,1496(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,1500(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,1504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lfs f0,1512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82406a08
	ctx.lr = 0x82406988;
	sub_82406A08(ctx, base);
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,60
	ctx.r6.s64 = ctx.r11.s64 + 60;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82406a08
	ctx.lr = 0x824069A8;
	sub_82406A08(ctx, base);
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// fadds f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// stfsx f0,r11,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// lwz r10,1580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r11.u32);
	// b 0x824069dc
	goto loc_824069DC;
loc_824069D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
loc_824069DC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x824069E4;
	sub_82333960(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829e4b90
	ctx.lr = 0x824069EC;
	sub_829E4B90(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400988
	ctx.lr = 0x824069F4;
	sub_82400988(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82a4ea28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82406A08"))) PPC_WEAK_FUNC(sub_82406A08);
PPC_FUNC_IMPL(__imp__sub_82406A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82406A10;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// sth r31,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r31.u16);
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// bl 0x829e4b90
	ctx.lr = 0x82406A54;
	sub_829E4B90(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,1580(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1580);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// lwz r10,1608(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1608);
	// lwz r10,88(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x829e4a60
	ctx.lr = 0x82406A94;
	sub_829E4A60(ctx, base);
	// lhz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82406b90
	if (ctx.cr0.eq) goto loc_82406B90;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829e4e20
	ctx.lr = 0x82406AA8;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8233a258
	ctx.lr = 0x82406AB4;
	sub_8233A258(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82400b48
	ctx.lr = 0x82406AC0;
	sub_82400B48(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82333960
	ctx.lr = 0x82406AC8;
	sub_82333960(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82406ad8
	if (ctx.cr6.eq) goto loc_82406AD8;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
loc_82406AD8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82406b90
	if (!ctx.cr6.gt) goto loc_82406B90;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x82406AF0;
	sub_82400B48(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82406b0c
	if (ctx.cr6.eq) goto loc_82406B0C;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82406b14
	goto loc_82406B14;
loc_82406B0C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r6,r11,7896
	ctx.r6.s64 = ctx.r11.s64 + 7896;
loc_82406B14:
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82967850
	ctx.lr = 0x82406B24;
	sub_82967850(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82406b84
	if (ctx.cr6.lt) goto loc_82406B84;
	// beq cr6,0x82406b5c
	if (ctx.cr6.eq) goto loc_82406B5C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82406ba0
	if (!ctx.cr6.lt) goto loc_82406BA0;
	// lwa r11,132(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 132));
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82406b88
	goto loc_82406B88;
loc_82406B5C:
	// lwa r11,132(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 132));
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f12,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f0,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// b 0x82406b88
	goto loc_82406B88;
loc_82406B84:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_82406B88:
	// stfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// b 0x82406ba0
	goto loc_82406BA0;
loc_82406B90:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
	// bl 0x824099b8
	ctx.lr = 0x82406BA0;
	sub_824099B8(ctx, base);
loc_82406BA0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82406BA8;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829e4b90
	ctx.lr = 0x82406BB0;
	sub_829E4B90(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82400988
	ctx.lr = 0x82406BB8;
	sub_82400988(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82406BC0"))) PPC_WEAK_FUNC(sub_82406BC0);
PPC_FUNC_IMPL(__imp__sub_82406BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82406BC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// bl 0x829e4b90
	ctx.lr = 0x82406BFC;
	sub_829E4B90(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,1580(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1580);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// lwz r11,1608(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1608);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x829e4a60
	ctx.lr = 0x82406C38;
	sub_829E4A60(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82406d74
	if (ctx.cr0.eq) goto loc_82406D74;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829e4e20
	ctx.lr = 0x82406C4C;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233a258
	ctx.lr = 0x82406C58;
	sub_8233A258(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400b48
	ctx.lr = 0x82406C64;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82406C6C;
	sub_82333960(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82406c7c
	if (ctx.cr6.eq) goto loc_82406C7C;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
loc_82406C7C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82406d74
	if (!ctx.cr6.gt) goto loc_82406D74;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r29,r11,7896
	ctx.r29.s64 = ctx.r11.s64 + 7896;
	// addi r5,r10,4720
	ctx.r5.s64 = ctx.r10.s64 + 4720;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82816cf8
	ctx.lr = 0x82406CA4;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400b48
	ctx.lr = 0x82406CB0;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82406CB8;
	sub_82333960(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4736
	ctx.r5.s64 = ctx.r11.s64 + 4736;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816e00
	ctx.lr = 0x82406CD0;
	sub_82816E00(ctx, base);
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82406ce8
	if (ctx.cr6.eq) goto loc_82406CE8;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// b 0x82406cec
	goto loc_82406CEC;
loc_82406CE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82406CEC:
	// bl 0x82a4cad0
	ctx.lr = 0x82406CF0;
	sub_82A4CAD0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82406d08
	if (ctx.cr6.eq) goto loc_82406D08;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// b 0x82406d0c
	goto loc_82406D0C;
loc_82406D08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82406D0C:
	// bl 0x82a4cad0
	ctx.lr = 0x82406D10;
	sub_82A4CAD0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82406d28
	if (ctx.cr6.eq) goto loc_82406D28;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82406d2c
	goto loc_82406D2C;
loc_82406D28:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82406D2C:
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// bl 0x82a4cad0
	ctx.lr = 0x82406D38;
	sub_82A4CAD0(ctx, base);
	// stb r3,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r3.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r30,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r27,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// bl 0x82817340
	ctx.lr = 0x82406D50;
	sub_82817340(ctx, base);
	// addi r11,r28,1492
	ctx.r11.s64 = ctx.r28.s64 + 1492;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,1492(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1492, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,1496(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1496, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,1500(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1500, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,1504(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1504, ctx.r11.u32);
loc_82406D74:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82406D7C;
	sub_82333960(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829e4b90
	ctx.lr = 0x82406D84;
	sub_829E4B90(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82400988
	ctx.lr = 0x82406D8C;
	sub_82400988(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82406D98"))) PPC_WEAK_FUNC(sub_82406D98);
PPC_FUNC_IMPL(__imp__sub_82406D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82406DA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// bl 0x829e4b90
	ctx.lr = 0x82406DD4;
	sub_829E4B90(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,1580(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1580);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lwz r11,1608(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x829e4a60
	ctx.lr = 0x82406E10;
	sub_829E4A60(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82406f04
	if (ctx.cr0.eq) goto loc_82406F04;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829e4e20
	ctx.lr = 0x82406E24;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8233a258
	ctx.lr = 0x82406E30;
	sub_8233A258(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x82406E3C;
	sub_82400B48(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x82406E44;
	sub_82333960(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82406e58
	if (!ctx.cr6.eq) goto loc_82406E58;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82406E58:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82406f04
	if (!ctx.cr6.gt) goto loc_82406F04;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// addi r5,r10,4740
	ctx.r5.s64 = ctx.r10.s64 + 4740;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82816cf8
	ctx.lr = 0x82406E80;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x82406E8C;
	sub_82400B48(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x82406E94;
	sub_82333960(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4736
	ctx.r5.s64 = ctx.r11.s64 + 4736;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82816e00
	ctx.lr = 0x82406EAC;
	sub_82816E00(ctx, base);
	// stw r31,1508(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1508, ctx.r31.u32);
	// lwz r31,140(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82406ec8
	if (ctx.cr6.eq) goto loc_82406EC8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82406ecc
	goto loc_82406ECC;
loc_82406EC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82406ECC:
	// bl 0x828165a8
	ctx.lr = 0x82406ED0;
	sub_828165A8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82975348
	ctx.lr = 0x82406EDC;
	sub_82975348(ctx, base);
	// stw r3,1508(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1508, ctx.r3.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82406ef4
	if (ctx.cr6.eq) goto loc_82406EF4;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// b 0x82406ef8
	goto loc_82406EF8;
loc_82406EF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82406EF8:
	// bl 0x82a4cb98
	ctx.lr = 0x82406EFC;
	sub_82A4CB98(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,1512(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1512, temp.u32);
loc_82406F04:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82406F0C;
	sub_82333960(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829e4b90
	ctx.lr = 0x82406F14;
	sub_829E4B90(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400988
	ctx.lr = 0x82406F1C;
	sub_82400988(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82406F28"))) PPC_WEAK_FUNC(sub_82406F28);
PPC_FUNC_IMPL(__imp__sub_82406F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82406F30;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// bl 0x829e4b90
	ctx.lr = 0x82406F6C;
	sub_829E4B90(ctx, base);
	// lwz r10,1608(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// lwz r9,1580(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,2
	ctx.r27.s64 = 2;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lwz r10,88(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x829e4a60
	ctx.lr = 0x82406FAC;
	sub_829E4A60(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824070e0
	if (ctx.cr0.eq) goto loc_824070E0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829e4e20
	ctx.lr = 0x82406FC0;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8233a258
	ctx.lr = 0x82406FCC;
	sub_8233A258(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x82406FD8;
	sub_82400B48(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x82406FE0;
	sub_82333960(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82406ff4
	if (!ctx.cr6.eq) goto loc_82406FF4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82406FF4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824070e0
	if (!ctx.cr6.gt) goto loc_824070E0;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// addi r5,r10,4752
	ctx.r5.s64 = ctx.r10.s64 + 4752;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82816cf8
	ctx.lr = 0x8240701C;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x82407028;
	sub_82400B48(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x82407030;
	sub_82333960(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4736
	ctx.r5.s64 = ctx.r11.s64 + 4736;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82816e00
	ctx.lr = 0x82407048;
	sub_82816E00(ctx, base);
	// lwz r29,140(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407060
	if (ctx.cr6.eq) goto loc_82407060;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x82407064
	goto loc_82407064;
loc_82407060:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82407064:
	// bl 0x82a4cb98
	ctx.lr = 0x82407068;
	sub_82A4CB98(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r29,24
	ctx.r30.s64 = ctx.r29.s64 + 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,4768
	ctx.r4.s64 = ctx.r11.s64 + 4768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82409a78
	ctx.lr = 0x82407088;
	sub_82409A78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82407098
	if (ctx.cr6.eq) goto loc_82407098;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// b 0x824070e0
	goto loc_824070E0;
loc_82407098:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,4780
	ctx.r4.s64 = ctx.r11.s64 + 4780;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82409a78
	ctx.lr = 0x824070AC;
	sub_82409A78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824070c0
	if (ctx.cr6.eq) goto loc_824070C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x824070e0
	goto loc_824070E0;
loc_824070C0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,4796
	ctx.r4.s64 = ctx.r11.s64 + 4796;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82409a78
	ctx.lr = 0x824070D4;
	sub_82409A78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824070e0
	if (ctx.cr6.eq) goto loc_824070E0;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
loc_824070E0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x824070E8;
	sub_82333960(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829e4b90
	ctx.lr = 0x824070F0;
	sub_829E4B90(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400988
	ctx.lr = 0x824070F8;
	sub_82400988(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82407100"))) PPC_WEAK_FUNC(sub_82407100);
PPC_FUNC_IMPL(__imp__sub_82407100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82407108;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r26,r11,7896
	ctx.r26.s64 = ctx.r11.s64 + 7896;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r5,r10,4476
	ctx.r5.s64 = ctx.r10.s64 + 4476;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x82816cf8
	ctx.lr = 0x82407150;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82400b48
	ctx.lr = 0x8240715C;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82407164;
	sub_82333960(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,4808
	ctx.r5.s64 = ctx.r11.s64 + 4808;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816cf8
	ctx.lr = 0x8240717C;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82400b48
	ctx.lr = 0x82407188;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82407190;
	sub_82333960(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4736
	ctx.r5.s64 = ctx.r11.s64 + 4736;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82816e00
	ctx.lr = 0x824071A8;
	sub_82816E00(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8240736c
	if (!ctx.cr6.eq) goto loc_8240736C;
	// lwz r29,108(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824071d0
	if (ctx.cr6.eq) goto loc_824071D0;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x824071d4
	goto loc_824071D4;
loc_824071D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_824071D4:
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r31,r11,1268
	ctx.r31.s64 = ctx.r11.s64 + 1268;
	// bl 0x828165a8
	ctx.lr = 0x824071E4;
	sub_828165A8(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824091a0
	ctx.lr = 0x824071FC;
	sub_824091A0(ctx, base);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407210
	if (ctx.cr6.eq) goto loc_82407210;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// b 0x82407214
	goto loc_82407214;
loc_82407210:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82407214:
	// bl 0x828165a8
	ctx.lr = 0x82407218;
	sub_828165A8(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82407228;
	sub_829B98F8(ctx, base);
	// bl 0x82409258
	ctx.lr = 0x8240722C;
	sub_82409258(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8240736c
	if (ctx.cr0.eq) goto loc_8240736C;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8240736c
	if (ctx.cr6.eq) goto loc_8240736C;
	// addi r3,r30,1440
	ctx.r3.s64 = ctx.r30.s64 + 1440;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x82407254;
	sub_82332D50(ctx, base);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// mulli r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 * 28;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82a455d0
	ctx.lr = 0x8240726C;
	sub_82A455D0(ctx, base);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// stwx r28,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r10,444(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 444);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824072a4
	if (ctx.cr6.eq) goto loc_824072A4;
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// b 0x824072a8
	goto loc_824072A8;
loc_824072A4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_824072A8:
	// bl 0x82a4cb98
	ctx.lr = 0x824072AC;
	sub_82A4CB98(ctx, base);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824072d0
	if (ctx.cr6.eq) goto loc_824072D0;
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// b 0x824072d4
	goto loc_824072D4;
loc_824072D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_824072D4:
	// bl 0x82a4cb98
	ctx.lr = 0x824072D8;
	sub_82A4CB98(ctx, base);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824072fc
	if (ctx.cr6.eq) goto loc_824072FC;
	// lwz r3,108(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// b 0x82407300
	goto loc_82407300;
loc_824072FC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82407300:
	// bl 0x82a4cb98
	ctx.lr = 0x82407304;
	sub_82A4CB98(ctx, base);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407328
	if (ctx.cr6.eq) goto loc_82407328;
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// b 0x8240732c
	goto loc_8240732C;
loc_82407328:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8240732C:
	// bl 0x82a4cb98
	ctx.lr = 0x82407330;
	sub_82A4CB98(ctx, base);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8240735c
	if (!ctx.cr6.eq) goto loc_8240735C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82407368
	goto loc_82407368;
loc_8240735C:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8240736c
	if (!ctx.cr6.eq) goto loc_8240736C;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82407368:
	// stw r11,448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 448, ctx.r11.u32);
loc_8240736C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400988
	ctx.lr = 0x82407374;
	sub_82400988(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82333960
	ctx.lr = 0x8240737C;
	sub_82333960(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82407388"))) PPC_WEAK_FUNC(sub_82407388);
PPC_FUNC_IMPL(__imp__sub_82407388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82407390;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r10,4492
	ctx.r5.s64 = ctx.r10.s64 + 4492;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82816cf8
	ctx.lr = 0x824073B8;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x824073C4;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x824073CC;
	sub_82333960(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,4808
	ctx.r5.s64 = ctx.r11.s64 + 4808;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82816cf8
	ctx.lr = 0x824073E4;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x824073F0;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x824073F8;
	sub_82333960(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240740c
	if (ctx.cr6.eq) goto loc_8240740C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82407410
	goto loc_82407410;
loc_8240740C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82407410:
	// bl 0x82a4cb98
	ctx.lr = 0x82407414;
	sub_82A4CB98(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x82a4cba0
	ctx.lr = 0x8240741C;
	sub_82A4CBA0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,1408(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1408, temp.u32);
	// bl 0x82333960
	ctx.lr = 0x82407448;
	sub_82333960(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82407450"))) PPC_WEAK_FUNC(sub_82407450);
PPC_FUNC_IMPL(__imp__sub_82407450) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// addi r5,r10,4524
	ctx.r5.s64 = ctx.r10.s64 + 4524;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82816cf8
	ctx.lr = 0x82407484;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x82407490;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82407498;
	sub_82333960(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,4808
	ctx.r5.s64 = ctx.r11.s64 + 4808;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82816cf8
	ctx.lr = 0x824074B0;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x824074BC;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x824074C4;
	sub_82333960(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824074d8
	if (ctx.cr6.eq) goto loc_824074D8;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x824074dc
	goto loc_824074DC;
loc_824074D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_824074DC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82409058
	ctx.lr = 0x824074E4;
	sub_82409058(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82824ab8
	ctx.lr = 0x82407514;
	sub_82824AB8(ctx, base);
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82407530
	if (ctx.cr6.eq) goto loc_82407530;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82407530
	if (ctx.cr6.eq) goto loc_82407530;
	// bl 0x82332db8
	ctx.lr = 0x82407530;
	sub_82332DB8(ctx, base);
loc_82407530:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333960
	ctx.lr = 0x82407538;
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

__attribute__((alias("__imp__sub_82407550"))) PPC_WEAK_FUNC(sub_82407550);
PPC_FUNC_IMPL(__imp__sub_82407550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// addi r5,r10,4508
	ctx.r5.s64 = ctx.r10.s64 + 4508;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82816cf8
	ctx.lr = 0x82407584;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x82407590;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82407598;
	sub_82333960(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,4808
	ctx.r5.s64 = ctx.r11.s64 + 4808;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82816cf8
	ctx.lr = 0x824075B0;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x824075BC;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x824075C4;
	sub_82333960(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824075d8
	if (ctx.cr6.eq) goto loc_824075D8;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x824075dc
	goto loc_824075DC;
loc_824075D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_824075DC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82409058
	ctx.lr = 0x824075E4;
	sub_82409058(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,132(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240760C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82407628
	if (ctx.cr6.eq) goto loc_82407628;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82407628
	if (ctx.cr6.eq) goto loc_82407628;
	// bl 0x82332db8
	ctx.lr = 0x82407628;
	sub_82332DB8(ctx, base);
loc_82407628:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333960
	ctx.lr = 0x82407630;
	sub_82333960(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82407648"))) PPC_WEAK_FUNC(sub_82407648);
PPC_FUNC_IMPL(__imp__sub_82407648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82407650;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r4,4
	ctx.r29.s64 = ctx.r4.s64 + 4;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407678
	if (ctx.cr6.eq) goto loc_82407678;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82407680
	goto loc_82407680;
loc_82407678:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_82407680:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,13027
	ctx.r10.s64 = 853737472;
	// lis r9,-6487
	ctx.r9.s64 = -425132032;
	// ori r28,r10,37141
	ctx.r28.u64 = ctx.r10.u64 | 37141;
	// ori r27,r9,53084
	ctx.r27.u64 = ctx.r9.u64 | 53084;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r30,r11,1268
	ctx.r30.s64 = ctx.r11.s64 + 1268;
	// bl 0x828165a8
	ctx.lr = 0x824076A0;
	sub_828165A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x824091a0
	ctx.lr = 0x824076B8;
	sub_824091A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333960
	ctx.lr = 0x824076C0;
	sub_82333960(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824076C8"))) PPC_WEAK_FUNC(sub_824076C8);
PPC_FUNC_IMPL(__imp__sub_824076C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x824076D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// addi r26,r11,7896
	ctx.r26.s64 = ctx.r11.s64 + 7896;
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// beq cr6,0x82407724
	if (ctx.cr6.eq) goto loc_82407724;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r10,4608
	ctx.r5.s64 = ctx.r10.s64 + 4608;
	// b 0x8240772c
	goto loc_8240772C;
loc_82407724:
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r10,4536
	ctx.r5.s64 = ctx.r10.s64 + 4536;
loc_8240772C:
	// bl 0x82816cf8
	ctx.lr = 0x82407730;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82400b48
	ctx.lr = 0x8240773C;
	sub_82400B48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x82407744;
	sub_82333960(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,4808
	ctx.r5.s64 = ctx.r11.s64 + 4808;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82816cf8
	ctx.lr = 0x8240775C;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82400b48
	ctx.lr = 0x82407768;
	sub_82400B48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x82407770;
	sub_82333960(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4736
	ctx.r5.s64 = ctx.r11.s64 + 4736;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82816e00
	ctx.lr = 0x82407788;
	sub_82816E00(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82407988
	if (!ctx.cr6.eq) goto loc_82407988;
	// addi r3,r31,1464
	ctx.r3.s64 = ctx.r31.s64 + 1464;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x824077A8;
	sub_82332D50(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// mulli r30,r3,72
	ctx.r30.s64 = ctx.r3.s64 * 72;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a455d0
	ctx.lr = 0x824077C0;
	sub_82A455D0(ctx, base);
	// lwz r29,156(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824077d8
	if (ctx.cr6.eq) goto loc_824077D8;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x824077dc
	goto loc_824077DC;
loc_824077D8:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_824077DC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,4812
	ctx.r4.s64 = ctx.r11.s64 + 4812;
	// bl 0x82816c30
	ctx.lr = 0x824077EC;
	sub_82816C30(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82407800
	if (!ctx.cr6.eq) goto loc_82407800;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82407800:
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x828165a8
	ctx.lr = 0x8240780C;
	sub_828165A8(ctx, base);
	// stw r3,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r3.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407878
	if (ctx.cr6.eq) goto loc_82407878;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// b 0x8240787c
	goto loc_8240787C;
loc_82407878:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8240787C:
	// bl 0x82a4cb98
	ctx.lr = 0x82407880;
	sub_82A4CB98(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824078a4
	if (ctx.cr6.eq) goto loc_824078A4;
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// b 0x824078a8
	goto loc_824078A8;
loc_824078A4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_824078A8:
	// bl 0x82a4cb98
	ctx.lr = 0x824078AC;
	sub_82A4CB98(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824078d0
	if (ctx.cr6.eq) goto loc_824078D0;
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// b 0x824078d4
	goto loc_824078D4;
loc_824078D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_824078D4:
	// bl 0x82a4cb98
	ctx.lr = 0x824078D8;
	sub_82A4CB98(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824078fc
	if (ctx.cr6.eq) goto loc_824078FC;
	// lwz r3,108(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// b 0x82407900
	goto loc_82407900;
loc_824078FC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82407900:
	// bl 0x82a4cb98
	ctx.lr = 0x82407904;
	sub_82A4CB98(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407928
	if (ctx.cr6.eq) goto loc_82407928;
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// b 0x8240792c
	goto loc_8240792C;
loc_82407928:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8240792C:
	// bl 0x82a4cb98
	ctx.lr = 0x82407930;
	sub_82A4CB98(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// beq cr6,0x82407980
	if (ctx.cr6.eq) goto loc_82407980;
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x82407970;
	sub_823339B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407648
	ctx.lr = 0x82407980;
	sub_82407648(ctx, base);
loc_82407980:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x82407988;
	sub_82333960(ctx, base);
loc_82407988:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82400988
	ctx.lr = 0x82407990;
	sub_82400988(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82333960
	ctx.lr = 0x82407998;
	sub_82333960(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824079A0"))) PPC_WEAK_FUNC(sub_824079A0);
PPC_FUNC_IMPL(__imp__sub_824079A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x824079A8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r27,r11,7896
	ctx.r27.s64 = ctx.r11.s64 + 7896;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// beq cr6,0x82407a04
	if (ctx.cr6.eq) goto loc_82407A04;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r10,4632
	ctx.r5.s64 = ctx.r10.s64 + 4632;
	// b 0x82407a0c
	goto loc_82407A0C;
loc_82407A04:
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r10,4552
	ctx.r5.s64 = ctx.r10.s64 + 4552;
loc_82407A0C:
	// bl 0x82816cf8
	ctx.lr = 0x82407A10;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82400b48
	ctx.lr = 0x82407A1C;
	sub_82400B48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x82407A24;
	sub_82333960(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,4808
	ctx.r5.s64 = ctx.r11.s64 + 4808;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82816cf8
	ctx.lr = 0x82407A3C;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82400b48
	ctx.lr = 0x82407A48;
	sub_82400B48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x82407A50;
	sub_82333960(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4736
	ctx.r5.s64 = ctx.r11.s64 + 4736;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816e00
	ctx.lr = 0x82407A68;
	sub_82816E00(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82407c0c
	if (!ctx.cr6.eq) goto loc_82407C0C;
	// addi r3,r31,1464
	ctx.r3.s64 = ctx.r31.s64 + 1464;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x82407A88;
	sub_82332D50(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// mulli r30,r3,72
	ctx.r30.s64 = ctx.r3.s64 * 72;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a455d0
	ctx.lr = 0x82407AA0;
	sub_82A455D0(ctx, base);
	// lwz r29,156(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407ab8
	if (ctx.cr6.eq) goto loc_82407AB8;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x82407abc
	goto loc_82407ABC;
loc_82407AB8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_82407ABC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,4812
	ctx.r4.s64 = ctx.r11.s64 + 4812;
	// bl 0x82816c30
	ctx.lr = 0x82407ACC;
	sub_82816C30(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82407ae0
	if (!ctx.cr6.eq) goto loc_82407AE0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82407AE0:
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x828165a8
	ctx.lr = 0x82407AEC;
	sub_828165A8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r3.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407b5c
	if (ctx.cr6.eq) goto loc_82407B5C;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// b 0x82407b60
	goto loc_82407B60;
loc_82407B5C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82407B60:
	// bl 0x82a4cb98
	ctx.lr = 0x82407B64;
	sub_82A4CB98(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f31,40(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407b94
	if (ctx.cr6.eq) goto loc_82407B94;
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// b 0x82407b98
	goto loc_82407B98;
loc_82407B94:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82407B98:
	// bl 0x82a4cb98
	ctx.lr = 0x82407B9C;
	sub_82A4CB98(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407bc0
	if (ctx.cr6.eq) goto loc_82407BC0;
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// b 0x82407bc4
	goto loc_82407BC4;
loc_82407BC0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82407BC4:
	// bl 0x82a4cb98
	ctx.lr = 0x82407BC8;
	sub_82A4CB98(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// beq cr6,0x82407c04
	if (ctx.cr6.eq) goto loc_82407C04;
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x82407BF4;
	sub_823339B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407648
	ctx.lr = 0x82407C04;
	sub_82407648(ctx, base);
loc_82407C04:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x82407C0C;
	sub_82333960(ctx, base);
loc_82407C0C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82400988
	ctx.lr = 0x82407C14;
	sub_82400988(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82333960
	ctx.lr = 0x82407C1C;
	sub_82333960(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82407C28"))) PPC_WEAK_FUNC(sub_82407C28);
PPC_FUNC_IMPL(__imp__sub_82407C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82407C30;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r27,r11,7896
	ctx.r27.s64 = ctx.r11.s64 + 7896;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// beq cr6,0x82407c84
	if (ctx.cr6.eq) goto loc_82407C84;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r10,4668
	ctx.r5.s64 = ctx.r10.s64 + 4668;
	// b 0x82407c8c
	goto loc_82407C8C;
loc_82407C84:
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r10,4580
	ctx.r5.s64 = ctx.r10.s64 + 4580;
loc_82407C8C:
	// bl 0x82816cf8
	ctx.lr = 0x82407C90;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82400b48
	ctx.lr = 0x82407C9C;
	sub_82400B48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x82407CA4;
	sub_82333960(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,4808
	ctx.r5.s64 = ctx.r11.s64 + 4808;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82816cf8
	ctx.lr = 0x82407CBC;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82400b48
	ctx.lr = 0x82407CC8;
	sub_82400B48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x82407CD0;
	sub_82333960(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4736
	ctx.r5.s64 = ctx.r11.s64 + 4736;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816e00
	ctx.lr = 0x82407CE8;
	sub_82816E00(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82407f1c
	if (!ctx.cr6.eq) goto loc_82407F1C;
	// addi r3,r31,1464
	ctx.r3.s64 = ctx.r31.s64 + 1464;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x82407D08;
	sub_82332D50(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// mulli r30,r3,72
	ctx.r30.s64 = ctx.r3.s64 * 72;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a455d0
	ctx.lr = 0x82407D20;
	sub_82A455D0(ctx, base);
	// lwz r29,156(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407d38
	if (ctx.cr6.eq) goto loc_82407D38;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x82407d3c
	goto loc_82407D3C;
loc_82407D38:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_82407D3C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,4812
	ctx.r4.s64 = ctx.r11.s64 + 4812;
	// bl 0x82816c30
	ctx.lr = 0x82407D4C;
	sub_82816C30(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82407d60
	if (!ctx.cr6.eq) goto loc_82407D60;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82407D60:
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x828165a8
	ctx.lr = 0x82407D6C;
	sub_828165A8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r3.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f13,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407de4
	if (ctx.cr6.eq) goto loc_82407DE4;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// b 0x82407de8
	goto loc_82407DE8;
loc_82407DE4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82407DE8:
	// bl 0x82a4cb98
	ctx.lr = 0x82407DEC;
	sub_82A4CB98(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407e10
	if (ctx.cr6.eq) goto loc_82407E10;
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// b 0x82407e14
	goto loc_82407E14;
loc_82407E10:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82407E14:
	// bl 0x82a4cb98
	ctx.lr = 0x82407E18;
	sub_82A4CB98(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407e3c
	if (ctx.cr6.eq) goto loc_82407E3C;
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// b 0x82407e40
	goto loc_82407E40;
loc_82407E3C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82407E40:
	// bl 0x82a4cb98
	ctx.lr = 0x82407E44;
	sub_82A4CB98(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407e68
	if (ctx.cr6.eq) goto loc_82407E68;
	// lwz r3,108(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// b 0x82407e6c
	goto loc_82407E6C;
loc_82407E68:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82407E6C:
	// bl 0x82a4cb98
	ctx.lr = 0x82407E70;
	sub_82A4CB98(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407e94
	if (ctx.cr6.eq) goto loc_82407E94;
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// b 0x82407e98
	goto loc_82407E98;
loc_82407E94:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82407E98:
	// bl 0x82a4cb98
	ctx.lr = 0x82407E9C;
	sub_82A4CB98(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407ed0
	if (ctx.cr6.eq) goto loc_82407ED0;
	// lwz r3,156(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// b 0x82407ed4
	goto loc_82407ED4;
loc_82407ED0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82407ED4:
	// bl 0x82a4cb98
	ctx.lr = 0x82407ED8;
	sub_82A4CB98(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// beq cr6,0x82407f14
	if (ctx.cr6.eq) goto loc_82407F14;
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x82407F04;
	sub_823339B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407648
	ctx.lr = 0x82407F14;
	sub_82407648(ctx, base);
loc_82407F14:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x82407F1C;
	sub_82333960(ctx, base);
loc_82407F1C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82400988
	ctx.lr = 0x82407F24;
	sub_82400988(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82333960
	ctx.lr = 0x82407F2C;
	sub_82333960(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82407F38"))) PPC_WEAK_FUNC(sub_82407F38);
PPC_FUNC_IMPL(__imp__sub_82407F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82407F40;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r10,4704
	ctx.r5.s64 = ctx.r10.s64 + 4704;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82816cf8
	ctx.lr = 0x82407F68;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x82407F74;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82407F7C;
	sub_82333960(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,4808
	ctx.r5.s64 = ctx.r11.s64 + 4808;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82816cf8
	ctx.lr = 0x82407F94;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x82407FA0;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82407FA8;
	sub_82333960(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82407fbc
	if (!ctx.cr6.eq) goto loc_82407FBC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82407FBC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82408000
	if (!ctx.cr6.gt) goto loc_82408000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407fd4
	if (ctx.cr6.eq) goto loc_82407FD4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82407fd8
	goto loc_82407FD8;
loc_82407FD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82407FD8:
	// bl 0x82a4cad0
	ctx.lr = 0x82407FDC;
	sub_82A4CAD0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x82407FF0;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829c3740
	ctx.lr = 0x82408000;
	sub_829C3740(ctx, base);
loc_82408000:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333960
	ctx.lr = 0x82408008;
	sub_82333960(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82408010"))) PPC_WEAK_FUNC(sub_82408010);
PPC_FUNC_IMPL(__imp__sub_82408010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x82408034;
	sub_82409BE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824089ac
	if (ctx.cr0.eq) goto loc_824089AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408048;
	sub_824B75A8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408054;
	sub_824B75A8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408060;
	sub_824B75A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240806C;
	sub_824B75A8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408078;
	sub_824B75A8(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408084;
	sub_824B75A8(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408090;
	sub_824B75A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240809C;
	sub_824B75A8(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824080A8;
	sub_824B75A8(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824080B4;
	sub_824B75A8(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824080C0;
	sub_824B75A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824080CC;
	sub_824B75A8(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824080D8;
	sub_824B75A8(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824080E4;
	sub_824B75A8(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824080F0;
	sub_824B75A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824080FC;
	sub_824B75A8(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408108;
	sub_824B75A8(ctx, base);
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408114;
	sub_824B75A8(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408120;
	sub_824B75A8(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240812C;
	sub_824B75A8(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408138;
	sub_824B75A8(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408144;
	sub_824B75A8(ctx, base);
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408150;
	sub_824B75A8(ctx, base);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240815C;
	sub_824B75A8(ctx, base);
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408168;
	sub_824B75A8(ctx, base);
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408174;
	sub_824B75A8(ctx, base);
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408180;
	sub_824B75A8(ctx, base);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240818C;
	sub_824B75A8(ctx, base);
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408198;
	sub_824B75A8(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824081A4;
	sub_824B75A8(ctx, base);
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824081B0;
	sub_824B75A8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824081BC;
	sub_824B75A8(ctx, base);
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824081C8;
	sub_824B75A8(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824081D4;
	sub_824B75A8(ctx, base);
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824081E0;
	sub_824B75A8(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824081EC;
	sub_824B75A8(ctx, base);
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824081F8;
	sub_824B75A8(ctx, base);
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408204;
	sub_824B75A8(ctx, base);
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408210;
	sub_824B75A8(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240821C;
	sub_824B75A8(ctx, base);
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408228;
	sub_824B75A8(ctx, base);
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408234;
	sub_824B75A8(ctx, base);
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408240;
	sub_824B75A8(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240824C;
	sub_824B75A8(ctx, base);
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408258;
	sub_824B75A8(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408264;
	sub_824B75A8(ctx, base);
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408270;
	sub_824B75A8(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240827C;
	sub_824B75A8(ctx, base);
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408288;
	sub_824B75A8(ctx, base);
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408294;
	sub_824B75A8(ctx, base);
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824082A0;
	sub_824B75A8(ctx, base);
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824082AC;
	sub_824B75A8(ctx, base);
	// li r4,53
	ctx.r4.s64 = 53;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824082B8;
	sub_824B75A8(ctx, base);
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824082C4;
	sub_824B75A8(ctx, base);
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824082D0;
	sub_824B75A8(ctx, base);
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824082DC;
	sub_824B75A8(ctx, base);
	// li r4,57
	ctx.r4.s64 = 57;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824082E8;
	sub_824B75A8(ctx, base);
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824082F4;
	sub_824B75A8(ctx, base);
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408300;
	sub_824B75A8(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240830C;
	sub_824B75A8(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408318;
	sub_824B75A8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408324;
	sub_824B75A8(ctx, base);
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408330;
	sub_824B75A8(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240833C;
	sub_824B75A8(ctx, base);
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408348;
	sub_824B75A8(ctx, base);
	// li r4,66
	ctx.r4.s64 = 66;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408354;
	sub_824B75A8(ctx, base);
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408360;
	sub_824B75A8(ctx, base);
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240836C;
	sub_824B75A8(ctx, base);
	// li r4,69
	ctx.r4.s64 = 69;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408378;
	sub_824B75A8(ctx, base);
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408384;
	sub_824B75A8(ctx, base);
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408390;
	sub_824B75A8(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240839C;
	sub_824B75A8(ctx, base);
	// li r4,73
	ctx.r4.s64 = 73;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824083A8;
	sub_824B75A8(ctx, base);
	// li r4,74
	ctx.r4.s64 = 74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824083B4;
	sub_824B75A8(ctx, base);
	// li r4,75
	ctx.r4.s64 = 75;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824083C0;
	sub_824B75A8(ctx, base);
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824083CC;
	sub_824B75A8(ctx, base);
	// li r4,77
	ctx.r4.s64 = 77;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824083D8;
	sub_824B75A8(ctx, base);
	// li r4,78
	ctx.r4.s64 = 78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824083E4;
	sub_824B75A8(ctx, base);
	// li r4,79
	ctx.r4.s64 = 79;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824083F0;
	sub_824B75A8(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824083FC;
	sub_824B75A8(ctx, base);
	// li r4,81
	ctx.r4.s64 = 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408408;
	sub_824B75A8(ctx, base);
	// li r4,82
	ctx.r4.s64 = 82;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408414;
	sub_824B75A8(ctx, base);
	// li r4,83
	ctx.r4.s64 = 83;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408420;
	sub_824B75A8(ctx, base);
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240842C;
	sub_824B75A8(ctx, base);
	// li r4,85
	ctx.r4.s64 = 85;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408438;
	sub_824B75A8(ctx, base);
	// li r4,86
	ctx.r4.s64 = 86;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408444;
	sub_824B75A8(ctx, base);
	// li r4,87
	ctx.r4.s64 = 87;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408450;
	sub_824B75A8(ctx, base);
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240845C;
	sub_824B75A8(ctx, base);
	// li r4,89
	ctx.r4.s64 = 89;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408468;
	sub_824B75A8(ctx, base);
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408474;
	sub_824B75A8(ctx, base);
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408480;
	sub_824B75A8(ctx, base);
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240848C;
	sub_824B75A8(ctx, base);
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408498;
	sub_824B75A8(ctx, base);
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824084A4;
	sub_824B75A8(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824084B0;
	sub_824B75A8(ctx, base);
	// li r4,97
	ctx.r4.s64 = 97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824084BC;
	sub_824B75A8(ctx, base);
	// li r4,98
	ctx.r4.s64 = 98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824084C8;
	sub_824B75A8(ctx, base);
	// li r4,99
	ctx.r4.s64 = 99;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824084D4;
	sub_824B75A8(ctx, base);
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824084E0;
	sub_824B75A8(ctx, base);
	// li r4,118
	ctx.r4.s64 = 118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824084EC;
	sub_824B75A8(ctx, base);
	// li r4,119
	ctx.r4.s64 = 119;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824084F8;
	sub_824B75A8(ctx, base);
	// li r4,122
	ctx.r4.s64 = 122;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408504;
	sub_824B75A8(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408510;
	sub_824B75A8(ctx, base);
	// li r4,126
	ctx.r4.s64 = 126;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240851C;
	sub_824B75A8(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408528;
	sub_824B75A8(ctx, base);
	// li r4,129
	ctx.r4.s64 = 129;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408534;
	sub_824B75A8(ctx, base);
	// li r4,130
	ctx.r4.s64 = 130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408540;
	sub_824B75A8(ctx, base);
	// li r4,131
	ctx.r4.s64 = 131;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240854C;
	sub_824B75A8(ctx, base);
	// li r4,132
	ctx.r4.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408558;
	sub_824B75A8(ctx, base);
	// li r4,133
	ctx.r4.s64 = 133;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408564;
	sub_824B75A8(ctx, base);
	// li r4,134
	ctx.r4.s64 = 134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408570;
	sub_824B75A8(ctx, base);
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240857C;
	sub_824B75A8(ctx, base);
	// li r4,151
	ctx.r4.s64 = 151;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408588;
	sub_824B75A8(ctx, base);
	// li r4,152
	ctx.r4.s64 = 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408594;
	sub_824B75A8(ctx, base);
	// li r4,153
	ctx.r4.s64 = 153;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824085A0;
	sub_824B75A8(ctx, base);
	// li r4,154
	ctx.r4.s64 = 154;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824085AC;
	sub_824B75A8(ctx, base);
	// li r4,155
	ctx.r4.s64 = 155;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824085B8;
	sub_824B75A8(ctx, base);
	// li r4,156
	ctx.r4.s64 = 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824085C4;
	sub_824B75A8(ctx, base);
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824085D0;
	sub_824B75A8(ctx, base);
	// li r4,158
	ctx.r4.s64 = 158;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824085DC;
	sub_824B75A8(ctx, base);
	// li r4,159
	ctx.r4.s64 = 159;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824085E8;
	sub_824B75A8(ctx, base);
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824085F4;
	sub_824B75A8(ctx, base);
	// li r4,161
	ctx.r4.s64 = 161;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408600;
	sub_824B75A8(ctx, base);
	// li r4,162
	ctx.r4.s64 = 162;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240860C;
	sub_824B75A8(ctx, base);
	// li r4,163
	ctx.r4.s64 = 163;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408618;
	sub_824B75A8(ctx, base);
	// li r4,164
	ctx.r4.s64 = 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408624;
	sub_824B75A8(ctx, base);
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408630;
	sub_824B75A8(ctx, base);
	// li r4,166
	ctx.r4.s64 = 166;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240863C;
	sub_824B75A8(ctx, base);
	// li r4,167
	ctx.r4.s64 = 167;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408648;
	sub_824B75A8(ctx, base);
	// li r4,168
	ctx.r4.s64 = 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408654;
	sub_824B75A8(ctx, base);
	// li r4,169
	ctx.r4.s64 = 169;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408660;
	sub_824B75A8(ctx, base);
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240866C;
	sub_824B75A8(ctx, base);
	// li r4,171
	ctx.r4.s64 = 171;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408678;
	sub_824B75A8(ctx, base);
	// li r4,172
	ctx.r4.s64 = 172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408684;
	sub_824B75A8(ctx, base);
	// li r4,173
	ctx.r4.s64 = 173;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408690;
	sub_824B75A8(ctx, base);
	// li r4,174
	ctx.r4.s64 = 174;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240869C;
	sub_824B75A8(ctx, base);
	// li r4,175
	ctx.r4.s64 = 175;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824086A8;
	sub_824B75A8(ctx, base);
	// li r4,176
	ctx.r4.s64 = 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824086B4;
	sub_824B75A8(ctx, base);
	// li r4,177
	ctx.r4.s64 = 177;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824086C0;
	sub_824B75A8(ctx, base);
	// li r4,178
	ctx.r4.s64 = 178;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824086CC;
	sub_824B75A8(ctx, base);
	// li r4,179
	ctx.r4.s64 = 179;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824086D8;
	sub_824B75A8(ctx, base);
	// li r4,180
	ctx.r4.s64 = 180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824086E4;
	sub_824B75A8(ctx, base);
	// li r4,181
	ctx.r4.s64 = 181;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824086F0;
	sub_824B75A8(ctx, base);
	// li r4,201
	ctx.r4.s64 = 201;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824086FC;
	sub_824B75A8(ctx, base);
	// li r4,202
	ctx.r4.s64 = 202;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408708;
	sub_824B75A8(ctx, base);
	// li r4,203
	ctx.r4.s64 = 203;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408714;
	sub_824B75A8(ctx, base);
	// li r4,204
	ctx.r4.s64 = 204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408720;
	sub_824B75A8(ctx, base);
	// li r4,205
	ctx.r4.s64 = 205;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240872C;
	sub_824B75A8(ctx, base);
	// li r4,206
	ctx.r4.s64 = 206;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408738;
	sub_824B75A8(ctx, base);
	// li r4,207
	ctx.r4.s64 = 207;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408744;
	sub_824B75A8(ctx, base);
	// li r4,208
	ctx.r4.s64 = 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408750;
	sub_824B75A8(ctx, base);
	// li r4,209
	ctx.r4.s64 = 209;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240875C;
	sub_824B75A8(ctx, base);
	// li r4,210
	ctx.r4.s64 = 210;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408768;
	sub_824B75A8(ctx, base);
	// li r4,211
	ctx.r4.s64 = 211;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408774;
	sub_824B75A8(ctx, base);
	// li r4,212
	ctx.r4.s64 = 212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408780;
	sub_824B75A8(ctx, base);
	// li r4,213
	ctx.r4.s64 = 213;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240878C;
	sub_824B75A8(ctx, base);
	// li r4,214
	ctx.r4.s64 = 214;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408798;
	sub_824B75A8(ctx, base);
	// li r4,215
	ctx.r4.s64 = 215;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824087A4;
	sub_824B75A8(ctx, base);
	// li r4,216
	ctx.r4.s64 = 216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824087B0;
	sub_824B75A8(ctx, base);
	// li r4,217
	ctx.r4.s64 = 217;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824087BC;
	sub_824B75A8(ctx, base);
	// li r4,218
	ctx.r4.s64 = 218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824087C8;
	sub_824B75A8(ctx, base);
	// li r4,219
	ctx.r4.s64 = 219;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824087D4;
	sub_824B75A8(ctx, base);
	// li r4,220
	ctx.r4.s64 = 220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824087E0;
	sub_824B75A8(ctx, base);
	// li r4,221
	ctx.r4.s64 = 221;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824087EC;
	sub_824B75A8(ctx, base);
	// li r4,222
	ctx.r4.s64 = 222;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x824087F8;
	sub_824B75A8(ctx, base);
	// li r4,223
	ctx.r4.s64 = 223;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408804;
	sub_824B75A8(ctx, base);
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408810;
	sub_824B75A8(ctx, base);
	// li r4,225
	ctx.r4.s64 = 225;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240881C;
	sub_824B75A8(ctx, base);
	// li r4,226
	ctx.r4.s64 = 226;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408828;
	sub_824B75A8(ctx, base);
	// li r4,227
	ctx.r4.s64 = 227;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408834;
	sub_824B75A8(ctx, base);
	// li r4,228
	ctx.r4.s64 = 228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408840;
	sub_824B75A8(ctx, base);
	// li r4,229
	ctx.r4.s64 = 229;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x8240884C;
	sub_824B75A8(ctx, base);
	// li r4,230
	ctx.r4.s64 = 230;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408858;
	sub_824B75A8(ctx, base);
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b75a8
	ctx.lr = 0x82408864;
	sub_824B75A8(ctx, base);
	// lwz r10,648(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,628
	ctx.r3.s64 = ctx.r31.s64 + 628;
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8240888c
	if (ctx.cr6.eq) goto loc_8240888C;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x8240888C;
	sub_82332C38(ctx, base);
loc_8240888C:
	// li r4,45
	ctx.r4.s64 = 45;
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// bl 0x823f8a50
	ctx.lr = 0x82408898;
	sub_823F8A50(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r30,r31,204
	ctx.r30.s64 = ctx.r31.s64 + 204;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824088B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,7752
	ctx.r3.s64 = ctx.r31.s64 + 7752;
	// bl 0x824b9be8
	ctx.lr = 0x824088B8;
	sub_824B9BE8(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824088CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,131
	ctx.r4.s64 = 131;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824088E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82408904
	if (ctx.cr0.eq) goto loc_82408904;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a63d0
	ctx.lr = 0x824088F8;
	sub_824A63D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6060
	ctx.lr = 0x82408904;
	sub_824A6060(ctx, base);
loc_82408904:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,132
	ctx.r4.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240891C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240893c
	if (ctx.cr0.eq) goto loc_8240893C;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a63d0
	ctx.lr = 0x82408930;
	sub_824A63D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6060
	ctx.lr = 0x8240893C;
	sub_824A6060(ctx, base);
loc_8240893C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,133
	ctx.r4.s64 = 133;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82408954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82408974
	if (ctx.cr0.eq) goto loc_82408974;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a63d0
	ctx.lr = 0x82408968;
	sub_824A63D0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6060
	ctx.lr = 0x82408974;
	sub_824A6060(ctx, base);
loc_82408974:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,134
	ctx.r4.s64 = 134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240898C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824089ac
	if (ctx.cr0.eq) goto loc_824089AC;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a63d0
	ctx.lr = 0x824089A0;
	sub_824A63D0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6060
	ctx.lr = 0x824089AC;
	sub_824A6060(ctx, base);
loc_824089AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824089C8"))) PPC_WEAK_FUNC(sub_824089C8);
PPC_FUNC_IMPL(__imp__sub_824089C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828c9580
	sub_828C9580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824089D0"))) PPC_WEAK_FUNC(sub_824089D0);
PPC_FUNC_IMPL(__imp__sub_824089D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,14736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14736);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824089e8
	if (!ctx.cr6.eq) goto loc_824089E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82408a14
	goto loc_82408A14;
loc_824089E8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,14732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14732);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82408a00
	if (!ctx.cr6.eq) goto loc_82408A00;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82408a14
	goto loc_82408A14;
loc_82408A00:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,14776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14776);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82408a18
	if (!ctx.cr6.eq) goto loc_82408A18;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82408A14:
	// stw r11,932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 932, ctx.r11.u32);
loc_82408A18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82408A20"))) PPC_WEAK_FUNC(sub_82408A20);
PPC_FUNC_IMPL(__imp__sub_82408A20) {
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
	// li r3,1160
	ctx.r3.s64 = 1160;
	// bl 0x82833108
	ctx.lr = 0x82408A38;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82408a7c
	if (ctx.cr0.eq) goto loc_82408A7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c8a78
	ctx.lr = 0x82408A48;
	sub_828C8A78(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r9,4856
	ctx.r9.s64 = ctx.r9.s64 + 4856;
	// lfs f0,30356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30356);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r8.u32);
	// lfs f13,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,1120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1120, temp.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f13,1124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1124, temp.u32);
	// b 0x82408a80
	goto loc_82408A80;
loc_82408A7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82408A80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82408A98"))) PPC_WEAK_FUNC(sub_82408A98);
PPC_FUNC_IMPL(__imp__sub_82408A98) {
	PPC_FUNC_PROLOGUE();
	// li r3,1160
	ctx.r3.s64 = 1160;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82408AA0"))) PPC_WEAK_FUNC(sub_82408AA0);
PPC_FUNC_IMPL(__imp__sub_82408AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31020(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31020);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82408ae0
	if (!ctx.cr0.eq) goto loc_82408AE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,31020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31020, ctx.r11.u32);
	// addi r3,r9,1528
	ctx.r3.s64 = ctx.r9.s64 + 1528;
	// bl 0x82816528
	ctx.lr = 0x82408AD8;
	sub_82816528(ctx, base);
	// stw r3,31016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31016, ctx.r3.u32);
	// b 0x82408ae4
	goto loc_82408AE4;
loc_82408AE0:
	// lwz r3,31016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31016);
loc_82408AE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82408AF8"))) PPC_WEAK_FUNC(sub_82408AF8);
PPC_FUNC_IMPL(__imp__sub_82408AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82408b48
	ctx.lr = 0x82408B18;
	sub_82408B48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82408B2C;
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

__attribute__((alias("__imp__sub_82408B48"))) PPC_WEAK_FUNC(sub_82408B48);
PPC_FUNC_IMPL(__imp__sub_82408B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25720
	ctx.r31.s64 = ctx.r11.s64 + -25720;
	// lwz r11,-25724(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25724);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82408b90
	if (!ctx.cr0.eq) goto loc_82408B90;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,5020
	ctx.r9.s64 = ctx.r9.s64 + 5020;
	// stw r11,-25724(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25724, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10304
	ctx.r3.s64 = ctx.r11.s64 + -10304;
	// bl 0x82a4c758
	ctx.lr = 0x82408B90;
	sub_82A4C758(ctx, base);
loc_82408B90:
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

__attribute__((alias("__imp__sub_82408BA8"))) PPC_WEAK_FUNC(sub_82408BA8);
PPC_FUNC_IMPL(__imp__sub_82408BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82408BB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r11,96
	ctx.r11.s64 = 96;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// beq cr6,0x82408cc8
	if (ctx.cr6.eq) goto loc_82408CC8;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82408cc8
	if (!ctx.cr6.gt) goto loc_82408CC8;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82408c0c
	if (ctx.cr0.eq) goto loc_82408C0C;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x82332c38
	ctx.lr = 0x82408C0C;
	sub_82332C38(ctx, base);
loc_82408C0C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82408cc8
	if (!ctx.cr6.gt) goto loc_82408CC8;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82408C20:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x82408C34;
	sub_82332D50(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 * 96;
	// add. r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82408cb4
	if (ctx.cr0.eq) goto loc_82408CB4;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// li r5,24
	ctx.r5.s64 = 24;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82408C64;
	sub_82A4EA80(ctx, base);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// bl 0x823339b8
	ctx.lr = 0x82408C88;
	sub_823339B8(ctx, base);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// bl 0x823339b8
	ctx.lr = 0x82408CAC;
	sub_823339B8(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
loc_82408CB4:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,96
	ctx.r28.s64 = ctx.r28.s64 + 96;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82408c20
	if (ctx.cr6.lt) goto loc_82408C20;
loc_82408CC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82408CD8"))) PPC_WEAK_FUNC(sub_82408CD8);
PPC_FUNC_IMPL(__imp__sub_82408CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82408CE0;
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
	// ble cr6,0x82408d24
	if (!ctx.cr6.gt) goto loc_82408D24;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82408D00:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r28,68
	ctx.r3.s64 = ctx.r28.s64 + 68;
	// bl 0x82333960
	ctx.lr = 0x82408D10;
	sub_82333960(ctx, base);
	// addi r3,r28,36
	ctx.r3.s64 = ctx.r28.s64 + 36;
	// bl 0x82333960
	ctx.lr = 0x82408D18;
	sub_82333960(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// bne 0x82408d00
	if (!ctx.cr0.eq) goto loc_82408D00;
loc_82408D24:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,96
	ctx.r6.s64 = 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82408D3C;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82408d4c
	if (ctx.cr6.eq) goto loc_82408D4C;
	// bl 0x82332db8
	ctx.lr = 0x82408D4C;
	sub_82332DB8(ctx, base);
loc_82408D4C:
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

__attribute__((alias("__imp__sub_82408D60"))) PPC_WEAK_FUNC(sub_82408D60);
PPC_FUNC_IMPL(__imp__sub_82408D60) {
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
	// li r3,456
	ctx.r3.s64 = 456;
	// bl 0x82833108
	ctx.lr = 0x82408D78;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82408df0
	if (ctx.cr0.eq) goto loc_82408DF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc368
	ctx.lr = 0x82408D88;
	sub_829BC368(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,23280
	ctx.r10.s64 = ctx.r10.s64 + 23280;
	// addi r9,r9,23536
	ctx.r9.s64 = ctx.r9.s64 + 23536;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lfs f0,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stw r7,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r7.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// stfs f0,432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// stfs f0,436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// b 0x82408df4
	goto loc_82408DF4;
loc_82408DF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82408DF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82408E08"))) PPC_WEAK_FUNC(sub_82408E08);
PPC_FUNC_IMPL(__imp__sub_82408E08) {
	PPC_FUNC_PROLOGUE();
	// li r3,456
	ctx.r3.s64 = 456;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82408E10"))) PPC_WEAK_FUNC(sub_82408E10);
PPC_FUNC_IMPL(__imp__sub_82408E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31012(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31012);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82408e50
	if (!ctx.cr0.eq) goto loc_82408E50;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,31012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31012, ctx.r11.u32);
	// addi r3,r9,1548
	ctx.r3.s64 = ctx.r9.s64 + 1548;
	// bl 0x82816528
	ctx.lr = 0x82408E48;
	sub_82816528(ctx, base);
	// stw r3,31008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31008, ctx.r3.u32);
	// b 0x82408e54
	goto loc_82408E54;
loc_82408E50:
	// lwz r3,31008(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31008);
loc_82408E54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82408E68"))) PPC_WEAK_FUNC(sub_82408E68);
PPC_FUNC_IMPL(__imp__sub_82408E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82408eb8
	ctx.lr = 0x82408E88;
	sub_82408EB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82408E9C;
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

__attribute__((alias("__imp__sub_82408EB8"))) PPC_WEAK_FUNC(sub_82408EB8);
PPC_FUNC_IMPL(__imp__sub_82408EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25740
	ctx.r31.s64 = ctx.r11.s64 + -25740;
	// lwz r11,-25744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25744);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82408f00
	if (!ctx.cr0.eq) goto loc_82408F00;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,6124
	ctx.r9.s64 = ctx.r9.s64 + 6124;
	// stw r11,-25744(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25744, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10328
	ctx.r3.s64 = ctx.r11.s64 + -10328;
	// bl 0x82a4c758
	ctx.lr = 0x82408F00;
	sub_82A4C758(ctx, base);
loc_82408F00:
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

__attribute__((alias("__imp__sub_82408F18"))) PPC_WEAK_FUNC(sub_82408F18);
PPC_FUNC_IMPL(__imp__sub_82408F18) {
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
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82833108
	ctx.lr = 0x82408F2C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82408f3c
	if (ctx.cr0.eq) goto loc_82408F3C;
	// bl 0x82976098
	ctx.lr = 0x82408F38;
	sub_82976098(ctx, base);
	// b 0x82408f40
	goto loc_82408F40;
loc_82408F3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82408F40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82408F50"))) PPC_WEAK_FUNC(sub_82408F50);
PPC_FUNC_IMPL(__imp__sub_82408F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31004);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82408f90
	if (!ctx.cr0.eq) goto loc_82408F90;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,31004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31004, ctx.r11.u32);
	// addi r3,r9,1564
	ctx.r3.s64 = ctx.r9.s64 + 1564;
	// bl 0x82816528
	ctx.lr = 0x82408F88;
	sub_82816528(ctx, base);
	// stw r3,31000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31000, ctx.r3.u32);
	// b 0x82408f94
	goto loc_82408F94;
loc_82408F90:
	// lwz r3,31000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31000);
loc_82408F94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82408FA8"))) PPC_WEAK_FUNC(sub_82408FA8);
PPC_FUNC_IMPL(__imp__sub_82408FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82408ff8
	ctx.lr = 0x82408FC8;
	sub_82408FF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82408FDC;
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

__attribute__((alias("__imp__sub_82408FF8"))) PPC_WEAK_FUNC(sub_82408FF8);
PPC_FUNC_IMPL(__imp__sub_82408FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25680
	ctx.r31.s64 = ctx.r11.s64 + -25680;
	// lwz r11,-25684(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25684);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82409040
	if (!ctx.cr0.eq) goto loc_82409040;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,6144
	ctx.r9.s64 = ctx.r9.s64 + 6144;
	// stw r11,-25684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25684, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10352
	ctx.r3.s64 = ctx.r11.s64 + -10352;
	// bl 0x82a4c758
	ctx.lr = 0x82409040;
	sub_82A4C758(ctx, base);
loc_82409040:
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

__attribute__((alias("__imp__sub_82409058"))) PPC_WEAK_FUNC(sub_82409058);
PPC_FUNC_IMPL(__imp__sub_82409058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82409060;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x824090d0
	if (ctx.cr6.eq) goto loc_824090D0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// bl 0x82a4cbe0
	ctx.lr = 0x82409088;
	sub_82A4CBE0(ctx, base);
	// addi r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 1;
	// rlwinm r29,r27,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// ble cr6,0x824090a4
	if (!ctx.cr6.gt) goto loc_824090A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82333900
	ctx.lr = 0x824090A0;
	sub_82333900(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_824090A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a45c30
	ctx.lr = 0x824090C8;
	sub_82A45C30(ctx, base);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// b 0x824090d4
	goto loc_824090D4;
loc_824090D0:
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_824090D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824090E0"))) PPC_WEAK_FUNC(sub_824090E0);
PPC_FUNC_IMPL(__imp__sub_824090E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82409124
	if (ctx.cr6.eq) goto loc_82409124;
	// bl 0x82392e08
	ctx.lr = 0x82409100;
	sub_82392E08(ctx, base);
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
	ctx.lr = 0x82409118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82409128
	if (!ctx.cr0.eq) goto loc_82409128;
loc_82409124:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82409128:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409140"))) PPC_WEAK_FUNC(sub_82409140);
PPC_FUNC_IMPL(__imp__sub_82409140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82409184
	if (ctx.cr6.eq) goto loc_82409184;
	// bl 0x82408ff8
	ctx.lr = 0x82409160;
	sub_82408FF8(ctx, base);
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
	ctx.lr = 0x82409178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82409188
	if (!ctx.cr0.eq) goto loc_82409188;
loc_82409184:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82409188:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824091A0"))) PPC_WEAK_FUNC(sub_824091A0);
PPC_FUNC_IMPL(__imp__sub_824091A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x824091A8;
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
	// bne 0x824091e8
	if (!ctx.cr0.eq) goto loc_824091E8;
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x824091E8;
	sub_8312E74C(ctx, base);
loc_824091E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824095f0
	ctx.lr = 0x824091F4;
	sub_824095F0(ctx, base);
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
	ctx.lr = 0x8240920C;
	sub_828552A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8240922c
	if (ctx.cr0.eq) goto loc_8240922C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ble cr6,0x82409228
	if (!ctx.cr6.gt) goto loc_82409228;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82409228:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_8240922C:
	// lwzx r11,r27,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82409240
	if (!ctx.cr0.eq) goto loc_82409240;
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x82409240;
	sub_8312E73C(ctx, base);
loc_82409240:
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

__attribute__((alias("__imp__sub_82409258"))) PPC_WEAK_FUNC(sub_82409258);
PPC_FUNC_IMPL(__imp__sub_82409258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8240929c
	if (ctx.cr6.eq) goto loc_8240929C;
	// bl 0x82408eb8
	ctx.lr = 0x82409278;
	sub_82408EB8(ctx, base);
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
	ctx.lr = 0x82409290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x824092a0
	if (!ctx.cr0.eq) goto loc_824092A0;
loc_8240929C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824092A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824092B8"))) PPC_WEAK_FUNC(sub_824092B8);
PPC_FUNC_IMPL(__imp__sub_824092B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x824092f0
	if (ctx.cr6.eq) goto loc_824092F0;
	// bl 0x82409590
	ctx.lr = 0x824092E0;
	sub_82409590(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824092f0
	if (!ctx.cr6.eq) goto loc_824092F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824092fc
	goto loc_824092FC;
loc_824092F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x824092FC;
	sub_82333C70(ctx, base);
loc_824092FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409318"))) PPC_WEAK_FUNC(sub_82409318);
PPC_FUNC_IMPL(__imp__sub_82409318) {
	PPC_FUNC_PROLOGUE();
	// b 0x82409590
	sub_82409590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82409320"))) PPC_WEAK_FUNC(sub_82409320);
PPC_FUNC_IMPL(__imp__sub_82409320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8240933C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824093ac
	if (ctx.cr0.eq) goto loc_824093AC;
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
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,6168
	ctx.r9.s64 = ctx.r9.s64 + 6168;
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
	// b 0x824093b0
	goto loc_824093B0;
loc_824093AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824093B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824093C8"))) PPC_WEAK_FUNC(sub_824093C8);
PPC_FUNC_IMPL(__imp__sub_824093C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82409590
	ctx.lr = 0x824093E8;
	sub_82409590(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x824093fc
	if (ctx.cr6.eq) goto loc_824093FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x824093FC;
	sub_82333B08(ctx, base);
loc_824093FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409418"))) PPC_WEAK_FUNC(sub_82409418);
PPC_FUNC_IMPL(__imp__sub_82409418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x824096c0
	ctx.lr = 0x82409434;
	sub_824096C0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8240944C;
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

__attribute__((alias("__imp__sub_82409460"))) PPC_WEAK_FUNC(sub_82409460);
PPC_FUNC_IMPL(__imp__sub_82409460) {
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
	ctx.lr = 0x82409478;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824094cc
	if (ctx.cr0.eq) goto loc_824094CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82409488;
	sub_82833180(ctx, base);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-8531
	ctx.r8.s64 = -559087616;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r9,6168
	ctx.r9.s64 = ctx.r9.s64 + 6168;
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
	// b 0x824094d0
	goto loc_824094D0;
loc_824094CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824094D0:
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

__attribute__((alias("__imp__sub_824094E8"))) PPC_WEAK_FUNC(sub_824094E8);
PPC_FUNC_IMPL(__imp__sub_824094E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,30988(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30988);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82409528
	if (!ctx.cr0.eq) goto loc_82409528;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,30988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30988, ctx.r11.u32);
	// addi r3,r9,4840
	ctx.r3.s64 = ctx.r9.s64 + 4840;
	// bl 0x82816528
	ctx.lr = 0x82409520;
	sub_82816528(ctx, base);
	// stw r3,30984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30984, ctx.r3.u32);
	// b 0x8240952c
	goto loc_8240952C;
loc_82409528:
	// lwz r3,30984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30984);
loc_8240952C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409540"))) PPC_WEAK_FUNC(sub_82409540);
PPC_FUNC_IMPL(__imp__sub_82409540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82409590
	ctx.lr = 0x82409560;
	sub_82409590(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82409574;
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

__attribute__((alias("__imp__sub_82409590"))) PPC_WEAK_FUNC(sub_82409590);
PPC_FUNC_IMPL(__imp__sub_82409590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,30992
	ctx.r31.s64 = ctx.r11.s64 + 30992;
	// lwz r11,30996(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824095d8
	if (!ctx.cr0.eq) goto loc_824095D8;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,6248
	ctx.r9.s64 = ctx.r9.s64 + 6248;
	// stw r11,30996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30996, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10280
	ctx.r3.s64 = ctx.r11.s64 + -10280;
	// bl 0x82a4c758
	ctx.lr = 0x824095D8;
	sub_82A4C758(ctx, base);
loc_824095D8:
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

__attribute__((alias("__imp__sub_824095F0"))) PPC_WEAK_FUNC(sub_824095F0);
PPC_FUNC_IMPL(__imp__sub_824095F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x824095F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r29,-31956
	ctx.r29.s64 = -2094268416;
	// lwz r11,-25736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25736);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82409660
	if (!ctx.cr0.eq) goto loc_82409660;
	// lis r30,-31956
	ctx.r30.s64 = -2094268416;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-25736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25736, ctx.r11.u32);
	// lwz r3,-25660(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25660);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82409658
	if (!ctx.cr6.eq) goto loc_82409658;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,1096
	ctx.r3.s64 = ctx.r10.s64 + 1096;
	// bl 0x82a4c7d8
	ctx.lr = 0x82409640;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82409648;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82409650;
	sub_82816528(ctx, base);
	// lwz r11,-25736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25736);
	// stw r3,-25660(r30)
	PPC_STORE_U32(ctx.r30.u32 + -25660, ctx.r3.u32);
loc_82409658:
	// stw r3,-25732(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25732, ctx.r3.u32);
	// b 0x82409664
	goto loc_82409664;
loc_82409660:
	// lwz r3,-25732(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25732);
loc_82409664:
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,-25728
	ctx.r9.s64 = ctx.r10.s64 + -25728;
	// bne 0x82409688
	if (!ctx.cr0.eq) goto loc_82409688;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r10,r10,14428
	ctx.r10.s64 = ctx.r10.s64 + 14428;
	// stw r11,-25736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25736, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82409688:
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

__attribute__((alias("__imp__sub_824096A8"))) PPC_WEAK_FUNC(sub_824096A8);
PPC_FUNC_IMPL(__imp__sub_824096A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x824052b0
	sub_824052B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824096B0"))) PPC_WEAK_FUNC(sub_824096B0);
PPC_FUNC_IMPL(__imp__sub_824096B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82404fe0
	sub_82404FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824096B8"))) PPC_WEAK_FUNC(sub_824096B8);
PPC_FUNC_IMPL(__imp__sub_824096B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x824052b0
	sub_824052B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824096C0"))) PPC_WEAK_FUNC(sub_824096C0);
PPC_FUNC_IMPL(__imp__sub_824096C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82409860
	ctx.lr = 0x824096D8;
	sub_82409860(ctx, base);
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
	ctx.lr = 0x824096F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82409700
	if (!ctx.cr0.eq) goto loc_82409700;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82409700:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409718"))) PPC_WEAK_FUNC(sub_82409718);
PPC_FUNC_IMPL(__imp__sub_82409718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25668
	ctx.r31.s64 = ctx.r11.s64 + -25668;
	// lwz r11,-25664(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25664);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82409760
	if (!ctx.cr0.eq) goto loc_82409760;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,6952
	ctx.r9.s64 = ctx.r9.s64 + 6952;
	// stw r11,-25664(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25664, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10256
	ctx.r3.s64 = ctx.r11.s64 + -10256;
	// bl 0x82a4c758
	ctx.lr = 0x82409760;
	sub_82A4C758(ctx, base);
loc_82409760:
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

__attribute__((alias("__imp__sub_82409778"))) PPC_WEAK_FUNC(sub_82409778);
PPC_FUNC_IMPL(__imp__sub_82409778) {
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
	// li r3,7792
	ctx.r3.s64 = 7792;
	// bl 0x82833108
	ctx.lr = 0x8240978C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240979c
	if (ctx.cr0.eq) goto loc_8240979C;
	// bl 0x824a3cd8
	ctx.lr = 0x82409798;
	sub_824A3CD8(ctx, base);
	// b 0x824097a0
	goto loc_824097A0;
loc_8240979C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824097A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824097B0"))) PPC_WEAK_FUNC(sub_824097B0);
PPC_FUNC_IMPL(__imp__sub_824097B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,7792
	ctx.r3.s64 = 7792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824097B8"))) PPC_WEAK_FUNC(sub_824097B8);
PPC_FUNC_IMPL(__imp__sub_824097B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,30980(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30980);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824097f8
	if (!ctx.cr0.eq) goto loc_824097F8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,30980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30980, ctx.r11.u32);
	// addi r3,r9,6364
	ctx.r3.s64 = ctx.r9.s64 + 6364;
	// bl 0x82816528
	ctx.lr = 0x824097F0;
	sub_82816528(ctx, base);
	// stw r3,30976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30976, ctx.r3.u32);
	// b 0x824097fc
	goto loc_824097FC;
loc_824097F8:
	// lwz r3,30976(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30976);
loc_824097FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409810"))) PPC_WEAK_FUNC(sub_82409810);
PPC_FUNC_IMPL(__imp__sub_82409810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82409718
	ctx.lr = 0x82409830;
	sub_82409718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82409844;
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

__attribute__((alias("__imp__sub_82409860"))) PPC_WEAK_FUNC(sub_82409860);
PPC_FUNC_IMPL(__imp__sub_82409860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25676
	ctx.r31.s64 = ctx.r11.s64 + -25676;
	// lwz r11,-25672(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25672);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824098a8
	if (!ctx.cr0.eq) goto loc_824098A8;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,6376
	ctx.r9.s64 = ctx.r9.s64 + 6376;
	// stw r11,-25672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25672, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10232
	ctx.r3.s64 = ctx.r11.s64 + -10232;
	// bl 0x82a4c758
	ctx.lr = 0x824098A8;
	sub_82A4C758(ctx, base);
loc_824098A8:
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

__attribute__((alias("__imp__sub_824098C0"))) PPC_WEAK_FUNC(sub_824098C0);
PPC_FUNC_IMPL(__imp__sub_824098C0) {
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
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,36496
	ctx.r3.u64 = ctx.r3.u64 | 36496;
	// bl 0x82833108
	ctx.lr = 0x824098D8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824098e8
	if (ctx.cr0.eq) goto loc_824098E8;
	// bl 0x82969a40
	ctx.lr = 0x824098E4;
	sub_82969A40(ctx, base);
	// b 0x824098ec
	goto loc_824098EC;
loc_824098E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824098EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409900"))) PPC_WEAK_FUNC(sub_82409900);
PPC_FUNC_IMPL(__imp__sub_82409900) {
	PPC_FUNC_PROLOGUE();
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,36496
	ctx.r3.u64 = ctx.r3.u64 | 36496;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409910"))) PPC_WEAK_FUNC(sub_82409910);
PPC_FUNC_IMPL(__imp__sub_82409910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,30972(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30972);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82409950
	if (!ctx.cr0.eq) goto loc_82409950;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,30972(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30972, ctx.r11.u32);
	// addi r3,r9,6268
	ctx.r3.s64 = ctx.r9.s64 + 6268;
	// bl 0x82816528
	ctx.lr = 0x82409948;
	sub_82816528(ctx, base);
	// stw r3,30968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30968, ctx.r3.u32);
	// b 0x82409954
	goto loc_82409954;
loc_82409950:
	// lwz r3,30968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30968);
loc_82409954:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409968"))) PPC_WEAK_FUNC(sub_82409968);
PPC_FUNC_IMPL(__imp__sub_82409968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82409860
	ctx.lr = 0x82409988;
	sub_82409860(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240999C;
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

__attribute__((alias("__imp__sub_824099B8"))) PPC_WEAK_FUNC(sub_824099B8);
PPC_FUNC_IMPL(__imp__sub_824099B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82409a34
	if (ctx.cr6.eq) goto loc_82409A34;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824099fc
	if (ctx.cr0.eq) goto loc_824099FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x824099F4;
	sub_82A4CBE0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// b 0x82409a00
	goto loc_82409A00;
loc_824099FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82409A00:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82409A18;
	sub_82332C38(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82409a34
	if (ctx.cr6.eq) goto loc_82409A34;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a45878
	ctx.lr = 0x82409A34;
	sub_82A45878(ctx, base);
loc_82409A34:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82409a58
	if (ctx.cr6.eq) goto loc_82409A58;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82409A58;
	sub_82332C38(ctx, base);
loc_82409A58:
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

__attribute__((alias("__imp__sub_82409A78"))) PPC_WEAK_FUNC(sub_82409A78);
PPC_FUNC_IMPL(__imp__sub_82409A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82409ae8
	if (!ctx.cr6.eq) goto loc_82409AE8;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r31,r11,7896
	ctx.r31.s64 = ctx.r11.s64 + 7896;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82409ab4
	if (ctx.cr6.eq) goto loc_82409AB4;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x82409ab8
	goto loc_82409AB8;
loc_82409AB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82409AB8:
	// bl 0x82a4cc08
	ctx.lr = 0x82409ABC;
	sub_82A4CC08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82409b64
	if (ctx.cr0.eq) goto loc_82409B64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82409ad8
	if (ctx.cr6.eq) goto loc_82409AD8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x82409adc
	goto loc_82409ADC;
loc_82409AD8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82409ADC:
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// b 0x82409b68
	goto loc_82409B68;
loc_82409AE8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82409afc
	if (!ctx.cr6.eq) goto loc_82409AFC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82409AFC:
	// addic. r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r3.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82409b64
	if (ctx.cr0.lt) goto loc_82409B64;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
loc_82409B0C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82409b48
	if (ctx.cr6.eq) goto loc_82409B48;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82409B24:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82409b48
	if (!ctx.cr6.eq) goto loc_82409B48;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82409b24
	if (!ctx.cr0.eq) goto loc_82409B24;
loc_82409B48:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82409b68
	if (ctx.cr0.eq) goto loc_82409B68;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// bge 0x82409b0c
	if (!ctx.cr0.lt) goto loc_82409B0C;
loc_82409B64:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82409B68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409B80"))) PPC_WEAK_FUNC(sub_82409B80);
PPC_FUNC_IMPL(__imp__sub_82409B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,1000(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1000);
	// bl 0x82845820
	ctx.lr = 0x82409BAC;
	sub_82845820(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82409bc4
	if (ctx.cr0.eq) goto loc_82409BC4;
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82409bc4
	if (ctx.cr6.eq) goto loc_82409BC4;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82409BC4:
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409BE0"))) PPC_WEAK_FUNC(sub_82409BE0);
PPC_FUNC_IMPL(__imp__sub_82409BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82409c24
	if (ctx.cr6.eq) goto loc_82409C24;
	// bl 0x82409718
	ctx.lr = 0x82409C00;
	sub_82409718(ctx, base);
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
	ctx.lr = 0x82409C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82409c28
	if (!ctx.cr0.eq) goto loc_82409C28;
loc_82409C24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82409C28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409C40"))) PPC_WEAK_FUNC(sub_82409C40);
PPC_FUNC_IMPL(__imp__sub_82409C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82409c84
	if (ctx.cr6.eq) goto loc_82409C84;
	// bl 0x823ea258
	ctx.lr = 0x82409C60;
	sub_823EA258(ctx, base);
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
	ctx.lr = 0x82409C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82409c88
	if (!ctx.cr0.eq) goto loc_82409C88;
loc_82409C84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82409C88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409CA0"))) PPC_WEAK_FUNC(sub_82409CA0);
PPC_FUNC_IMPL(__imp__sub_82409CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82409CA8;
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
	// bl 0x82833180
	ctx.lr = 0x82409CC0;
	sub_82833180(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r11,r11,6400
	ctx.r11.s64 = ctx.r11.s64 + 6400;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82409CF8"))) PPC_WEAK_FUNC(sub_82409CF8);
PPC_FUNC_IMPL(__imp__sub_82409CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,6284
	ctx.r3.s64 = ctx.r11.s64 + 6284;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409D08"))) PPC_WEAK_FUNC(sub_82409D08);
PPC_FUNC_IMPL(__imp__sub_82409D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82409d58
	ctx.lr = 0x82409D28;
	sub_82409D58(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82409d3c
	if (ctx.cr6.eq) goto loc_82409D3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x82409D3C;
	sub_82333B08(ctx, base);
loc_82409D3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409D58"))) PPC_WEAK_FUNC(sub_82409D58);
PPC_FUNC_IMPL(__imp__sub_82409D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25688
	ctx.r31.s64 = ctx.r11.s64 + -25688;
	// lwz r11,-25712(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25712);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82409da0
	if (!ctx.cr0.eq) goto loc_82409DA0;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,6480
	ctx.r9.s64 = ctx.r9.s64 + 6480;
	// stw r11,-25712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25712, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10208
	ctx.r3.s64 = ctx.r11.s64 + -10208;
	// bl 0x82a4c758
	ctx.lr = 0x82409DA0;
	sub_82A4C758(ctx, base);
loc_82409DA0:
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

__attribute__((alias("__imp__sub_82409DB8"))) PPC_WEAK_FUNC(sub_82409DB8);
PPC_FUNC_IMPL(__imp__sub_82409DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,30964(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30964);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82409df8
	if (!ctx.cr0.eq) goto loc_82409DF8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,30964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30964, ctx.r11.u32);
	// addi r3,r9,6284
	ctx.r3.s64 = ctx.r9.s64 + 6284;
	// bl 0x82816528
	ctx.lr = 0x82409DF0;
	sub_82816528(ctx, base);
	// stw r3,30960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30960, ctx.r3.u32);
	// b 0x82409dfc
	goto loc_82409DFC;
loc_82409DF8:
	// lwz r3,30960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30960);
loc_82409DFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409E10"))) PPC_WEAK_FUNC(sub_82409E10);
PPC_FUNC_IMPL(__imp__sub_82409E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82409d58
	ctx.lr = 0x82409E30;
	sub_82409D58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82409E44;
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

__attribute__((alias("__imp__sub_82409E60"))) PPC_WEAK_FUNC(sub_82409E60);
PPC_FUNC_IMPL(__imp__sub_82409E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82409e98
	if (ctx.cr6.eq) goto loc_82409E98;
	// bl 0x82409d58
	ctx.lr = 0x82409E88;
	sub_82409D58(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82409e98
	if (!ctx.cr6.eq) goto loc_82409E98;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82409ea4
	goto loc_82409EA4;
loc_82409E98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x82409EA4;
	sub_82333C70(ctx, base);
loc_82409EA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409EC0"))) PPC_WEAK_FUNC(sub_82409EC0);
PPC_FUNC_IMPL(__imp__sub_82409EC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82409d58
	sub_82409D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82409EC8"))) PPC_WEAK_FUNC(sub_82409EC8);
PPC_FUNC_IMPL(__imp__sub_82409EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82409EE4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82409f44
	if (ctx.cr0.eq) goto loc_82409F44;
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
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,6400
	ctx.r9.s64 = ctx.r9.s64 + 6400;
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
	// b 0x82409f48
	goto loc_82409F48;
loc_82409F44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82409F48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409F60"))) PPC_WEAK_FUNC(sub_82409F60);
PPC_FUNC_IMPL(__imp__sub_82409F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82409F68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x824096c0
	ctx.lr = 0x82409F78;
	sub_824096C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,156
	ctx.r3.s64 = 156;
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r29,24(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82333900
	ctx.lr = 0x82409F8C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82409fc8
	if (ctx.cr0.eq) goto loc_82409FC8;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,35
	ctx.r9.s64 = 35;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r10,13160(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13160);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x82409fcc
	goto loc_82409FCC;
loc_82409FC8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82409FCC:
	// stw r30,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r30.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r29,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,13156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13156);
	// bl 0x8281abd8
	ctx.lr = 0x82409FE4;
	sub_8281ABD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82409FF0"))) PPC_WEAK_FUNC(sub_82409FF0);
PPC_FUNC_IMPL(__imp__sub_82409FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82409FF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8240a1c0
	ctx.lr = 0x8240A008;
	sub_8240A1C0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r11,r11,6768
	ctx.r11.s64 = ctx.r11.s64 + 6768;
	// addi r4,r30,128
	ctx.r4.s64 = ctx.r30.s64 + 128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,200
	ctx.r5.s64 = 200;
	// bl 0x82a4ea80
	ctx.lr = 0x8240A024;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// addi r4,r30,328
	ctx.r4.s64 = ctx.r30.s64 + 328;
	// li r5,200
	ctx.r5.s64 = 200;
	// bl 0x82a4ea80
	ctx.lr = 0x8240A034;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r30,528
	ctx.r4.s64 = ctx.r30.s64 + 528;
	// li r5,200
	ctx.r5.s64 = 200;
	// bl 0x82a4ea80
	ctx.lr = 0x8240A044;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,728
	ctx.r3.s64 = ctx.r31.s64 + 728;
	// addi r4,r30,728
	ctx.r4.s64 = ctx.r30.s64 + 728;
	// li r5,200
	ctx.r5.s64 = 200;
	// bl 0x82a4ea80
	ctx.lr = 0x8240A054;
	sub_82A4EA80(ctx, base);
	// lwz r11,928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 928);
	// addi r3,r31,940
	ctx.r3.s64 = ctx.r31.s64 + 940;
	// addi r4,r30,940
	ctx.r4.s64 = ctx.r30.s64 + 940;
	// li r5,100
	ctx.r5.s64 = 100;
	// stw r11,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r11.u32);
	// lwz r11,932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 932);
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
	// lwz r11,936(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 936);
	// stw r11,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8240A07C;
	sub_82A4EA80(ctx, base);
	// lfs f0,1040(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1040);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1040(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1040, temp.u32);
	// addi r29,r31,1136
	ctx.r29.s64 = ctx.r31.s64 + 1136;
	// addi r28,r30,1136
	ctx.r28.s64 = ctx.r30.s64 + 1136;
	// li r10,4
	ctx.r10.s64 = 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// lfs f0,1044(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1044);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1044(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// lfs f0,1048(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1048(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// lfs f0,1052(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1052);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1052(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1052, temp.u32);
	// lfs f0,1056(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1056(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1056, temp.u32);
	// lfs f0,1060(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1060);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1060(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1060, temp.u32);
	// lwz r11,1064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1064);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// lwz r11,1068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1068);
	// stw r11,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r11.u32);
	// lwz r11,1072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1072);
	// stw r11,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r11.u32);
	// lfs f0,1076(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1076);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1076(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1076, temp.u32);
	// lfs f0,1080(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1080);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1080(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1080, temp.u32);
	// lfs f0,1084(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1084(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1084, temp.u32);
	// lwz r11,1088(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1088);
	// stw r11,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r11.u32);
	// lwz r11,1092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1092);
	// stw r11,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r11.u32);
	// lwz r11,1096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1096);
	// stw r11,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r11.u32);
	// lwz r11,1100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1100);
	// stw r11,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r11.u32);
	// lfs f0,1104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1104, temp.u32);
	// lfs f0,1108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1108, temp.u32);
	// lfs f0,1112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1112, temp.u32);
	// lwz r11,1116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1116);
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,1120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1120, temp.u32);
	// lfs f0,1124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1124, temp.u32);
	// lwz r9,1128(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1128);
	// stw r9,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r9.u32);
	// lwz r9,1132(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1132);
	// stw r9,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r9.u32);
	// stw r10,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r10.u32);
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// stw r11,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r11.u32);
	// stw r11,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// beq cr6,0x8240a1b4
	if (ctx.cr6.eq) goto loc_8240A1B4;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8240a1b4
	if (!ctx.cr6.gt) goto loc_8240A1B4;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240a198
	if (ctx.cr0.eq) goto loc_8240A198;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8240A198;
	sub_82332C38(ctx, base);
loc_8240A198:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8240A1AC;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_8240A1B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8240A1C0"))) PPC_WEAK_FUNC(sub_8240A1C0);
PPC_FUNC_IMPL(__imp__sub_8240A1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8240A1C8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,6624
	ctx.r10.s64 = ctx.r10.s64 + 6624;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r27,8
	ctx.r31.s64 = ctx.r27.s64 + 8;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r26,r25,8
	ctx.r26.s64 = ctx.r25.s64 + 8;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// stw r30,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r30.u32);
	// stw r9,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r9.u32);
	// stw r30,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r30.u32);
	// stw r30,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r30.u32);
	// stw r30,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r30.u32);
	// stw r30,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r30.u32);
	// beq cr6,0x8240a2d0
	if (ctx.cr6.eq) goto loc_8240A2D0;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240a2d0
	if (!ctx.cr6.gt) goto loc_8240A2D0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240a250
	if (ctx.cr0.eq) goto loc_8240A250;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8240A250;
	sub_82332C38(ctx, base);
loc_8240A250:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240a2d0
	if (!ctx.cr6.gt) goto loc_8240A2D0;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
loc_8240A264:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x8240A278;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 * 40;
	// add. r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8240a2bc
	if (ctx.cr0.eq) goto loc_8240A2BC;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// add r28,r11,r24
	ctx.r28.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x8240A2A4;
	sub_823339B8(ctx, base);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
loc_8240A2BC:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,40
	ctx.r24.s64 = ctx.r24.s64 + 40;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8240a264
	if (ctx.cr6.lt) goto loc_8240A264;
loc_8240A2D0:
	// addi r4,r25,32
	ctx.r4.s64 = ctx.r25.s64 + 32;
	// addi r3,r27,32
	ctx.r3.s64 = ctx.r27.s64 + 32;
	// bl 0x82873b58
	ctx.lr = 0x8240A2DC;
	sub_82873B58(ctx, base);
	// lbz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 56);
	// addi r4,r25,68
	ctx.r4.s64 = ctx.r25.s64 + 68;
	// addi r3,r27,68
	ctx.r3.s64 = ctx.r27.s64 + 68;
	// stb r11,56(r27)
	PPC_STORE_U8(ctx.r27.u32 + 56, ctx.r11.u8);
	// lfs f0,60(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 60, temp.u32);
	// lfs f0,64(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 64, temp.u32);
	// bl 0x8240aa00
	ctx.lr = 0x8240A300;
	sub_8240AA00(ctx, base);
	// addi r31,r27,100
	ctx.r31.s64 = ctx.r27.s64 + 100;
	// addi r29,r25,100
	ctx.r29.s64 = ctx.r25.s64 + 100;
	// stw r30,108(r27)
	PPC_STORE_U32(ctx.r27.u32 + 108, ctx.r30.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r30.u32);
	// stw r30,116(r27)
	PPC_STORE_U32(ctx.r27.u32 + 116, ctx.r30.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r11,104(r27)
	PPC_STORE_U32(ctx.r27.u32 + 104, ctx.r11.u32);
	// stw r30,120(r27)
	PPC_STORE_U32(ctx.r27.u32 + 120, ctx.r30.u32);
	// stw r30,100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 100, ctx.r30.u32);
	// beq cr6,0x8240a374
	if (ctx.cr6.eq) goto loc_8240A374;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240a374
	if (!ctx.cr6.gt) goto loc_8240A374;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240a358
	if (ctx.cr0.eq) goto loc_8240A358;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8240A358;
	sub_82332C38(ctx, base);
loc_8240A358:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8240A36C;
	sub_82A45878(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8240A374:
	// lwz r11,124(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 124);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,124(r27)
	PPC_STORE_U32(ctx.r27.u32 + 124, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8240A388"))) PPC_WEAK_FUNC(sub_8240A388);
PPC_FUNC_IMPL(__imp__sub_8240A388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,6324
	ctx.r3.s64 = ctx.r11.s64 + 6324;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A398"))) PPC_WEAK_FUNC(sub_8240A398);
PPC_FUNC_IMPL(__imp__sub_8240A398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8240a3f8
	ctx.lr = 0x8240A3B8;
	sub_8240A3F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8240a3c8
	if (!ctx.cr6.eq) goto loc_8240A3C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8240a3dc
	goto loc_8240A3DC;
loc_8240A3C8:
	// bl 0x82333d20
	ctx.lr = 0x8240A3CC;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8240a3dc
	if (ctx.cr6.eq) goto loc_8240A3DC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240A3DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A3F8"))) PPC_WEAK_FUNC(sub_8240A3F8);
PPC_FUNC_IMPL(__imp__sub_8240A3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25700
	ctx.r31.s64 = ctx.r11.s64 + -25700;
	// lwz r11,-25692(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25692);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240a440
	if (!ctx.cr0.eq) goto loc_8240A440;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,6600
	ctx.r9.s64 = ctx.r9.s64 + 6600;
	// stw r11,-25692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25692, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10184
	ctx.r3.s64 = ctx.r11.s64 + -10184;
	// bl 0x82a4c758
	ctx.lr = 0x8240A440;
	sub_82A4C758(ctx, base);
loc_8240A440:
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

__attribute__((alias("__imp__sub_8240A458"))) PPC_WEAK_FUNC(sub_8240A458);
PPC_FUNC_IMPL(__imp__sub_8240A458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82833108
	ctx.lr = 0x8240A470;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8240a494
	if (ctx.cr0.eq) goto loc_8240A494;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8240A480;
	sub_82833180(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,6504
	ctx.r11.s64 = ctx.r11.s64 + 6504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8240a498
	goto loc_8240A498;
loc_8240A494:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240A498:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A4B0"))) PPC_WEAK_FUNC(sub_8240A4B0);
PPC_FUNC_IMPL(__imp__sub_8240A4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,30956(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30956);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240a4f0
	if (!ctx.cr0.eq) goto loc_8240A4F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,30956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30956, ctx.r11.u32);
	// addi r3,r9,6324
	ctx.r3.s64 = ctx.r9.s64 + 6324;
	// bl 0x82816528
	ctx.lr = 0x8240A4E8;
	sub_82816528(ctx, base);
	// stw r3,30952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30952, ctx.r3.u32);
	// b 0x8240a4f4
	goto loc_8240A4F4;
loc_8240A4F0:
	// lwz r3,30952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30952);
loc_8240A4F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A508"))) PPC_WEAK_FUNC(sub_8240A508);
PPC_FUNC_IMPL(__imp__sub_8240A508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8240a3f8
	ctx.lr = 0x8240A528;
	sub_8240A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240A53C;
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

__attribute__((alias("__imp__sub_8240A558"))) PPC_WEAK_FUNC(sub_8240A558);
PPC_FUNC_IMPL(__imp__sub_8240A558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8240a598
	if (ctx.cr6.eq) goto loc_8240A598;
	// bl 0x8240a3f8
	ctx.lr = 0x8240A578;
	sub_8240A3F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8240a588
	if (!ctx.cr6.eq) goto loc_8240A588;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8240a59c
	goto loc_8240A59C;
loc_8240A588:
	// bl 0x82333d20
	ctx.lr = 0x8240A58C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8240a59c
	if (ctx.cr6.eq) goto loc_8240A59C;
loc_8240A598:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240A59C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A5B0"))) PPC_WEAK_FUNC(sub_8240A5B0);
PPC_FUNC_IMPL(__imp__sub_8240A5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82833108
	ctx.lr = 0x8240A5CC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240a5f8
	if (ctx.cr0.eq) goto loc_8240A5F8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,6504
	ctx.r10.s64 = ctx.r10.s64 + 6504;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8240a5fc
	goto loc_8240A5FC;
loc_8240A5F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240A5FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A610"))) PPC_WEAK_FUNC(sub_8240A610);
PPC_FUNC_IMPL(__imp__sub_8240A610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8239d768
	ctx.lr = 0x8240A634;
	sub_8239D768(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8269b988
	ctx.lr = 0x8240A63C;
	sub_8269B988(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8239d768
	ctx.lr = 0x8240A644;
	sub_8239D768(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8240a980
	ctx.lr = 0x8240A64C;
	sub_8240A980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x8240A654;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240a664
	if (ctx.cr0.eq) goto loc_8240A664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8240A664;
	sub_82332DB8(ctx, base);
loc_8240A664:
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

__attribute__((alias("__imp__sub_8240A680"))) PPC_WEAK_FUNC(sub_8240A680);
PPC_FUNC_IMPL(__imp__sub_8240A680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,6340
	ctx.r3.s64 = ctx.r11.s64 + 6340;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A690"))) PPC_WEAK_FUNC(sub_8240A690);
PPC_FUNC_IMPL(__imp__sub_8240A690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8240a6e0
	ctx.lr = 0x8240A6B0;
	sub_8240A6E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8240a6c4
	if (ctx.cr6.eq) goto loc_8240A6C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8240a398
	ctx.lr = 0x8240A6C4;
	sub_8240A398(ctx, base);
loc_8240A6C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A6E0"))) PPC_WEAK_FUNC(sub_8240A6E0);
PPC_FUNC_IMPL(__imp__sub_8240A6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25696
	ctx.r31.s64 = ctx.r11.s64 + -25696;
	// lwz r11,-25704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25704);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240a728
	if (!ctx.cr0.eq) goto loc_8240A728;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,6748
	ctx.r9.s64 = ctx.r9.s64 + 6748;
	// stw r11,-25704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25704, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10160
	ctx.r3.s64 = ctx.r11.s64 + -10160;
	// bl 0x82a4c758
	ctx.lr = 0x8240A728;
	sub_82A4C758(ctx, base);
loc_8240A728:
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

__attribute__((alias("__imp__sub_8240A740"))) PPC_WEAK_FUNC(sub_8240A740);
PPC_FUNC_IMPL(__imp__sub_8240A740) {
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
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82833108
	ctx.lr = 0x8240A754;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240a764
	if (ctx.cr0.eq) goto loc_8240A764;
	// bl 0x8240a778
	ctx.lr = 0x8240A760;
	sub_8240A778(ctx, base);
	// b 0x8240a768
	goto loc_8240A768;
loc_8240A764:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240A768:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A778"))) PPC_WEAK_FUNC(sub_8240A778);
PPC_FUNC_IMPL(__imp__sub_8240A778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8240A790;
	sub_82833180(ctx, base);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r8,40
	ctx.r8.s64 = 40;
	// addi r9,r10,6624
	ctx.r9.s64 = ctx.r10.s64 + 6624;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8240A830"))) PPC_WEAK_FUNC(sub_8240A830);
PPC_FUNC_IMPL(__imp__sub_8240A830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,30948(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30948);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240a870
	if (!ctx.cr0.eq) goto loc_8240A870;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,30948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30948, ctx.r11.u32);
	// addi r3,r9,6340
	ctx.r3.s64 = ctx.r9.s64 + 6340;
	// bl 0x82816528
	ctx.lr = 0x8240A868;
	sub_82816528(ctx, base);
	// stw r3,30944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30944, ctx.r3.u32);
	// b 0x8240a874
	goto loc_8240A874;
loc_8240A870:
	// lwz r3,30944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30944);
loc_8240A874:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A888"))) PPC_WEAK_FUNC(sub_8240A888);
PPC_FUNC_IMPL(__imp__sub_8240A888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8240a6e0
	ctx.lr = 0x8240A8A8;
	sub_8240A6E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240A8BC;
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

__attribute__((alias("__imp__sub_8240A8D8"))) PPC_WEAK_FUNC(sub_8240A8D8);
PPC_FUNC_IMPL(__imp__sub_8240A8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8240a910
	if (ctx.cr6.eq) goto loc_8240A910;
	// bl 0x8240a6e0
	ctx.lr = 0x8240A900;
	sub_8240A6E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8240a910
	if (!ctx.cr6.eq) goto loc_8240A910;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8240a91c
	goto loc_8240A91C;
loc_8240A910:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240a558
	ctx.lr = 0x8240A91C;
	sub_8240A558(ctx, base);
loc_8240A91C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A938"))) PPC_WEAK_FUNC(sub_8240A938);
PPC_FUNC_IMPL(__imp__sub_8240A938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82833108
	ctx.lr = 0x8240A954;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240a968
	if (ctx.cr0.eq) goto loc_8240A968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8240a1c0
	ctx.lr = 0x8240A964;
	sub_8240A1C0(ctx, base);
	// b 0x8240a96c
	goto loc_8240A96C;
loc_8240A968:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240A96C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A980"))) PPC_WEAK_FUNC(sub_8240A980);
PPC_FUNC_IMPL(__imp__sub_8240A980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8240A988;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r28,16(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8240a9c4
	if (!ctx.cr6.gt) goto loc_8240A9C4;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8240A9A8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82333960
	ctx.lr = 0x8240A9B8;
	sub_82333960(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x8240a9a8
	if (!ctx.cr0.eq) goto loc_8240A9A8;
loc_8240A9C4:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,40
	ctx.r6.s64 = 40;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8240A9DC;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240a9ec
	if (ctx.cr6.eq) goto loc_8240A9EC;
	// bl 0x82332db8
	ctx.lr = 0x8240A9EC;
	sub_82332DB8(ctx, base);
loc_8240A9EC:
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8240AA00"))) PPC_WEAK_FUNC(sub_8240AA00);
PPC_FUNC_IMPL(__imp__sub_8240AA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8240AA08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,12
	ctx.r11.s64 = 12;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// beq cr6,0x8240aa80
	if (ctx.cr6.eq) goto loc_8240AA80;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240aa80
	if (!ctx.cr6.gt) goto loc_8240AA80;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240aa64
	if (ctx.cr0.eq) goto loc_8240AA64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x8240AA64;
	sub_82332C38(ctx, base);
loc_8240AA64:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8240AA78;
	sub_82A45878(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8240AA80:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8240aaa4
	if (!ctx.cr6.gt) goto loc_8240AAA4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8240AAA4:
	// bl 0x82333900
	ctx.lr = 0x8240AAA8;
	sub_82333900(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8240aadc
	if (!ctx.cr6.gt) goto loc_8240AADC;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8240AAC0:
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8240aac0
	if (ctx.cr6.lt) goto loc_8240AAC0;
loc_8240AADC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8240ab2c
	if (!ctx.cr6.gt) goto loc_8240AB2C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8240AAF0:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stwx r11,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8240aaf0
	if (ctx.cr6.lt) goto loc_8240AAF0;
loc_8240AB2C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240ab3c
	if (ctx.cr6.eq) goto loc_8240AB3C;
	// bl 0x82332db8
	ctx.lr = 0x8240AB3C;
	sub_82332DB8(ctx, base);
loc_8240AB3C:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8240AB50"))) PPC_WEAK_FUNC(sub_8240AB50);
PPC_FUNC_IMPL(__imp__sub_8240AB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828c8b78
	ctx.lr = 0x8240AB70;
	sub_828C8B78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240ab80
	if (ctx.cr0.eq) goto loc_8240AB80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8240AB80;
	sub_82332DB8(ctx, base);
loc_8240AB80:
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

__attribute__((alias("__imp__sub_8240ABA0"))) PPC_WEAK_FUNC(sub_8240ABA0);
PPC_FUNC_IMPL(__imp__sub_8240ABA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,6348
	ctx.r3.s64 = ctx.r11.s64 + 6348;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240ABB0"))) PPC_WEAK_FUNC(sub_8240ABB0);
PPC_FUNC_IMPL(__imp__sub_8240ABB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8240a6e0
	sub_8240A6E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8240ABB8"))) PPC_WEAK_FUNC(sub_8240ABB8);
PPC_FUNC_IMPL(__imp__sub_8240ABB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1160
	ctx.r3.s64 = 1160;
	// bl 0x82833108
	ctx.lr = 0x8240ABD4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240abe8
	if (ctx.cr0.eq) goto loc_8240ABE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82409ff0
	ctx.lr = 0x8240ABE4;
	sub_82409FF0(ctx, base);
	// b 0x8240abec
	goto loc_8240ABEC;
loc_8240ABE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240ABEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240AC00"))) PPC_WEAK_FUNC(sub_8240AC00);
PPC_FUNC_IMPL(__imp__sub_8240AC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8240ac60
	ctx.lr = 0x8240AC20;
	sub_8240AC60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8240ac30
	if (!ctx.cr6.eq) goto loc_8240AC30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8240ac48
	goto loc_8240AC48;
loc_8240AC30:
	// bl 0x8240a6e0
	ctx.lr = 0x8240AC34;
	sub_8240A6E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8240ac48
	if (ctx.cr6.eq) goto loc_8240AC48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8240a398
	ctx.lr = 0x8240AC48;
	sub_8240A398(ctx, base);
loc_8240AC48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240AC60"))) PPC_WEAK_FUNC(sub_8240AC60);
PPC_FUNC_IMPL(__imp__sub_8240AC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25708
	ctx.r31.s64 = ctx.r11.s64 + -25708;
	// lwz r11,-25716(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25716);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240aca8
	if (!ctx.cr0.eq) goto loc_8240ACA8;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,6932
	ctx.r9.s64 = ctx.r9.s64 + 6932;
	// stw r11,-25716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25716, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10136
	ctx.r3.s64 = ctx.r11.s64 + -10136;
	// bl 0x82a4c758
	ctx.lr = 0x8240ACA8;
	sub_82A4C758(ctx, base);
loc_8240ACA8:
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

__attribute__((alias("__imp__sub_8240ACC0"))) PPC_WEAK_FUNC(sub_8240ACC0);
PPC_FUNC_IMPL(__imp__sub_8240ACC0) {
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
	// li r3,1160
	ctx.r3.s64 = 1160;
	// bl 0x82833108
	ctx.lr = 0x8240ACD4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240ace4
	if (ctx.cr0.eq) goto loc_8240ACE4;
	// bl 0x828c8a78
	ctx.lr = 0x8240ACE0;
	sub_828C8A78(ctx, base);
	// b 0x8240ace8
	goto loc_8240ACE8;
loc_8240ACE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240ACE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240ACF8"))) PPC_WEAK_FUNC(sub_8240ACF8);
PPC_FUNC_IMPL(__imp__sub_8240ACF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,30940(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30940);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240ad38
	if (!ctx.cr0.eq) goto loc_8240AD38;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,30940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30940, ctx.r11.u32);
	// addi r3,r9,6348
	ctx.r3.s64 = ctx.r9.s64 + 6348;
	// bl 0x82816528
	ctx.lr = 0x8240AD30;
	sub_82816528(ctx, base);
	// stw r3,30936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30936, ctx.r3.u32);
	// b 0x8240ad3c
	goto loc_8240AD3C;
loc_8240AD38:
	// lwz r3,30936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30936);
loc_8240AD3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240AD50"))) PPC_WEAK_FUNC(sub_8240AD50);
PPC_FUNC_IMPL(__imp__sub_8240AD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8240ac60
	ctx.lr = 0x8240AD70;
	sub_8240AC60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240AD84;
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

__attribute__((alias("__imp__sub_8240ADA0"))) PPC_WEAK_FUNC(sub_8240ADA0);
PPC_FUNC_IMPL(__imp__sub_8240ADA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8240add8
	if (ctx.cr6.eq) goto loc_8240ADD8;
	// bl 0x8240ac60
	ctx.lr = 0x8240ADC8;
	sub_8240AC60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8240add8
	if (!ctx.cr6.eq) goto loc_8240ADD8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8240ade4
	goto loc_8240ADE4;
loc_8240ADD8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240a8d8
	ctx.lr = 0x8240ADE4;
	sub_8240A8D8(ctx, base);
loc_8240ADE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240AE00"))) PPC_WEAK_FUNC(sub_8240AE00);
PPC_FUNC_IMPL(__imp__sub_8240AE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8240ae38
	if (ctx.cr6.eq) goto loc_8240AE38;
	// bl 0x82410438
	ctx.lr = 0x8240AE28;
	sub_82410438(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8240ae38
	if (!ctx.cr6.eq) goto loc_8240AE38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8240ae44
	goto loc_8240AE44;
loc_8240AE38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339ee8
	ctx.lr = 0x8240AE44;
	sub_82339EE8(ctx, base);
loc_8240AE44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

