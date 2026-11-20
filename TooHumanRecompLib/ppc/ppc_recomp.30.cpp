#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823E7358"))) PPC_WEAK_FUNC(sub_823E7358);
PPC_FUNC_IMPL(__imp__sub_823E7358) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E7368"))) PPC_WEAK_FUNC(sub_823E7368);
PPC_FUNC_IMPL(__imp__sub_823E7368) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7370"))) PPC_WEAK_FUNC(sub_823E7370);
PPC_FUNC_IMPL(__imp__sub_823E7370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1488
	ctx.r3.s64 = 1488;
	// bl 0x82833108
	ctx.lr = 0x823E738C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e73a0
	if (ctx.cr0.eq) goto loc_823E73A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400248
	ctx.lr = 0x823E739C;
	sub_82400248(ctx, base);
	// b 0x823e73a4
	goto loc_823E73A4;
loc_823E73A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E73A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E73B8"))) PPC_WEAK_FUNC(sub_823E73B8);
PPC_FUNC_IMPL(__imp__sub_823E73B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,1552(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1552);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E73C0"))) PPC_WEAK_FUNC(sub_823E73C0);
PPC_FUNC_IMPL(__imp__sub_823E73C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,1548(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1548);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E73C8"))) PPC_WEAK_FUNC(sub_823E73C8);
PPC_FUNC_IMPL(__imp__sub_823E73C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1540(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1540);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E73D0"))) PPC_WEAK_FUNC(sub_823E73D0);
PPC_FUNC_IMPL(__imp__sub_823E73D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1536(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E73D8"))) PPC_WEAK_FUNC(sub_823E73D8);
PPC_FUNC_IMPL(__imp__sub_823E73D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1532(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1532);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E73E0"))) PPC_WEAK_FUNC(sub_823E73E0);
PPC_FUNC_IMPL(__imp__sub_823E73E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1528(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1528);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E73E8"))) PPC_WEAK_FUNC(sub_823E73E8);
PPC_FUNC_IMPL(__imp__sub_823E73E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1524(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1524);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E73F0"))) PPC_WEAK_FUNC(sub_823E73F0);
PPC_FUNC_IMPL(__imp__sub_823E73F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1520);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E73F8"))) PPC_WEAK_FUNC(sub_823E73F8);
PPC_FUNC_IMPL(__imp__sub_823E73F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E7424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e7438
	if (ctx.cr0.eq) goto loc_823E7438;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828b0c68
	ctx.lr = 0x823E7434;
	sub_828B0C68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823E7438:
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

__attribute__((alias("__imp__sub_823E7458"))) PPC_WEAK_FUNC(sub_823E7458);
PPC_FUNC_IMPL(__imp__sub_823E7458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x823E7460;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r4,r31,496
	ctx.r4.s64 = ctx.r31.s64 + 496;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x823E747C;
	sub_82A4EA80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E7490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e74c4
	if (ctx.cr0.eq) goto loc_823E74C4;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823E74B0:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x823e74b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E74B0;
loc_823E74C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E74D0"))) PPC_WEAK_FUNC(sub_823E74D0);
PPC_FUNC_IMPL(__imp__sub_823E74D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1424, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E74D8"))) PPC_WEAK_FUNC(sub_823E74D8);
PPC_FUNC_IMPL(__imp__sub_823E74D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1424);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E74E0"))) PPC_WEAK_FUNC(sub_823E74E0);
PPC_FUNC_IMPL(__imp__sub_823E74E0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1420, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E74E8"))) PPC_WEAK_FUNC(sub_823E74E8);
PPC_FUNC_IMPL(__imp__sub_823E74E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1420(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1420);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E74F0"))) PPC_WEAK_FUNC(sub_823E74F0);
PPC_FUNC_IMPL(__imp__sub_823E74F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x823E74F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r4,r31,496
	ctx.r4.s64 = ctx.r31.s64 + 496;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x823E7514;
	sub_82A4EA80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E7528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x823e755c
	if (ctx.cr0.eq) goto loc_823E755C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828aee00
	ctx.lr = 0x823E753C;
	sub_828AEE00(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823E7548:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x823e7548
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E7548;
loc_823E755C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7568"))) PPC_WEAK_FUNC(sub_823E7568);
PPC_FUNC_IMPL(__imp__sub_823E7568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e75d0
	if (ctx.cr6.eq) goto loc_823E75D0;
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
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E75B8;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823e9cf0
	ctx.lr = 0x823E75C4;
	sub_823E9CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x823e98b8
	ctx.lr = 0x823E75D0;
	sub_823E98B8(ctx, base);
loc_823E75D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824d2430
	ctx.lr = 0x823E75DC;
	sub_824D2430(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r11,r11,-30272
	ctx.r11.s64 = ctx.r11.s64 + -30272;
	// addi r10,r10,-30144
	ctx.r10.s64 = ctx.r10.s64 + -30144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r11,-29968
	ctx.r8.s64 = ctx.r11.s64 + -29968;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r9,r9,-28408
	ctx.r9.s64 = ctx.r9.s64 + -28408;
	// addi r7,r11,31532
	ctx.r7.s64 = ctx.r11.s64 + 31532;
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7680"))) PPC_WEAK_FUNC(sub_823E7680);
PPC_FUNC_IMPL(__imp__sub_823E7680) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fbe60
	sub_823FBE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7690"))) PPC_WEAK_FUNC(sub_823E7690);
PPC_FUNC_IMPL(__imp__sub_823E7690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fbec0
	sub_823FBEC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E76A0"))) PPC_WEAK_FUNC(sub_823E76A0);
PPC_FUNC_IMPL(__imp__sub_823E76A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fbeb8
	sub_823FBEB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E76B0"))) PPC_WEAK_FUNC(sub_823E76B0);
PPC_FUNC_IMPL(__imp__sub_823E76B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82404630
	sub_82404630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E76B8"))) PPC_WEAK_FUNC(sub_823E76B8);
PPC_FUNC_IMPL(__imp__sub_823E76B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e76c8
	sub_823E76C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E76C8"))) PPC_WEAK_FUNC(sub_823E76C8);
PPC_FUNC_IMPL(__imp__sub_823E76C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823E76E4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e76fc
	if (ctx.cr0.eq) goto loc_823E76FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x823fbcf8
	ctx.lr = 0x823E76F8;
	sub_823FBCF8(ctx, base);
	// b 0x823e7700
	goto loc_823E7700;
loc_823E76FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E7700:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7718
	if (ctx.cr6.eq) goto loc_823E7718;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_823E7718:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7730"))) PPC_WEAK_FUNC(sub_823E7730);
PPC_FUNC_IMPL(__imp__sub_823E7730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e7740
	sub_823E7740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7740"))) PPC_WEAK_FUNC(sub_823E7740);
PPC_FUNC_IMPL(__imp__sub_823E7740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8792
	ctx.r3.s64 = ctx.r11.s64 + 8792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7750"))) PPC_WEAK_FUNC(sub_823E7750);
PPC_FUNC_IMPL(__imp__sub_823E7750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d2540
	sub_824D2540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7760"))) PPC_WEAK_FUNC(sub_823E7760);
PPC_FUNC_IMPL(__imp__sub_823E7760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e68c8
	sub_823E68C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7770"))) PPC_WEAK_FUNC(sub_823E7770);
PPC_FUNC_IMPL(__imp__sub_823E7770) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d25b8
	sub_824D25B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7780"))) PPC_WEAK_FUNC(sub_823E7780);
PPC_FUNC_IMPL(__imp__sub_823E7780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823eda00
	sub_823EDA00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7790"))) PPC_WEAK_FUNC(sub_823E7790);
PPC_FUNC_IMPL(__imp__sub_823E7790) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823fbe60
	sub_823FBE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E77A0"))) PPC_WEAK_FUNC(sub_823E77A0);
PPC_FUNC_IMPL(__imp__sub_823E77A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e68b0
	sub_823E68B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E77B0"))) PPC_WEAK_FUNC(sub_823E77B0);
PPC_FUNC_IMPL(__imp__sub_823E77B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e7830
	if (ctx.cr6.eq) goto loc_823E7830;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r11,r11,-27468
	ctx.r11.s64 = ctx.r11.s64 + -27468;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// addi r11,r8,22500
	ctx.r11.s64 = ctx.r8.s64 + 22500;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E780C;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x823e9cf0
	ctx.lr = 0x823E7818;
	sub_823E9CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823e98b8
	ctx.lr = 0x823E7824;
	sub_823E98B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x824d2430
	ctx.lr = 0x823E7830;
	sub_824D2430(ctx, base);
loc_823E7830:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r10,r10,-29520
	ctx.r10.s64 = ctx.r10.s64 + -29520;
	// addi r9,r9,-29344
	ctx.r9.s64 = ctx.r9.s64 + -29344;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r8,r8,-22744
	ctx.r8.s64 = ctx.r8.s64 + -22744;
	// addi r7,r7,31532
	ctx.r7.s64 = ctx.r7.s64 + 31532;
	// lis r6,-32235
	ctx.r6.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r10,r6,-29288
	ctx.r10.s64 = ctx.r6.s64 + -29288;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E78D8"))) PPC_WEAK_FUNC(sub_823E78D8);
PPC_FUNC_IMPL(__imp__sub_823E78D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fc0a0
	sub_823FC0A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E78E8"))) PPC_WEAK_FUNC(sub_823E78E8);
PPC_FUNC_IMPL(__imp__sub_823E78E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fc100
	sub_823FC100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E78F8"))) PPC_WEAK_FUNC(sub_823E78F8);
PPC_FUNC_IMPL(__imp__sub_823E78F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e7908
	sub_823E7908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7908"))) PPC_WEAK_FUNC(sub_823E7908);
PPC_FUNC_IMPL(__imp__sub_823E7908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823E7924;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e793c
	if (ctx.cr0.eq) goto loc_823E793C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x823fbf20
	ctx.lr = 0x823E7938;
	sub_823FBF20(ctx, base);
	// b 0x823e7940
	goto loc_823E7940;
loc_823E793C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E7940:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7954
	if (ctx.cr6.eq) goto loc_823E7954;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823E7954:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7968"))) PPC_WEAK_FUNC(sub_823E7968);
PPC_FUNC_IMPL(__imp__sub_823E7968) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e7978
	sub_823E7978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7978"))) PPC_WEAK_FUNC(sub_823E7978);
PPC_FUNC_IMPL(__imp__sub_823E7978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8860
	ctx.r3.s64 = ctx.r11.s64 + 8860;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7988"))) PPC_WEAK_FUNC(sub_823E7988);
PPC_FUNC_IMPL(__imp__sub_823E7988) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d2af8
	sub_824D2AF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7998"))) PPC_WEAK_FUNC(sub_823E7998);
PPC_FUNC_IMPL(__imp__sub_823E7998) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d2940
	sub_824D2940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E79A8"))) PPC_WEAK_FUNC(sub_823E79A8);
PPC_FUNC_IMPL(__imp__sub_823E79A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823fc0a0
	sub_823FC0A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E79B8"))) PPC_WEAK_FUNC(sub_823E79B8);
PPC_FUNC_IMPL(__imp__sub_823E79B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e7a50
	if (ctx.cr6.eq) goto loc_823E7A50;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-21564
	ctx.r11.s64 = ctx.r11.s64 + -21564;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r8,22500
	ctx.r11.s64 = ctx.r8.s64 + 22500;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// addi r10,r7,28628
	ctx.r10.s64 = ctx.r7.s64 + 28628;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E7A20;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x823e9cf0
	ctx.lr = 0x823E7A2C;
	sub_823E9CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823e98b8
	ctx.lr = 0x823E7A38;
	sub_823E98B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x824d2430
	ctx.lr = 0x823E7A44;
	sub_824D2430(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x823e8238
	ctx.lr = 0x823E7A50;
	sub_823E8238(ctx, base);
loc_823E7A50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r10,r10,-31832
	ctx.r10.s64 = ctx.r10.s64 + -31832;
	// addi r9,r9,-31656
	ctx.r9.s64 = ctx.r9.s64 + -31656;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r8,r8,-22744
	ctx.r8.s64 = ctx.r8.s64 + -22744;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// addi r7,r7,31532
	ctx.r7.s64 = ctx.r7.s64 + 31532;
	// lis r5,-32235
	ctx.r5.s64 = -2112552960;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r10,r6,-25608
	ctx.r10.s64 = ctx.r6.s64 + -25608;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r5,-31604
	ctx.r6.s64 = ctx.r5.s64 + -31604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stwx r6,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7B08"))) PPC_WEAK_FUNC(sub_823E7B08);
PPC_FUNC_IMPL(__imp__sub_823E7B08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e7b18
	sub_823E7B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7B18"))) PPC_WEAK_FUNC(sub_823E7B18);
PPC_FUNC_IMPL(__imp__sub_823E7B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8620
	ctx.r3.s64 = ctx.r11.s64 + 8620;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7B28"))) PPC_WEAK_FUNC(sub_823E7B28);
PPC_FUNC_IMPL(__imp__sub_823E7B28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fc870
	sub_823FC870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7B38"))) PPC_WEAK_FUNC(sub_823E7B38);
PPC_FUNC_IMPL(__imp__sub_823E7B38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fc8d0
	sub_823FC8D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7B48"))) PPC_WEAK_FUNC(sub_823E7B48);
PPC_FUNC_IMPL(__imp__sub_823E7B48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e7b58
	sub_823E7B58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7B58"))) PPC_WEAK_FUNC(sub_823E7B58);
PPC_FUNC_IMPL(__imp__sub_823E7B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x82833108
	ctx.lr = 0x823E7B74;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e7b8c
	if (ctx.cr0.eq) goto loc_823E7B8C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x823fc6a8
	ctx.lr = 0x823E7B88;
	sub_823FC6A8(ctx, base);
	// b 0x823e7b90
	goto loc_823E7B90;
loc_823E7B8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E7B90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7ba4
	if (ctx.cr6.eq) goto loc_823E7BA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823E7BA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7BB8"))) PPC_WEAK_FUNC(sub_823E7BB8);
PPC_FUNC_IMPL(__imp__sub_823E7BB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d19e0
	sub_824D19E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7BC8"))) PPC_WEAK_FUNC(sub_823E7BC8);
PPC_FUNC_IMPL(__imp__sub_823E7BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823fc870
	sub_823FC870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7BD8"))) PPC_WEAK_FUNC(sub_823E7BD8);
PPC_FUNC_IMPL(__imp__sub_823E7BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e7c58
	if (ctx.cr6.eq) goto loc_823E7C58;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r11,r11,-27468
	ctx.r11.s64 = ctx.r11.s64 + -27468;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// addi r11,r8,22500
	ctx.r11.s64 = ctx.r8.s64 + 22500;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E7C34;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x823e9cf0
	ctx.lr = 0x823E7C40;
	sub_823E9CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823e98b8
	ctx.lr = 0x823E7C4C;
	sub_823E98B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x824d2430
	ctx.lr = 0x823E7C58;
	sub_824D2430(ctx, base);
loc_823E7C58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r10,r10,-27424
	ctx.r10.s64 = ctx.r10.s64 + -27424;
	// addi r9,r9,-27248
	ctx.r9.s64 = ctx.r9.s64 + -27248;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r8,r8,-22744
	ctx.r8.s64 = ctx.r8.s64 + -22744;
	// addi r7,r7,31532
	ctx.r7.s64 = ctx.r7.s64 + 31532;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r10,r6,-23712
	ctx.r10.s64 = ctx.r6.s64 + -23712;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7D00"))) PPC_WEAK_FUNC(sub_823E7D00);
PPC_FUNC_IMPL(__imp__sub_823E7D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e7d10
	sub_823E7D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7D10"))) PPC_WEAK_FUNC(sub_823E7D10);
PPC_FUNC_IMPL(__imp__sub_823E7D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,9052
	ctx.r3.s64 = ctx.r11.s64 + 9052;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7D20"))) PPC_WEAK_FUNC(sub_823E7D20);
PPC_FUNC_IMPL(__imp__sub_823E7D20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fcab8
	sub_823FCAB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7D30"))) PPC_WEAK_FUNC(sub_823E7D30);
PPC_FUNC_IMPL(__imp__sub_823E7D30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fcb18
	sub_823FCB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7D40"))) PPC_WEAK_FUNC(sub_823E7D40);
PPC_FUNC_IMPL(__imp__sub_823E7D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e7d50
	sub_823E7D50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7D50"))) PPC_WEAK_FUNC(sub_823E7D50);
PPC_FUNC_IMPL(__imp__sub_823E7D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823E7D6C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e7d84
	if (ctx.cr0.eq) goto loc_823E7D84;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x823fc938
	ctx.lr = 0x823E7D80;
	sub_823FC938(ctx, base);
	// b 0x823e7d88
	goto loc_823E7D88;
loc_823E7D84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E7D88:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7d9c
	if (ctx.cr6.eq) goto loc_823E7D9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823E7D9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7DB0"))) PPC_WEAK_FUNC(sub_823E7DB0);
PPC_FUNC_IMPL(__imp__sub_823E7DB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d3868
	sub_824D3868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7DC0"))) PPC_WEAK_FUNC(sub_823E7DC0);
PPC_FUNC_IMPL(__imp__sub_823E7DC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d36f8
	sub_824D36F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7DD0"))) PPC_WEAK_FUNC(sub_823E7DD0);
PPC_FUNC_IMPL(__imp__sub_823E7DD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823fcab8
	sub_823FCAB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7DE0"))) PPC_WEAK_FUNC(sub_823E7DE0);
PPC_FUNC_IMPL(__imp__sub_823E7DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e7e60
	if (ctx.cr6.eq) goto loc_823E7E60;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r11,r11,-27468
	ctx.r11.s64 = ctx.r11.s64 + -27468;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// addi r11,r8,22500
	ctx.r11.s64 = ctx.r8.s64 + 22500;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E7E3C;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x823e9cf0
	ctx.lr = 0x823E7E48;
	sub_823E9CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823e98b8
	ctx.lr = 0x823E7E54;
	sub_823E98B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x824d2430
	ctx.lr = 0x823E7E60;
	sub_824D2430(ctx, base);
loc_823E7E60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r10,r10,-27696
	ctx.r10.s64 = ctx.r10.s64 + -27696;
	// addi r9,r9,-27520
	ctx.r9.s64 = ctx.r9.s64 + -27520;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r8,r8,-22744
	ctx.r8.s64 = ctx.r8.s64 + -22744;
	// addi r7,r7,31532
	ctx.r7.s64 = ctx.r7.s64 + 31532;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r10,r6,-23712
	ctx.r10.s64 = ctx.r6.s64 + -23712;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7F08"))) PPC_WEAK_FUNC(sub_823E7F08);
PPC_FUNC_IMPL(__imp__sub_823E7F08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e7f18
	sub_823E7F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7F18"))) PPC_WEAK_FUNC(sub_823E7F18);
PPC_FUNC_IMPL(__imp__sub_823E7F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,9012
	ctx.r3.s64 = ctx.r11.s64 + 9012;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7F28"))) PPC_WEAK_FUNC(sub_823E7F28);
PPC_FUNC_IMPL(__imp__sub_823E7F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fcd00
	sub_823FCD00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7F38"))) PPC_WEAK_FUNC(sub_823E7F38);
PPC_FUNC_IMPL(__imp__sub_823E7F38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fcd60
	sub_823FCD60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7F48"))) PPC_WEAK_FUNC(sub_823E7F48);
PPC_FUNC_IMPL(__imp__sub_823E7F48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e7f58
	sub_823E7F58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7F58"))) PPC_WEAK_FUNC(sub_823E7F58);
PPC_FUNC_IMPL(__imp__sub_823E7F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823E7F74;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e7f8c
	if (ctx.cr0.eq) goto loc_823E7F8C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x823fcb80
	ctx.lr = 0x823E7F88;
	sub_823FCB80(ctx, base);
	// b 0x823e7f90
	goto loc_823E7F90;
loc_823E7F8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E7F90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7fa4
	if (ctx.cr6.eq) goto loc_823E7FA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823E7FA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7FB8"))) PPC_WEAK_FUNC(sub_823E7FB8);
PPC_FUNC_IMPL(__imp__sub_823E7FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d3350
	sub_824D3350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7FC8"))) PPC_WEAK_FUNC(sub_823E7FC8);
PPC_FUNC_IMPL(__imp__sub_823E7FC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823fcd00
	sub_823FCD00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7FD8"))) PPC_WEAK_FUNC(sub_823E7FD8);
PPC_FUNC_IMPL(__imp__sub_823E7FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e8058
	if (ctx.cr6.eq) goto loc_823E8058;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r11,r11,-32148
	ctx.r11.s64 = ctx.r11.s64 + -32148;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// addi r11,r8,22500
	ctx.r11.s64 = ctx.r8.s64 + 22500;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E8034;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823e9cf0
	ctx.lr = 0x823E8040;
	sub_823E9CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823e98b8
	ctx.lr = 0x823E804C;
	sub_823E98B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x824d2430
	ctx.lr = 0x823E8058;
	sub_824D2430(ctx, base);
loc_823E8058:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,31752
	ctx.r11.s64 = ctx.r11.s64 + 31752;
	// addi r9,r9,31760
	ctx.r9.s64 = ctx.r9.s64 + 31760;
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
	// addi r10,r8,31936
	ctx.r10.s64 = ctx.r8.s64 + 31936;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r9,r9,31992
	ctx.r9.s64 = ctx.r9.s64 + 31992;
	// addi r8,r8,31532
	ctx.r8.s64 = ctx.r8.s64 + 31532;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r7,32064
	ctx.r7.s64 = ctx.r7.s64 + 32064;
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
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8110"))) PPC_WEAK_FUNC(sub_823E8110);
PPC_FUNC_IMPL(__imp__sub_823E8110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fcf88
	sub_823FCF88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8120"))) PPC_WEAK_FUNC(sub_823E8120);
PPC_FUNC_IMPL(__imp__sub_823E8120) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fcff0
	sub_823FCFF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8130"))) PPC_WEAK_FUNC(sub_823E8130);
PPC_FUNC_IMPL(__imp__sub_823E8130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e8140
	sub_823E8140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8140"))) PPC_WEAK_FUNC(sub_823E8140);
PPC_FUNC_IMPL(__imp__sub_823E8140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823E815C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e8174
	if (ctx.cr0.eq) goto loc_823E8174;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x823fcdd0
	ctx.lr = 0x823E8170;
	sub_823FCDD0(ctx, base);
	// b 0x823e8178
	goto loc_823E8178;
loc_823E8174:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E8178:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e8190
	if (ctx.cr6.eq) goto loc_823E8190;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_823E8190:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E81A8"))) PPC_WEAK_FUNC(sub_823E81A8);
PPC_FUNC_IMPL(__imp__sub_823E81A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e81b8
	sub_823E81B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E81B8"))) PPC_WEAK_FUNC(sub_823E81B8);
PPC_FUNC_IMPL(__imp__sub_823E81B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8456
	ctx.r3.s64 = ctx.r11.s64 + 8456;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E81C8"))) PPC_WEAK_FUNC(sub_823E81C8);
PPC_FUNC_IMPL(__imp__sub_823E81C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d62f8
	sub_824D62F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E81D8"))) PPC_WEAK_FUNC(sub_823E81D8);
PPC_FUNC_IMPL(__imp__sub_823E81D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d61a8
	sub_824D61A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E81E8"))) PPC_WEAK_FUNC(sub_823E81E8);
PPC_FUNC_IMPL(__imp__sub_823E81E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d6308
	sub_824D6308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E81F8"))) PPC_WEAK_FUNC(sub_823E81F8);
PPC_FUNC_IMPL(__imp__sub_823E81F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823e8380
	sub_823E8380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8208"))) PPC_WEAK_FUNC(sub_823E8208);
PPC_FUNC_IMPL(__imp__sub_823E8208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823fcf88
	sub_823FCF88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8218"))) PPC_WEAK_FUNC(sub_823E8218);
PPC_FUNC_IMPL(__imp__sub_823E8218) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d64d0
	sub_824D64D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8228"))) PPC_WEAK_FUNC(sub_823E8228);
PPC_FUNC_IMPL(__imp__sub_823E8228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d6678
	sub_824D6678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8238"))) PPC_WEAK_FUNC(sub_823E8238);
PPC_FUNC_IMPL(__imp__sub_823E8238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e82b8
	if (ctx.cr6.eq) goto loc_823E82B8;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r11,r11,-32148
	ctx.r11.s64 = ctx.r11.s64 + -32148;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// addi r11,r8,22500
	ctx.r11.s64 = ctx.r8.s64 + 22500;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E8294;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823e9cf0
	ctx.lr = 0x823E82A0;
	sub_823E9CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823e98b8
	ctx.lr = 0x823E82AC;
	sub_823E98B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x824d2430
	ctx.lr = 0x823E82B8;
	sub_824D2430(ctx, base);
loc_823E82B8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,27492
	ctx.r11.s64 = ctx.r11.s64 + 27492;
	// addi r9,r9,-32576
	ctx.r9.s64 = ctx.r9.s64 + -32576;
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
	// addi r10,r8,-32400
	ctx.r10.s64 = ctx.r8.s64 + -32400;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r9,r9,-32344
	ctx.r9.s64 = ctx.r9.s64 + -32344;
	// addi r8,r8,31532
	ctx.r8.s64 = ctx.r8.s64 + 31532;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r7,-32272
	ctx.r7.s64 = ctx.r7.s64 + -32272;
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
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8370"))) PPC_WEAK_FUNC(sub_823E8370);
PPC_FUNC_IMPL(__imp__sub_823E8370) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e8380
	sub_823E8380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8380"))) PPC_WEAK_FUNC(sub_823E8380);
PPC_FUNC_IMPL(__imp__sub_823E8380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823E83A0;
	sub_823E9E88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e83b0
	if (ctx.cr0.eq) goto loc_823E83B0;
	// addi r3,r31,-20
	ctx.r3.s64 = ctx.r31.s64 + -20;
	// bl 0x82332db8
	ctx.lr = 0x823E83B0;
	sub_82332DB8(ctx, base);
loc_823E83B0:
	// addi r3,r31,-20
	ctx.r3.s64 = ctx.r31.s64 + -20;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E83D0"))) PPC_WEAK_FUNC(sub_823E83D0);
PPC_FUNC_IMPL(__imp__sub_823E83D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fd210
	sub_823FD210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E83E0"))) PPC_WEAK_FUNC(sub_823E83E0);
PPC_FUNC_IMPL(__imp__sub_823E83E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fd270
	sub_823FD270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E83F0"))) PPC_WEAK_FUNC(sub_823E83F0);
PPC_FUNC_IMPL(__imp__sub_823E83F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e8400
	sub_823E8400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8400"))) PPC_WEAK_FUNC(sub_823E8400);
PPC_FUNC_IMPL(__imp__sub_823E8400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823E841C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e8434
	if (ctx.cr0.eq) goto loc_823E8434;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x823fd058
	ctx.lr = 0x823E8430;
	sub_823FD058(ctx, base);
	// b 0x823e8438
	goto loc_823E8438;
loc_823E8434:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E8438:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e8450
	if (ctx.cr6.eq) goto loc_823E8450;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_823E8450:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8468"))) PPC_WEAK_FUNC(sub_823E8468);
PPC_FUNC_IMPL(__imp__sub_823E8468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e8478
	sub_823E8478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8478"))) PPC_WEAK_FUNC(sub_823E8478);
PPC_FUNC_IMPL(__imp__sub_823E8478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8548
	ctx.r3.s64 = ctx.r11.s64 + 8548;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8488"))) PPC_WEAK_FUNC(sub_823E8488);
PPC_FUNC_IMPL(__imp__sub_823E8488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d0798
	sub_824D0798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8498"))) PPC_WEAK_FUNC(sub_823E8498);
PPC_FUNC_IMPL(__imp__sub_823E8498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d0738
	sub_824D0738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E84A8"))) PPC_WEAK_FUNC(sub_823E84A8);
PPC_FUNC_IMPL(__imp__sub_823E84A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d0f08
	sub_824D0F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E84B8"))) PPC_WEAK_FUNC(sub_823E84B8);
PPC_FUNC_IMPL(__imp__sub_823E84B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d05d8
	sub_824D05D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E84C8"))) PPC_WEAK_FUNC(sub_823E84C8);
PPC_FUNC_IMPL(__imp__sub_823E84C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d0680
	sub_824D0680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E84D8"))) PPC_WEAK_FUNC(sub_823E84D8);
PPC_FUNC_IMPL(__imp__sub_823E84D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823fd210
	sub_823FD210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E84E8"))) PPC_WEAK_FUNC(sub_823E84E8);
PPC_FUNC_IMPL(__imp__sub_823E84E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e8518
	if (ctx.cr6.eq) goto loc_823E8518;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,8152
	ctx.r11.s64 = ctx.r11.s64 + 8152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E8518;
	sub_823E9DF8(ctx, base);
loc_823E8518:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r10,r10,27424
	ctx.r10.s64 = ctx.r10.s64 + 27424;
	// addi r9,r9,27600
	ctx.r9.s64 = ctx.r9.s64 + 27600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8560"))) PPC_WEAK_FUNC(sub_823E8560);
PPC_FUNC_IMPL(__imp__sub_823E8560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823E8580;
	sub_823E9E88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e8590
	if (ctx.cr0.eq) goto loc_823E8590;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// bl 0x82332db8
	ctx.lr = 0x823E8590;
	sub_82332DB8(ctx, base);
loc_823E8590:
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E85B0"))) PPC_WEAK_FUNC(sub_823E85B0);
PPC_FUNC_IMPL(__imp__sub_823E85B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82833108
	ctx.lr = 0x823E85CC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e85e4
	if (ctx.cr0.eq) goto loc_823E85E4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x823fe2c8
	ctx.lr = 0x823E85E0;
	sub_823FE2C8(ctx, base);
	// b 0x823e85e8
	goto loc_823E85E8;
loc_823E85E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E85E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e85fc
	if (ctx.cr6.eq) goto loc_823E85FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823E85FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8610"))) PPC_WEAK_FUNC(sub_823E8610);
PPC_FUNC_IMPL(__imp__sub_823E8610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8196
	ctx.r3.s64 = ctx.r11.s64 + 8196;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8620"))) PPC_WEAK_FUNC(sub_823E8620);
PPC_FUNC_IMPL(__imp__sub_823E8620) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823e8560
	sub_823E8560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8628"))) PPC_WEAK_FUNC(sub_823E8628);
PPC_FUNC_IMPL(__imp__sub_823E8628) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823fe368
	sub_823FE368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8630"))) PPC_WEAK_FUNC(sub_823E8630);
PPC_FUNC_IMPL(__imp__sub_823E8630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e86c8
	if (ctx.cr6.eq) goto loc_823E86C8;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-21564
	ctx.r11.s64 = ctx.r11.s64 + -21564;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r8,22500
	ctx.r11.s64 = ctx.r8.s64 + 22500;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// addi r10,r7,28628
	ctx.r10.s64 = ctx.r7.s64 + 28628;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E8698;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x823e9cf0
	ctx.lr = 0x823E86A4;
	sub_823E9CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823e98b8
	ctx.lr = 0x823E86B0;
	sub_823E98B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x824d2430
	ctx.lr = 0x823E86BC;
	sub_824D2430(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x823e8be8
	ctx.lr = 0x823E86C8;
	sub_823E8BE8(ctx, base);
loc_823E86C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r10,r10,-30528
	ctx.r10.s64 = ctx.r10.s64 + -30528;
	// addi r9,r9,-30352
	ctx.r9.s64 = ctx.r9.s64 + -30352;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r8,r8,-22744
	ctx.r8.s64 = ctx.r8.s64 + -22744;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// addi r7,r7,31532
	ctx.r7.s64 = ctx.r7.s64 + 31532;
	// lis r5,-32235
	ctx.r5.s64 = -2112552960;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r10,r6,-23712
	ctx.r10.s64 = ctx.r6.s64 + -23712;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r5,-30300
	ctx.r6.s64 = ctx.r5.s64 + -30300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stwx r6,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8780"))) PPC_WEAK_FUNC(sub_823E8780);
PPC_FUNC_IMPL(__imp__sub_823E8780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823feac8
	sub_823FEAC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8790"))) PPC_WEAK_FUNC(sub_823E8790);
PPC_FUNC_IMPL(__imp__sub_823E8790) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823feb28
	sub_823FEB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E87A0"))) PPC_WEAK_FUNC(sub_823E87A0);
PPC_FUNC_IMPL(__imp__sub_823E87A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e87b0
	sub_823E87B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E87B0"))) PPC_WEAK_FUNC(sub_823E87B0);
PPC_FUNC_IMPL(__imp__sub_823E87B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823e87b8
	sub_823E87B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E87B8"))) PPC_WEAK_FUNC(sub_823E87B8);
PPC_FUNC_IMPL(__imp__sub_823E87B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27760
	ctx.r31.s64 = ctx.r11.s64 + -27760;
	// lwz r11,-27616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27616);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e8800
	if (!ctx.cr0.eq) goto loc_823E8800;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-30296
	ctx.r9.s64 = ctx.r9.s64 + -30296;
	// stw r11,-27616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27616, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12944
	ctx.r3.s64 = ctx.r11.s64 + -12944;
	// bl 0x82a4c758
	ctx.lr = 0x823E8800;
	sub_82A4C758(ctx, base);
loc_823E8800:
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

__attribute__((alias("__imp__sub_823E8818"))) PPC_WEAK_FUNC(sub_823E8818);
PPC_FUNC_IMPL(__imp__sub_823E8818) {
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
	ctx.lr = 0x823E882C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e8840
	if (ctx.cr0.eq) goto loc_823E8840;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e8630
	ctx.lr = 0x823E883C;
	sub_823E8630(ctx, base);
	// b 0x823e8844
	goto loc_823E8844;
loc_823E8840:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E8844:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e8858
	if (ctx.cr6.eq) goto loc_823E8858;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823E8858:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8868"))) PPC_WEAK_FUNC(sub_823E8868);
PPC_FUNC_IMPL(__imp__sub_823E8868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31876(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31876);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e88a8
	if (!ctx.cr0.eq) goto loc_823E88A8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31876, ctx.r11.u32);
	// addi r3,r9,8756
	ctx.r3.s64 = ctx.r9.s64 + 8756;
	// bl 0x82816528
	ctx.lr = 0x823E88A0;
	sub_82816528(ctx, base);
	// stw r3,31872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31872, ctx.r3.u32);
	// b 0x823e88ac
	goto loc_823E88AC;
loc_823E88A8:
	// lwz r3,31872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31872);
loc_823E88AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E88C0"))) PPC_WEAK_FUNC(sub_823E88C0);
PPC_FUNC_IMPL(__imp__sub_823E88C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823e87b8
	ctx.lr = 0x823E88E0;
	sub_823E87B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E88F4;
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

__attribute__((alias("__imp__sub_823E8910"))) PPC_WEAK_FUNC(sub_823E8910);
PPC_FUNC_IMPL(__imp__sub_823E8910) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e8920
	sub_823E8920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8920"))) PPC_WEAK_FUNC(sub_823E8920);
PPC_FUNC_IMPL(__imp__sub_823E8920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823E893C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e8954
	if (ctx.cr0.eq) goto loc_823E8954;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x823fe900
	ctx.lr = 0x823E8950;
	sub_823FE900(ctx, base);
	// b 0x823e8958
	goto loc_823E8958;
loc_823E8954:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E8958:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e896c
	if (ctx.cr6.eq) goto loc_823E896C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823E896C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8980"))) PPC_WEAK_FUNC(sub_823E8980);
PPC_FUNC_IMPL(__imp__sub_823E8980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e8990
	sub_823E8990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8990"))) PPC_WEAK_FUNC(sub_823E8990);
PPC_FUNC_IMPL(__imp__sub_823E8990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8756
	ctx.r3.s64 = ctx.r11.s64 + 8756;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E89A0"))) PPC_WEAK_FUNC(sub_823E89A0);
PPC_FUNC_IMPL(__imp__sub_823E89A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// b 0x8236a230
	sub_8236A230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E89B0"))) PPC_WEAK_FUNC(sub_823E89B0);
PPC_FUNC_IMPL(__imp__sub_823E89B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// b 0x824d2228
	sub_824D2228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E89C0"))) PPC_WEAK_FUNC(sub_823E89C0);
PPC_FUNC_IMPL(__imp__sub_823E89C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823feac8
	sub_823FEAC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E89D0"))) PPC_WEAK_FUNC(sub_823E89D0);
PPC_FUNC_IMPL(__imp__sub_823E89D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e8a50
	if (ctx.cr6.eq) goto loc_823E8A50;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r11,r11,-27468
	ctx.r11.s64 = ctx.r11.s64 + -27468;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// addi r11,r8,22500
	ctx.r11.s64 = ctx.r8.s64 + 22500;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E8A2C;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x823e9cf0
	ctx.lr = 0x823E8A38;
	sub_823E9CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823e98b8
	ctx.lr = 0x823E8A44;
	sub_823E98B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x824d2430
	ctx.lr = 0x823E8A50;
	sub_824D2430(ctx, base);
loc_823E8A50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r10,r10,31128
	ctx.r10.s64 = ctx.r10.s64 + 31128;
	// addi r9,r9,31304
	ctx.r9.s64 = ctx.r9.s64 + 31304;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r8,r8,-22744
	ctx.r8.s64 = ctx.r8.s64 + -22744;
	// addi r7,r7,31532
	ctx.r7.s64 = ctx.r7.s64 + 31532;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r10,r6,-23712
	ctx.r10.s64 = ctx.r6.s64 + -23712;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8AF8"))) PPC_WEAK_FUNC(sub_823E8AF8);
PPC_FUNC_IMPL(__imp__sub_823E8AF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fed28
	sub_823FED28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8B08"))) PPC_WEAK_FUNC(sub_823E8B08);
PPC_FUNC_IMPL(__imp__sub_823E8B08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fed88
	sub_823FED88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8B18"))) PPC_WEAK_FUNC(sub_823E8B18);
PPC_FUNC_IMPL(__imp__sub_823E8B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e8b28
	sub_823E8B28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8B28"))) PPC_WEAK_FUNC(sub_823E8B28);
PPC_FUNC_IMPL(__imp__sub_823E8B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823E8B44;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e8b5c
	if (ctx.cr0.eq) goto loc_823E8B5C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x823feb90
	ctx.lr = 0x823E8B58;
	sub_823FEB90(ctx, base);
	// b 0x823e8b60
	goto loc_823E8B60;
loc_823E8B5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E8B60:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e8b74
	if (ctx.cr6.eq) goto loc_823E8B74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823E8B74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8B88"))) PPC_WEAK_FUNC(sub_823E8B88);
PPC_FUNC_IMPL(__imp__sub_823E8B88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e8b98
	sub_823E8B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8B98"))) PPC_WEAK_FUNC(sub_823E8B98);
PPC_FUNC_IMPL(__imp__sub_823E8B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8384
	ctx.r3.s64 = ctx.r11.s64 + 8384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8BA8"))) PPC_WEAK_FUNC(sub_823E8BA8);
PPC_FUNC_IMPL(__imp__sub_823E8BA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d0118
	sub_824D0118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8BB8"))) PPC_WEAK_FUNC(sub_823E8BB8);
PPC_FUNC_IMPL(__imp__sub_823E8BB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d01b8
	sub_824D01B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8BC8"))) PPC_WEAK_FUNC(sub_823E8BC8);
PPC_FUNC_IMPL(__imp__sub_823E8BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d00d0
	sub_824D00D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8BD8"))) PPC_WEAK_FUNC(sub_823E8BD8);
PPC_FUNC_IMPL(__imp__sub_823E8BD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823fed28
	sub_823FED28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8BE8"))) PPC_WEAK_FUNC(sub_823E8BE8);
PPC_FUNC_IMPL(__imp__sub_823E8BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e8c68
	if (ctx.cr6.eq) goto loc_823E8C68;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r11,r11,11364
	ctx.r11.s64 = ctx.r11.s64 + 11364;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// addi r11,r8,22500
	ctx.r11.s64 = ctx.r8.s64 + 22500;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E8C44;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x823e9cf0
	ctx.lr = 0x823E8C50;
	sub_823E9CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823e98b8
	ctx.lr = 0x823E8C5C;
	sub_823E98B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x824d2430
	ctx.lr = 0x823E8C68;
	sub_824D2430(ctx, base);
loc_823E8C68:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,17108
	ctx.r11.s64 = ctx.r11.s64 + 17108;
	// addi r9,r9,-30776
	ctx.r9.s64 = ctx.r9.s64 + -30776;
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
	// addi r10,r8,-30600
	ctx.r10.s64 = ctx.r8.s64 + -30600;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r9,r9,11296
	ctx.r9.s64 = ctx.r9.s64 + 11296;
	// addi r8,r8,31532
	ctx.r8.s64 = ctx.r8.s64 + 31532;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r7,-23712
	ctx.r7.s64 = ctx.r7.s64 + -23712;
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
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8D20"))) PPC_WEAK_FUNC(sub_823E8D20);
PPC_FUNC_IMPL(__imp__sub_823E8D20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fefd0
	sub_823FEFD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8D30"))) PPC_WEAK_FUNC(sub_823E8D30);
PPC_FUNC_IMPL(__imp__sub_823E8D30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823ff030
	sub_823FF030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8D40"))) PPC_WEAK_FUNC(sub_823E8D40);
PPC_FUNC_IMPL(__imp__sub_823E8D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823472b8
	sub_823472B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8D50"))) PPC_WEAK_FUNC(sub_823E8D50);
PPC_FUNC_IMPL(__imp__sub_823E8D50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e8d60
	sub_823E8D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8D60"))) PPC_WEAK_FUNC(sub_823E8D60);
PPC_FUNC_IMPL(__imp__sub_823E8D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823E8D7C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e8d94
	if (ctx.cr0.eq) goto loc_823E8D94;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x823fedf0
	ctx.lr = 0x823E8D90;
	sub_823FEDF0(ctx, base);
	// b 0x823e8d98
	goto loc_823E8D98;
loc_823E8D94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E8D98:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e8db0
	if (ctx.cr6.eq) goto loc_823E8DB0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_823E8DB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8DC8"))) PPC_WEAK_FUNC(sub_823E8DC8);
PPC_FUNC_IMPL(__imp__sub_823E8DC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823e8dd8
	sub_823E8DD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8DD8"))) PPC_WEAK_FUNC(sub_823E8DD8);
PPC_FUNC_IMPL(__imp__sub_823E8DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8728
	ctx.r3.s64 = ctx.r11.s64 + 8728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8DE8"))) PPC_WEAK_FUNC(sub_823E8DE8);
PPC_FUNC_IMPL(__imp__sub_823E8DE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d2228
	sub_824D2228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8DF8"))) PPC_WEAK_FUNC(sub_823E8DF8);
PPC_FUNC_IMPL(__imp__sub_823E8DF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823406b0
	sub_823406B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8E08"))) PPC_WEAK_FUNC(sub_823E8E08);
PPC_FUNC_IMPL(__imp__sub_823E8E08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823fefd0
	sub_823FEFD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8E18"))) PPC_WEAK_FUNC(sub_823E8E18);
PPC_FUNC_IMPL(__imp__sub_823E8E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e8e78
	if (ctx.cr6.eq) goto loc_823E8E78;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,25256
	ctx.r11.s64 = ctx.r11.s64 + 25256;
	// addi r10,r10,-6368
	ctx.r10.s64 = ctx.r10.s64 + -6368;
	// addi r9,r9,10412
	ctx.r9.s64 = ctx.r9.s64 + 10412;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E8E60;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x823e9cf0
	ctx.lr = 0x823E8E6C;
	sub_823E9CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x823e9618
	ctx.lr = 0x823E8E78;
	sub_823E9618(ctx, base);
loc_823E8E78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r10,r10,24992
	ctx.r10.s64 = ctx.r10.s64 + 24992;
	// addi r9,r9,25168
	ctx.r9.s64 = ctx.r9.s64 + 25168;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// addi r8,r8,29976
	ctx.r8.s64 = ctx.r8.s64 + 29976;
	// addi r7,r7,25220
	ctx.r7.s64 = ctx.r7.s64 + 25220;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8EE8"))) PPC_WEAK_FUNC(sub_823E8EE8);
PPC_FUNC_IMPL(__imp__sub_823E8EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8048
	ctx.r3.s64 = ctx.r11.s64 + 8048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8EF8"))) PPC_WEAK_FUNC(sub_823E8EF8);
PPC_FUNC_IMPL(__imp__sub_823E8EF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823e8f00
	sub_823E8F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8F00"))) PPC_WEAK_FUNC(sub_823E8F00);
PPC_FUNC_IMPL(__imp__sub_823E8F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26052
	ctx.r31.s64 = ctx.r11.s64 + -26052;
	// lwz r11,-26048(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26048);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e8f48
	if (!ctx.cr0.eq) goto loc_823E8F48;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25272
	ctx.r9.s64 = ctx.r9.s64 + 25272;
	// stw r11,-26048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26048, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12920
	ctx.r3.s64 = ctx.r11.s64 + -12920;
	// bl 0x82a4c758
	ctx.lr = 0x823E8F48;
	sub_82A4C758(ctx, base);
loc_823E8F48:
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

__attribute__((alias("__imp__sub_823E8F60"))) PPC_WEAK_FUNC(sub_823E8F60);
PPC_FUNC_IMPL(__imp__sub_823E8F60) {
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82833108
	ctx.lr = 0x823E8F74;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e8f88
	if (ctx.cr0.eq) goto loc_823E8F88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e8e18
	ctx.lr = 0x823E8F84;
	sub_823E8E18(ctx, base);
	// b 0x823e8f8c
	goto loc_823E8F8C;
loc_823E8F88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E8F8C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e8fa0
	if (ctx.cr6.eq) goto loc_823E8FA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823E8FA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8FB0"))) PPC_WEAK_FUNC(sub_823E8FB0);
PPC_FUNC_IMPL(__imp__sub_823E8FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31868(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31868);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e8ff0
	if (!ctx.cr0.eq) goto loc_823E8FF0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31868, ctx.r11.u32);
	// addi r3,r9,8048
	ctx.r3.s64 = ctx.r9.s64 + 8048;
	// bl 0x82816528
	ctx.lr = 0x823E8FE8;
	sub_82816528(ctx, base);
	// stw r3,31864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31864, ctx.r3.u32);
	// b 0x823e8ff4
	goto loc_823E8FF4;
loc_823E8FF0:
	// lwz r3,31864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31864);
loc_823E8FF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9008"))) PPC_WEAK_FUNC(sub_823E9008);
PPC_FUNC_IMPL(__imp__sub_823E9008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823e8f00
	ctx.lr = 0x823E9028;
	sub_823E8F00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E903C;
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

__attribute__((alias("__imp__sub_823E9058"))) PPC_WEAK_FUNC(sub_823E9058);
PPC_FUNC_IMPL(__imp__sub_823E9058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823E9074;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e908c
	if (ctx.cr0.eq) goto loc_823E908C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x823ffdd0
	ctx.lr = 0x823E9088;
	sub_823FFDD0(ctx, base);
	// b 0x823e9090
	goto loc_823E9090;
loc_823E908C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E9090:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e90a4
	if (ctx.cr6.eq) goto loc_823E90A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823E90A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E90B8"))) PPC_WEAK_FUNC(sub_823E90B8);
PPC_FUNC_IMPL(__imp__sub_823E90B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823fff00
	sub_823FFF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E90C0"))) PPC_WEAK_FUNC(sub_823E90C0);
PPC_FUNC_IMPL(__imp__sub_823E90C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e9120
	if (ctx.cr6.eq) goto loc_823E9120;
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
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E90FC;
	sub_823E9DF8(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,27696
	ctx.r11.s64 = ctx.r11.s64 + 27696;
	// addi r10,r10,27892
	ctx.r10.s64 = ctx.r10.s64 + 27892;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x823e91f8
	ctx.lr = 0x823E9120;
	sub_823E91F8(ctx, base);
loc_823E9120:
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9178"))) PPC_WEAK_FUNC(sub_823E9178);
PPC_FUNC_IMPL(__imp__sub_823E9178) {
	PPC_FUNC_PROLOGUE();
	// b 0x823eac88
	sub_823EAC88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E9180"))) PPC_WEAK_FUNC(sub_823E9180);
PPC_FUNC_IMPL(__imp__sub_823E9180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823E919C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e91b4
	if (ctx.cr0.eq) goto loc_823E91B4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82400450
	ctx.lr = 0x823E91B0;
	sub_82400450(ctx, base);
	// b 0x823e91b8
	goto loc_823E91B8;
loc_823E91B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E91B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e91cc
	if (ctx.cr6.eq) goto loc_823E91CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823E91CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E91E0"))) PPC_WEAK_FUNC(sub_823E91E0);
PPC_FUNC_IMPL(__imp__sub_823E91E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,10012
	ctx.r3.s64 = ctx.r11.s64 + 10012;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E91F0"))) PPC_WEAK_FUNC(sub_823E91F0);
PPC_FUNC_IMPL(__imp__sub_823E91F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82400570
	sub_82400570(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E91F8"))) PPC_WEAK_FUNC(sub_823E91F8);
PPC_FUNC_IMPL(__imp__sub_823E91F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e9240
	if (ctx.cr6.eq) goto loc_823E9240;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r11,r11,-30820
	ctx.r11.s64 = ctx.r11.s64 + -30820;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E9228;
	sub_823E9DF8(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,27696
	ctx.r11.s64 = ctx.r11.s64 + 27696;
	// addi r10,r10,27892
	ctx.r10.s64 = ctx.r10.s64 + 27892;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_823E9240:
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9298"))) PPC_WEAK_FUNC(sub_823E9298);
PPC_FUNC_IMPL(__imp__sub_823E9298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25812
	ctx.r31.s64 = ctx.r11.s64 + -25812;
	// lwz r11,-25808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25808);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e92e0
	if (!ctx.cr0.eq) goto loc_823E92E0;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,27944
	ctx.r9.s64 = ctx.r9.s64 + 27944;
	// stw r11,-25808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25808, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12896
	ctx.r3.s64 = ctx.r11.s64 + -12896;
	// bl 0x82a4c758
	ctx.lr = 0x823E92E0;
	sub_82A4C758(ctx, base);
loc_823E92E0:
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

__attribute__((alias("__imp__sub_823E92F8"))) PPC_WEAK_FUNC(sub_823E92F8);
PPC_FUNC_IMPL(__imp__sub_823E92F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82833108
	ctx.lr = 0x823E9310;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823e9340
	if (ctx.cr0.eq) goto loc_823E9340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e9df8
	ctx.lr = 0x823E9320;
	sub_823E9DF8(ctx, base);
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
	// b 0x823e9344
	goto loc_823E9344;
loc_823E9340:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E9344:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9358"))) PPC_WEAK_FUNC(sub_823E9358);
PPC_FUNC_IMPL(__imp__sub_823E9358) {
	PPC_FUNC_PROLOGUE();
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9360"))) PPC_WEAK_FUNC(sub_823E9360);
PPC_FUNC_IMPL(__imp__sub_823E9360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31860(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31860);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e93a0
	if (!ctx.cr0.eq) goto loc_823E93A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31860, ctx.r11.u32);
	// addi r3,r9,8224
	ctx.r3.s64 = ctx.r9.s64 + 8224;
	// bl 0x82816528
	ctx.lr = 0x823E9398;
	sub_82816528(ctx, base);
	// stw r3,31856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31856, ctx.r3.u32);
	// b 0x823e93a4
	goto loc_823E93A4;
loc_823E93A0:
	// lwz r3,31856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31856);
loc_823E93A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E93B8"))) PPC_WEAK_FUNC(sub_823E93B8);
PPC_FUNC_IMPL(__imp__sub_823E93B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823e9298
	ctx.lr = 0x823E93D8;
	sub_823E9298(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E93EC;
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

__attribute__((alias("__imp__sub_823E9408"))) PPC_WEAK_FUNC(sub_823E9408);
PPC_FUNC_IMPL(__imp__sub_823E9408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82833108
	ctx.lr = 0x823E9424;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e943c
	if (ctx.cr0.eq) goto loc_823E943C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82400638
	ctx.lr = 0x823E9438;
	sub_82400638(ctx, base);
	// b 0x823e9440
	goto loc_823E9440;
loc_823E943C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E9440:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e9458
	if (ctx.cr6.eq) goto loc_823E9458;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_823E9458:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9470"))) PPC_WEAK_FUNC(sub_823E9470);
PPC_FUNC_IMPL(__imp__sub_823E9470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,9968
	ctx.r3.s64 = ctx.r11.s64 + 9968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9480"))) PPC_WEAK_FUNC(sub_823E9480);
PPC_FUNC_IMPL(__imp__sub_823E9480) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82400750
	sub_82400750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E9488"))) PPC_WEAK_FUNC(sub_823E9488);
PPC_FUNC_IMPL(__imp__sub_823E9488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823E94A8;
	sub_823E9E88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e94b8
	if (ctx.cr0.eq) goto loc_823E94B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823E94B8;
	sub_82332DB8(ctx, base);
loc_823E94B8:
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

__attribute__((alias("__imp__sub_823E94D8"))) PPC_WEAK_FUNC(sub_823E94D8);
PPC_FUNC_IMPL(__imp__sub_823E94D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8224
	ctx.r3.s64 = ctx.r11.s64 + 8224;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E94E8"))) PPC_WEAK_FUNC(sub_823E94E8);
PPC_FUNC_IMPL(__imp__sub_823E94E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823e9298
	ctx.lr = 0x823E9508;
	sub_823E9298(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823e9518
	if (!ctx.cr6.eq) goto loc_823E9518;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x823e9530
	goto loc_823E9530;
loc_823E9518:
	// bl 0x823fbb50
	ctx.lr = 0x823E951C;
	sub_823FBB50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823e9530
	if (ctx.cr6.eq) goto loc_823E9530;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823e9ee8
	ctx.lr = 0x823E9530;
	sub_823E9EE8(ctx, base);
loc_823E9530:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9548"))) PPC_WEAK_FUNC(sub_823E9548);
PPC_FUNC_IMPL(__imp__sub_823E9548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823e9580
	if (ctx.cr6.eq) goto loc_823E9580;
	// bl 0x823e9298
	ctx.lr = 0x823E9570;
	sub_823E9298(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823e9580
	if (!ctx.cr6.eq) goto loc_823E9580;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823e958c
	goto loc_823E958C;
loc_823E9580:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fbc98
	ctx.lr = 0x823E958C;
	sub_823FBC98(ctx, base);
loc_823E958C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E95A8"))) PPC_WEAK_FUNC(sub_823E95A8);
PPC_FUNC_IMPL(__imp__sub_823E95A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82833108
	ctx.lr = 0x823E95C4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e95d8
	if (ctx.cr0.eq) goto loc_823E95D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824006f0
	ctx.lr = 0x823E95D4;
	sub_824006F0(ctx, base);
	// b 0x823e95dc
	goto loc_823E95DC;
loc_823E95D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E95DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E95F0"))) PPC_WEAK_FUNC(sub_823E95F0);
PPC_FUNC_IMPL(__imp__sub_823E95F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
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

__attribute__((alias("__imp__sub_823E9608"))) PPC_WEAK_FUNC(sub_823E9608);
PPC_FUNC_IMPL(__imp__sub_823E9608) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823e9488
	sub_823E9488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E9610"))) PPC_WEAK_FUNC(sub_823E9610);
PPC_FUNC_IMPL(__imp__sub_823E9610) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823e94e8
	sub_823E94E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E9618"))) PPC_WEAK_FUNC(sub_823E9618);
PPC_FUNC_IMPL(__imp__sub_823E9618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e9660
	if (ctx.cr6.eq) goto loc_823E9660;
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
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E9654;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x823e9cf0
	ctx.lr = 0x823E9660;
	sub_823E9CF0(ctx, base);
loc_823E9660:
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E96D0"))) PPC_WEAK_FUNC(sub_823E96D0);
PPC_FUNC_IMPL(__imp__sub_823E96D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823e96d8
	sub_823E96D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E96D8"))) PPC_WEAK_FUNC(sub_823E96D8);
PPC_FUNC_IMPL(__imp__sub_823E96D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26060
	ctx.r31.s64 = ctx.r11.s64 + -26060;
	// lwz r11,-26056(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26056);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e9720
	if (!ctx.cr0.eq) goto loc_823E9720;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23460
	ctx.r9.s64 = ctx.r9.s64 + 23460;
	// stw r11,-26056(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26056, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12872
	ctx.r3.s64 = ctx.r11.s64 + -12872;
	// bl 0x82a4c758
	ctx.lr = 0x823E9720;
	sub_82A4C758(ctx, base);
loc_823E9720:
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

__attribute__((alias("__imp__sub_823E9738"))) PPC_WEAK_FUNC(sub_823E9738);
PPC_FUNC_IMPL(__imp__sub_823E9738) {
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
	ctx.lr = 0x823E974C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e9760
	if (ctx.cr0.eq) goto loc_823E9760;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e9cf0
	ctx.lr = 0x823E975C;
	sub_823E9CF0(ctx, base);
	// b 0x823e9764
	goto loc_823E9764;
loc_823E9760:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E9764:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e977c
	if (ctx.cr6.eq) goto loc_823E977C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_823E977C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9790"))) PPC_WEAK_FUNC(sub_823E9790);
PPC_FUNC_IMPL(__imp__sub_823E9790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31852(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31852);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e97d0
	if (!ctx.cr0.eq) goto loc_823E97D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31852(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31852, ctx.r11.u32);
	// addi r3,r9,7984
	ctx.r3.s64 = ctx.r9.s64 + 7984;
	// bl 0x82816528
	ctx.lr = 0x823E97C8;
	sub_82816528(ctx, base);
	// stw r3,31848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31848, ctx.r3.u32);
	// b 0x823e97d4
	goto loc_823E97D4;
loc_823E97D0:
	// lwz r3,31848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31848);
loc_823E97D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E97E8"))) PPC_WEAK_FUNC(sub_823E97E8);
PPC_FUNC_IMPL(__imp__sub_823E97E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823e96d8
	ctx.lr = 0x823E9808;
	sub_823E96D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E981C;
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

__attribute__((alias("__imp__sub_823E9838"))) PPC_WEAK_FUNC(sub_823E9838);
PPC_FUNC_IMPL(__imp__sub_823E9838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823E9854;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e986c
	if (ctx.cr0.eq) goto loc_823E986C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82400bf8
	ctx.lr = 0x823E9868;
	sub_82400BF8(ctx, base);
	// b 0x823e9870
	goto loc_823E9870;
loc_823E986C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E9870:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e9888
	if (ctx.cr6.eq) goto loc_823E9888;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_823E9888:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E98A0"))) PPC_WEAK_FUNC(sub_823E98A0);
PPC_FUNC_IMPL(__imp__sub_823E98A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8020
	ctx.r3.s64 = ctx.r11.s64 + 8020;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E98B0"))) PPC_WEAK_FUNC(sub_823E98B0);
PPC_FUNC_IMPL(__imp__sub_823E98B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82400d08
	sub_82400D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E98B8"))) PPC_WEAK_FUNC(sub_823E98B8);
PPC_FUNC_IMPL(__imp__sub_823E98B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e9900
	if (ctx.cr6.eq) goto loc_823E9900;
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
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E98F4;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x823e9cf0
	ctx.lr = 0x823E9900;
	sub_823E9CF0(ctx, base);
loc_823E9900:
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9970"))) PPC_WEAK_FUNC(sub_823E9970);
PPC_FUNC_IMPL(__imp__sub_823E9970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8100
	ctx.r3.s64 = ctx.r11.s64 + 8100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9980"))) PPC_WEAK_FUNC(sub_823E9980);
PPC_FUNC_IMPL(__imp__sub_823E9980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823e99e0
	ctx.lr = 0x823E99A0;
	sub_823E99E0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823e99b0
	if (!ctx.cr6.eq) goto loc_823E99B0;
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// b 0x823e99c8
	goto loc_823E99C8;
loc_823E99B0:
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
	ctx.lr = 0x823E99C8;
	sub_823E9B40(ctx, base);
loc_823E99C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E99E0"))) PPC_WEAK_FUNC(sub_823E99E0);
PPC_FUNC_IMPL(__imp__sub_823E99E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27704
	ctx.r31.s64 = ctx.r11.s64 + -27704;
	// lwz r11,-28040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28040);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e9a28
	if (!ctx.cr0.eq) goto loc_823E9A28;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25612
	ctx.r9.s64 = ctx.r9.s64 + 25612;
	// stw r11,-28040(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28040, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12848
	ctx.r3.s64 = ctx.r11.s64 + -12848;
	// bl 0x82a4c758
	ctx.lr = 0x823E9A28;
	sub_82A4C758(ctx, base);
loc_823E9A28:
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

__attribute__((alias("__imp__sub_823E9A40"))) PPC_WEAK_FUNC(sub_823E9A40);
PPC_FUNC_IMPL(__imp__sub_823E9A40) {
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
	ctx.lr = 0x823E9A54;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e9a68
	if (ctx.cr0.eq) goto loc_823E9A68;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e98b8
	ctx.lr = 0x823E9A64;
	sub_823E98B8(ctx, base);
	// b 0x823e9a6c
	goto loc_823E9A6C;
loc_823E9A68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E9A6C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e9a84
	if (ctx.cr6.eq) goto loc_823E9A84;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_823E9A84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9A98"))) PPC_WEAK_FUNC(sub_823E9A98);
PPC_FUNC_IMPL(__imp__sub_823E9A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31844(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31844);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e9ad8
	if (!ctx.cr0.eq) goto loc_823E9AD8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31844, ctx.r11.u32);
	// addi r3,r9,8100
	ctx.r3.s64 = ctx.r9.s64 + 8100;
	// bl 0x82816528
	ctx.lr = 0x823E9AD0;
	sub_82816528(ctx, base);
	// stw r3,31840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31840, ctx.r3.u32);
	// b 0x823e9adc
	goto loc_823E9ADC;
loc_823E9AD8:
	// lwz r3,31840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31840);
loc_823E9ADC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9AF0"))) PPC_WEAK_FUNC(sub_823E9AF0);
PPC_FUNC_IMPL(__imp__sub_823E9AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823e99e0
	ctx.lr = 0x823E9B10;
	sub_823E99E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E9B24;
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

__attribute__((alias("__imp__sub_823E9B40"))) PPC_WEAK_FUNC(sub_823E9B40);
PPC_FUNC_IMPL(__imp__sub_823E9B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823e96d8
	ctx.lr = 0x823E9B60;
	sub_823E96D8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823e9b70
	if (!ctx.cr6.eq) goto loc_823E9B70;
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// b 0x823e9b98
	goto loc_823E9B98;
loc_823E9B70:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// bl 0x823fbb50
	ctx.lr = 0x823E9B84;
	sub_823FBB50(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823e9b98
	if (ctx.cr6.eq) goto loc_823E9B98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823e9ee8
	ctx.lr = 0x823E9B98;
	sub_823E9EE8(ctx, base);
loc_823E9B98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9BB0"))) PPC_WEAK_FUNC(sub_823E9BB0);
PPC_FUNC_IMPL(__imp__sub_823E9BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823e9be8
	if (ctx.cr6.eq) goto loc_823E9BE8;
	// bl 0x823e99e0
	ctx.lr = 0x823E9BD8;
	sub_823E99E0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823e9be8
	if (!ctx.cr6.eq) goto loc_823E9BE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823e9c00
	goto loc_823E9C00;
loc_823E9BE8:
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
	ctx.lr = 0x823E9C00;
	sub_823E9C18(ctx, base);
loc_823E9C00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9C18"))) PPC_WEAK_FUNC(sub_823E9C18);
PPC_FUNC_IMPL(__imp__sub_823E9C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823e9c50
	if (ctx.cr6.eq) goto loc_823E9C50;
	// bl 0x823e96d8
	ctx.lr = 0x823E9C40;
	sub_823E96D8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823e9c50
	if (!ctx.cr6.eq) goto loc_823E9C50;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823e9c68
	goto loc_823E9C68;
loc_823E9C50:
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
	// bl 0x823fbc98
	ctx.lr = 0x823E9C68;
	sub_823FBC98(ctx, base);
loc_823E9C68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9C80"))) PPC_WEAK_FUNC(sub_823E9C80);
PPC_FUNC_IMPL(__imp__sub_823E9C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823E9C9C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e9cb4
	if (ctx.cr0.eq) goto loc_823E9CB4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82404350
	ctx.lr = 0x823E9CB0;
	sub_82404350(ctx, base);
	// b 0x823e9cb8
	goto loc_823E9CB8;
loc_823E9CB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E9CB8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e9cd0
	if (ctx.cr6.eq) goto loc_823E9CD0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_823E9CD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9CE8"))) PPC_WEAK_FUNC(sub_823E9CE8);
PPC_FUNC_IMPL(__imp__sub_823E9CE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823e9980
	sub_823E9980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E9CF0"))) PPC_WEAK_FUNC(sub_823E9CF0);
PPC_FUNC_IMPL(__imp__sub_823E9CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e9d20
	if (ctx.cr6.eq) goto loc_823E9D20;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r11,r11,-30820
	ctx.r11.s64 = ctx.r11.s64 + -30820;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x823e9df8
	ctx.lr = 0x823E9D20;
	sub_823E9DF8(ctx, base);
loc_823E9D20:
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9D78"))) PPC_WEAK_FUNC(sub_823E9D78);
PPC_FUNC_IMPL(__imp__sub_823E9D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823E9D94;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e9dac
	if (ctx.cr0.eq) goto loc_823E9DAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82404460
	ctx.lr = 0x823E9DA8;
	sub_82404460(ctx, base);
	// b 0x823e9db0
	goto loc_823E9DB0;
loc_823E9DAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E9DB0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e9dc8
	if (ctx.cr6.eq) goto loc_823E9DC8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_823E9DC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9DE0"))) PPC_WEAK_FUNC(sub_823E9DE0);
PPC_FUNC_IMPL(__imp__sub_823E9DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7984
	ctx.r3.s64 = ctx.r11.s64 + 7984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9DF0"))) PPC_WEAK_FUNC(sub_823E9DF0);
PPC_FUNC_IMPL(__imp__sub_823E9DF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823e9b40
	sub_823E9B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E9DF8"))) PPC_WEAK_FUNC(sub_823E9DF8);
PPC_FUNC_IMPL(__imp__sub_823E9DF8) {
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
	// bl 0x82833180
	ctx.lr = 0x823E9E10;
	sub_82833180(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r7,r11,15356
	ctx.r7.s64 = ctx.r11.s64 + 15356;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,21704
	ctx.r9.s64 = ctx.r9.s64 + 21704;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r8,r8,21880
	ctx.r8.s64 = ctx.r8.s64 + 21880;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9E88"))) PPC_WEAK_FUNC(sub_823E9E88);
PPC_FUNC_IMPL(__imp__sub_823E9E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x823375f0
	ctx.lr = 0x823E9EBC;
	sub_823375F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x823E9EC4;
	sub_82833238(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9ED8"))) PPC_WEAK_FUNC(sub_823E9ED8);
PPC_FUNC_IMPL(__imp__sub_823E9ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7900
	ctx.r3.s64 = ctx.r11.s64 + 7900;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9EE8"))) PPC_WEAK_FUNC(sub_823E9EE8);
PPC_FUNC_IMPL(__imp__sub_823E9EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823e9f48
	ctx.lr = 0x823E9F08;
	sub_823E9F48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823e9f18
	if (!ctx.cr6.eq) goto loc_823E9F18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x823e9f2c
	goto loc_823E9F2C;
loc_823E9F18:
	// bl 0x82333d20
	ctx.lr = 0x823E9F1C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823e9f2c
	if (ctx.cr6.eq) goto loc_823E9F2C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E9F2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9F48"))) PPC_WEAK_FUNC(sub_823E9F48);
PPC_FUNC_IMPL(__imp__sub_823E9F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25820
	ctx.r31.s64 = ctx.r11.s64 + -25820;
	// lwz r11,-25816(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25816);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e9f90
	if (!ctx.cr0.eq) goto loc_823E9F90;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,11000
	ctx.r9.s64 = ctx.r9.s64 + 11000;
	// stw r11,-25816(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25816, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12824
	ctx.r3.s64 = ctx.r11.s64 + -12824;
	// bl 0x82a4c758
	ctx.lr = 0x823E9F90;
	sub_82A4C758(ctx, base);
loc_823E9F90:
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

__attribute__((alias("__imp__sub_823E9FA8"))) PPC_WEAK_FUNC(sub_823E9FA8);
PPC_FUNC_IMPL(__imp__sub_823E9FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31836(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31836);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e9fe8
	if (!ctx.cr0.eq) goto loc_823E9FE8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31836, ctx.r11.u32);
	// addi r3,r9,7900
	ctx.r3.s64 = ctx.r9.s64 + 7900;
	// bl 0x82816528
	ctx.lr = 0x823E9FE0;
	sub_82816528(ctx, base);
	// stw r3,31832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31832, ctx.r3.u32);
	// b 0x823e9fec
	goto loc_823E9FEC;
loc_823E9FE8:
	// lwz r3,31832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31832);
loc_823E9FEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA000"))) PPC_WEAK_FUNC(sub_823EA000);
PPC_FUNC_IMPL(__imp__sub_823EA000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823e9f48
	ctx.lr = 0x823EA020;
	sub_823E9F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EA034;
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

__attribute__((alias("__imp__sub_823EA050"))) PPC_WEAK_FUNC(sub_823EA050);
PPC_FUNC_IMPL(__imp__sub_823EA050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x823ea090
	if (ctx.cr6.eq) goto loc_823EA090;
	// bl 0x823e9f48
	ctx.lr = 0x823EA070;
	sub_823E9F48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823ea080
	if (!ctx.cr6.eq) goto loc_823EA080;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ea094
	goto loc_823EA094;
loc_823EA080:
	// bl 0x82333d20
	ctx.lr = 0x823EA084;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x823ea094
	if (ctx.cr6.eq) goto loc_823EA094;
loc_823EA090:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EA094:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA0A8"))) PPC_WEAK_FUNC(sub_823EA0A8);
PPC_FUNC_IMPL(__imp__sub_823EA0A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823e9f48
	sub_823E9F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EA0B0"))) PPC_WEAK_FUNC(sub_823EA0B0);
PPC_FUNC_IMPL(__imp__sub_823EA0B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823e9ee8
	sub_823E9EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EA0B8"))) PPC_WEAK_FUNC(sub_823EA0B8);
PPC_FUNC_IMPL(__imp__sub_823EA0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7948
	ctx.r3.s64 = ctx.r11.s64 + 7948;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA0C8"))) PPC_WEAK_FUNC(sub_823EA0C8);
PPC_FUNC_IMPL(__imp__sub_823EA0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82833108
	ctx.lr = 0x823EA0E4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ea0f8
	if (ctx.cr0.eq) goto loc_823EA0F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82404518
	ctx.lr = 0x823EA0F4;
	sub_82404518(ctx, base);
	// b 0x823ea0fc
	goto loc_823EA0FC;
loc_823EA0F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EA0FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA110"))) PPC_WEAK_FUNC(sub_823EA110);
PPC_FUNC_IMPL(__imp__sub_823EA110) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823fbb00
	sub_823FBB00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EA118"))) PPC_WEAK_FUNC(sub_823EA118);
PPC_FUNC_IMPL(__imp__sub_823EA118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25788
	ctx.r31.s64 = ctx.r11.s64 + -25788;
	// lwz r11,-25784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25784);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ea160
	if (!ctx.cr0.eq) goto loc_823EA160;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,30464
	ctx.r9.s64 = ctx.r9.s64 + 30464;
	// stw r11,-25784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25784, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12800
	ctx.r3.s64 = ctx.r11.s64 + -12800;
	// bl 0x82a4c758
	ctx.lr = 0x823EA160;
	sub_82A4C758(ctx, base);
loc_823EA160:
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

__attribute__((alias("__imp__sub_823EA178"))) PPC_WEAK_FUNC(sub_823EA178);
PPC_FUNC_IMPL(__imp__sub_823EA178) {
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
	// li r3,1968
	ctx.r3.s64 = 1968;
	// bl 0x82833108
	ctx.lr = 0x823EA18C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ea19c
	if (ctx.cr0.eq) goto loc_823EA19C;
	// bl 0x824cbb48
	ctx.lr = 0x823EA198;
	sub_824CBB48(ctx, base);
	// b 0x823ea1a0
	goto loc_823EA1A0;
loc_823EA19C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EA1A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA1B0"))) PPC_WEAK_FUNC(sub_823EA1B0);
PPC_FUNC_IMPL(__imp__sub_823EA1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31828(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31828);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ea1f0
	if (!ctx.cr0.eq) goto loc_823EA1F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31828, ctx.r11.u32);
	// addi r3,r9,8308
	ctx.r3.s64 = ctx.r9.s64 + 8308;
	// bl 0x82816528
	ctx.lr = 0x823EA1E8;
	sub_82816528(ctx, base);
	// stw r3,31824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31824, ctx.r3.u32);
	// b 0x823ea1f4
	goto loc_823EA1F4;
loc_823EA1F0:
	// lwz r3,31824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31824);
loc_823EA1F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA208"))) PPC_WEAK_FUNC(sub_823EA208);
PPC_FUNC_IMPL(__imp__sub_823EA208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ea118
	ctx.lr = 0x823EA228;
	sub_823EA118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EA23C;
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

__attribute__((alias("__imp__sub_823EA258"))) PPC_WEAK_FUNC(sub_823EA258);
PPC_FUNC_IMPL(__imp__sub_823EA258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25796
	ctx.r31.s64 = ctx.r11.s64 + -25796;
	// lwz r11,-25792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25792);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ea2a0
	if (!ctx.cr0.eq) goto loc_823EA2A0;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23212
	ctx.r9.s64 = ctx.r9.s64 + 23212;
	// stw r11,-25792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25792, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12776
	ctx.r3.s64 = ctx.r11.s64 + -12776;
	// bl 0x82a4c758
	ctx.lr = 0x823EA2A0;
	sub_82A4C758(ctx, base);
loc_823EA2A0:
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

__attribute__((alias("__imp__sub_823EA2B8"))) PPC_WEAK_FUNC(sub_823EA2B8);
PPC_FUNC_IMPL(__imp__sub_823EA2B8) {
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
	// li r3,1504
	ctx.r3.s64 = 1504;
	// bl 0x82833108
	ctx.lr = 0x823EA2CC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ea2dc
	if (ctx.cr0.eq) goto loc_823EA2DC;
	// bl 0x828a8aa0
	ctx.lr = 0x823EA2D8;
	sub_828A8AA0(ctx, base);
	// b 0x823ea2e0
	goto loc_823EA2E0;
loc_823EA2DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EA2E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA2F0"))) PPC_WEAK_FUNC(sub_823EA2F0);
PPC_FUNC_IMPL(__imp__sub_823EA2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31820(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31820);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ea330
	if (!ctx.cr0.eq) goto loc_823EA330;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31820, ctx.r11.u32);
	// addi r3,r9,7964
	ctx.r3.s64 = ctx.r9.s64 + 7964;
	// bl 0x82816528
	ctx.lr = 0x823EA328;
	sub_82816528(ctx, base);
	// stw r3,31816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31816, ctx.r3.u32);
	// b 0x823ea334
	goto loc_823EA334;
loc_823EA330:
	// lwz r3,31816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31816);
loc_823EA334:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA348"))) PPC_WEAK_FUNC(sub_823EA348);
PPC_FUNC_IMPL(__imp__sub_823EA348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ea258
	ctx.lr = 0x823EA368;
	sub_823EA258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EA37C;
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

__attribute__((alias("__imp__sub_823EA398"))) PPC_WEAK_FUNC(sub_823EA398);
PPC_FUNC_IMPL(__imp__sub_823EA398) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4348
	ctx.r11.s64 = ctx.r3.s64 + 4348;
loc_823EA39C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823ea39c
	if (!ctx.cr0.eq) goto loc_823EA39C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4380, ctx.r11.u32);
	// stw r11,4384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA3C8"))) PPC_WEAK_FUNC(sub_823EA3C8);
PPC_FUNC_IMPL(__imp__sub_823EA3C8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4360, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA3D0"))) PPC_WEAK_FUNC(sub_823EA3D0);
PPC_FUNC_IMPL(__imp__sub_823EA3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27628
	ctx.r31.s64 = ctx.r11.s64 + -27628;
	// lwz r11,-27712(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27712);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ea418
	if (!ctx.cr0.eq) goto loc_823EA418;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,828
	ctx.r9.s64 = ctx.r9.s64 + 828;
	// stw r11,-27712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27712, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12752
	ctx.r3.s64 = ctx.r11.s64 + -12752;
	// bl 0x82a4c758
	ctx.lr = 0x823EA418;
	sub_82A4C758(ctx, base);
loc_823EA418:
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

__attribute__((alias("__imp__sub_823EA430"))) PPC_WEAK_FUNC(sub_823EA430);
PPC_FUNC_IMPL(__imp__sub_823EA430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31812(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31812);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ea470
	if (!ctx.cr0.eq) goto loc_823EA470;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31812, ctx.r11.u32);
	// addi r3,r9,10756
	ctx.r3.s64 = ctx.r9.s64 + 10756;
	// bl 0x82816528
	ctx.lr = 0x823EA468;
	sub_82816528(ctx, base);
	// stw r3,31808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31808, ctx.r3.u32);
	// b 0x823ea474
	goto loc_823EA474;
loc_823EA470:
	// lwz r3,31808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31808);
loc_823EA474:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA488"))) PPC_WEAK_FUNC(sub_823EA488);
PPC_FUNC_IMPL(__imp__sub_823EA488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,-27628
	ctx.r31.s64 = ctx.r11.s64 + -27628;
	// lwz r11,-27712(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27712);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ea4d8
	if (!ctx.cr0.eq) goto loc_823EA4D8;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,828
	ctx.r9.s64 = ctx.r9.s64 + 828;
	// stw r11,-27712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27712, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12752
	ctx.r3.s64 = ctx.r11.s64 + -12752;
	// bl 0x82a4c758
	ctx.lr = 0x823EA4D8;
	sub_82A4C758(ctx, base);
loc_823EA4D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EA4F0;
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

__attribute__((alias("__imp__sub_823EA508"))) PPC_WEAK_FUNC(sub_823EA508);
PPC_FUNC_IMPL(__imp__sub_823EA508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25772
	ctx.r31.s64 = ctx.r11.s64 + -25772;
	// lwz r11,-25768(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25768);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ea550
	if (!ctx.cr0.eq) goto loc_823EA550;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-22012
	ctx.r9.s64 = ctx.r9.s64 + -22012;
	// stw r11,-25768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25768, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12728
	ctx.r3.s64 = ctx.r11.s64 + -12728;
	// bl 0x82a4c758
	ctx.lr = 0x823EA550;
	sub_82A4C758(ctx, base);
loc_823EA550:
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

__attribute__((alias("__imp__sub_823EA568"))) PPC_WEAK_FUNC(sub_823EA568);
PPC_FUNC_IMPL(__imp__sub_823EA568) {
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
	// li r3,1696
	ctx.r3.s64 = 1696;
	// bl 0x82833108
	ctx.lr = 0x823EA57C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ea58c
	if (ctx.cr0.eq) goto loc_823EA58C;
	// bl 0x82413018
	ctx.lr = 0x823EA588;
	sub_82413018(ctx, base);
	// b 0x823ea590
	goto loc_823EA590;
loc_823EA58C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EA590:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA5A0"))) PPC_WEAK_FUNC(sub_823EA5A0);
PPC_FUNC_IMPL(__imp__sub_823EA5A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1696
	ctx.r3.s64 = 1696;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA5A8"))) PPC_WEAK_FUNC(sub_823EA5A8);
PPC_FUNC_IMPL(__imp__sub_823EA5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31804(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31804);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ea5e8
	if (!ctx.cr0.eq) goto loc_823EA5E8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31804, ctx.r11.u32);
	// addi r3,r9,10116
	ctx.r3.s64 = ctx.r9.s64 + 10116;
	// bl 0x82816528
	ctx.lr = 0x823EA5E0;
	sub_82816528(ctx, base);
	// stw r3,31800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31800, ctx.r3.u32);
	// b 0x823ea5ec
	goto loc_823EA5EC;
loc_823EA5E8:
	// lwz r3,31800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31800);
loc_823EA5EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA600"))) PPC_WEAK_FUNC(sub_823EA600);
PPC_FUNC_IMPL(__imp__sub_823EA600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ea508
	ctx.lr = 0x823EA620;
	sub_823EA508(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EA634;
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

__attribute__((alias("__imp__sub_823EA650"))) PPC_WEAK_FUNC(sub_823EA650);
PPC_FUNC_IMPL(__imp__sub_823EA650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27992
	ctx.r31.s64 = ctx.r11.s64 + -27992;
	// lwz r11,-27636(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27636);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ea698
	if (!ctx.cr0.eq) goto loc_823EA698;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,30444
	ctx.r9.s64 = ctx.r9.s64 + 30444;
	// stw r11,-27636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27636, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12704
	ctx.r3.s64 = ctx.r11.s64 + -12704;
	// bl 0x82a4c758
	ctx.lr = 0x823EA698;
	sub_82A4C758(ctx, base);
loc_823EA698:
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

__attribute__((alias("__imp__sub_823EA6B0"))) PPC_WEAK_FUNC(sub_823EA6B0);
PPC_FUNC_IMPL(__imp__sub_823EA6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,4432
	ctx.r3.s64 = 4432;
	// bl 0x82833108
	ctx.lr = 0x823EA6C8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ea74c
	if (ctx.cr0.eq) goto loc_823EA74C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc540
	ctx.lr = 0x823EA6D8;
	sub_829BC540(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,29368
	ctx.r11.s64 = ctx.r11.s64 + 29368;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,30392
	ctx.r10.s64 = ctx.r10.s64 + 30392;
	// addi r9,r9,29340
	ctx.r9.s64 = ctx.r9.s64 + 29340;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r11,4380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4380, ctx.r11.u32);
	// stw r11,4384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4384, ctx.r11.u32);
	// stw r11,4348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4348, ctx.r11.u32);
	// lwz r11,1204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823ea720
	if (!ctx.cr6.eq) goto loc_823EA720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3628
	ctx.lr = 0x823EA720;
	sub_829C3628(ctx, base);
loc_823EA720:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,28264
	ctx.r11.s64 = ctx.r11.s64 + 28264;
	// addi r10,r10,29288
	ctx.r10.s64 = ctx.r10.s64 + 29288;
	// addi r9,r9,29340
	ctx.r9.s64 = ctx.r9.s64 + 29340;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823ea750
	goto loc_823EA750;
loc_823EA74C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EA750:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA768"))) PPC_WEAK_FUNC(sub_823EA768);
PPC_FUNC_IMPL(__imp__sub_823EA768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,29368
	ctx.r11.s64 = ctx.r11.s64 + 29368;
	// addi r10,r10,30392
	ctx.r10.s64 = ctx.r10.s64 + 30392;
	// addi r9,r9,29340
	ctx.r9.s64 = ctx.r9.s64 + 29340;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x829c36c0
	ctx.lr = 0x823EA7AC;
	sub_829C36C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x823EA7B4;
	sub_829BC9E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823ea7c4
	if (ctx.cr0.eq) goto loc_823EA7C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823EA7C4;
	sub_82332DB8(ctx, base);
loc_823EA7C4:
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

__attribute__((alias("__imp__sub_823EA7E0"))) PPC_WEAK_FUNC(sub_823EA7E0);
PPC_FUNC_IMPL(__imp__sub_823EA7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ea650
	ctx.lr = 0x823EA800;
	sub_823EA650(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823ea810
	if (!ctx.cr6.eq) goto loc_823EA810;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x823ea828
	goto loc_823EA828;
loc_823EA810:
	// bl 0x82338750
	ctx.lr = 0x823EA814;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823ea828
	if (ctx.cr6.eq) goto loc_823EA828;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x823EA828;
	sub_82338858(ctx, base);
loc_823EA828:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA840"))) PPC_WEAK_FUNC(sub_823EA840);
PPC_FUNC_IMPL(__imp__sub_823EA840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823ea878
	if (ctx.cr6.eq) goto loc_823EA878;
	// bl 0x823ea650
	ctx.lr = 0x823EA868;
	sub_823EA650(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823ea878
	if (!ctx.cr6.eq) goto loc_823EA878;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ea884
	goto loc_823EA884;
loc_823EA878:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x823EA884;
	sub_82338A28(ctx, base);
loc_823EA884:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA8A0"))) PPC_WEAK_FUNC(sub_823EA8A0);
PPC_FUNC_IMPL(__imp__sub_823EA8A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ea650
	sub_823EA650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EA8A8"))) PPC_WEAK_FUNC(sub_823EA8A8);
PPC_FUNC_IMPL(__imp__sub_823EA8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,4432
	ctx.r3.s64 = 4432;
	// bl 0x82833108
	ctx.lr = 0x823EA8C4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ea8d8
	if (ctx.cr0.eq) goto loc_823EA8D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823ea8f0
	ctx.lr = 0x823EA8D4;
	sub_823EA8F0(ctx, base);
	// b 0x823ea8dc
	goto loc_823EA8DC;
loc_823EA8D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EA8DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EA8F0"))) PPC_WEAK_FUNC(sub_823EA8F0);
PPC_FUNC_IMPL(__imp__sub_823EA8F0) {
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
	ctx.lr = 0x823EA910;
	sub_82338B88(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,29368
	ctx.r11.s64 = ctx.r11.s64 + 29368;
	// addi r10,r10,30392
	ctx.r10.s64 = ctx.r10.s64 + 30392;
	// addi r9,r9,29340
	ctx.r9.s64 = ctx.r9.s64 + 29340;
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
	// li r5,560
	ctx.r5.s64 = 560;
	// bl 0x82a4ea80
	ctx.lr = 0x823EA944;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,1968
	ctx.r3.s64 = ctx.r31.s64 + 1968;
	// addi r4,r30,1968
	ctx.r4.s64 = ctx.r30.s64 + 1968;
	// li r5,840
	ctx.r5.s64 = 840;
	// bl 0x82a4ea80
	ctx.lr = 0x823EA954;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,2808
	ctx.r3.s64 = ctx.r31.s64 + 2808;
	// addi r4,r30,2808
	ctx.r4.s64 = ctx.r30.s64 + 2808;
	// li r5,980
	ctx.r5.s64 = 980;
	// bl 0x82a4ea80
	ctx.lr = 0x823EA964;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,3788
	ctx.r3.s64 = ctx.r31.s64 + 3788;
	// addi r4,r30,3788
	ctx.r4.s64 = ctx.r30.s64 + 3788;
	// li r5,560
	ctx.r5.s64 = 560;
	// bl 0x82a4ea80
	ctx.lr = 0x823EA974;
	sub_82A4EA80(ctx, base);
	// lwz r8,4348(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4348);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,28264
	ctx.r11.s64 = ctx.r11.s64 + 28264;
	// stw r8,4348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4348, ctx.r8.u32);
	// lfs f0,4352(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4352);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4352, temp.u32);
	// addi r10,r10,29288
	ctx.r10.s64 = ctx.r10.s64 + 29288;
	// lfs f0,4356(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4356);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,29340
	ctx.r9.s64 = ctx.r9.s64 + 29340;
	// stfs f0,4356(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4356, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4360(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4360);
	// stw r8,4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4360, ctx.r8.u32);
	// lwz r8,4364(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4364);
	// stw r8,4364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4364, ctx.r8.u32);
	// lwz r8,4368(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4368);
	// stw r8,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r8.u32);
	// lwz r8,4372(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4372);
	// stw r8,4372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4372, ctx.r8.u32);
	// lwz r8,4376(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4376);
	// stw r8,4376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4376, ctx.r8.u32);
	// lwz r8,4380(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4380);
	// stw r8,4380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4380, ctx.r8.u32);
	// lwz r8,4384(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4384);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r8,4384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4384, ctx.r8.u32);
	// lwz r11,4400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4400);
	// stw r11,4400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4400, ctx.r11.u32);
	// lwz r11,4404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4404);
	// stw r11,4404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4404, ctx.r11.u32);
	// lwz r11,4408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4408);
	// stw r11,4408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4408, ctx.r11.u32);
	// lwz r11,4412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4412);
	// stw r11,4412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4412, ctx.r11.u32);
	// lwz r11,4416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4416);
	// stw r11,4416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4416, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EAA30"))) PPC_WEAK_FUNC(sub_823EAA30);
PPC_FUNC_IMPL(__imp__sub_823EAA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8280
	ctx.r3.s64 = ctx.r11.s64 + 8280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EAA40"))) PPC_WEAK_FUNC(sub_823EAA40);
PPC_FUNC_IMPL(__imp__sub_823EAA40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823ea768
	sub_823EA768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EAA48"))) PPC_WEAK_FUNC(sub_823EAA48);
PPC_FUNC_IMPL(__imp__sub_823EAA48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823ea7e0
	sub_823EA7E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EAA50"))) PPC_WEAK_FUNC(sub_823EAA50);
PPC_FUNC_IMPL(__imp__sub_823EAA50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x823ea768
	sub_823EA768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EAA58"))) PPC_WEAK_FUNC(sub_823EAA58);
PPC_FUNC_IMPL(__imp__sub_823EAA58) {
	PPC_FUNC_PROLOGUE();
	// li r3,4432
	ctx.r3.s64 = 4432;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EAA60"))) PPC_WEAK_FUNC(sub_823EAA60);
PPC_FUNC_IMPL(__imp__sub_823EAA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31796(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31796);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823eaaa0
	if (!ctx.cr0.eq) goto loc_823EAAA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31796, ctx.r11.u32);
	// addi r3,r9,8280
	ctx.r3.s64 = ctx.r9.s64 + 8280;
	// bl 0x82816528
	ctx.lr = 0x823EAA98;
	sub_82816528(ctx, base);
	// stw r3,31792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31792, ctx.r3.u32);
	// b 0x823eaaa4
	goto loc_823EAAA4;
loc_823EAAA0:
	// lwz r3,31792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31792);
loc_823EAAA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EAAB8"))) PPC_WEAK_FUNC(sub_823EAAB8);
PPC_FUNC_IMPL(__imp__sub_823EAAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ea650
	ctx.lr = 0x823EAAD8;
	sub_823EA650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EAAEC;
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

__attribute__((alias("__imp__sub_823EAB08"))) PPC_WEAK_FUNC(sub_823EAB08);
PPC_FUNC_IMPL(__imp__sub_823EAB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27932
	ctx.r31.s64 = ctx.r11.s64 + -27932;
	// lwz r11,-27776(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27776);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823eab50
	if (!ctx.cr0.eq) goto loc_823EAB50;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,28244
	ctx.r9.s64 = ctx.r9.s64 + 28244;
	// stw r11,-27776(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27776, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12680
	ctx.r3.s64 = ctx.r11.s64 + -12680;
	// bl 0x82a4c758
	ctx.lr = 0x823EAB50;
	sub_82A4C758(ctx, base);
loc_823EAB50:
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

__attribute__((alias("__imp__sub_823EAB68"))) PPC_WEAK_FUNC(sub_823EAB68);
PPC_FUNC_IMPL(__imp__sub_823EAB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1488
	ctx.r3.s64 = 1488;
	// bl 0x82833108
	ctx.lr = 0x823EAB80;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823eabc8
	if (ctx.cr0.eq) goto loc_823EABC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82910010
	ctx.lr = 0x823EAB90;
	sub_82910010(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,27200
	ctx.r10.s64 = ctx.r10.s64 + 27200;
	// addi r9,r9,28280
	ctx.r9.s64 = ctx.r9.s64 + 28280;
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// addi r8,r8,27100
	ctx.r8.s64 = ctx.r8.s64 + 27100;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// b 0x823eabcc
	goto loc_823EABCC;
loc_823EABC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EABCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EABE0"))) PPC_WEAK_FUNC(sub_823EABE0);
PPC_FUNC_IMPL(__imp__sub_823EABE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31788);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823eac20
	if (!ctx.cr0.eq) goto loc_823EAC20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31788(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31788, ctx.r11.u32);
	// addi r3,r9,8256
	ctx.r3.s64 = ctx.r9.s64 + 8256;
	// bl 0x82816528
	ctx.lr = 0x823EAC18;
	sub_82816528(ctx, base);
	// stw r3,31784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31784, ctx.r3.u32);
	// b 0x823eac24
	goto loc_823EAC24;
loc_823EAC20:
	// lwz r3,31784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31784);
loc_823EAC24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EAC38"))) PPC_WEAK_FUNC(sub_823EAC38);
PPC_FUNC_IMPL(__imp__sub_823EAC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823eab08
	ctx.lr = 0x823EAC58;
	sub_823EAB08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EAC6C;
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

__attribute__((alias("__imp__sub_823EAC88"))) PPC_WEAK_FUNC(sub_823EAC88);
PPC_FUNC_IMPL(__imp__sub_823EAC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25804
	ctx.r31.s64 = ctx.r11.s64 + -25804;
	// lwz r11,-25800(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25800);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823eacd0
	if (!ctx.cr0.eq) goto loc_823EACD0;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-23464
	ctx.r9.s64 = ctx.r9.s64 + -23464;
	// stw r11,-25800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25800, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12656
	ctx.r3.s64 = ctx.r11.s64 + -12656;
	// bl 0x82a4c758
	ctx.lr = 0x823EACD0;
	sub_82A4C758(ctx, base);
loc_823EACD0:
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

__attribute__((alias("__imp__sub_823EACE8"))) PPC_WEAK_FUNC(sub_823EACE8);
PPC_FUNC_IMPL(__imp__sub_823EACE8) {
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
	ctx.lr = 0x823EACFC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ead10
	if (ctx.cr0.eq) goto loc_823EAD10;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e90c0
	ctx.lr = 0x823EAD0C;
	sub_823E90C0(ctx, base);
	// b 0x823ead14
	goto loc_823EAD14;
loc_823EAD10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EAD14:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ead28
	if (ctx.cr6.eq) goto loc_823EAD28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823EAD28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EAD38"))) PPC_WEAK_FUNC(sub_823EAD38);
PPC_FUNC_IMPL(__imp__sub_823EAD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31780(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31780);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ead78
	if (!ctx.cr0.eq) goto loc_823EAD78;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31780(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31780, ctx.r11.u32);
	// addi r3,r9,10012
	ctx.r3.s64 = ctx.r9.s64 + 10012;
	// bl 0x82816528
	ctx.lr = 0x823EAD70;
	sub_82816528(ctx, base);
	// stw r3,31776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31776, ctx.r3.u32);
	// b 0x823ead7c
	goto loc_823EAD7C;
loc_823EAD78:
	// lwz r3,31776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31776);
loc_823EAD7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EAD90"))) PPC_WEAK_FUNC(sub_823EAD90);
PPC_FUNC_IMPL(__imp__sub_823EAD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823eac88
	ctx.lr = 0x823EADB0;
	sub_823EAC88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EADC4;
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

__attribute__((alias("__imp__sub_823EADE0"))) PPC_WEAK_FUNC(sub_823EADE0);
PPC_FUNC_IMPL(__imp__sub_823EADE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27952
	ctx.r31.s64 = ctx.r11.s64 + -27952;
	// lwz r11,-28060(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28060);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823eae28
	if (!ctx.cr0.eq) goto loc_823EAE28;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-23160
	ctx.r9.s64 = ctx.r9.s64 + -23160;
	// stw r11,-28060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28060, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12608
	ctx.r3.s64 = ctx.r11.s64 + -12608;
	// bl 0x82a4c758
	ctx.lr = 0x823EAE28;
	sub_82A4C758(ctx, base);
loc_823EAE28:
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

__attribute__((alias("__imp__sub_823EAE40"))) PPC_WEAK_FUNC(sub_823EAE40);
PPC_FUNC_IMPL(__imp__sub_823EAE40) {
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
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82833108
	ctx.lr = 0x823EAE54;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823eae68
	if (ctx.cr0.eq) goto loc_823EAE68;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823eae98
	ctx.lr = 0x823EAE64;
	sub_823EAE98(ctx, base);
	// b 0x823eae6c
	goto loc_823EAE6C;
loc_823EAE68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EAE6C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eae84
	if (ctx.cr6.eq) goto loc_823EAE84;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_823EAE84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

